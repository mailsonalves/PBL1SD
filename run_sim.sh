#!/bin/bash
set -e

echo "1. Sintetizando Verilog com Verilator..."
verilator -Wall --cc --exe \
    --top-module gpu_de1_soc_top \
    vga_sync.v \
    cmd_decoder.v \
    polygon_rasterizer.v \
    polygon_buffer.v \
    compositor.v \
    color_palette.v \
    tilemap_ram.v \
    pattern_vram.v \
    bg_engine.v \
    board_input_controller.v \
    gpu_de1_soc_top.v \
    sim_vga.cpp \
    -CFLAGS "$(sdl2-config --cflags)" \
    -LDFLAGS "$(sdl2-config --libs)" \
    -Wno-fatal

echo "2. Compilando o executável C++..."
make -C obj_dir -f Vgpu_de1_soc_top.mk Vgpu_de1_soc_top

echo "3. Executando simulação em tempo real..."
./obj_dir/Vgpu_de1_soc_top