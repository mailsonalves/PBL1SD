// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vgpu_de1_soc_top.h for the primary calling header

#ifndef VERILATED_VGPU_DE1_SOC_TOP___024ROOT_H_
#define VERILATED_VGPU_DE1_SOC_TOP___024ROOT_H_  // guard

#include "verilated.h"


class Vgpu_de1_soc_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vgpu_de1_soc_top___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(CLOCK_50,0,0);
        CData/*0:0*/ gpu_de1_soc_top__DOT__rst_n;
        CData/*0:0*/ gpu_de1_soc_top__DOT__clk_25m;
        VL_IN8(KEY,3,0);
        VL_OUT8(VGA_HS,0,0);
        VL_OUT8(VGA_VS,0,0);
        VL_OUT8(VGA_R,7,0);
        VL_OUT8(VGA_G,7,0);
        VL_OUT8(VGA_B,7,0);
        VL_OUT8(VGA_BLANK_N,0,0);
        VL_OUT8(VGA_SYNC_N,0,0);
        VL_OUT8(VGA_CLK,0,0);
        CData/*7:0*/ gpu_de1_soc_top__DOT__pixel_y;
        CData/*0:0*/ gpu_de1_soc_top__DOT__cmd_valid;
        CData/*0:0*/ gpu_de1_soc_top__DOT__pal_we;
        CData/*7:0*/ gpu_de1_soc_top__DOT__pal_addr;
        CData/*0:0*/ gpu_de1_soc_top__DOT__tm_we;
        CData/*5:0*/ gpu_de1_soc_top__DOT__tm_x;
        CData/*4:0*/ gpu_de1_soc_top__DOT__tm_y;
        CData/*7:0*/ gpu_de1_soc_top__DOT__tm_tile_id;
        CData/*7:0*/ gpu_de1_soc_top__DOT__scroll_y;
        CData/*0:0*/ gpu_de1_soc_top__DOT__sat_we;
        CData/*4:0*/ gpu_de1_soc_top__DOT__sat_addr;
        CData/*7:0*/ gpu_de1_soc_top__DOT__rast_y0;
        CData/*7:0*/ gpu_de1_soc_top__DOT__rast_y1;
        CData/*7:0*/ gpu_de1_soc_top__DOT__rast_y2;
        CData/*7:0*/ gpu_de1_soc_top__DOT__rast_color;
        CData/*0:0*/ gpu_de1_soc_top__DOT__rast_clear_screen;
        CData/*0:0*/ gpu_de1_soc_top__DOT__rast_start;
        CData/*0:0*/ gpu_de1_soc_top__DOT__rast_busy;
        CData/*7:0*/ gpu_de1_soc_top__DOT__bg_pixel;
        CData/*7:0*/ gpu_de1_soc_top__DOT__sp_pixel;
        CData/*0:0*/ gpu_de1_soc_top__DOT__buf_we;
        CData/*7:0*/ gpu_de1_soc_top__DOT__buf_wr_data;
        CData/*7:0*/ gpu_de1_soc_top__DOT__poly_pixel;
        CData/*0:0*/ gpu_de1_soc_top__DOT__u_input_ctrl__DOT__frame_tick;
        CData/*2:0*/ gpu_de1_soc_top__DOT__u_input_ctrl__DOT__key1_sync;
        CData/*0:0*/ gpu_de1_soc_top__DOT__u_input_ctrl__DOT__jump_request;
        CData/*7:0*/ gpu_de1_soc_top__DOT__u_input_ctrl__DOT__velocity_y;
        CData/*7:0*/ gpu_de1_soc_top__DOT__u_input_ctrl__DOT__current_bird_y;
        CData/*1:0*/ gpu_de1_soc_top__DOT__u_input_ctrl__DOT__state;
        CData/*7:0*/ gpu_de1_soc_top__DOT__u_bg_engine__DOT__current_tile_id;
        CData/*2:0*/ gpu_de1_soc_top__DOT__u_bg_engine__DOT__sub_x_delay;
        CData/*2:0*/ gpu_de1_soc_top__DOT__u_bg_engine__DOT__sub_y_delay;
        CData/*7:0*/ gpu_de1_soc_top__DOT__u_bg_engine__DOT__u_map_buffer__DOT____Vlvbound_h813bd28f__0;
        CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT____VdfgRegularize_h46df5cdf_0_0;
        CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT____VdfgRegularize_h46df5cdf_0_1;
        CData/*1:0*/ gpu_de1_soc_top__DOT__u_rasterizer__DOT__state;
        CData/*7:0*/ gpu_de1_soc_top__DOT__u_poly_buffer__DOT____Vlvbound_h87b1c6a8__0;
        CData/*1:0*/ __Vdly__gpu_de1_soc_top__DOT__u_input_ctrl__DOT__state;
        CData/*7:0*/ __Vdly__gpu_de1_soc_top__DOT__rast_y0;
        CData/*7:0*/ __Vdly__gpu_de1_soc_top__DOT__rast_y1;
        CData/*7:0*/ __Vdly__gpu_de1_soc_top__DOT__rast_y2;
        CData/*0:0*/ __Vdly__gpu_de1_soc_top__DOT__rast_start;
        CData/*0:0*/ __Vdly__gpu_de1_soc_top__DOT__rast_clear_screen;
        CData/*7:0*/ __Vdly__gpu_de1_soc_top__DOT__rast_color;
        CData/*1:0*/ __Vdly__gpu_de1_soc_top__DOT__u_rasterizer__DOT__state;
        CData/*7:0*/ __VdlyVal__gpu_de1_soc_top__DOT__u_poly_buffer__DOT__ram__v0;
        CData/*0:0*/ __VdlySet__gpu_de1_soc_top__DOT__u_poly_buffer__DOT__ram__v0;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__CLOCK_50__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__gpu_de1_soc_top__DOT__rst_n__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__gpu_de1_soc_top__DOT__clk_25m__0;
    };
    struct {
        CData/*0:0*/ __VactContinue;
        VL_IN16(SW,9,0);
        VL_OUT16(LEDR,9,0);
        SData/*8:0*/ gpu_de1_soc_top__DOT__pixel_x;
        SData/*8:0*/ gpu_de1_soc_top__DOT__scroll_x;
        SData/*8:0*/ gpu_de1_soc_top__DOT__rast_x0;
        SData/*8:0*/ gpu_de1_soc_top__DOT__rast_x1;
        SData/*8:0*/ gpu_de1_soc_top__DOT__rast_x2;
        SData/*13:0*/ gpu_de1_soc_top__DOT__sp_vram_addr;
        SData/*9:0*/ gpu_de1_soc_top__DOT__u_vga_sync__DOT__h_cnt;
        SData/*9:0*/ gpu_de1_soc_top__DOT__u_vga_sync__DOT__v_cnt;
        SData/*11:0*/ gpu_de1_soc_top__DOT__u_input_ctrl__DOT__bird_y_sub;
        SData/*8:0*/ gpu_de1_soc_top__DOT__u_input_ctrl__DOT__bg_scroll_x;
        SData/*9:0*/ gpu_de1_soc_top__DOT__u_bg_engine__DOT____VdfgRegularize_hf66fa8df_0_0;
        SData/*8:0*/ gpu_de1_soc_top__DOT__u_bg_engine__DOT____VdfgRegularize_hf66fa8df_1_0;
        SData/*10:0*/ gpu_de1_soc_top__DOT__u_bg_engine__DOT__u_map_buffer__DOT__addr_wr;
        SData/*10:0*/ gpu_de1_soc_top__DOT__u_bg_engine__DOT__u_map_buffer__DOT__addr_rd;
        SData/*8:0*/ gpu_de1_soc_top__DOT__u_rasterizer__DOT__min_x;
        SData/*8:0*/ gpu_de1_soc_top__DOT__u_rasterizer__DOT__max_x;
        SData/*8:0*/ gpu_de1_soc_top__DOT__u_rasterizer__DOT__min_y;
        SData/*8:0*/ gpu_de1_soc_top__DOT__u_rasterizer__DOT__max_y;
        SData/*8:0*/ gpu_de1_soc_top__DOT__u_rasterizer__DOT__curr_x;
        SData/*8:0*/ gpu_de1_soc_top__DOT__u_rasterizer__DOT__curr_y;
        SData/*10:0*/ gpu_de1_soc_top__DOT__u_rasterizer__DOT__vx0;
        SData/*10:0*/ gpu_de1_soc_top__DOT__u_rasterizer__DOT__vy0;
        SData/*10:0*/ gpu_de1_soc_top__DOT__u_rasterizer__DOT__vx1;
        SData/*10:0*/ gpu_de1_soc_top__DOT__u_rasterizer__DOT__vy1;
        SData/*10:0*/ gpu_de1_soc_top__DOT__u_rasterizer__DOT__vx2;
        SData/*10:0*/ gpu_de1_soc_top__DOT__u_rasterizer__DOT__vy2;
        SData/*8:0*/ __Vdly__gpu_de1_soc_top__DOT__u_input_ctrl__DOT__bg_scroll_x;
        SData/*11:0*/ __Vdly__gpu_de1_soc_top__DOT__u_input_ctrl__DOT__bird_y_sub;
        SData/*8:0*/ __Vdly__gpu_de1_soc_top__DOT__rast_x0;
        SData/*8:0*/ __Vdly__gpu_de1_soc_top__DOT__rast_x1;
        SData/*8:0*/ __Vdly__gpu_de1_soc_top__DOT__rast_x2;
        SData/*8:0*/ __Vdly__gpu_de1_soc_top__DOT__u_rasterizer__DOT__curr_x;
        SData/*8:0*/ __Vdly__gpu_de1_soc_top__DOT__u_rasterizer__DOT__curr_y;
        IData/*31:0*/ gpu_de1_soc_top__DOT__cmd_data;
        IData/*23:0*/ gpu_de1_soc_top__DOT__pal_data;
        IData/*31:0*/ gpu_de1_soc_top__DOT__sat_data;
        IData/*16:0*/ gpu_de1_soc_top__DOT__buf_wr_addr;
        IData/*16:0*/ gpu_de1_soc_top__DOT__buf_rd_addr;
        IData/*23:0*/ gpu_de1_soc_top__DOT__rgb_24;
        IData/*19:0*/ gpu_de1_soc_top__DOT__u_input_ctrl__DOT__frame_cnt;
        IData/*31:0*/ gpu_de1_soc_top__DOT__u_rasterizer__DOT____VdfgRegularize_h9c5cd1d9_0_8;
        IData/*31:0*/ gpu_de1_soc_top__DOT__u_rasterizer__DOT____VdfgRegularize_h9c5cd1d9_0_9;
        IData/*31:0*/ gpu_de1_soc_top__DOT__u_rasterizer__DOT____VdfgRegularize_h9c5cd1d9_0_10;
        IData/*19:0*/ __Vdly__gpu_de1_soc_top__DOT__u_input_ctrl__DOT__frame_cnt;
        IData/*16:0*/ __VdlyDim0__gpu_de1_soc_top__DOT__u_poly_buffer__DOT__ram__v0;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<CData/*7:0*/, 1200> gpu_de1_soc_top__DOT__u_bg_engine__DOT__u_map_buffer__DOT__map_ram;
        VlUnpacked<IData/*31:0*/, 32> gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram;
        VlUnpacked<SData/*13:0*/, 32> gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_addrs;
        VlUnpacked<CData/*0:0*/, 32> gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_hit;
        VlUnpacked<CData/*7:0*/, 16384> gpu_de1_soc_top__DOT__u_patterns__DOT__ram;
        VlUnpacked<CData/*7:0*/, 76800> gpu_de1_soc_top__DOT__u_poly_buffer__DOT__ram;
        VlUnpacked<IData/*23:0*/, 256> gpu_de1_soc_top__DOT__u_palette__DOT__clut_ram;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vgpu_de1_soc_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vgpu_de1_soc_top___024root(Vgpu_de1_soc_top__Syms* symsp, const char* v__name);
    ~Vgpu_de1_soc_top___024root();
    VL_UNCOPYABLE(Vgpu_de1_soc_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
