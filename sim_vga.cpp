#include <SDL2/SDL.h>
#include <iostream>
#include "Vgpu_de1_soc_top.h"
#include "verilated.h"

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Vgpu_de1_soc_top* top = new Vgpu_de1_soc_top;

    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        std::cerr << "Falha ao inicializar SDL: " << SDL_GetError() << std::endl;
        return 1;
    }

    SDL_Window* window = SDL_CreateWindow(
        "Simulador VGA DE1-SoC - 640x480",
        SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
        640, 480, SDL_WINDOW_SHOWN
    );

    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    SDL_Texture* texture = SDL_CreateTexture(
        renderer, SDL_PIXELFORMAT_ARGB8888, SDL_TEXTUREACCESS_STREAMING, 640, 480
    );

    uint32_t pixels[640 * 480] = {0};

    // Inicialização dos sinais
    top->CLOCK_50 = 0;
    top->KEY = 0xF;  // KEY[0] solto (rst_n = 1)
    top->SW  = 0x0;

    int x = 0, y = 0;
    int prev_hsync = 0, prev_vsync = 0;
    bool running = true;
    SDL_Event event;

    // Pulso inicial de reset
    for (int i = 0; i < 20; ++i) {
        top->CLOCK_50 = !top->CLOCK_50;
        top->KEY = (i < 10) ? 0xE : 0xF; // KEY[0] pressionado no inicio
        top->eval();
    }

    while (running) {
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT) running = false;
            if (event.type == SDL_KEYDOWN) {
                if (event.key.keysym.sym == SDLK_1) top->SW ^= 0x1; // Tecla '1' alterna SW[0]
                if (event.key.keysym.sym == SDLK_r) top->KEY &= ~1; // Tecla 'r' segura reset
            }
            if (event.type == SDL_KEYUP) {
                if (event.key.keysym.sym == SDLK_r) top->KEY |= 1;  // Solta reset
            }
        }

        // Simula ciclos até completar 1 quadro completo (VGA 640x480 @ 60Hz)
        for (int step = 0; step < 800 * 525 * 2; ++step) {
            top->CLOCK_50 = !top->CLOCK_50;
            top->eval();

            // Amostra no ciclo ativo do clock de pixel
            if (top->CLOCK_50 && top->VGA_CLK) {
                // Detecta borda de descida de VSYNC (inicio de quadro)
                if (prev_vsync && !top->VGA_VS) {
                    y = 0;
                }
                // Detecta borda de descida de HSYNC (inicio de linha)
                if (prev_hsync && !top->VGA_HS) {
                    x = 0;
                    y++;
                }

                prev_hsync = top->VGA_HS;
                prev_vsync = top->VGA_VS;

                // Armazena pixel se estiver dentro da área ativa visível
                if (x >= 0 && x < 640 && y >= 0 && y < 480) {
                    uint8_t r = top->VGA_R;
                    uint8_t g = top->VGA_G;
                    uint8_t b = top->VGA_B;
                    pixels[y * 640 + x] = (255 << 24) | (r << 16) | (g << 8) | b;
                }
                x++;
            }
        }

        // Atualiza a janela gráfica
        SDL_UpdateTexture(texture, NULL, pixels, 640 * sizeof(uint32_t));
        SDL_RenderClear(renderer);
        SDL_RenderCopy(renderer, texture, NULL, NULL);
        SDL_RenderPresent(renderer);
    }

    delete top;
    SDL_DestroyTexture(texture);
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}