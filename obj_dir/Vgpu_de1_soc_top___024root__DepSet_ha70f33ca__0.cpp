// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vgpu_de1_soc_top.h for the primary calling header

#include "Vgpu_de1_soc_top__pch.h"
#include "Vgpu_de1_soc_top___024root.h"

void Vgpu_de1_soc_top___024root___ico_sequent__TOP__0(Vgpu_de1_soc_top___024root* vlSelf);

void Vgpu_de1_soc_top___024root___eval_ico(Vgpu_de1_soc_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgpu_de1_soc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpu_de1_soc_top___024root___eval_ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vgpu_de1_soc_top___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vgpu_de1_soc_top___024root___ico_sequent__TOP__0(Vgpu_de1_soc_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgpu_de1_soc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpu_de1_soc_top___024root___ico_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.LEDR = ((0x3f8U & (IData)(vlSelfRef.LEDR)) 
                      | ((4U & ((IData)(vlSelfRef.SW) 
                                << 2U)) | (((IData)(vlSelfRef.gpu_de1_soc_top__DOT__cmd_valid) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.gpu_de1_soc_top__DOT__rast_busy))));
    vlSelfRef.gpu_de1_soc_top__DOT__rst_n = (1U & (IData)(vlSelfRef.KEY));
    vlSelfRef.LEDR = ((0x1ffU & (IData)(vlSelfRef.LEDR)) 
                      | ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__rst_n) 
                         << 9U));
}

void Vgpu_de1_soc_top___024root___eval_triggers__ico(Vgpu_de1_soc_top___024root* vlSelf);

bool Vgpu_de1_soc_top___024root___eval_phase__ico(Vgpu_de1_soc_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgpu_de1_soc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpu_de1_soc_top___024root___eval_phase__ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vgpu_de1_soc_top___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vgpu_de1_soc_top___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vgpu_de1_soc_top___024root___eval_act(Vgpu_de1_soc_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgpu_de1_soc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpu_de1_soc_top___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vgpu_de1_soc_top___024root___nba_sequent__TOP__0(Vgpu_de1_soc_top___024root* vlSelf);
void Vgpu_de1_soc_top___024root___nba_sequent__TOP__1(Vgpu_de1_soc_top___024root* vlSelf);
void Vgpu_de1_soc_top___024root___nba_sequent__TOP__2(Vgpu_de1_soc_top___024root* vlSelf);
void Vgpu_de1_soc_top___024root___nba_sequent__TOP__3(Vgpu_de1_soc_top___024root* vlSelf);
void Vgpu_de1_soc_top___024root___nba_sequent__TOP__4(Vgpu_de1_soc_top___024root* vlSelf);
void Vgpu_de1_soc_top___024root___nba_comb__TOP__0(Vgpu_de1_soc_top___024root* vlSelf);
void Vgpu_de1_soc_top___024root___nba_sequent__TOP__5(Vgpu_de1_soc_top___024root* vlSelf);
void Vgpu_de1_soc_top___024root___nba_sequent__TOP__6(Vgpu_de1_soc_top___024root* vlSelf);

void Vgpu_de1_soc_top___024root___eval_nba(Vgpu_de1_soc_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgpu_de1_soc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpu_de1_soc_top___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vgpu_de1_soc_top___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vgpu_de1_soc_top___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((6ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vgpu_de1_soc_top___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vgpu_de1_soc_top___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vgpu_de1_soc_top___024root___nba_sequent__TOP__4(vlSelf);
    }
    if ((7ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vgpu_de1_soc_top___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((6ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vgpu_de1_soc_top___024root___nba_sequent__TOP__5(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vgpu_de1_soc_top___024root___nba_sequent__TOP__6(vlSelf);
    }
}

VL_INLINE_OPT void Vgpu_de1_soc_top___024root___nba_sequent__TOP__0(Vgpu_de1_soc_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgpu_de1_soc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpu_de1_soc_top___024root___nba_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ __Vdly__gpu_de1_soc_top__DOT__u_input_ctrl__DOT__key1_sync;
    __Vdly__gpu_de1_soc_top__DOT__u_input_ctrl__DOT__key1_sync = 0;
    CData/*7:0*/ __Vdly__gpu_de1_soc_top__DOT__u_input_ctrl__DOT__velocity_y;
    __Vdly__gpu_de1_soc_top__DOT__u_input_ctrl__DOT__velocity_y = 0;
    IData/*31:0*/ __VdlyVal__gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram__v0;
    __VdlyVal__gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram__v0 = 0;
    CData/*4:0*/ __VdlyDim0__gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram__v0;
    __VdlyDim0__gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram__v0 = 0;
    CData/*0:0*/ __VdlySet__gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram__v0;
    __VdlySet__gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram__v0 = 0;
    CData/*0:0*/ __VdlySet__gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram__v1;
    __VdlySet__gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram__v1 = 0;
    // Body
    __Vdly__gpu_de1_soc_top__DOT__u_input_ctrl__DOT__key1_sync 
        = vlSelfRef.gpu_de1_soc_top__DOT__u_input_ctrl__DOT__key1_sync;
    vlSelfRef.__Vdly__gpu_de1_soc_top__DOT__u_input_ctrl__DOT__bg_scroll_x 
        = vlSelfRef.gpu_de1_soc_top__DOT__u_input_ctrl__DOT__bg_scroll_x;
    vlSelfRef.__Vdly__gpu_de1_soc_top__DOT__u_input_ctrl__DOT__frame_cnt 
        = vlSelfRef.gpu_de1_soc_top__DOT__u_input_ctrl__DOT__frame_cnt;
    __Vdly__gpu_de1_soc_top__DOT__u_input_ctrl__DOT__velocity_y 
        = vlSelfRef.gpu_de1_soc_top__DOT__u_input_ctrl__DOT__velocity_y;
    vlSelfRef.__Vdly__gpu_de1_soc_top__DOT__u_input_ctrl__DOT__bird_y_sub 
        = vlSelfRef.gpu_de1_soc_top__DOT__u_input_ctrl__DOT__bird_y_sub;
    vlSelfRef.__Vdly__gpu_de1_soc_top__DOT__u_rasterizer__DOT__state 
        = vlSelfRef.gpu_de1_soc_top__DOT__u_rasterizer__DOT__state;
    vlSelfRef.__Vdly__gpu_de1_soc_top__DOT__u_rasterizer__DOT__curr_x 
        = vlSelfRef.gpu_de1_soc_top__DOT__u_rasterizer__DOT__curr_x;
    vlSelfRef.__Vdly__gpu_de1_soc_top__DOT__u_rasterizer__DOT__curr_y 
        = vlSelfRef.gpu_de1_soc_top__DOT__u_rasterizer__DOT__curr_y;
    vlSelfRef.__Vdly__gpu_de1_soc_top__DOT__u_input_ctrl__DOT__state 
        = vlSelfRef.gpu_de1_soc_top__DOT__u_input_ctrl__DOT__state;
    vlSelfRef.__Vdly__gpu_de1_soc_top__DOT__rast_y0 
        = vlSelfRef.gpu_de1_soc_top__DOT__rast_y0;
    vlSelfRef.__Vdly__gpu_de1_soc_top__DOT__rast_x0 
        = vlSelfRef.gpu_de1_soc_top__DOT__rast_x0;
    vlSelfRef.__Vdly__gpu_de1_soc_top__DOT__rast_y1 
        = vlSelfRef.gpu_de1_soc_top__DOT__rast_y1;
    vlSelfRef.__Vdly__gpu_de1_soc_top__DOT__rast_x1 
        = vlSelfRef.gpu_de1_soc_top__DOT__rast_x1;
    vlSelfRef.__Vdly__gpu_de1_soc_top__DOT__rast_y2 
        = vlSelfRef.gpu_de1_soc_top__DOT__rast_y2;
    vlSelfRef.__Vdly__gpu_de1_soc_top__DOT__rast_start 
        = vlSelfRef.gpu_de1_soc_top__DOT__rast_start;
    vlSelfRef.__Vdly__gpu_de1_soc_top__DOT__rast_clear_screen 
        = vlSelfRef.gpu_de1_soc_top__DOT__rast_clear_screen;
    vlSelfRef.__Vdly__gpu_de1_soc_top__DOT__rast_color 
        = vlSelfRef.gpu_de1_soc_top__DOT__rast_color;
    vlSelfRef.__Vdly__gpu_de1_soc_top__DOT__rast_x2 
        = vlSelfRef.gpu_de1_soc_top__DOT__rast_x2;
    __VdlySet__gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram__v0 = 0U;
    __VdlySet__gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram__v1 = 0U;
    if (vlSelfRef.gpu_de1_soc_top__DOT__rst_n) {
        __Vdly__gpu_de1_soc_top__DOT__u_input_ctrl__DOT__key1_sync 
            = ((6U & ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_input_ctrl__DOT__key1_sync) 
                      << 1U)) | (1U & ((IData)(vlSelfRef.KEY) 
                                       >> 1U)));
        if ((0xcb735U == vlSelfRef.gpu_de1_soc_top__DOT__u_input_ctrl__DOT__frame_cnt)) {
            vlSelfRef.__Vdly__gpu_de1_soc_top__DOT__u_input_ctrl__DOT__bg_scroll_x 
                = ((0x13fU <= (IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_input_ctrl__DOT__bg_scroll_x))
                    ? 0U : (0x1ffU & ((IData)(1U) + (IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_input_ctrl__DOT__bg_scroll_x))));
            if (vlSelfRef.gpu_de1_soc_top__DOT__u_input_ctrl__DOT__jump_request) {
                __Vdly__gpu_de1_soc_top__DOT__u_input_ctrl__DOT__velocity_y = 0xc4U;
            } else if (VL_GTS_III(8, 0x60U, (IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_input_ctrl__DOT__velocity_y))) {
                __Vdly__gpu_de1_soc_top__DOT__u_input_ctrl__DOT__velocity_y 
                    = (0xffU & ((IData)(3U) + (IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_input_ctrl__DOT__velocity_y)));
            }
            if (((0xbeU <= (IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_input_ctrl__DOT__current_bird_y)) 
                 & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,8, (IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_input_ctrl__DOT__velocity_y))))) {
                vlSelfRef.__Vdly__gpu_de1_soc_top__DOT__u_input_ctrl__DOT__bird_y_sub = 0xbe0U;
                __Vdly__gpu_de1_soc_top__DOT__u_input_ctrl__DOT__velocity_y = 0U;
            } else if (((0U >= (IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_input_ctrl__DOT__bird_y_sub)) 
                        & VL_GTS_III(32, 0U, VL_EXTENDS_II(32,8, (IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_input_ctrl__DOT__velocity_y))))) {
                vlSelfRef.__Vdly__gpu_de1_soc_top__DOT__u_input_ctrl__DOT__bird_y_sub = 0U;
                __Vdly__gpu_de1_soc_top__DOT__u_input_ctrl__DOT__velocity_y = 0U;
            } else {
                vlSelfRef.__Vdly__gpu_de1_soc_top__DOT__u_input_ctrl__DOT__bird_y_sub 
                    = (0xfffU & ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_input_ctrl__DOT__bird_y_sub) 
                                 + ((0xf00U & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_input_ctrl__DOT__velocity_y) 
                                                              >> 7U)))) 
                                               << 8U)) 
                                    | (IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_input_ctrl__DOT__velocity_y))));
            }
        }
        vlSelfRef.__Vdly__gpu_de1_soc_top__DOT__u_input_ctrl__DOT__frame_cnt 
            = ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_input_ctrl__DOT__frame_tick)
                ? 0U : (0xfffffU & ((IData)(1U) + vlSelfRef.gpu_de1_soc_top__DOT__u_input_ctrl__DOT__frame_cnt)));
        vlSelfRef.__Vdly__gpu_de1_soc_top__DOT__rast_start = 0U;
        vlSelfRef.__Vdly__gpu_de1_soc_top__DOT__rast_clear_screen = 0U;
        if (vlSelfRef.gpu_de1_soc_top__DOT__sat_we) {
            __VdlyVal__gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram__v0 
                = vlSelfRef.gpu_de1_soc_top__DOT__sat_data;
            __VdlyDim0__gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram__v0 
                = vlSelfRef.gpu_de1_soc_top__DOT__sat_addr;
            __VdlySet__gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram__v0 = 1U;
        }
        if ((IData)((4U == (6U & (IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_input_ctrl__DOT__key1_sync))))) {
            vlSelfRef.gpu_de1_soc_top__DOT__u_input_ctrl__DOT__jump_request = 1U;
        } else if ((0xcb735U == vlSelfRef.gpu_de1_soc_top__DOT__u_input_ctrl__DOT__frame_cnt)) {
            vlSelfRef.gpu_de1_soc_top__DOT__u_input_ctrl__DOT__jump_request = 0U;
        }
        vlSelfRef.gpu_de1_soc_top__DOT__sat_we = 0U;
        if (((IData)(vlSelfRef.gpu_de1_soc_top__DOT__cmd_valid) 
             & (~ (IData)(vlSelfRef.gpu_de1_soc_top__DOT__rast_busy)))) {
            if ((1U & (~ (vlSelfRef.gpu_de1_soc_top__DOT__cmd_data 
                          >> 0x1fU)))) {
                if ((0x40000000U & vlSelfRef.gpu_de1_soc_top__DOT__cmd_data)) {
                    if ((0x20000000U & vlSelfRef.gpu_de1_soc_top__DOT__cmd_data)) {
                        if ((0x10000000U & vlSelfRef.gpu_de1_soc_top__DOT__cmd_data)) {
                            vlSelfRef.__Vdly__gpu_de1_soc_top__DOT__rast_y0 
                                = (0xffU & vlSelfRef.gpu_de1_soc_top__DOT__cmd_data);
                            vlSelfRef.__Vdly__gpu_de1_soc_top__DOT__rast_x0 
                                = (0x1ffU & (vlSelfRef.gpu_de1_soc_top__DOT__cmd_data 
                                             >> 8U));
                        }
                        if ((1U & (~ (vlSelfRef.gpu_de1_soc_top__DOT__cmd_data 
                                      >> 0x1cU)))) {
                            vlSelfRef.gpu_de1_soc_top__DOT__sat_we = 1U;
                            vlSelfRef.gpu_de1_soc_top__DOT__sat_data 
                                = (0x80980001U | (0xff00U 
                                                  & (vlSelfRef.gpu_de1_soc_top__DOT__cmd_data 
                                                     << 8U)));
                            vlSelfRef.gpu_de1_soc_top__DOT__sat_addr = 0U;
                        }
                    }
                    if ((1U & (~ (vlSelfRef.gpu_de1_soc_top__DOT__cmd_data 
                                  >> 0x1dU)))) {
                        if ((0x10000000U & vlSelfRef.gpu_de1_soc_top__DOT__cmd_data)) {
                            vlSelfRef.gpu_de1_soc_top__DOT__scroll_y 
                                = (0xffU & vlSelfRef.gpu_de1_soc_top__DOT__cmd_data);
                            vlSelfRef.gpu_de1_soc_top__DOT__scroll_x 
                                = (0x1ffU & (vlSelfRef.gpu_de1_soc_top__DOT__cmd_data 
                                             >> 8U));
                        }
                    }
                }
                if ((1U & (~ (vlSelfRef.gpu_de1_soc_top__DOT__cmd_data 
                              >> 0x1eU)))) {
                    if ((1U & (~ (vlSelfRef.gpu_de1_soc_top__DOT__cmd_data 
                                  >> 0x1dU)))) {
                        if ((1U & (~ (vlSelfRef.gpu_de1_soc_top__DOT__cmd_data 
                                      >> 0x1cU)))) {
                            if ((0xfU == (0xfU & (vlSelfRef.gpu_de1_soc_top__DOT__cmd_data 
                                                  >> 0x18U)))) {
                                vlSelfRef.__Vdly__gpu_de1_soc_top__DOT__rast_clear_screen = 1U;
                            }
                        }
                    }
                    if ((0x20000000U & vlSelfRef.gpu_de1_soc_top__DOT__cmd_data)) {
                        if ((0x10000000U & vlSelfRef.gpu_de1_soc_top__DOT__cmd_data)) {
                            vlSelfRef.gpu_de1_soc_top__DOT__tm_x 
                                = (0x3fU & (vlSelfRef.gpu_de1_soc_top__DOT__cmd_data 
                                            >> 0x10U));
                            vlSelfRef.gpu_de1_soc_top__DOT__tm_y 
                                = (0x1fU & (vlSelfRef.gpu_de1_soc_top__DOT__cmd_data 
                                            >> 8U));
                        }
                    }
                }
            }
            if ((vlSelfRef.gpu_de1_soc_top__DOT__cmd_data 
                 >> 0x1fU)) {
                if ((1U & (~ (vlSelfRef.gpu_de1_soc_top__DOT__cmd_data 
                              >> 0x1eU)))) {
                    if ((1U & (~ (vlSelfRef.gpu_de1_soc_top__DOT__cmd_data 
                                  >> 0x1dU)))) {
                        if ((1U & (~ (vlSelfRef.gpu_de1_soc_top__DOT__cmd_data 
                                      >> 0x1cU)))) {
                            vlSelfRef.__Vdly__gpu_de1_soc_top__DOT__rast_y1 
                                = (0xffU & vlSelfRef.gpu_de1_soc_top__DOT__cmd_data);
                            vlSelfRef.__Vdly__gpu_de1_soc_top__DOT__rast_x1 
                                = (0x1ffU & (vlSelfRef.gpu_de1_soc_top__DOT__cmd_data 
                                             >> 8U));
                        }
                        if ((0x10000000U & vlSelfRef.gpu_de1_soc_top__DOT__cmd_data)) {
                            vlSelfRef.__Vdly__gpu_de1_soc_top__DOT__rast_y2 
                                = (0xffU & vlSelfRef.gpu_de1_soc_top__DOT__cmd_data);
                            vlSelfRef.__Vdly__gpu_de1_soc_top__DOT__rast_start = 1U;
                            vlSelfRef.__Vdly__gpu_de1_soc_top__DOT__rast_color 
                                = (0xffU & (vlSelfRef.gpu_de1_soc_top__DOT__cmd_data 
                                            >> 0x14U));
                            vlSelfRef.__Vdly__gpu_de1_soc_top__DOT__rast_x2 
                                = (0x1ffU & (vlSelfRef.gpu_de1_soc_top__DOT__cmd_data 
                                             >> 8U));
                        }
                    }
                }
            } else if ((1U & (~ (vlSelfRef.gpu_de1_soc_top__DOT__cmd_data 
                                 >> 0x1eU)))) {
                if ((1U & (~ (vlSelfRef.gpu_de1_soc_top__DOT__cmd_data 
                              >> 0x1dU)))) {
                    if ((1U & (~ (vlSelfRef.gpu_de1_soc_top__DOT__cmd_data 
                                  >> 0x1cU)))) {
                        if ((0xfU == (0xfU & (vlSelfRef.gpu_de1_soc_top__DOT__cmd_data 
                                              >> 0x18U)))) {
                            vlSelfRef.__Vdly__gpu_de1_soc_top__DOT__rast_start = 1U;
                        }
                    }
                }
            }
        }
        vlSelfRef.gpu_de1_soc_top__DOT__clk_25m = (1U 
                                                   & (~ (IData)(vlSelfRef.gpu_de1_soc_top__DOT__clk_25m)));
    } else {
        __Vdly__gpu_de1_soc_top__DOT__u_input_ctrl__DOT__key1_sync = 7U;
        vlSelfRef.__Vdly__gpu_de1_soc_top__DOT__u_input_ctrl__DOT__bg_scroll_x = 0U;
        vlSelfRef.__Vdly__gpu_de1_soc_top__DOT__u_input_ctrl__DOT__frame_cnt = 0U;
        vlSelfRef.__Vdly__gpu_de1_soc_top__DOT__u_input_ctrl__DOT__bird_y_sub = 0x640U;
        __Vdly__gpu_de1_soc_top__DOT__u_input_ctrl__DOT__velocity_y = 0U;
        vlSelfRef.__Vdly__gpu_de1_soc_top__DOT__rast_y0 = 0U;
        vlSelfRef.__Vdly__gpu_de1_soc_top__DOT__rast_x0 = 0U;
        vlSelfRef.__Vdly__gpu_de1_soc_top__DOT__rast_y1 = 0U;
        vlSelfRef.__Vdly__gpu_de1_soc_top__DOT__rast_x1 = 0U;
        vlSelfRef.__Vdly__gpu_de1_soc_top__DOT__rast_y2 = 0U;
        vlSelfRef.__Vdly__gpu_de1_soc_top__DOT__rast_start = 0U;
        vlSelfRef.__Vdly__gpu_de1_soc_top__DOT__rast_clear_screen = 0U;
        vlSelfRef.__Vdly__gpu_de1_soc_top__DOT__rast_color = 0U;
        vlSelfRef.__Vdly__gpu_de1_soc_top__DOT__rast_x2 = 0U;
        __VdlySet__gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram__v1 = 1U;
        vlSelfRef.gpu_de1_soc_top__DOT__tm_x = 0U;
        vlSelfRef.gpu_de1_soc_top__DOT__tm_y = 0U;
        vlSelfRef.gpu_de1_soc_top__DOT__scroll_y = 0U;
        vlSelfRef.gpu_de1_soc_top__DOT__scroll_x = 0U;
        vlSelfRef.gpu_de1_soc_top__DOT__u_input_ctrl__DOT__jump_request = 0U;
        vlSelfRef.gpu_de1_soc_top__DOT__sat_we = 0U;
        vlSelfRef.gpu_de1_soc_top__DOT__sat_data = 0U;
        vlSelfRef.gpu_de1_soc_top__DOT__sat_addr = 0U;
        vlSelfRef.gpu_de1_soc_top__DOT__clk_25m = 0U;
    }
    vlSelfRef.gpu_de1_soc_top__DOT__u_input_ctrl__DOT__velocity_y 
        = __Vdly__gpu_de1_soc_top__DOT__u_input_ctrl__DOT__velocity_y;
    if (__VdlySet__gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram__v0) {
        vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram[__VdlyDim0__gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram__v0] 
            = __VdlyVal__gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram__v0;
    }
    if (__VdlySet__gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram__v1) {
        vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram[0U] = 0U;
        vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram[1U] = 0U;
        vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram[2U] = 0U;
        vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram[3U] = 0U;
        vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram[4U] = 0U;
        vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram[5U] = 0U;
        vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram[6U] = 0U;
        vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram[7U] = 0U;
        vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram[8U] = 0U;
        vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram[9U] = 0U;
        vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram[0xaU] = 0U;
        vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram[0xbU] = 0U;
        vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram[0xcU] = 0U;
        vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram[0xdU] = 0U;
        vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram[0xeU] = 0U;
        vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram[0xfU] = 0U;
        vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram[0x10U] = 0U;
        vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram[0x11U] = 0U;
        vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram[0x12U] = 0U;
        vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram[0x13U] = 0U;
        vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram[0x14U] = 0U;
        vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram[0x15U] = 0U;
        vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram[0x16U] = 0U;
        vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram[0x17U] = 0U;
        vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram[0x18U] = 0U;
        vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram[0x19U] = 0U;
        vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram[0x1aU] = 0U;
        vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram[0x1bU] = 0U;
        vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram[0x1cU] = 0U;
        vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram[0x1dU] = 0U;
        vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram[0x1eU] = 0U;
        vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram[0x1fU] = 0U;
        vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram[0U] = 0x80966401U;
    }
    vlSelfRef.VGA_CLK = vlSelfRef.gpu_de1_soc_top__DOT__clk_25m;
    vlSelfRef.gpu_de1_soc_top__DOT__u_input_ctrl__DOT__key1_sync 
        = __Vdly__gpu_de1_soc_top__DOT__u_input_ctrl__DOT__key1_sync;
}

VL_INLINE_OPT void Vgpu_de1_soc_top___024root___nba_sequent__TOP__1(Vgpu_de1_soc_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgpu_de1_soc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpu_de1_soc_top___024root___nba_sequent__TOP__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __VdlyVal__gpu_de1_soc_top__DOT__u_bg_engine__DOT__u_map_buffer__DOT__map_ram__v0;
    __VdlyVal__gpu_de1_soc_top__DOT__u_bg_engine__DOT__u_map_buffer__DOT__map_ram__v0 = 0;
    SData/*10:0*/ __VdlyDim0__gpu_de1_soc_top__DOT__u_bg_engine__DOT__u_map_buffer__DOT__map_ram__v0;
    __VdlyDim0__gpu_de1_soc_top__DOT__u_bg_engine__DOT__u_map_buffer__DOT__map_ram__v0 = 0;
    CData/*0:0*/ __VdlySet__gpu_de1_soc_top__DOT__u_bg_engine__DOT__u_map_buffer__DOT__map_ram__v0;
    __VdlySet__gpu_de1_soc_top__DOT__u_bg_engine__DOT__u_map_buffer__DOT__map_ram__v0 = 0;
    IData/*23:0*/ __VdlyVal__gpu_de1_soc_top__DOT__u_palette__DOT__clut_ram__v0;
    __VdlyVal__gpu_de1_soc_top__DOT__u_palette__DOT__clut_ram__v0 = 0;
    CData/*7:0*/ __VdlyDim0__gpu_de1_soc_top__DOT__u_palette__DOT__clut_ram__v0;
    __VdlyDim0__gpu_de1_soc_top__DOT__u_palette__DOT__clut_ram__v0 = 0;
    CData/*0:0*/ __VdlySet__gpu_de1_soc_top__DOT__u_palette__DOT__clut_ram__v0;
    __VdlySet__gpu_de1_soc_top__DOT__u_palette__DOT__clut_ram__v0 = 0;
    // Body
    vlSelfRef.__VdlySet__gpu_de1_soc_top__DOT__u_poly_buffer__DOT__ram__v0 = 0U;
    __VdlySet__gpu_de1_soc_top__DOT__u_bg_engine__DOT__u_map_buffer__DOT__map_ram__v0 = 0U;
    __VdlySet__gpu_de1_soc_top__DOT__u_palette__DOT__clut_ram__v0 = 0U;
    if (vlSelfRef.gpu_de1_soc_top__DOT__buf_we) {
        vlSelfRef.gpu_de1_soc_top__DOT__u_poly_buffer__DOT____Vlvbound_h87b1c6a8__0 
            = vlSelfRef.gpu_de1_soc_top__DOT__buf_wr_data;
        if ((0x12bffU >= vlSelfRef.gpu_de1_soc_top__DOT__buf_wr_addr)) {
            vlSelfRef.__VdlyVal__gpu_de1_soc_top__DOT__u_poly_buffer__DOT__ram__v0 
                = vlSelfRef.gpu_de1_soc_top__DOT__u_poly_buffer__DOT____Vlvbound_h87b1c6a8__0;
            vlSelfRef.__VdlyDim0__gpu_de1_soc_top__DOT__u_poly_buffer__DOT__ram__v0 
                = vlSelfRef.gpu_de1_soc_top__DOT__buf_wr_addr;
            vlSelfRef.__VdlySet__gpu_de1_soc_top__DOT__u_poly_buffer__DOT__ram__v0 = 1U;
        }
    }
    if (((IData)(vlSelfRef.gpu_de1_soc_top__DOT__tm_we) 
         & (0x4b0U > (IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_bg_engine__DOT__u_map_buffer__DOT__addr_wr)))) {
        vlSelfRef.gpu_de1_soc_top__DOT__u_bg_engine__DOT__u_map_buffer__DOT____Vlvbound_h813bd28f__0 
            = vlSelfRef.gpu_de1_soc_top__DOT__tm_tile_id;
        if ((0x4afU >= (IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_bg_engine__DOT__u_map_buffer__DOT__addr_wr))) {
            __VdlyVal__gpu_de1_soc_top__DOT__u_bg_engine__DOT__u_map_buffer__DOT__map_ram__v0 
                = vlSelfRef.gpu_de1_soc_top__DOT__u_bg_engine__DOT__u_map_buffer__DOT____Vlvbound_h813bd28f__0;
            __VdlyDim0__gpu_de1_soc_top__DOT__u_bg_engine__DOT__u_map_buffer__DOT__map_ram__v0 
                = vlSelfRef.gpu_de1_soc_top__DOT__u_bg_engine__DOT__u_map_buffer__DOT__addr_wr;
            __VdlySet__gpu_de1_soc_top__DOT__u_bg_engine__DOT__u_map_buffer__DOT__map_ram__v0 = 1U;
        }
    }
    if (vlSelfRef.gpu_de1_soc_top__DOT__pal_we) {
        __VdlyVal__gpu_de1_soc_top__DOT__u_palette__DOT__clut_ram__v0 
            = vlSelfRef.gpu_de1_soc_top__DOT__pal_data;
        __VdlyDim0__gpu_de1_soc_top__DOT__u_palette__DOT__clut_ram__v0 
            = vlSelfRef.gpu_de1_soc_top__DOT__pal_addr;
        __VdlySet__gpu_de1_soc_top__DOT__u_palette__DOT__clut_ram__v0 = 1U;
    }
    vlSelfRef.gpu_de1_soc_top__DOT__rgb_24 = vlSelfRef.gpu_de1_soc_top__DOT__u_palette__DOT__clut_ram
        [((0U == (IData)(vlSelfRef.gpu_de1_soc_top__DOT__sp_pixel))
           ? ((0U == (IData)(vlSelfRef.gpu_de1_soc_top__DOT__poly_pixel))
               ? (IData)(vlSelfRef.gpu_de1_soc_top__DOT__bg_pixel)
               : (IData)(vlSelfRef.gpu_de1_soc_top__DOT__poly_pixel))
           : (IData)(vlSelfRef.gpu_de1_soc_top__DOT__sp_pixel))];
    if (__VdlySet__gpu_de1_soc_top__DOT__u_palette__DOT__clut_ram__v0) {
        vlSelfRef.gpu_de1_soc_top__DOT__u_palette__DOT__clut_ram[__VdlyDim0__gpu_de1_soc_top__DOT__u_palette__DOT__clut_ram__v0] 
            = __VdlyVal__gpu_de1_soc_top__DOT__u_palette__DOT__clut_ram__v0;
    }
    vlSelfRef.gpu_de1_soc_top__DOT__sp_pixel = vlSelfRef.gpu_de1_soc_top__DOT__u_patterns__DOT__ram
        [vlSelfRef.gpu_de1_soc_top__DOT__sp_vram_addr];
    vlSelfRef.gpu_de1_soc_top__DOT__bg_pixel = vlSelfRef.gpu_de1_soc_top__DOT__u_patterns__DOT__ram
        [(((IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_bg_engine__DOT__current_tile_id) 
           << 6U) | (((IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_bg_engine__DOT__sub_y_delay) 
                      << 3U) | (IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_bg_engine__DOT__sub_x_delay)))];
    vlSelfRef.gpu_de1_soc_top__DOT__u_bg_engine__DOT__sub_y_delay 
        = (7U & (IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_bg_engine__DOT____VdfgRegularize_hf66fa8df_1_0));
    vlSelfRef.gpu_de1_soc_top__DOT__u_bg_engine__DOT__sub_x_delay 
        = (7U & (IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_bg_engine__DOT____VdfgRegularize_hf66fa8df_0_0));
    vlSelfRef.gpu_de1_soc_top__DOT__u_bg_engine__DOT__current_tile_id 
        = ((0x4b0U > (IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_bg_engine__DOT__u_map_buffer__DOT__addr_rd))
            ? ((0x4afU >= (IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_bg_engine__DOT__u_map_buffer__DOT__addr_rd))
                ? vlSelfRef.gpu_de1_soc_top__DOT__u_bg_engine__DOT__u_map_buffer__DOT__map_ram
               [vlSelfRef.gpu_de1_soc_top__DOT__u_bg_engine__DOT__u_map_buffer__DOT__addr_rd]
                : 0U) : 0U);
    if (__VdlySet__gpu_de1_soc_top__DOT__u_bg_engine__DOT__u_map_buffer__DOT__map_ram__v0) {
        vlSelfRef.gpu_de1_soc_top__DOT__u_bg_engine__DOT__u_map_buffer__DOT__map_ram[__VdlyDim0__gpu_de1_soc_top__DOT__u_bg_engine__DOT__u_map_buffer__DOT__map_ram__v0] 
            = __VdlyVal__gpu_de1_soc_top__DOT__u_bg_engine__DOT__u_map_buffer__DOT__map_ram__v0;
    }
}

VL_INLINE_OPT void Vgpu_de1_soc_top___024root___nba_sequent__TOP__2(Vgpu_de1_soc_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgpu_de1_soc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpu_de1_soc_top___024root___nba_sequent__TOP__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*9:0*/ __Vdly__gpu_de1_soc_top__DOT__u_vga_sync__DOT__v_cnt;
    __Vdly__gpu_de1_soc_top__DOT__u_vga_sync__DOT__v_cnt = 0;
    SData/*9:0*/ __Vdly__gpu_de1_soc_top__DOT__u_vga_sync__DOT__h_cnt;
    __Vdly__gpu_de1_soc_top__DOT__u_vga_sync__DOT__h_cnt = 0;
    // Body
    __Vdly__gpu_de1_soc_top__DOT__u_vga_sync__DOT__v_cnt 
        = vlSelfRef.gpu_de1_soc_top__DOT__u_vga_sync__DOT__v_cnt;
    __Vdly__gpu_de1_soc_top__DOT__u_vga_sync__DOT__h_cnt 
        = vlSelfRef.gpu_de1_soc_top__DOT__u_vga_sync__DOT__h_cnt;
    if (vlSelfRef.gpu_de1_soc_top__DOT__rst_n) {
        if ((0x31fU == (IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_vga_sync__DOT__h_cnt))) {
            __Vdly__gpu_de1_soc_top__DOT__u_vga_sync__DOT__v_cnt 
                = ((0x20cU == (IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_vga_sync__DOT__v_cnt))
                    ? 0U : (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_vga_sync__DOT__v_cnt))));
            __Vdly__gpu_de1_soc_top__DOT__u_vga_sync__DOT__h_cnt = 0U;
        } else {
            __Vdly__gpu_de1_soc_top__DOT__u_vga_sync__DOT__h_cnt 
                = (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_vga_sync__DOT__h_cnt)));
        }
    } else {
        __Vdly__gpu_de1_soc_top__DOT__u_vga_sync__DOT__v_cnt = 0U;
        __Vdly__gpu_de1_soc_top__DOT__u_vga_sync__DOT__h_cnt = 0U;
    }
    vlSelfRef.VGA_HS = ((1U & (~ (IData)(vlSelfRef.gpu_de1_soc_top__DOT__rst_n))) 
                        || (1U & (~ ((0x290U <= (IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_vga_sync__DOT__h_cnt)) 
                                     & (0x2f0U > (IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_vga_sync__DOT__h_cnt))))));
    vlSelfRef.VGA_VS = ((1U & (~ (IData)(vlSelfRef.gpu_de1_soc_top__DOT__rst_n))) 
                        || (1U & (~ ((0x1eaU <= (IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_vga_sync__DOT__v_cnt)) 
                                     & (0x1ecU > (IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_vga_sync__DOT__v_cnt))))));
    vlSelfRef.gpu_de1_soc_top__DOT__u_vga_sync__DOT__h_cnt 
        = __Vdly__gpu_de1_soc_top__DOT__u_vga_sync__DOT__h_cnt;
    vlSelfRef.gpu_de1_soc_top__DOT__u_vga_sync__DOT__v_cnt 
        = __Vdly__gpu_de1_soc_top__DOT__u_vga_sync__DOT__v_cnt;
    vlSelfRef.VGA_BLANK_N = ((0x280U > (IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_vga_sync__DOT__h_cnt)) 
                             & (0x1e0U > (IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_vga_sync__DOT__v_cnt)));
    if (vlSelfRef.VGA_BLANK_N) {
        vlSelfRef.gpu_de1_soc_top__DOT__pixel_y = (0xffU 
                                                   & ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_vga_sync__DOT__v_cnt) 
                                                      >> 1U));
        vlSelfRef.gpu_de1_soc_top__DOT__pixel_x = (0x1ffU 
                                                   & ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_vga_sync__DOT__h_cnt) 
                                                      >> 1U));
        vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT____VdfgRegularize_h46df5cdf_0_0 
            = (0xfU & ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_vga_sync__DOT__h_cnt) 
                       >> 1U));
        vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT____VdfgRegularize_h46df5cdf_0_1 
            = (0xfU & ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_vga_sync__DOT__v_cnt) 
                       >> 1U));
    } else {
        vlSelfRef.gpu_de1_soc_top__DOT__pixel_y = 0U;
        vlSelfRef.gpu_de1_soc_top__DOT__pixel_x = 0U;
        vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT____VdfgRegularize_h46df5cdf_0_0 = 0U;
        vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT____VdfgRegularize_h46df5cdf_0_1 = 0U;
    }
}

VL_INLINE_OPT void Vgpu_de1_soc_top___024root___nba_sequent__TOP__3(Vgpu_de1_soc_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgpu_de1_soc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpu_de1_soc_top___024root___nba_sequent__TOP__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*8:0*/ __Vfunc_gpu_de1_soc_top__DOT__u_rasterizer__DOT__min3__0__Vfuncout;
    __Vfunc_gpu_de1_soc_top__DOT__u_rasterizer__DOT__min3__0__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_gpu_de1_soc_top__DOT__u_rasterizer__DOT__min3__0__a;
    __Vfunc_gpu_de1_soc_top__DOT__u_rasterizer__DOT__min3__0__a = 0;
    SData/*8:0*/ __Vfunc_gpu_de1_soc_top__DOT__u_rasterizer__DOT__min3__0__b;
    __Vfunc_gpu_de1_soc_top__DOT__u_rasterizer__DOT__min3__0__b = 0;
    SData/*8:0*/ __Vfunc_gpu_de1_soc_top__DOT__u_rasterizer__DOT__min3__0__c;
    __Vfunc_gpu_de1_soc_top__DOT__u_rasterizer__DOT__min3__0__c = 0;
    SData/*8:0*/ __Vfunc_gpu_de1_soc_top__DOT__u_rasterizer__DOT__max3__1__Vfuncout;
    __Vfunc_gpu_de1_soc_top__DOT__u_rasterizer__DOT__max3__1__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_gpu_de1_soc_top__DOT__u_rasterizer__DOT__max3__1__a;
    __Vfunc_gpu_de1_soc_top__DOT__u_rasterizer__DOT__max3__1__a = 0;
    SData/*8:0*/ __Vfunc_gpu_de1_soc_top__DOT__u_rasterizer__DOT__max3__1__b;
    __Vfunc_gpu_de1_soc_top__DOT__u_rasterizer__DOT__max3__1__b = 0;
    SData/*8:0*/ __Vfunc_gpu_de1_soc_top__DOT__u_rasterizer__DOT__max3__1__c;
    __Vfunc_gpu_de1_soc_top__DOT__u_rasterizer__DOT__max3__1__c = 0;
    SData/*8:0*/ __Vfunc_gpu_de1_soc_top__DOT__u_rasterizer__DOT__min3__2__Vfuncout;
    __Vfunc_gpu_de1_soc_top__DOT__u_rasterizer__DOT__min3__2__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_gpu_de1_soc_top__DOT__u_rasterizer__DOT__min3__2__a;
    __Vfunc_gpu_de1_soc_top__DOT__u_rasterizer__DOT__min3__2__a = 0;
    SData/*8:0*/ __Vfunc_gpu_de1_soc_top__DOT__u_rasterizer__DOT__min3__2__b;
    __Vfunc_gpu_de1_soc_top__DOT__u_rasterizer__DOT__min3__2__b = 0;
    SData/*8:0*/ __Vfunc_gpu_de1_soc_top__DOT__u_rasterizer__DOT__min3__2__c;
    __Vfunc_gpu_de1_soc_top__DOT__u_rasterizer__DOT__min3__2__c = 0;
    SData/*8:0*/ __Vfunc_gpu_de1_soc_top__DOT__u_rasterizer__DOT__max3__3__Vfuncout;
    __Vfunc_gpu_de1_soc_top__DOT__u_rasterizer__DOT__max3__3__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_gpu_de1_soc_top__DOT__u_rasterizer__DOT__max3__3__a;
    __Vfunc_gpu_de1_soc_top__DOT__u_rasterizer__DOT__max3__3__a = 0;
    SData/*8:0*/ __Vfunc_gpu_de1_soc_top__DOT__u_rasterizer__DOT__max3__3__b;
    __Vfunc_gpu_de1_soc_top__DOT__u_rasterizer__DOT__max3__3__b = 0;
    SData/*8:0*/ __Vfunc_gpu_de1_soc_top__DOT__u_rasterizer__DOT__max3__3__c;
    __Vfunc_gpu_de1_soc_top__DOT__u_rasterizer__DOT__max3__3__c = 0;
    // Body
    vlSelfRef.gpu_de1_soc_top__DOT__u_bg_engine__DOT__u_map_buffer__DOT__addr_wr 
        = (0x7ffU & (((IData)(vlSelfRef.gpu_de1_soc_top__DOT__tm_y) 
                      << 5U) + (((IData)(vlSelfRef.gpu_de1_soc_top__DOT__tm_y) 
                                 << 3U) + (IData)(vlSelfRef.gpu_de1_soc_top__DOT__tm_x))));
    if (vlSelfRef.gpu_de1_soc_top__DOT__rst_n) {
        vlSelfRef.gpu_de1_soc_top__DOT__tm_we = 0U;
        vlSelfRef.gpu_de1_soc_top__DOT__pal_we = 0U;
        if (((IData)(vlSelfRef.gpu_de1_soc_top__DOT__cmd_valid) 
             & (~ (IData)(vlSelfRef.gpu_de1_soc_top__DOT__rast_busy)))) {
            if ((1U & (~ (vlSelfRef.gpu_de1_soc_top__DOT__cmd_data 
                          >> 0x1fU)))) {
                if ((1U & (~ (vlSelfRef.gpu_de1_soc_top__DOT__cmd_data 
                              >> 0x1eU)))) {
                    if ((0x20000000U & vlSelfRef.gpu_de1_soc_top__DOT__cmd_data)) {
                        if ((0x10000000U & vlSelfRef.gpu_de1_soc_top__DOT__cmd_data)) {
                            vlSelfRef.gpu_de1_soc_top__DOT__tm_we = 1U;
                            vlSelfRef.gpu_de1_soc_top__DOT__tm_tile_id 
                                = (0xffU & vlSelfRef.gpu_de1_soc_top__DOT__cmd_data);
                        }
                    }
                    if ((1U & (~ (vlSelfRef.gpu_de1_soc_top__DOT__cmd_data 
                                  >> 0x1dU)))) {
                        if ((0x10000000U & vlSelfRef.gpu_de1_soc_top__DOT__cmd_data)) {
                            vlSelfRef.gpu_de1_soc_top__DOT__pal_we = 1U;
                            vlSelfRef.gpu_de1_soc_top__DOT__pal_data 
                                = ((0xf80000U & (vlSelfRef.gpu_de1_soc_top__DOT__cmd_data 
                                                 << 8U)) 
                                   | ((0xfc00U & (vlSelfRef.gpu_de1_soc_top__DOT__cmd_data 
                                                  << 5U)) 
                                      | (0xf8U & (vlSelfRef.gpu_de1_soc_top__DOT__cmd_data 
                                                  << 3U))));
                            vlSelfRef.gpu_de1_soc_top__DOT__pal_addr 
                                = (0xffU & (vlSelfRef.gpu_de1_soc_top__DOT__cmd_data 
                                            >> 0x10U));
                        }
                    }
                }
            }
        }
        vlSelfRef.gpu_de1_soc_top__DOT__cmd_valid = 0U;
        if ((0U == (IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_input_ctrl__DOT__state))) {
            if ((0xcb735U == vlSelfRef.gpu_de1_soc_top__DOT__u_input_ctrl__DOT__frame_cnt)) {
                vlSelfRef.__Vdly__gpu_de1_soc_top__DOT__u_input_ctrl__DOT__state = 1U;
            }
        } else if ((1U == (IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_input_ctrl__DOT__state))) {
            if ((1U & (~ (IData)(vlSelfRef.gpu_de1_soc_top__DOT__rast_busy)))) {
                vlSelfRef.gpu_de1_soc_top__DOT__cmd_data 
                    = (0x50000000U | ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_input_ctrl__DOT__bg_scroll_x) 
                                      << 8U));
                vlSelfRef.gpu_de1_soc_top__DOT__cmd_valid = 1U;
                vlSelfRef.__Vdly__gpu_de1_soc_top__DOT__u_input_ctrl__DOT__state = 2U;
            }
        } else if ((2U == (IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_input_ctrl__DOT__state))) {
            if ((1U & (~ (IData)(vlSelfRef.gpu_de1_soc_top__DOT__rast_busy)))) {
                vlSelfRef.gpu_de1_soc_top__DOT__cmd_data 
                    = (0x60000000U | (0xffU & ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_input_ctrl__DOT__bird_y_sub) 
                                               >> 4U)));
                vlSelfRef.gpu_de1_soc_top__DOT__cmd_valid = 1U;
                vlSelfRef.__Vdly__gpu_de1_soc_top__DOT__u_input_ctrl__DOT__state = 0U;
            }
        } else {
            vlSelfRef.__Vdly__gpu_de1_soc_top__DOT__u_input_ctrl__DOT__state = 0U;
        }
        vlSelfRef.gpu_de1_soc_top__DOT__buf_we = 0U;
        if ((2U & (IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_rasterizer__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_rasterizer__DOT__state))) {
                vlSelfRef.gpu_de1_soc_top__DOT__buf_we = 1U;
                vlSelfRef.gpu_de1_soc_top__DOT__buf_wr_addr 
                    = (0x1ffffU & (((IData)(0x140U) 
                                    * (IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_rasterizer__DOT__curr_y)) 
                                   + (IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_rasterizer__DOT__curr_x)));
                vlSelfRef.gpu_de1_soc_top__DOT__buf_wr_data = 0U;
                if ((0x13fU == (IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_rasterizer__DOT__curr_x))) {
                    vlSelfRef.__Vdly__gpu_de1_soc_top__DOT__u_rasterizer__DOT__curr_x = 0U;
                    if ((0xefU == (IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_rasterizer__DOT__curr_y))) {
                        vlSelfRef.__Vdly__gpu_de1_soc_top__DOT__u_rasterizer__DOT__state = 0U;
                        vlSelfRef.gpu_de1_soc_top__DOT__rast_busy = 0U;
                    } else {
                        vlSelfRef.__Vdly__gpu_de1_soc_top__DOT__u_rasterizer__DOT__curr_y 
                            = (0x1ffU & ((IData)(1U) 
                                         + (IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_rasterizer__DOT__curr_y)));
                    }
                } else {
                    vlSelfRef.__Vdly__gpu_de1_soc_top__DOT__u_rasterizer__DOT__curr_x 
                        = (0x1ffU & ((IData)(1U) + (IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_rasterizer__DOT__curr_x)));
                }
            } else {
                if (((((VL_LTES_III(32, 0U, vlSelfRef.gpu_de1_soc_top__DOT__u_rasterizer__DOT____VdfgRegularize_h9c5cd1d9_0_8) 
                        & (VL_LTES_III(32, 0U, vlSelfRef.gpu_de1_soc_top__DOT__u_rasterizer__DOT____VdfgRegularize_h9c5cd1d9_0_9) 
                           & VL_LTES_III(32, 0U, vlSelfRef.gpu_de1_soc_top__DOT__u_rasterizer__DOT____VdfgRegularize_h9c5cd1d9_0_10))) 
                       | (VL_GTES_III(32, 0U, vlSelfRef.gpu_de1_soc_top__DOT__u_rasterizer__DOT____VdfgRegularize_h9c5cd1d9_0_8) 
                          & (VL_GTES_III(32, 0U, vlSelfRef.gpu_de1_soc_top__DOT__u_rasterizer__DOT____VdfgRegularize_h9c5cd1d9_0_9) 
                             & VL_GTES_III(32, 0U, vlSelfRef.gpu_de1_soc_top__DOT__u_rasterizer__DOT____VdfgRegularize_h9c5cd1d9_0_10)))) 
                      & (0x140U > (IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_rasterizer__DOT__curr_x))) 
                     & (0xf0U > (IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_rasterizer__DOT__curr_y)))) {
                    vlSelfRef.gpu_de1_soc_top__DOT__buf_we = 1U;
                    vlSelfRef.gpu_de1_soc_top__DOT__buf_wr_addr 
                        = (0x1ffffU & (((IData)(0x140U) 
                                        * (IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_rasterizer__DOT__curr_y)) 
                                       + (IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_rasterizer__DOT__curr_x)));
                    vlSelfRef.gpu_de1_soc_top__DOT__buf_wr_data 
                        = vlSelfRef.gpu_de1_soc_top__DOT__rast_color;
                }
                if (((IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_rasterizer__DOT__curr_x) 
                     >= (IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_rasterizer__DOT__max_x))) {
                    vlSelfRef.__Vdly__gpu_de1_soc_top__DOT__u_rasterizer__DOT__curr_x 
                        = vlSelfRef.gpu_de1_soc_top__DOT__u_rasterizer__DOT__min_x;
                    if (((IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_rasterizer__DOT__curr_y) 
                         >= (IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_rasterizer__DOT__max_y))) {
                        vlSelfRef.__Vdly__gpu_de1_soc_top__DOT__u_rasterizer__DOT__state = 0U;
                        vlSelfRef.gpu_de1_soc_top__DOT__rast_busy = 0U;
                    } else {
                        vlSelfRef.__Vdly__gpu_de1_soc_top__DOT__u_rasterizer__DOT__curr_y 
                            = (0x1ffU & ((IData)(1U) 
                                         + (IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_rasterizer__DOT__curr_y)));
                    }
                } else {
                    vlSelfRef.__Vdly__gpu_de1_soc_top__DOT__u_rasterizer__DOT__curr_x 
                        = (0x1ffU & ((IData)(1U) + (IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_rasterizer__DOT__curr_x)));
                }
            }
        } else if ((1U & (IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_rasterizer__DOT__state))) {
            vlSelfRef.__Vdly__gpu_de1_soc_top__DOT__u_rasterizer__DOT__curr_x 
                = vlSelfRef.gpu_de1_soc_top__DOT__u_rasterizer__DOT__min_x;
            vlSelfRef.__Vdly__gpu_de1_soc_top__DOT__u_rasterizer__DOT__curr_y 
                = vlSelfRef.gpu_de1_soc_top__DOT__u_rasterizer__DOT__min_y;
            vlSelfRef.__Vdly__gpu_de1_soc_top__DOT__u_rasterizer__DOT__state = 2U;
        } else if (vlSelfRef.gpu_de1_soc_top__DOT__rast_start) {
            vlSelfRef.gpu_de1_soc_top__DOT__rast_busy = 1U;
            if (vlSelfRef.gpu_de1_soc_top__DOT__rast_clear_screen) {
                vlSelfRef.__Vdly__gpu_de1_soc_top__DOT__u_rasterizer__DOT__curr_x = 0U;
                vlSelfRef.__Vdly__gpu_de1_soc_top__DOT__u_rasterizer__DOT__curr_y = 0U;
                vlSelfRef.__Vdly__gpu_de1_soc_top__DOT__u_rasterizer__DOT__state = 3U;
            } else {
                __Vfunc_gpu_de1_soc_top__DOT__u_rasterizer__DOT__min3__0__c 
                    = vlSelfRef.gpu_de1_soc_top__DOT__rast_x2;
                __Vfunc_gpu_de1_soc_top__DOT__u_rasterizer__DOT__max3__1__c 
                    = vlSelfRef.gpu_de1_soc_top__DOT__rast_x2;
                __Vfunc_gpu_de1_soc_top__DOT__u_rasterizer__DOT__min3__2__c 
                    = vlSelfRef.gpu_de1_soc_top__DOT__rast_y2;
                __Vfunc_gpu_de1_soc_top__DOT__u_rasterizer__DOT__max3__3__c 
                    = vlSelfRef.gpu_de1_soc_top__DOT__rast_y2;
                __Vfunc_gpu_de1_soc_top__DOT__u_rasterizer__DOT__min3__0__b 
                    = vlSelfRef.gpu_de1_soc_top__DOT__rast_x1;
                __Vfunc_gpu_de1_soc_top__DOT__u_rasterizer__DOT__max3__1__b 
                    = vlSelfRef.gpu_de1_soc_top__DOT__rast_x1;
                __Vfunc_gpu_de1_soc_top__DOT__u_rasterizer__DOT__min3__2__b 
                    = vlSelfRef.gpu_de1_soc_top__DOT__rast_y1;
                __Vfunc_gpu_de1_soc_top__DOT__u_rasterizer__DOT__max3__3__b 
                    = vlSelfRef.gpu_de1_soc_top__DOT__rast_y1;
                vlSelfRef.gpu_de1_soc_top__DOT__u_rasterizer__DOT__vx0 
                    = vlSelfRef.gpu_de1_soc_top__DOT__rast_x0;
                vlSelfRef.gpu_de1_soc_top__DOT__u_rasterizer__DOT__vy0 
                    = vlSelfRef.gpu_de1_soc_top__DOT__rast_y0;
                vlSelfRef.gpu_de1_soc_top__DOT__u_rasterizer__DOT__vx1 
                    = vlSelfRef.gpu_de1_soc_top__DOT__rast_x1;
                vlSelfRef.gpu_de1_soc_top__DOT__u_rasterizer__DOT__vy1 
                    = vlSelfRef.gpu_de1_soc_top__DOT__rast_y1;
                vlSelfRef.gpu_de1_soc_top__DOT__u_rasterizer__DOT__vx2 
                    = vlSelfRef.gpu_de1_soc_top__DOT__rast_x2;
                vlSelfRef.gpu_de1_soc_top__DOT__u_rasterizer__DOT__vy2 
                    = vlSelfRef.gpu_de1_soc_top__DOT__rast_y2;
                __Vfunc_gpu_de1_soc_top__DOT__u_rasterizer__DOT__min3__0__a 
                    = vlSelfRef.gpu_de1_soc_top__DOT__rast_x0;
                __Vfunc_gpu_de1_soc_top__DOT__u_rasterizer__DOT__max3__1__a 
                    = vlSelfRef.gpu_de1_soc_top__DOT__rast_x0;
                __Vfunc_gpu_de1_soc_top__DOT__u_rasterizer__DOT__min3__2__a 
                    = vlSelfRef.gpu_de1_soc_top__DOT__rast_y0;
                __Vfunc_gpu_de1_soc_top__DOT__u_rasterizer__DOT__max3__3__a 
                    = vlSelfRef.gpu_de1_soc_top__DOT__rast_y0;
                vlSelfRef.__Vdly__gpu_de1_soc_top__DOT__u_rasterizer__DOT__state = 1U;
                __Vfunc_gpu_de1_soc_top__DOT__u_rasterizer__DOT__min3__0__Vfuncout 
                    = (((IData)(__Vfunc_gpu_de1_soc_top__DOT__u_rasterizer__DOT__min3__0__a) 
                        < (IData)(__Vfunc_gpu_de1_soc_top__DOT__u_rasterizer__DOT__min3__0__b))
                        ? (((IData)(__Vfunc_gpu_de1_soc_top__DOT__u_rasterizer__DOT__min3__0__a) 
                            < (IData)(__Vfunc_gpu_de1_soc_top__DOT__u_rasterizer__DOT__min3__0__c))
                            ? (IData)(__Vfunc_gpu_de1_soc_top__DOT__u_rasterizer__DOT__min3__0__a)
                            : (IData)(__Vfunc_gpu_de1_soc_top__DOT__u_rasterizer__DOT__min3__0__c))
                        : (((IData)(__Vfunc_gpu_de1_soc_top__DOT__u_rasterizer__DOT__min3__0__b) 
                            < (IData)(__Vfunc_gpu_de1_soc_top__DOT__u_rasterizer__DOT__min3__0__c))
                            ? (IData)(__Vfunc_gpu_de1_soc_top__DOT__u_rasterizer__DOT__min3__0__b)
                            : (IData)(__Vfunc_gpu_de1_soc_top__DOT__u_rasterizer__DOT__min3__0__c)));
                __Vfunc_gpu_de1_soc_top__DOT__u_rasterizer__DOT__max3__1__Vfuncout 
                    = (((IData)(__Vfunc_gpu_de1_soc_top__DOT__u_rasterizer__DOT__max3__1__a) 
                        > (IData)(__Vfunc_gpu_de1_soc_top__DOT__u_rasterizer__DOT__max3__1__b))
                        ? (((IData)(__Vfunc_gpu_de1_soc_top__DOT__u_rasterizer__DOT__max3__1__a) 
                            > (IData)(__Vfunc_gpu_de1_soc_top__DOT__u_rasterizer__DOT__max3__1__c))
                            ? (IData)(__Vfunc_gpu_de1_soc_top__DOT__u_rasterizer__DOT__max3__1__a)
                            : (IData)(__Vfunc_gpu_de1_soc_top__DOT__u_rasterizer__DOT__max3__1__c))
                        : (((IData)(__Vfunc_gpu_de1_soc_top__DOT__u_rasterizer__DOT__max3__1__b) 
                            > (IData)(__Vfunc_gpu_de1_soc_top__DOT__u_rasterizer__DOT__max3__1__c))
                            ? (IData)(__Vfunc_gpu_de1_soc_top__DOT__u_rasterizer__DOT__max3__1__b)
                            : (IData)(__Vfunc_gpu_de1_soc_top__DOT__u_rasterizer__DOT__max3__1__c)));
                __Vfunc_gpu_de1_soc_top__DOT__u_rasterizer__DOT__min3__2__Vfuncout 
                    = (((IData)(__Vfunc_gpu_de1_soc_top__DOT__u_rasterizer__DOT__min3__2__a) 
                        < (IData)(__Vfunc_gpu_de1_soc_top__DOT__u_rasterizer__DOT__min3__2__b))
                        ? (((IData)(__Vfunc_gpu_de1_soc_top__DOT__u_rasterizer__DOT__min3__2__a) 
                            < (IData)(__Vfunc_gpu_de1_soc_top__DOT__u_rasterizer__DOT__min3__2__c))
                            ? (IData)(__Vfunc_gpu_de1_soc_top__DOT__u_rasterizer__DOT__min3__2__a)
                            : (IData)(__Vfunc_gpu_de1_soc_top__DOT__u_rasterizer__DOT__min3__2__c))
                        : (((IData)(__Vfunc_gpu_de1_soc_top__DOT__u_rasterizer__DOT__min3__2__b) 
                            < (IData)(__Vfunc_gpu_de1_soc_top__DOT__u_rasterizer__DOT__min3__2__c))
                            ? (IData)(__Vfunc_gpu_de1_soc_top__DOT__u_rasterizer__DOT__min3__2__b)
                            : (IData)(__Vfunc_gpu_de1_soc_top__DOT__u_rasterizer__DOT__min3__2__c)));
                __Vfunc_gpu_de1_soc_top__DOT__u_rasterizer__DOT__max3__3__Vfuncout 
                    = (((IData)(__Vfunc_gpu_de1_soc_top__DOT__u_rasterizer__DOT__max3__3__a) 
                        > (IData)(__Vfunc_gpu_de1_soc_top__DOT__u_rasterizer__DOT__max3__3__b))
                        ? (((IData)(__Vfunc_gpu_de1_soc_top__DOT__u_rasterizer__DOT__max3__3__a) 
                            > (IData)(__Vfunc_gpu_de1_soc_top__DOT__u_rasterizer__DOT__max3__3__c))
                            ? (IData)(__Vfunc_gpu_de1_soc_top__DOT__u_rasterizer__DOT__max3__3__a)
                            : (IData)(__Vfunc_gpu_de1_soc_top__DOT__u_rasterizer__DOT__max3__3__c))
                        : (((IData)(__Vfunc_gpu_de1_soc_top__DOT__u_rasterizer__DOT__max3__3__b) 
                            > (IData)(__Vfunc_gpu_de1_soc_top__DOT__u_rasterizer__DOT__max3__3__c))
                            ? (IData)(__Vfunc_gpu_de1_soc_top__DOT__u_rasterizer__DOT__max3__3__b)
                            : (IData)(__Vfunc_gpu_de1_soc_top__DOT__u_rasterizer__DOT__max3__3__c)));
                vlSelfRef.gpu_de1_soc_top__DOT__u_rasterizer__DOT__min_x 
                    = __Vfunc_gpu_de1_soc_top__DOT__u_rasterizer__DOT__min3__0__Vfuncout;
                vlSelfRef.gpu_de1_soc_top__DOT__u_rasterizer__DOT__max_x 
                    = __Vfunc_gpu_de1_soc_top__DOT__u_rasterizer__DOT__max3__1__Vfuncout;
                vlSelfRef.gpu_de1_soc_top__DOT__u_rasterizer__DOT__min_y 
                    = __Vfunc_gpu_de1_soc_top__DOT__u_rasterizer__DOT__min3__2__Vfuncout;
                vlSelfRef.gpu_de1_soc_top__DOT__u_rasterizer__DOT__max_y 
                    = __Vfunc_gpu_de1_soc_top__DOT__u_rasterizer__DOT__max3__3__Vfuncout;
            }
        } else {
            vlSelfRef.gpu_de1_soc_top__DOT__rast_busy = 0U;
        }
    } else {
        vlSelfRef.gpu_de1_soc_top__DOT__tm_we = 0U;
        vlSelfRef.gpu_de1_soc_top__DOT__tm_tile_id = 0U;
        vlSelfRef.gpu_de1_soc_top__DOT__pal_we = 0U;
        vlSelfRef.gpu_de1_soc_top__DOT__pal_data = 0U;
        vlSelfRef.gpu_de1_soc_top__DOT__pal_addr = 0U;
        vlSelfRef.__Vdly__gpu_de1_soc_top__DOT__u_input_ctrl__DOT__state = 0U;
        vlSelfRef.gpu_de1_soc_top__DOT__cmd_data = 0U;
        vlSelfRef.gpu_de1_soc_top__DOT__cmd_valid = 0U;
        vlSelfRef.__Vdly__gpu_de1_soc_top__DOT__u_rasterizer__DOT__curr_x = 0U;
        vlSelfRef.__Vdly__gpu_de1_soc_top__DOT__u_rasterizer__DOT__curr_y = 0U;
        vlSelfRef.__Vdly__gpu_de1_soc_top__DOT__u_rasterizer__DOT__state = 0U;
        vlSelfRef.gpu_de1_soc_top__DOT__rast_busy = 0U;
        vlSelfRef.gpu_de1_soc_top__DOT__buf_we = 0U;
        vlSelfRef.gpu_de1_soc_top__DOT__buf_wr_addr = 0U;
        vlSelfRef.gpu_de1_soc_top__DOT__buf_wr_data = 0U;
    }
    vlSelfRef.gpu_de1_soc_top__DOT__u_input_ctrl__DOT__state 
        = vlSelfRef.__Vdly__gpu_de1_soc_top__DOT__u_input_ctrl__DOT__state;
    vlSelfRef.gpu_de1_soc_top__DOT__u_input_ctrl__DOT__bg_scroll_x 
        = vlSelfRef.__Vdly__gpu_de1_soc_top__DOT__u_input_ctrl__DOT__bg_scroll_x;
    vlSelfRef.gpu_de1_soc_top__DOT__u_input_ctrl__DOT__bird_y_sub 
        = vlSelfRef.__Vdly__gpu_de1_soc_top__DOT__u_input_ctrl__DOT__bird_y_sub;
    vlSelfRef.gpu_de1_soc_top__DOT__u_input_ctrl__DOT__frame_cnt 
        = vlSelfRef.__Vdly__gpu_de1_soc_top__DOT__u_input_ctrl__DOT__frame_cnt;
    vlSelfRef.gpu_de1_soc_top__DOT__u_input_ctrl__DOT__current_bird_y 
        = (0xffU & ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_input_ctrl__DOT__bird_y_sub) 
                    >> 4U));
    vlSelfRef.gpu_de1_soc_top__DOT__u_input_ctrl__DOT__frame_tick 
        = (0xcb735U == vlSelfRef.gpu_de1_soc_top__DOT__u_input_ctrl__DOT__frame_cnt);
    vlSelfRef.gpu_de1_soc_top__DOT__rast_color = vlSelfRef.__Vdly__gpu_de1_soc_top__DOT__rast_color;
    vlSelfRef.gpu_de1_soc_top__DOT__rast_start = vlSelfRef.__Vdly__gpu_de1_soc_top__DOT__rast_start;
    vlSelfRef.gpu_de1_soc_top__DOT__rast_clear_screen 
        = vlSelfRef.__Vdly__gpu_de1_soc_top__DOT__rast_clear_screen;
    vlSelfRef.gpu_de1_soc_top__DOT__rast_x2 = vlSelfRef.__Vdly__gpu_de1_soc_top__DOT__rast_x2;
    vlSelfRef.gpu_de1_soc_top__DOT__rast_y2 = vlSelfRef.__Vdly__gpu_de1_soc_top__DOT__rast_y2;
    vlSelfRef.gpu_de1_soc_top__DOT__rast_x1 = vlSelfRef.__Vdly__gpu_de1_soc_top__DOT__rast_x1;
    vlSelfRef.gpu_de1_soc_top__DOT__rast_y1 = vlSelfRef.__Vdly__gpu_de1_soc_top__DOT__rast_y1;
    vlSelfRef.gpu_de1_soc_top__DOT__rast_x0 = vlSelfRef.__Vdly__gpu_de1_soc_top__DOT__rast_x0;
    vlSelfRef.gpu_de1_soc_top__DOT__rast_y0 = vlSelfRef.__Vdly__gpu_de1_soc_top__DOT__rast_y0;
    vlSelfRef.gpu_de1_soc_top__DOT__u_rasterizer__DOT__state 
        = vlSelfRef.__Vdly__gpu_de1_soc_top__DOT__u_rasterizer__DOT__state;
    vlSelfRef.gpu_de1_soc_top__DOT__u_rasterizer__DOT__curr_x 
        = vlSelfRef.__Vdly__gpu_de1_soc_top__DOT__u_rasterizer__DOT__curr_x;
    vlSelfRef.gpu_de1_soc_top__DOT__u_rasterizer__DOT__curr_y 
        = vlSelfRef.__Vdly__gpu_de1_soc_top__DOT__u_rasterizer__DOT__curr_y;
    vlSelfRef.LEDR = ((0x3f8U & (IData)(vlSelfRef.LEDR)) 
                      | ((4U & ((IData)(vlSelfRef.SW) 
                                << 2U)) | (((IData)(vlSelfRef.gpu_de1_soc_top__DOT__cmd_valid) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.gpu_de1_soc_top__DOT__rast_busy))));
    vlSelfRef.gpu_de1_soc_top__DOT__u_rasterizer__DOT____VdfgRegularize_h9c5cd1d9_0_8 
        = VL_EXTENDS_II(32,22, (0x3fffffU & (VL_MULS_III(22, 
                                                         (0x3fffffU 
                                                          & (VL_EXTENDS_II(22,11, (IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_rasterizer__DOT__curr_x)) 
                                                             - 
                                                             VL_EXTENDS_II(22,11, (IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_rasterizer__DOT__vx0)))), 
                                                         (0x3fffffU 
                                                          & (VL_EXTENDS_II(22,11, (IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_rasterizer__DOT__vy1)) 
                                                             - 
                                                             VL_EXTENDS_II(22,11, (IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_rasterizer__DOT__vy0))))) 
                                             - VL_MULS_III(22, 
                                                           (0x3fffffU 
                                                            & (VL_EXTENDS_II(22,11, (IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_rasterizer__DOT__curr_y)) 
                                                               - 
                                                               VL_EXTENDS_II(22,11, (IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_rasterizer__DOT__vy0)))), 
                                                           (0x3fffffU 
                                                            & (VL_EXTENDS_II(22,11, (IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_rasterizer__DOT__vx1)) 
                                                               - 
                                                               VL_EXTENDS_II(22,11, (IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_rasterizer__DOT__vx0))))))));
    vlSelfRef.gpu_de1_soc_top__DOT__u_rasterizer__DOT____VdfgRegularize_h9c5cd1d9_0_9 
        = VL_EXTENDS_II(32,22, (0x3fffffU & (VL_MULS_III(22, 
                                                         (0x3fffffU 
                                                          & (VL_EXTENDS_II(22,11, (IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_rasterizer__DOT__curr_x)) 
                                                             - 
                                                             VL_EXTENDS_II(22,11, (IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_rasterizer__DOT__vx1)))), 
                                                         (0x3fffffU 
                                                          & (VL_EXTENDS_II(22,11, (IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_rasterizer__DOT__vy2)) 
                                                             - 
                                                             VL_EXTENDS_II(22,11, (IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_rasterizer__DOT__vy1))))) 
                                             - VL_MULS_III(22, 
                                                           (0x3fffffU 
                                                            & (VL_EXTENDS_II(22,11, (IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_rasterizer__DOT__curr_y)) 
                                                               - 
                                                               VL_EXTENDS_II(22,11, (IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_rasterizer__DOT__vy1)))), 
                                                           (0x3fffffU 
                                                            & (VL_EXTENDS_II(22,11, (IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_rasterizer__DOT__vx2)) 
                                                               - 
                                                               VL_EXTENDS_II(22,11, (IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_rasterizer__DOT__vx1))))))));
    vlSelfRef.gpu_de1_soc_top__DOT__u_rasterizer__DOT____VdfgRegularize_h9c5cd1d9_0_10 
        = VL_EXTENDS_II(32,22, (0x3fffffU & (VL_MULS_III(22, 
                                                         (0x3fffffU 
                                                          & (VL_EXTENDS_II(22,11, (IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_rasterizer__DOT__curr_x)) 
                                                             - 
                                                             VL_EXTENDS_II(22,11, (IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_rasterizer__DOT__vx2)))), 
                                                         (0x3fffffU 
                                                          & (VL_EXTENDS_II(22,11, (IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_rasterizer__DOT__vy0)) 
                                                             - 
                                                             VL_EXTENDS_II(22,11, (IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_rasterizer__DOT__vy2))))) 
                                             - VL_MULS_III(22, 
                                                           (0x3fffffU 
                                                            & (VL_EXTENDS_II(22,11, (IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_rasterizer__DOT__curr_y)) 
                                                               - 
                                                               VL_EXTENDS_II(22,11, (IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_rasterizer__DOT__vy2)))), 
                                                           (0x3fffffU 
                                                            & (VL_EXTENDS_II(22,11, (IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_rasterizer__DOT__vx0)) 
                                                               - 
                                                               VL_EXTENDS_II(22,11, (IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_rasterizer__DOT__vx2))))))));
}

VL_INLINE_OPT void Vgpu_de1_soc_top___024root___nba_sequent__TOP__4(Vgpu_de1_soc_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgpu_de1_soc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpu_de1_soc_top___024root___nba_sequent__TOP__4\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.gpu_de1_soc_top__DOT__poly_pixel = ((0x12bffU 
                                                   >= vlSelfRef.gpu_de1_soc_top__DOT__buf_rd_addr)
                                                   ? 
                                                  vlSelfRef.gpu_de1_soc_top__DOT__u_poly_buffer__DOT__ram
                                                  [vlSelfRef.gpu_de1_soc_top__DOT__buf_rd_addr]
                                                   : 0U);
}

VL_INLINE_OPT void Vgpu_de1_soc_top___024root___nba_comb__TOP__0(Vgpu_de1_soc_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgpu_de1_soc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpu_de1_soc_top___024root___nba_comb__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*9:0*/ gpu_de1_soc_top__DOT__u_bg_engine__DOT__sum_x;
    gpu_de1_soc_top__DOT__u_bg_engine__DOT__sum_x = 0;
    SData/*8:0*/ gpu_de1_soc_top__DOT__u_bg_engine__DOT__sum_y;
    gpu_de1_soc_top__DOT__u_bg_engine__DOT__sum_y = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__0__KET____DOT__rel_x;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__0__KET____DOT__rel_x = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__0__KET____DOT__rel_y;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__0__KET____DOT__rel_y = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__0__KET____DOT__eff_x;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__0__KET____DOT__eff_x = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__0__KET____DOT__eff_y;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__0__KET____DOT__eff_y = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__1__KET____DOT__rel_x;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__1__KET____DOT__rel_x = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__1__KET____DOT__rel_y;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__1__KET____DOT__rel_y = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__1__KET____DOT__eff_x;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__1__KET____DOT__eff_x = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__1__KET____DOT__eff_y;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__1__KET____DOT__eff_y = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__2__KET____DOT__rel_x;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__2__KET____DOT__rel_x = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__2__KET____DOT__rel_y;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__2__KET____DOT__rel_y = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__2__KET____DOT__eff_x;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__2__KET____DOT__eff_x = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__2__KET____DOT__eff_y;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__2__KET____DOT__eff_y = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__3__KET____DOT__rel_x;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__3__KET____DOT__rel_x = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__3__KET____DOT__rel_y;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__3__KET____DOT__rel_y = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__3__KET____DOT__eff_x;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__3__KET____DOT__eff_x = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__3__KET____DOT__eff_y;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__3__KET____DOT__eff_y = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__4__KET____DOT__rel_x;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__4__KET____DOT__rel_x = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__4__KET____DOT__rel_y;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__4__KET____DOT__rel_y = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__4__KET____DOT__eff_x;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__4__KET____DOT__eff_x = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__4__KET____DOT__eff_y;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__4__KET____DOT__eff_y = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__5__KET____DOT__rel_x;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__5__KET____DOT__rel_x = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__5__KET____DOT__rel_y;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__5__KET____DOT__rel_y = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__5__KET____DOT__eff_x;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__5__KET____DOT__eff_x = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__5__KET____DOT__eff_y;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__5__KET____DOT__eff_y = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__6__KET____DOT__rel_x;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__6__KET____DOT__rel_x = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__6__KET____DOT__rel_y;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__6__KET____DOT__rel_y = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__6__KET____DOT__eff_x;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__6__KET____DOT__eff_x = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__6__KET____DOT__eff_y;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__6__KET____DOT__eff_y = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__7__KET____DOT__rel_x;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__7__KET____DOT__rel_x = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__7__KET____DOT__rel_y;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__7__KET____DOT__rel_y = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__7__KET____DOT__eff_x;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__7__KET____DOT__eff_x = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__7__KET____DOT__eff_y;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__7__KET____DOT__eff_y = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__8__KET____DOT__rel_x;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__8__KET____DOT__rel_x = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__8__KET____DOT__rel_y;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__8__KET____DOT__rel_y = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__8__KET____DOT__eff_x;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__8__KET____DOT__eff_x = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__8__KET____DOT__eff_y;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__8__KET____DOT__eff_y = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__9__KET____DOT__rel_x;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__9__KET____DOT__rel_x = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__9__KET____DOT__rel_y;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__9__KET____DOT__rel_y = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__9__KET____DOT__eff_x;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__9__KET____DOT__eff_x = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__9__KET____DOT__eff_y;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__9__KET____DOT__eff_y = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__10__KET____DOT__rel_x;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__10__KET____DOT__rel_x = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__10__KET____DOT__rel_y;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__10__KET____DOT__rel_y = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__10__KET____DOT__eff_x;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__10__KET____DOT__eff_x = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__10__KET____DOT__eff_y;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__10__KET____DOT__eff_y = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__11__KET____DOT__rel_x;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__11__KET____DOT__rel_x = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__11__KET____DOT__rel_y;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__11__KET____DOT__rel_y = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__11__KET____DOT__eff_x;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__11__KET____DOT__eff_x = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__11__KET____DOT__eff_y;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__11__KET____DOT__eff_y = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__12__KET____DOT__rel_x;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__12__KET____DOT__rel_x = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__12__KET____DOT__rel_y;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__12__KET____DOT__rel_y = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__12__KET____DOT__eff_x;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__12__KET____DOT__eff_x = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__12__KET____DOT__eff_y;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__12__KET____DOT__eff_y = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__13__KET____DOT__rel_x;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__13__KET____DOT__rel_x = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__13__KET____DOT__rel_y;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__13__KET____DOT__rel_y = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__13__KET____DOT__eff_x;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__13__KET____DOT__eff_x = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__13__KET____DOT__eff_y;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__13__KET____DOT__eff_y = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__14__KET____DOT__rel_x;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__14__KET____DOT__rel_x = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__14__KET____DOT__rel_y;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__14__KET____DOT__rel_y = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__14__KET____DOT__eff_x;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__14__KET____DOT__eff_x = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__14__KET____DOT__eff_y;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__14__KET____DOT__eff_y = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__15__KET____DOT__rel_x;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__15__KET____DOT__rel_x = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__15__KET____DOT__rel_y;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__15__KET____DOT__rel_y = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__15__KET____DOT__eff_x;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__15__KET____DOT__eff_x = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__15__KET____DOT__eff_y;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__15__KET____DOT__eff_y = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__16__KET____DOT__rel_x;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__16__KET____DOT__rel_x = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__16__KET____DOT__rel_y;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__16__KET____DOT__rel_y = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__16__KET____DOT__eff_x;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__16__KET____DOT__eff_x = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__16__KET____DOT__eff_y;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__16__KET____DOT__eff_y = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__17__KET____DOT__rel_x;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__17__KET____DOT__rel_x = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__17__KET____DOT__rel_y;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__17__KET____DOT__rel_y = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__17__KET____DOT__eff_x;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__17__KET____DOT__eff_x = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__17__KET____DOT__eff_y;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__17__KET____DOT__eff_y = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__18__KET____DOT__rel_x;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__18__KET____DOT__rel_x = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__18__KET____DOT__rel_y;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__18__KET____DOT__rel_y = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__18__KET____DOT__eff_x;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__18__KET____DOT__eff_x = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__18__KET____DOT__eff_y;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__18__KET____DOT__eff_y = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__19__KET____DOT__rel_x;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__19__KET____DOT__rel_x = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__19__KET____DOT__rel_y;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__19__KET____DOT__rel_y = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__19__KET____DOT__eff_x;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__19__KET____DOT__eff_x = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__19__KET____DOT__eff_y;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__19__KET____DOT__eff_y = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__20__KET____DOT__rel_x;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__20__KET____DOT__rel_x = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__20__KET____DOT__rel_y;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__20__KET____DOT__rel_y = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__20__KET____DOT__eff_x;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__20__KET____DOT__eff_x = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__20__KET____DOT__eff_y;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__20__KET____DOT__eff_y = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__21__KET____DOT__rel_x;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__21__KET____DOT__rel_x = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__21__KET____DOT__rel_y;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__21__KET____DOT__rel_y = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__21__KET____DOT__eff_x;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__21__KET____DOT__eff_x = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__21__KET____DOT__eff_y;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__21__KET____DOT__eff_y = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__22__KET____DOT__rel_x;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__22__KET____DOT__rel_x = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__22__KET____DOT__rel_y;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__22__KET____DOT__rel_y = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__22__KET____DOT__eff_x;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__22__KET____DOT__eff_x = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__22__KET____DOT__eff_y;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__22__KET____DOT__eff_y = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__23__KET____DOT__rel_x;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__23__KET____DOT__rel_x = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__23__KET____DOT__rel_y;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__23__KET____DOT__rel_y = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__23__KET____DOT__eff_x;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__23__KET____DOT__eff_x = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__23__KET____DOT__eff_y;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__23__KET____DOT__eff_y = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__24__KET____DOT__rel_x;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__24__KET____DOT__rel_x = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__24__KET____DOT__rel_y;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__24__KET____DOT__rel_y = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__24__KET____DOT__eff_x;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__24__KET____DOT__eff_x = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__24__KET____DOT__eff_y;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__24__KET____DOT__eff_y = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__25__KET____DOT__rel_x;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__25__KET____DOT__rel_x = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__25__KET____DOT__rel_y;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__25__KET____DOT__rel_y = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__25__KET____DOT__eff_x;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__25__KET____DOT__eff_x = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__25__KET____DOT__eff_y;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__25__KET____DOT__eff_y = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__26__KET____DOT__rel_x;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__26__KET____DOT__rel_x = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__26__KET____DOT__rel_y;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__26__KET____DOT__rel_y = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__26__KET____DOT__eff_x;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__26__KET____DOT__eff_x = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__26__KET____DOT__eff_y;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__26__KET____DOT__eff_y = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__27__KET____DOT__rel_x;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__27__KET____DOT__rel_x = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__27__KET____DOT__rel_y;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__27__KET____DOT__rel_y = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__27__KET____DOT__eff_x;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__27__KET____DOT__eff_x = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__27__KET____DOT__eff_y;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__27__KET____DOT__eff_y = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__28__KET____DOT__rel_x;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__28__KET____DOT__rel_x = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__28__KET____DOT__rel_y;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__28__KET____DOT__rel_y = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__28__KET____DOT__eff_x;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__28__KET____DOT__eff_x = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__28__KET____DOT__eff_y;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__28__KET____DOT__eff_y = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__29__KET____DOT__rel_x;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__29__KET____DOT__rel_x = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__29__KET____DOT__rel_y;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__29__KET____DOT__rel_y = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__29__KET____DOT__eff_x;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__29__KET____DOT__eff_x = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__29__KET____DOT__eff_y;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__29__KET____DOT__eff_y = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__30__KET____DOT__rel_x;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__30__KET____DOT__rel_x = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__30__KET____DOT__rel_y;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__30__KET____DOT__rel_y = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__30__KET____DOT__eff_x;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__30__KET____DOT__eff_x = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__30__KET____DOT__eff_y;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__30__KET____DOT__eff_y = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__31__KET____DOT__rel_x;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__31__KET____DOT__rel_x = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__31__KET____DOT__rel_y;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__31__KET____DOT__rel_y = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__31__KET____DOT__eff_x;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__31__KET____DOT__eff_x = 0;
    CData/*3:0*/ gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__31__KET____DOT__eff_y;
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__31__KET____DOT__eff_y = 0;
    // Body
    if (vlSelfRef.VGA_BLANK_N) {
        vlSelfRef.VGA_R = (0xffU & (vlSelfRef.gpu_de1_soc_top__DOT__rgb_24 
                                    >> 0x10U));
        vlSelfRef.VGA_G = (0xffU & (vlSelfRef.gpu_de1_soc_top__DOT__rgb_24 
                                    >> 8U));
        vlSelfRef.VGA_B = (0xffU & vlSelfRef.gpu_de1_soc_top__DOT__rgb_24);
    } else {
        vlSelfRef.VGA_R = 0U;
        vlSelfRef.VGA_G = 0U;
        vlSelfRef.VGA_B = 0U;
    }
    gpu_de1_soc_top__DOT__u_bg_engine__DOT__sum_y = 
        (0x1ffU & ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_y) 
                   + (IData)(vlSelfRef.gpu_de1_soc_top__DOT__scroll_y)));
    gpu_de1_soc_top__DOT__u_bg_engine__DOT__sum_x = 
        (0x3ffU & ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_x) 
                   + (IData)(vlSelfRef.gpu_de1_soc_top__DOT__scroll_x)));
    vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_hit[0U] 
        = ((vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
            [0U] >> 0x1fU) & (((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_x) 
                               >= (0x1ffU & (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                             [0U] >> 0x10U))) 
                              & (((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_x) 
                                  < (0x1ffU & ((IData)(0x10U) 
                                               + (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                                  [0U] 
                                                  >> 0x10U)))) 
                                 & (((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_y) 
                                     >= (0xffU & (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                                  [0U] 
                                                  >> 8U))) 
                                    & ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_y) 
                                       < (0xffU & ((IData)(0x10U) 
                                                   + 
                                                   (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                                    [0U] 
                                                    >> 8U))))))));
    vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_hit[1U] 
        = ((vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
            [1U] >> 0x1fU) & (((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_x) 
                               >= (0x1ffU & (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                             [1U] >> 0x10U))) 
                              & (((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_x) 
                                  < (0x1ffU & ((IData)(0x10U) 
                                               + (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                                  [1U] 
                                                  >> 0x10U)))) 
                                 & (((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_y) 
                                     >= (0xffU & (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                                  [1U] 
                                                  >> 8U))) 
                                    & ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_y) 
                                       < (0xffU & ((IData)(0x10U) 
                                                   + 
                                                   (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                                    [1U] 
                                                    >> 8U))))))));
    vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_hit[2U] 
        = ((vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
            [2U] >> 0x1fU) & (((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_x) 
                               >= (0x1ffU & (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                             [2U] >> 0x10U))) 
                              & (((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_x) 
                                  < (0x1ffU & ((IData)(0x10U) 
                                               + (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                                  [2U] 
                                                  >> 0x10U)))) 
                                 & (((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_y) 
                                     >= (0xffU & (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                                  [2U] 
                                                  >> 8U))) 
                                    & ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_y) 
                                       < (0xffU & ((IData)(0x10U) 
                                                   + 
                                                   (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                                    [2U] 
                                                    >> 8U))))))));
    vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_hit[3U] 
        = ((vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
            [3U] >> 0x1fU) & (((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_x) 
                               >= (0x1ffU & (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                             [3U] >> 0x10U))) 
                              & (((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_x) 
                                  < (0x1ffU & ((IData)(0x10U) 
                                               + (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                                  [3U] 
                                                  >> 0x10U)))) 
                                 & (((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_y) 
                                     >= (0xffU & (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                                  [3U] 
                                                  >> 8U))) 
                                    & ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_y) 
                                       < (0xffU & ((IData)(0x10U) 
                                                   + 
                                                   (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                                    [3U] 
                                                    >> 8U))))))));
    vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_hit[4U] 
        = ((vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
            [4U] >> 0x1fU) & (((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_x) 
                               >= (0x1ffU & (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                             [4U] >> 0x10U))) 
                              & (((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_x) 
                                  < (0x1ffU & ((IData)(0x10U) 
                                               + (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                                  [4U] 
                                                  >> 0x10U)))) 
                                 & (((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_y) 
                                     >= (0xffU & (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                                  [4U] 
                                                  >> 8U))) 
                                    & ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_y) 
                                       < (0xffU & ((IData)(0x10U) 
                                                   + 
                                                   (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                                    [4U] 
                                                    >> 8U))))))));
    vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_hit[5U] 
        = ((vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
            [5U] >> 0x1fU) & (((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_x) 
                               >= (0x1ffU & (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                             [5U] >> 0x10U))) 
                              & (((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_x) 
                                  < (0x1ffU & ((IData)(0x10U) 
                                               + (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                                  [5U] 
                                                  >> 0x10U)))) 
                                 & (((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_y) 
                                     >= (0xffU & (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                                  [5U] 
                                                  >> 8U))) 
                                    & ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_y) 
                                       < (0xffU & ((IData)(0x10U) 
                                                   + 
                                                   (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                                    [5U] 
                                                    >> 8U))))))));
    vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_hit[6U] 
        = ((vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
            [6U] >> 0x1fU) & (((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_x) 
                               >= (0x1ffU & (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                             [6U] >> 0x10U))) 
                              & (((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_x) 
                                  < (0x1ffU & ((IData)(0x10U) 
                                               + (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                                  [6U] 
                                                  >> 0x10U)))) 
                                 & (((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_y) 
                                     >= (0xffU & (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                                  [6U] 
                                                  >> 8U))) 
                                    & ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_y) 
                                       < (0xffU & ((IData)(0x10U) 
                                                   + 
                                                   (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                                    [6U] 
                                                    >> 8U))))))));
    vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_hit[7U] 
        = ((vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
            [7U] >> 0x1fU) & (((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_x) 
                               >= (0x1ffU & (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                             [7U] >> 0x10U))) 
                              & (((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_x) 
                                  < (0x1ffU & ((IData)(0x10U) 
                                               + (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                                  [7U] 
                                                  >> 0x10U)))) 
                                 & (((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_y) 
                                     >= (0xffU & (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                                  [7U] 
                                                  >> 8U))) 
                                    & ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_y) 
                                       < (0xffU & ((IData)(0x10U) 
                                                   + 
                                                   (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                                    [7U] 
                                                    >> 8U))))))));
    vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_hit[8U] 
        = ((vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
            [8U] >> 0x1fU) & (((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_x) 
                               >= (0x1ffU & (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                             [8U] >> 0x10U))) 
                              & (((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_x) 
                                  < (0x1ffU & ((IData)(0x10U) 
                                               + (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                                  [8U] 
                                                  >> 0x10U)))) 
                                 & (((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_y) 
                                     >= (0xffU & (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                                  [8U] 
                                                  >> 8U))) 
                                    & ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_y) 
                                       < (0xffU & ((IData)(0x10U) 
                                                   + 
                                                   (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                                    [8U] 
                                                    >> 8U))))))));
    vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_hit[9U] 
        = ((vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
            [9U] >> 0x1fU) & (((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_x) 
                               >= (0x1ffU & (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                             [9U] >> 0x10U))) 
                              & (((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_x) 
                                  < (0x1ffU & ((IData)(0x10U) 
                                               + (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                                  [9U] 
                                                  >> 0x10U)))) 
                                 & (((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_y) 
                                     >= (0xffU & (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                                  [9U] 
                                                  >> 8U))) 
                                    & ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_y) 
                                       < (0xffU & ((IData)(0x10U) 
                                                   + 
                                                   (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                                    [9U] 
                                                    >> 8U))))))));
    vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_hit[0xaU] 
        = ((vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
            [0xaU] >> 0x1fU) & (((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_x) 
                                 >= (0x1ffU & (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                               [0xaU] 
                                               >> 0x10U))) 
                                & (((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_x) 
                                    < (0x1ffU & ((IData)(0x10U) 
                                                 + 
                                                 (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                                  [0xaU] 
                                                  >> 0x10U)))) 
                                   & (((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_y) 
                                       >= (0xffU & 
                                           (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                            [0xaU] 
                                            >> 8U))) 
                                      & ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_y) 
                                         < (0xffU & 
                                            ((IData)(0x10U) 
                                             + (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                                [0xaU] 
                                                >> 8U))))))));
    vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_hit[0xbU] 
        = ((vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
            [0xbU] >> 0x1fU) & (((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_x) 
                                 >= (0x1ffU & (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                               [0xbU] 
                                               >> 0x10U))) 
                                & (((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_x) 
                                    < (0x1ffU & ((IData)(0x10U) 
                                                 + 
                                                 (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                                  [0xbU] 
                                                  >> 0x10U)))) 
                                   & (((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_y) 
                                       >= (0xffU & 
                                           (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                            [0xbU] 
                                            >> 8U))) 
                                      & ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_y) 
                                         < (0xffU & 
                                            ((IData)(0x10U) 
                                             + (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                                [0xbU] 
                                                >> 8U))))))));
    vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_hit[0xcU] 
        = ((vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
            [0xcU] >> 0x1fU) & (((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_x) 
                                 >= (0x1ffU & (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                               [0xcU] 
                                               >> 0x10U))) 
                                & (((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_x) 
                                    < (0x1ffU & ((IData)(0x10U) 
                                                 + 
                                                 (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                                  [0xcU] 
                                                  >> 0x10U)))) 
                                   & (((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_y) 
                                       >= (0xffU & 
                                           (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                            [0xcU] 
                                            >> 8U))) 
                                      & ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_y) 
                                         < (0xffU & 
                                            ((IData)(0x10U) 
                                             + (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                                [0xcU] 
                                                >> 8U))))))));
    vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_hit[0xdU] 
        = ((vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
            [0xdU] >> 0x1fU) & (((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_x) 
                                 >= (0x1ffU & (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                               [0xdU] 
                                               >> 0x10U))) 
                                & (((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_x) 
                                    < (0x1ffU & ((IData)(0x10U) 
                                                 + 
                                                 (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                                  [0xdU] 
                                                  >> 0x10U)))) 
                                   & (((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_y) 
                                       >= (0xffU & 
                                           (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                            [0xdU] 
                                            >> 8U))) 
                                      & ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_y) 
                                         < (0xffU & 
                                            ((IData)(0x10U) 
                                             + (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                                [0xdU] 
                                                >> 8U))))))));
    vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_hit[0xeU] 
        = ((vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
            [0xeU] >> 0x1fU) & (((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_x) 
                                 >= (0x1ffU & (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                               [0xeU] 
                                               >> 0x10U))) 
                                & (((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_x) 
                                    < (0x1ffU & ((IData)(0x10U) 
                                                 + 
                                                 (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                                  [0xeU] 
                                                  >> 0x10U)))) 
                                   & (((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_y) 
                                       >= (0xffU & 
                                           (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                            [0xeU] 
                                            >> 8U))) 
                                      & ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_y) 
                                         < (0xffU & 
                                            ((IData)(0x10U) 
                                             + (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                                [0xeU] 
                                                >> 8U))))))));
    vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_hit[0xfU] 
        = ((vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
            [0xfU] >> 0x1fU) & (((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_x) 
                                 >= (0x1ffU & (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                               [0xfU] 
                                               >> 0x10U))) 
                                & (((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_x) 
                                    < (0x1ffU & ((IData)(0x10U) 
                                                 + 
                                                 (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                                  [0xfU] 
                                                  >> 0x10U)))) 
                                   & (((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_y) 
                                       >= (0xffU & 
                                           (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                            [0xfU] 
                                            >> 8U))) 
                                      & ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_y) 
                                         < (0xffU & 
                                            ((IData)(0x10U) 
                                             + (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                                [0xfU] 
                                                >> 8U))))))));
    vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_hit[0x10U] 
        = ((vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
            [0x10U] >> 0x1fU) & (((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_x) 
                                  >= (0x1ffU & (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                                [0x10U] 
                                                >> 0x10U))) 
                                 & (((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_x) 
                                     < (0x1ffU & ((IData)(0x10U) 
                                                  + 
                                                  (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                                   [0x10U] 
                                                   >> 0x10U)))) 
                                    & (((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_y) 
                                        >= (0xffU & 
                                            (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                             [0x10U] 
                                             >> 8U))) 
                                       & ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_y) 
                                          < (0xffU 
                                             & ((IData)(0x10U) 
                                                + (
                                                   vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                                   [0x10U] 
                                                   >> 8U))))))));
    vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_hit[0x11U] 
        = ((vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
            [0x11U] >> 0x1fU) & (((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_x) 
                                  >= (0x1ffU & (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                                [0x11U] 
                                                >> 0x10U))) 
                                 & (((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_x) 
                                     < (0x1ffU & ((IData)(0x10U) 
                                                  + 
                                                  (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                                   [0x11U] 
                                                   >> 0x10U)))) 
                                    & (((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_y) 
                                        >= (0xffU & 
                                            (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                             [0x11U] 
                                             >> 8U))) 
                                       & ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_y) 
                                          < (0xffU 
                                             & ((IData)(0x10U) 
                                                + (
                                                   vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                                   [0x11U] 
                                                   >> 8U))))))));
    vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_hit[0x12U] 
        = ((vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
            [0x12U] >> 0x1fU) & (((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_x) 
                                  >= (0x1ffU & (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                                [0x12U] 
                                                >> 0x10U))) 
                                 & (((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_x) 
                                     < (0x1ffU & ((IData)(0x10U) 
                                                  + 
                                                  (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                                   [0x12U] 
                                                   >> 0x10U)))) 
                                    & (((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_y) 
                                        >= (0xffU & 
                                            (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                             [0x12U] 
                                             >> 8U))) 
                                       & ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_y) 
                                          < (0xffU 
                                             & ((IData)(0x10U) 
                                                + (
                                                   vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                                   [0x12U] 
                                                   >> 8U))))))));
    vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_hit[0x13U] 
        = ((vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
            [0x13U] >> 0x1fU) & (((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_x) 
                                  >= (0x1ffU & (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                                [0x13U] 
                                                >> 0x10U))) 
                                 & (((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_x) 
                                     < (0x1ffU & ((IData)(0x10U) 
                                                  + 
                                                  (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                                   [0x13U] 
                                                   >> 0x10U)))) 
                                    & (((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_y) 
                                        >= (0xffU & 
                                            (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                             [0x13U] 
                                             >> 8U))) 
                                       & ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_y) 
                                          < (0xffU 
                                             & ((IData)(0x10U) 
                                                + (
                                                   vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                                   [0x13U] 
                                                   >> 8U))))))));
    vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_hit[0x14U] 
        = ((vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
            [0x14U] >> 0x1fU) & (((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_x) 
                                  >= (0x1ffU & (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                                [0x14U] 
                                                >> 0x10U))) 
                                 & (((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_x) 
                                     < (0x1ffU & ((IData)(0x10U) 
                                                  + 
                                                  (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                                   [0x14U] 
                                                   >> 0x10U)))) 
                                    & (((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_y) 
                                        >= (0xffU & 
                                            (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                             [0x14U] 
                                             >> 8U))) 
                                       & ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_y) 
                                          < (0xffU 
                                             & ((IData)(0x10U) 
                                                + (
                                                   vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                                   [0x14U] 
                                                   >> 8U))))))));
    vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_hit[0x15U] 
        = ((vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
            [0x15U] >> 0x1fU) & (((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_x) 
                                  >= (0x1ffU & (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                                [0x15U] 
                                                >> 0x10U))) 
                                 & (((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_x) 
                                     < (0x1ffU & ((IData)(0x10U) 
                                                  + 
                                                  (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                                   [0x15U] 
                                                   >> 0x10U)))) 
                                    & (((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_y) 
                                        >= (0xffU & 
                                            (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                             [0x15U] 
                                             >> 8U))) 
                                       & ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_y) 
                                          < (0xffU 
                                             & ((IData)(0x10U) 
                                                + (
                                                   vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                                   [0x15U] 
                                                   >> 8U))))))));
    vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_hit[0x16U] 
        = ((vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
            [0x16U] >> 0x1fU) & (((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_x) 
                                  >= (0x1ffU & (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                                [0x16U] 
                                                >> 0x10U))) 
                                 & (((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_x) 
                                     < (0x1ffU & ((IData)(0x10U) 
                                                  + 
                                                  (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                                   [0x16U] 
                                                   >> 0x10U)))) 
                                    & (((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_y) 
                                        >= (0xffU & 
                                            (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                             [0x16U] 
                                             >> 8U))) 
                                       & ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_y) 
                                          < (0xffU 
                                             & ((IData)(0x10U) 
                                                + (
                                                   vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                                   [0x16U] 
                                                   >> 8U))))))));
    vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_hit[0x17U] 
        = ((vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
            [0x17U] >> 0x1fU) & (((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_x) 
                                  >= (0x1ffU & (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                                [0x17U] 
                                                >> 0x10U))) 
                                 & (((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_x) 
                                     < (0x1ffU & ((IData)(0x10U) 
                                                  + 
                                                  (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                                   [0x17U] 
                                                   >> 0x10U)))) 
                                    & (((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_y) 
                                        >= (0xffU & 
                                            (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                             [0x17U] 
                                             >> 8U))) 
                                       & ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_y) 
                                          < (0xffU 
                                             & ((IData)(0x10U) 
                                                + (
                                                   vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                                   [0x17U] 
                                                   >> 8U))))))));
    vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_hit[0x18U] 
        = ((vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
            [0x18U] >> 0x1fU) & (((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_x) 
                                  >= (0x1ffU & (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                                [0x18U] 
                                                >> 0x10U))) 
                                 & (((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_x) 
                                     < (0x1ffU & ((IData)(0x10U) 
                                                  + 
                                                  (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                                   [0x18U] 
                                                   >> 0x10U)))) 
                                    & (((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_y) 
                                        >= (0xffU & 
                                            (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                             [0x18U] 
                                             >> 8U))) 
                                       & ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_y) 
                                          < (0xffU 
                                             & ((IData)(0x10U) 
                                                + (
                                                   vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                                   [0x18U] 
                                                   >> 8U))))))));
    vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_hit[0x19U] 
        = ((vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
            [0x19U] >> 0x1fU) & (((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_x) 
                                  >= (0x1ffU & (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                                [0x19U] 
                                                >> 0x10U))) 
                                 & (((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_x) 
                                     < (0x1ffU & ((IData)(0x10U) 
                                                  + 
                                                  (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                                   [0x19U] 
                                                   >> 0x10U)))) 
                                    & (((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_y) 
                                        >= (0xffU & 
                                            (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                             [0x19U] 
                                             >> 8U))) 
                                       & ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_y) 
                                          < (0xffU 
                                             & ((IData)(0x10U) 
                                                + (
                                                   vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                                   [0x19U] 
                                                   >> 8U))))))));
    vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_hit[0x1aU] 
        = ((vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
            [0x1aU] >> 0x1fU) & (((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_x) 
                                  >= (0x1ffU & (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                                [0x1aU] 
                                                >> 0x10U))) 
                                 & (((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_x) 
                                     < (0x1ffU & ((IData)(0x10U) 
                                                  + 
                                                  (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                                   [0x1aU] 
                                                   >> 0x10U)))) 
                                    & (((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_y) 
                                        >= (0xffU & 
                                            (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                             [0x1aU] 
                                             >> 8U))) 
                                       & ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_y) 
                                          < (0xffU 
                                             & ((IData)(0x10U) 
                                                + (
                                                   vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                                   [0x1aU] 
                                                   >> 8U))))))));
    vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_hit[0x1bU] 
        = ((vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
            [0x1bU] >> 0x1fU) & (((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_x) 
                                  >= (0x1ffU & (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                                [0x1bU] 
                                                >> 0x10U))) 
                                 & (((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_x) 
                                     < (0x1ffU & ((IData)(0x10U) 
                                                  + 
                                                  (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                                   [0x1bU] 
                                                   >> 0x10U)))) 
                                    & (((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_y) 
                                        >= (0xffU & 
                                            (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                             [0x1bU] 
                                             >> 8U))) 
                                       & ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_y) 
                                          < (0xffU 
                                             & ((IData)(0x10U) 
                                                + (
                                                   vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                                   [0x1bU] 
                                                   >> 8U))))))));
    vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_hit[0x1cU] 
        = ((vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
            [0x1cU] >> 0x1fU) & (((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_x) 
                                  >= (0x1ffU & (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                                [0x1cU] 
                                                >> 0x10U))) 
                                 & (((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_x) 
                                     < (0x1ffU & ((IData)(0x10U) 
                                                  + 
                                                  (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                                   [0x1cU] 
                                                   >> 0x10U)))) 
                                    & (((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_y) 
                                        >= (0xffU & 
                                            (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                             [0x1cU] 
                                             >> 8U))) 
                                       & ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_y) 
                                          < (0xffU 
                                             & ((IData)(0x10U) 
                                                + (
                                                   vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                                   [0x1cU] 
                                                   >> 8U))))))));
    vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_hit[0x1dU] 
        = ((vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
            [0x1dU] >> 0x1fU) & (((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_x) 
                                  >= (0x1ffU & (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                                [0x1dU] 
                                                >> 0x10U))) 
                                 & (((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_x) 
                                     < (0x1ffU & ((IData)(0x10U) 
                                                  + 
                                                  (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                                   [0x1dU] 
                                                   >> 0x10U)))) 
                                    & (((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_y) 
                                        >= (0xffU & 
                                            (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                             [0x1dU] 
                                             >> 8U))) 
                                       & ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_y) 
                                          < (0xffU 
                                             & ((IData)(0x10U) 
                                                + (
                                                   vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                                   [0x1dU] 
                                                   >> 8U))))))));
    vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_hit[0x1eU] 
        = ((vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
            [0x1eU] >> 0x1fU) & (((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_x) 
                                  >= (0x1ffU & (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                                [0x1eU] 
                                                >> 0x10U))) 
                                 & (((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_x) 
                                     < (0x1ffU & ((IData)(0x10U) 
                                                  + 
                                                  (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                                   [0x1eU] 
                                                   >> 0x10U)))) 
                                    & (((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_y) 
                                        >= (0xffU & 
                                            (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                             [0x1eU] 
                                             >> 8U))) 
                                       & ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_y) 
                                          < (0xffU 
                                             & ((IData)(0x10U) 
                                                + (
                                                   vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                                   [0x1eU] 
                                                   >> 8U))))))));
    vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_hit[0x1fU] 
        = ((vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
            [0x1fU] >> 0x1fU) & (((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_x) 
                                  >= (0x1ffU & (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                                [0x1fU] 
                                                >> 0x10U))) 
                                 & (((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_x) 
                                     < (0x1ffU & ((IData)(0x10U) 
                                                  + 
                                                  (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                                   [0x1fU] 
                                                   >> 0x10U)))) 
                                    & (((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_y) 
                                        >= (0xffU & 
                                            (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                             [0x1fU] 
                                             >> 8U))) 
                                       & ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_y) 
                                          < (0xffU 
                                             & ((IData)(0x10U) 
                                                + (
                                                   vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                                                   [0x1fU] 
                                                   >> 8U))))))));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__0__KET____DOT__rel_x 
        = (0xfU & ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT____VdfgRegularize_h46df5cdf_0_0) 
                   - (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                      [0U] >> 0x10U)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__1__KET____DOT__rel_x 
        = (0xfU & ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT____VdfgRegularize_h46df5cdf_0_0) 
                   - (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                      [1U] >> 0x10U)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__2__KET____DOT__rel_x 
        = (0xfU & ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT____VdfgRegularize_h46df5cdf_0_0) 
                   - (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                      [2U] >> 0x10U)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__3__KET____DOT__rel_x 
        = (0xfU & ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT____VdfgRegularize_h46df5cdf_0_0) 
                   - (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                      [3U] >> 0x10U)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__4__KET____DOT__rel_x 
        = (0xfU & ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT____VdfgRegularize_h46df5cdf_0_0) 
                   - (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                      [4U] >> 0x10U)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__5__KET____DOT__rel_x 
        = (0xfU & ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT____VdfgRegularize_h46df5cdf_0_0) 
                   - (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                      [5U] >> 0x10U)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__6__KET____DOT__rel_x 
        = (0xfU & ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT____VdfgRegularize_h46df5cdf_0_0) 
                   - (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                      [6U] >> 0x10U)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__7__KET____DOT__rel_x 
        = (0xfU & ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT____VdfgRegularize_h46df5cdf_0_0) 
                   - (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                      [7U] >> 0x10U)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__8__KET____DOT__rel_x 
        = (0xfU & ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT____VdfgRegularize_h46df5cdf_0_0) 
                   - (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                      [8U] >> 0x10U)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__9__KET____DOT__rel_x 
        = (0xfU & ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT____VdfgRegularize_h46df5cdf_0_0) 
                   - (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                      [9U] >> 0x10U)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__10__KET____DOT__rel_x 
        = (0xfU & ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT____VdfgRegularize_h46df5cdf_0_0) 
                   - (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                      [0xaU] >> 0x10U)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__11__KET____DOT__rel_x 
        = (0xfU & ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT____VdfgRegularize_h46df5cdf_0_0) 
                   - (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                      [0xbU] >> 0x10U)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__12__KET____DOT__rel_x 
        = (0xfU & ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT____VdfgRegularize_h46df5cdf_0_0) 
                   - (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                      [0xcU] >> 0x10U)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__13__KET____DOT__rel_x 
        = (0xfU & ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT____VdfgRegularize_h46df5cdf_0_0) 
                   - (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                      [0xdU] >> 0x10U)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__14__KET____DOT__rel_x 
        = (0xfU & ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT____VdfgRegularize_h46df5cdf_0_0) 
                   - (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                      [0xeU] >> 0x10U)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__15__KET____DOT__rel_x 
        = (0xfU & ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT____VdfgRegularize_h46df5cdf_0_0) 
                   - (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                      [0xfU] >> 0x10U)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__16__KET____DOT__rel_x 
        = (0xfU & ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT____VdfgRegularize_h46df5cdf_0_0) 
                   - (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                      [0x10U] >> 0x10U)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__17__KET____DOT__rel_x 
        = (0xfU & ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT____VdfgRegularize_h46df5cdf_0_0) 
                   - (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                      [0x11U] >> 0x10U)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__18__KET____DOT__rel_x 
        = (0xfU & ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT____VdfgRegularize_h46df5cdf_0_0) 
                   - (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                      [0x12U] >> 0x10U)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__19__KET____DOT__rel_x 
        = (0xfU & ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT____VdfgRegularize_h46df5cdf_0_0) 
                   - (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                      [0x13U] >> 0x10U)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__20__KET____DOT__rel_x 
        = (0xfU & ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT____VdfgRegularize_h46df5cdf_0_0) 
                   - (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                      [0x14U] >> 0x10U)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__21__KET____DOT__rel_x 
        = (0xfU & ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT____VdfgRegularize_h46df5cdf_0_0) 
                   - (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                      [0x15U] >> 0x10U)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__22__KET____DOT__rel_x 
        = (0xfU & ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT____VdfgRegularize_h46df5cdf_0_0) 
                   - (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                      [0x16U] >> 0x10U)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__23__KET____DOT__rel_x 
        = (0xfU & ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT____VdfgRegularize_h46df5cdf_0_0) 
                   - (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                      [0x17U] >> 0x10U)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__24__KET____DOT__rel_x 
        = (0xfU & ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT____VdfgRegularize_h46df5cdf_0_0) 
                   - (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                      [0x18U] >> 0x10U)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__25__KET____DOT__rel_x 
        = (0xfU & ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT____VdfgRegularize_h46df5cdf_0_0) 
                   - (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                      [0x19U] >> 0x10U)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__26__KET____DOT__rel_x 
        = (0xfU & ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT____VdfgRegularize_h46df5cdf_0_0) 
                   - (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                      [0x1aU] >> 0x10U)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__27__KET____DOT__rel_x 
        = (0xfU & ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT____VdfgRegularize_h46df5cdf_0_0) 
                   - (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                      [0x1bU] >> 0x10U)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__28__KET____DOT__rel_x 
        = (0xfU & ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT____VdfgRegularize_h46df5cdf_0_0) 
                   - (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                      [0x1cU] >> 0x10U)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__29__KET____DOT__rel_x 
        = (0xfU & ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT____VdfgRegularize_h46df5cdf_0_0) 
                   - (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                      [0x1dU] >> 0x10U)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__30__KET____DOT__rel_x 
        = (0xfU & ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT____VdfgRegularize_h46df5cdf_0_0) 
                   - (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                      [0x1eU] >> 0x10U)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__31__KET____DOT__rel_x 
        = (0xfU & ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT____VdfgRegularize_h46df5cdf_0_0) 
                   - (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                      [0x1fU] >> 0x10U)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__0__KET____DOT__rel_y 
        = (0xfU & ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT____VdfgRegularize_h46df5cdf_0_1) 
                   - (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                      [0U] >> 8U)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__1__KET____DOT__rel_y 
        = (0xfU & ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT____VdfgRegularize_h46df5cdf_0_1) 
                   - (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                      [1U] >> 8U)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__2__KET____DOT__rel_y 
        = (0xfU & ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT____VdfgRegularize_h46df5cdf_0_1) 
                   - (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                      [2U] >> 8U)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__3__KET____DOT__rel_y 
        = (0xfU & ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT____VdfgRegularize_h46df5cdf_0_1) 
                   - (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                      [3U] >> 8U)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__4__KET____DOT__rel_y 
        = (0xfU & ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT____VdfgRegularize_h46df5cdf_0_1) 
                   - (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                      [4U] >> 8U)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__5__KET____DOT__rel_y 
        = (0xfU & ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT____VdfgRegularize_h46df5cdf_0_1) 
                   - (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                      [5U] >> 8U)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__6__KET____DOT__rel_y 
        = (0xfU & ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT____VdfgRegularize_h46df5cdf_0_1) 
                   - (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                      [6U] >> 8U)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__7__KET____DOT__rel_y 
        = (0xfU & ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT____VdfgRegularize_h46df5cdf_0_1) 
                   - (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                      [7U] >> 8U)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__8__KET____DOT__rel_y 
        = (0xfU & ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT____VdfgRegularize_h46df5cdf_0_1) 
                   - (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                      [8U] >> 8U)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__9__KET____DOT__rel_y 
        = (0xfU & ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT____VdfgRegularize_h46df5cdf_0_1) 
                   - (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                      [9U] >> 8U)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__10__KET____DOT__rel_y 
        = (0xfU & ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT____VdfgRegularize_h46df5cdf_0_1) 
                   - (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                      [0xaU] >> 8U)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__11__KET____DOT__rel_y 
        = (0xfU & ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT____VdfgRegularize_h46df5cdf_0_1) 
                   - (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                      [0xbU] >> 8U)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__12__KET____DOT__rel_y 
        = (0xfU & ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT____VdfgRegularize_h46df5cdf_0_1) 
                   - (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                      [0xcU] >> 8U)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__13__KET____DOT__rel_y 
        = (0xfU & ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT____VdfgRegularize_h46df5cdf_0_1) 
                   - (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                      [0xdU] >> 8U)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__14__KET____DOT__rel_y 
        = (0xfU & ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT____VdfgRegularize_h46df5cdf_0_1) 
                   - (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                      [0xeU] >> 8U)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__15__KET____DOT__rel_y 
        = (0xfU & ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT____VdfgRegularize_h46df5cdf_0_1) 
                   - (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                      [0xfU] >> 8U)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__16__KET____DOT__rel_y 
        = (0xfU & ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT____VdfgRegularize_h46df5cdf_0_1) 
                   - (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                      [0x10U] >> 8U)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__17__KET____DOT__rel_y 
        = (0xfU & ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT____VdfgRegularize_h46df5cdf_0_1) 
                   - (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                      [0x11U] >> 8U)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__18__KET____DOT__rel_y 
        = (0xfU & ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT____VdfgRegularize_h46df5cdf_0_1) 
                   - (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                      [0x12U] >> 8U)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__19__KET____DOT__rel_y 
        = (0xfU & ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT____VdfgRegularize_h46df5cdf_0_1) 
                   - (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                      [0x13U] >> 8U)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__20__KET____DOT__rel_y 
        = (0xfU & ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT____VdfgRegularize_h46df5cdf_0_1) 
                   - (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                      [0x14U] >> 8U)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__21__KET____DOT__rel_y 
        = (0xfU & ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT____VdfgRegularize_h46df5cdf_0_1) 
                   - (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                      [0x15U] >> 8U)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__22__KET____DOT__rel_y 
        = (0xfU & ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT____VdfgRegularize_h46df5cdf_0_1) 
                   - (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                      [0x16U] >> 8U)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__23__KET____DOT__rel_y 
        = (0xfU & ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT____VdfgRegularize_h46df5cdf_0_1) 
                   - (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                      [0x17U] >> 8U)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__24__KET____DOT__rel_y 
        = (0xfU & ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT____VdfgRegularize_h46df5cdf_0_1) 
                   - (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                      [0x18U] >> 8U)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__25__KET____DOT__rel_y 
        = (0xfU & ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT____VdfgRegularize_h46df5cdf_0_1) 
                   - (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                      [0x19U] >> 8U)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__26__KET____DOT__rel_y 
        = (0xfU & ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT____VdfgRegularize_h46df5cdf_0_1) 
                   - (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                      [0x1aU] >> 8U)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__27__KET____DOT__rel_y 
        = (0xfU & ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT____VdfgRegularize_h46df5cdf_0_1) 
                   - (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                      [0x1bU] >> 8U)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__28__KET____DOT__rel_y 
        = (0xfU & ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT____VdfgRegularize_h46df5cdf_0_1) 
                   - (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                      [0x1cU] >> 8U)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__29__KET____DOT__rel_y 
        = (0xfU & ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT____VdfgRegularize_h46df5cdf_0_1) 
                   - (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                      [0x1dU] >> 8U)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__30__KET____DOT__rel_y 
        = (0xfU & ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT____VdfgRegularize_h46df5cdf_0_1) 
                   - (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                      [0x1eU] >> 8U)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__31__KET____DOT__rel_y 
        = (0xfU & ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT____VdfgRegularize_h46df5cdf_0_1) 
                   - (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                      [0x1fU] >> 8U)));
    vlSelfRef.gpu_de1_soc_top__DOT__u_bg_engine__DOT____VdfgRegularize_hf66fa8df_1_0 
        = (0x1ffU & ((0xf0U <= (IData)(gpu_de1_soc_top__DOT__u_bg_engine__DOT__sum_y))
                      ? ((IData)(gpu_de1_soc_top__DOT__u_bg_engine__DOT__sum_y) 
                         - (IData)(0xf0U)) : (0xffU 
                                              & (IData)(gpu_de1_soc_top__DOT__u_bg_engine__DOT__sum_y))));
    vlSelfRef.gpu_de1_soc_top__DOT__u_bg_engine__DOT____VdfgRegularize_hf66fa8df_0_0 
        = (0x3ffU & ((0x140U <= (IData)(gpu_de1_soc_top__DOT__u_bg_engine__DOT__sum_x))
                      ? ((IData)(gpu_de1_soc_top__DOT__u_bg_engine__DOT__sum_x) 
                         - (IData)(0x140U)) : (0x1ffU 
                                               & (IData)(gpu_de1_soc_top__DOT__u_bg_engine__DOT__sum_x))));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__0__KET____DOT__eff_x 
        = (0xfU & ((0x40000000U & vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                    [0U]) ? ((IData)(0xfU) - (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__0__KET____DOT__rel_x))
                    : (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__0__KET____DOT__rel_x)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__1__KET____DOT__eff_x 
        = (0xfU & ((0x40000000U & vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                    [1U]) ? ((IData)(0xfU) - (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__1__KET____DOT__rel_x))
                    : (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__1__KET____DOT__rel_x)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__2__KET____DOT__eff_x 
        = (0xfU & ((0x40000000U & vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                    [2U]) ? ((IData)(0xfU) - (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__2__KET____DOT__rel_x))
                    : (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__2__KET____DOT__rel_x)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__3__KET____DOT__eff_x 
        = (0xfU & ((0x40000000U & vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                    [3U]) ? ((IData)(0xfU) - (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__3__KET____DOT__rel_x))
                    : (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__3__KET____DOT__rel_x)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__4__KET____DOT__eff_x 
        = (0xfU & ((0x40000000U & vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                    [4U]) ? ((IData)(0xfU) - (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__4__KET____DOT__rel_x))
                    : (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__4__KET____DOT__rel_x)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__5__KET____DOT__eff_x 
        = (0xfU & ((0x40000000U & vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                    [5U]) ? ((IData)(0xfU) - (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__5__KET____DOT__rel_x))
                    : (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__5__KET____DOT__rel_x)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__6__KET____DOT__eff_x 
        = (0xfU & ((0x40000000U & vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                    [6U]) ? ((IData)(0xfU) - (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__6__KET____DOT__rel_x))
                    : (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__6__KET____DOT__rel_x)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__7__KET____DOT__eff_x 
        = (0xfU & ((0x40000000U & vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                    [7U]) ? ((IData)(0xfU) - (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__7__KET____DOT__rel_x))
                    : (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__7__KET____DOT__rel_x)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__8__KET____DOT__eff_x 
        = (0xfU & ((0x40000000U & vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                    [8U]) ? ((IData)(0xfU) - (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__8__KET____DOT__rel_x))
                    : (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__8__KET____DOT__rel_x)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__9__KET____DOT__eff_x 
        = (0xfU & ((0x40000000U & vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                    [9U]) ? ((IData)(0xfU) - (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__9__KET____DOT__rel_x))
                    : (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__9__KET____DOT__rel_x)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__10__KET____DOT__eff_x 
        = (0xfU & ((0x40000000U & vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                    [0xaU]) ? ((IData)(0xfU) - (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__10__KET____DOT__rel_x))
                    : (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__10__KET____DOT__rel_x)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__11__KET____DOT__eff_x 
        = (0xfU & ((0x40000000U & vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                    [0xbU]) ? ((IData)(0xfU) - (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__11__KET____DOT__rel_x))
                    : (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__11__KET____DOT__rel_x)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__12__KET____DOT__eff_x 
        = (0xfU & ((0x40000000U & vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                    [0xcU]) ? ((IData)(0xfU) - (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__12__KET____DOT__rel_x))
                    : (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__12__KET____DOT__rel_x)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__13__KET____DOT__eff_x 
        = (0xfU & ((0x40000000U & vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                    [0xdU]) ? ((IData)(0xfU) - (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__13__KET____DOT__rel_x))
                    : (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__13__KET____DOT__rel_x)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__14__KET____DOT__eff_x 
        = (0xfU & ((0x40000000U & vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                    [0xeU]) ? ((IData)(0xfU) - (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__14__KET____DOT__rel_x))
                    : (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__14__KET____DOT__rel_x)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__15__KET____DOT__eff_x 
        = (0xfU & ((0x40000000U & vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                    [0xfU]) ? ((IData)(0xfU) - (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__15__KET____DOT__rel_x))
                    : (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__15__KET____DOT__rel_x)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__16__KET____DOT__eff_x 
        = (0xfU & ((0x40000000U & vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                    [0x10U]) ? ((IData)(0xfU) - (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__16__KET____DOT__rel_x))
                    : (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__16__KET____DOT__rel_x)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__17__KET____DOT__eff_x 
        = (0xfU & ((0x40000000U & vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                    [0x11U]) ? ((IData)(0xfU) - (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__17__KET____DOT__rel_x))
                    : (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__17__KET____DOT__rel_x)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__18__KET____DOT__eff_x 
        = (0xfU & ((0x40000000U & vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                    [0x12U]) ? ((IData)(0xfU) - (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__18__KET____DOT__rel_x))
                    : (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__18__KET____DOT__rel_x)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__19__KET____DOT__eff_x 
        = (0xfU & ((0x40000000U & vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                    [0x13U]) ? ((IData)(0xfU) - (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__19__KET____DOT__rel_x))
                    : (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__19__KET____DOT__rel_x)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__20__KET____DOT__eff_x 
        = (0xfU & ((0x40000000U & vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                    [0x14U]) ? ((IData)(0xfU) - (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__20__KET____DOT__rel_x))
                    : (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__20__KET____DOT__rel_x)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__21__KET____DOT__eff_x 
        = (0xfU & ((0x40000000U & vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                    [0x15U]) ? ((IData)(0xfU) - (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__21__KET____DOT__rel_x))
                    : (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__21__KET____DOT__rel_x)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__22__KET____DOT__eff_x 
        = (0xfU & ((0x40000000U & vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                    [0x16U]) ? ((IData)(0xfU) - (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__22__KET____DOT__rel_x))
                    : (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__22__KET____DOT__rel_x)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__23__KET____DOT__eff_x 
        = (0xfU & ((0x40000000U & vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                    [0x17U]) ? ((IData)(0xfU) - (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__23__KET____DOT__rel_x))
                    : (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__23__KET____DOT__rel_x)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__24__KET____DOT__eff_x 
        = (0xfU & ((0x40000000U & vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                    [0x18U]) ? ((IData)(0xfU) - (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__24__KET____DOT__rel_x))
                    : (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__24__KET____DOT__rel_x)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__25__KET____DOT__eff_x 
        = (0xfU & ((0x40000000U & vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                    [0x19U]) ? ((IData)(0xfU) - (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__25__KET____DOT__rel_x))
                    : (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__25__KET____DOT__rel_x)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__26__KET____DOT__eff_x 
        = (0xfU & ((0x40000000U & vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                    [0x1aU]) ? ((IData)(0xfU) - (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__26__KET____DOT__rel_x))
                    : (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__26__KET____DOT__rel_x)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__27__KET____DOT__eff_x 
        = (0xfU & ((0x40000000U & vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                    [0x1bU]) ? ((IData)(0xfU) - (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__27__KET____DOT__rel_x))
                    : (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__27__KET____DOT__rel_x)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__28__KET____DOT__eff_x 
        = (0xfU & ((0x40000000U & vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                    [0x1cU]) ? ((IData)(0xfU) - (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__28__KET____DOT__rel_x))
                    : (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__28__KET____DOT__rel_x)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__29__KET____DOT__eff_x 
        = (0xfU & ((0x40000000U & vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                    [0x1dU]) ? ((IData)(0xfU) - (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__29__KET____DOT__rel_x))
                    : (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__29__KET____DOT__rel_x)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__30__KET____DOT__eff_x 
        = (0xfU & ((0x40000000U & vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                    [0x1eU]) ? ((IData)(0xfU) - (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__30__KET____DOT__rel_x))
                    : (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__30__KET____DOT__rel_x)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__31__KET____DOT__eff_x 
        = (0xfU & ((0x40000000U & vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                    [0x1fU]) ? ((IData)(0xfU) - (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__31__KET____DOT__rel_x))
                    : (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__31__KET____DOT__rel_x)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__0__KET____DOT__eff_y 
        = (0xfU & ((0x20000000U & vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                    [0U]) ? ((IData)(0xfU) - (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__0__KET____DOT__rel_y))
                    : (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__0__KET____DOT__rel_y)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__1__KET____DOT__eff_y 
        = (0xfU & ((0x20000000U & vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                    [1U]) ? ((IData)(0xfU) - (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__1__KET____DOT__rel_y))
                    : (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__1__KET____DOT__rel_y)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__2__KET____DOT__eff_y 
        = (0xfU & ((0x20000000U & vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                    [2U]) ? ((IData)(0xfU) - (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__2__KET____DOT__rel_y))
                    : (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__2__KET____DOT__rel_y)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__3__KET____DOT__eff_y 
        = (0xfU & ((0x20000000U & vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                    [3U]) ? ((IData)(0xfU) - (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__3__KET____DOT__rel_y))
                    : (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__3__KET____DOT__rel_y)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__4__KET____DOT__eff_y 
        = (0xfU & ((0x20000000U & vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                    [4U]) ? ((IData)(0xfU) - (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__4__KET____DOT__rel_y))
                    : (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__4__KET____DOT__rel_y)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__5__KET____DOT__eff_y 
        = (0xfU & ((0x20000000U & vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                    [5U]) ? ((IData)(0xfU) - (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__5__KET____DOT__rel_y))
                    : (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__5__KET____DOT__rel_y)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__6__KET____DOT__eff_y 
        = (0xfU & ((0x20000000U & vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                    [6U]) ? ((IData)(0xfU) - (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__6__KET____DOT__rel_y))
                    : (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__6__KET____DOT__rel_y)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__7__KET____DOT__eff_y 
        = (0xfU & ((0x20000000U & vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                    [7U]) ? ((IData)(0xfU) - (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__7__KET____DOT__rel_y))
                    : (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__7__KET____DOT__rel_y)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__8__KET____DOT__eff_y 
        = (0xfU & ((0x20000000U & vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                    [8U]) ? ((IData)(0xfU) - (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__8__KET____DOT__rel_y))
                    : (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__8__KET____DOT__rel_y)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__9__KET____DOT__eff_y 
        = (0xfU & ((0x20000000U & vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                    [9U]) ? ((IData)(0xfU) - (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__9__KET____DOT__rel_y))
                    : (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__9__KET____DOT__rel_y)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__10__KET____DOT__eff_y 
        = (0xfU & ((0x20000000U & vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                    [0xaU]) ? ((IData)(0xfU) - (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__10__KET____DOT__rel_y))
                    : (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__10__KET____DOT__rel_y)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__11__KET____DOT__eff_y 
        = (0xfU & ((0x20000000U & vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                    [0xbU]) ? ((IData)(0xfU) - (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__11__KET____DOT__rel_y))
                    : (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__11__KET____DOT__rel_y)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__12__KET____DOT__eff_y 
        = (0xfU & ((0x20000000U & vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                    [0xcU]) ? ((IData)(0xfU) - (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__12__KET____DOT__rel_y))
                    : (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__12__KET____DOT__rel_y)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__13__KET____DOT__eff_y 
        = (0xfU & ((0x20000000U & vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                    [0xdU]) ? ((IData)(0xfU) - (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__13__KET____DOT__rel_y))
                    : (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__13__KET____DOT__rel_y)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__14__KET____DOT__eff_y 
        = (0xfU & ((0x20000000U & vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                    [0xeU]) ? ((IData)(0xfU) - (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__14__KET____DOT__rel_y))
                    : (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__14__KET____DOT__rel_y)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__15__KET____DOT__eff_y 
        = (0xfU & ((0x20000000U & vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                    [0xfU]) ? ((IData)(0xfU) - (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__15__KET____DOT__rel_y))
                    : (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__15__KET____DOT__rel_y)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__16__KET____DOT__eff_y 
        = (0xfU & ((0x20000000U & vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                    [0x10U]) ? ((IData)(0xfU) - (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__16__KET____DOT__rel_y))
                    : (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__16__KET____DOT__rel_y)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__17__KET____DOT__eff_y 
        = (0xfU & ((0x20000000U & vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                    [0x11U]) ? ((IData)(0xfU) - (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__17__KET____DOT__rel_y))
                    : (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__17__KET____DOT__rel_y)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__18__KET____DOT__eff_y 
        = (0xfU & ((0x20000000U & vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                    [0x12U]) ? ((IData)(0xfU) - (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__18__KET____DOT__rel_y))
                    : (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__18__KET____DOT__rel_y)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__19__KET____DOT__eff_y 
        = (0xfU & ((0x20000000U & vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                    [0x13U]) ? ((IData)(0xfU) - (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__19__KET____DOT__rel_y))
                    : (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__19__KET____DOT__rel_y)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__20__KET____DOT__eff_y 
        = (0xfU & ((0x20000000U & vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                    [0x14U]) ? ((IData)(0xfU) - (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__20__KET____DOT__rel_y))
                    : (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__20__KET____DOT__rel_y)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__21__KET____DOT__eff_y 
        = (0xfU & ((0x20000000U & vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                    [0x15U]) ? ((IData)(0xfU) - (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__21__KET____DOT__rel_y))
                    : (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__21__KET____DOT__rel_y)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__22__KET____DOT__eff_y 
        = (0xfU & ((0x20000000U & vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                    [0x16U]) ? ((IData)(0xfU) - (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__22__KET____DOT__rel_y))
                    : (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__22__KET____DOT__rel_y)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__23__KET____DOT__eff_y 
        = (0xfU & ((0x20000000U & vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                    [0x17U]) ? ((IData)(0xfU) - (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__23__KET____DOT__rel_y))
                    : (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__23__KET____DOT__rel_y)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__24__KET____DOT__eff_y 
        = (0xfU & ((0x20000000U & vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                    [0x18U]) ? ((IData)(0xfU) - (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__24__KET____DOT__rel_y))
                    : (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__24__KET____DOT__rel_y)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__25__KET____DOT__eff_y 
        = (0xfU & ((0x20000000U & vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                    [0x19U]) ? ((IData)(0xfU) - (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__25__KET____DOT__rel_y))
                    : (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__25__KET____DOT__rel_y)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__26__KET____DOT__eff_y 
        = (0xfU & ((0x20000000U & vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                    [0x1aU]) ? ((IData)(0xfU) - (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__26__KET____DOT__rel_y))
                    : (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__26__KET____DOT__rel_y)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__27__KET____DOT__eff_y 
        = (0xfU & ((0x20000000U & vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                    [0x1bU]) ? ((IData)(0xfU) - (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__27__KET____DOT__rel_y))
                    : (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__27__KET____DOT__rel_y)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__28__KET____DOT__eff_y 
        = (0xfU & ((0x20000000U & vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                    [0x1cU]) ? ((IData)(0xfU) - (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__28__KET____DOT__rel_y))
                    : (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__28__KET____DOT__rel_y)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__29__KET____DOT__eff_y 
        = (0xfU & ((0x20000000U & vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                    [0x1dU]) ? ((IData)(0xfU) - (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__29__KET____DOT__rel_y))
                    : (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__29__KET____DOT__rel_y)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__30__KET____DOT__eff_y 
        = (0xfU & ((0x20000000U & vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                    [0x1eU]) ? ((IData)(0xfU) - (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__30__KET____DOT__rel_y))
                    : (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__30__KET____DOT__rel_y)));
    gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__31__KET____DOT__eff_y 
        = (0xfU & ((0x20000000U & vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                    [0x1fU]) ? ((IData)(0xfU) - (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__31__KET____DOT__rel_y))
                    : (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__31__KET____DOT__rel_y)));
    vlSelfRef.gpu_de1_soc_top__DOT__u_bg_engine__DOT__u_map_buffer__DOT__addr_rd 
        = (0x7ffU & ((0x3e0U & ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_bg_engine__DOT____VdfgRegularize_hf66fa8df_1_0) 
                                << 2U)) + ((0xf8U & (IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_bg_engine__DOT____VdfgRegularize_hf66fa8df_1_0)) 
                                           + (0x3fU 
                                              & ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_bg_engine__DOT____VdfgRegularize_hf66fa8df_0_0) 
                                                 >> 3U)))));
    vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_addrs[0U] 
        = ((0x3fc0U & ((vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                        [0U] + ((2U & ((IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__0__KET____DOT__eff_y) 
                                       >> 2U)) | (1U 
                                                  & ((IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__0__KET____DOT__eff_x) 
                                                     >> 3U)))) 
                       << 6U)) | ((0x38U & ((IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__0__KET____DOT__eff_y) 
                                            << 3U)) 
                                  | (7U & (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__0__KET____DOT__eff_x))));
    vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_addrs[1U] 
        = ((0x3fc0U & ((vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                        [1U] + ((2U & ((IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__1__KET____DOT__eff_y) 
                                       >> 2U)) | (1U 
                                                  & ((IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__1__KET____DOT__eff_x) 
                                                     >> 3U)))) 
                       << 6U)) | ((0x38U & ((IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__1__KET____DOT__eff_y) 
                                            << 3U)) 
                                  | (7U & (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__1__KET____DOT__eff_x))));
    vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_addrs[2U] 
        = ((0x3fc0U & ((vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                        [2U] + ((2U & ((IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__2__KET____DOT__eff_y) 
                                       >> 2U)) | (1U 
                                                  & ((IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__2__KET____DOT__eff_x) 
                                                     >> 3U)))) 
                       << 6U)) | ((0x38U & ((IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__2__KET____DOT__eff_y) 
                                            << 3U)) 
                                  | (7U & (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__2__KET____DOT__eff_x))));
    vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_addrs[3U] 
        = ((0x3fc0U & ((vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                        [3U] + ((2U & ((IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__3__KET____DOT__eff_y) 
                                       >> 2U)) | (1U 
                                                  & ((IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__3__KET____DOT__eff_x) 
                                                     >> 3U)))) 
                       << 6U)) | ((0x38U & ((IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__3__KET____DOT__eff_y) 
                                            << 3U)) 
                                  | (7U & (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__3__KET____DOT__eff_x))));
    vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_addrs[4U] 
        = ((0x3fc0U & ((vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                        [4U] + ((2U & ((IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__4__KET____DOT__eff_y) 
                                       >> 2U)) | (1U 
                                                  & ((IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__4__KET____DOT__eff_x) 
                                                     >> 3U)))) 
                       << 6U)) | ((0x38U & ((IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__4__KET____DOT__eff_y) 
                                            << 3U)) 
                                  | (7U & (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__4__KET____DOT__eff_x))));
    vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_addrs[5U] 
        = ((0x3fc0U & ((vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                        [5U] + ((2U & ((IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__5__KET____DOT__eff_y) 
                                       >> 2U)) | (1U 
                                                  & ((IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__5__KET____DOT__eff_x) 
                                                     >> 3U)))) 
                       << 6U)) | ((0x38U & ((IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__5__KET____DOT__eff_y) 
                                            << 3U)) 
                                  | (7U & (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__5__KET____DOT__eff_x))));
    vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_addrs[6U] 
        = ((0x3fc0U & ((vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                        [6U] + ((2U & ((IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__6__KET____DOT__eff_y) 
                                       >> 2U)) | (1U 
                                                  & ((IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__6__KET____DOT__eff_x) 
                                                     >> 3U)))) 
                       << 6U)) | ((0x38U & ((IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__6__KET____DOT__eff_y) 
                                            << 3U)) 
                                  | (7U & (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__6__KET____DOT__eff_x))));
    vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_addrs[7U] 
        = ((0x3fc0U & ((vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                        [7U] + ((2U & ((IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__7__KET____DOT__eff_y) 
                                       >> 2U)) | (1U 
                                                  & ((IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__7__KET____DOT__eff_x) 
                                                     >> 3U)))) 
                       << 6U)) | ((0x38U & ((IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__7__KET____DOT__eff_y) 
                                            << 3U)) 
                                  | (7U & (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__7__KET____DOT__eff_x))));
    vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_addrs[8U] 
        = ((0x3fc0U & ((vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                        [8U] + ((2U & ((IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__8__KET____DOT__eff_y) 
                                       >> 2U)) | (1U 
                                                  & ((IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__8__KET____DOT__eff_x) 
                                                     >> 3U)))) 
                       << 6U)) | ((0x38U & ((IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__8__KET____DOT__eff_y) 
                                            << 3U)) 
                                  | (7U & (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__8__KET____DOT__eff_x))));
    vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_addrs[9U] 
        = ((0x3fc0U & ((vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                        [9U] + ((2U & ((IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__9__KET____DOT__eff_y) 
                                       >> 2U)) | (1U 
                                                  & ((IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__9__KET____DOT__eff_x) 
                                                     >> 3U)))) 
                       << 6U)) | ((0x38U & ((IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__9__KET____DOT__eff_y) 
                                            << 3U)) 
                                  | (7U & (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__9__KET____DOT__eff_x))));
    vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_addrs[0xaU] 
        = ((0x3fc0U & ((vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                        [0xaU] + ((2U & ((IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__10__KET____DOT__eff_y) 
                                         >> 2U)) | 
                                  (1U & ((IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__10__KET____DOT__eff_x) 
                                         >> 3U)))) 
                       << 6U)) | ((0x38U & ((IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__10__KET____DOT__eff_y) 
                                            << 3U)) 
                                  | (7U & (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__10__KET____DOT__eff_x))));
    vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_addrs[0xbU] 
        = ((0x3fc0U & ((vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                        [0xbU] + ((2U & ((IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__11__KET____DOT__eff_y) 
                                         >> 2U)) | 
                                  (1U & ((IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__11__KET____DOT__eff_x) 
                                         >> 3U)))) 
                       << 6U)) | ((0x38U & ((IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__11__KET____DOT__eff_y) 
                                            << 3U)) 
                                  | (7U & (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__11__KET____DOT__eff_x))));
    vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_addrs[0xcU] 
        = ((0x3fc0U & ((vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                        [0xcU] + ((2U & ((IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__12__KET____DOT__eff_y) 
                                         >> 2U)) | 
                                  (1U & ((IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__12__KET____DOT__eff_x) 
                                         >> 3U)))) 
                       << 6U)) | ((0x38U & ((IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__12__KET____DOT__eff_y) 
                                            << 3U)) 
                                  | (7U & (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__12__KET____DOT__eff_x))));
    vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_addrs[0xdU] 
        = ((0x3fc0U & ((vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                        [0xdU] + ((2U & ((IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__13__KET____DOT__eff_y) 
                                         >> 2U)) | 
                                  (1U & ((IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__13__KET____DOT__eff_x) 
                                         >> 3U)))) 
                       << 6U)) | ((0x38U & ((IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__13__KET____DOT__eff_y) 
                                            << 3U)) 
                                  | (7U & (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__13__KET____DOT__eff_x))));
    vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_addrs[0xeU] 
        = ((0x3fc0U & ((vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                        [0xeU] + ((2U & ((IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__14__KET____DOT__eff_y) 
                                         >> 2U)) | 
                                  (1U & ((IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__14__KET____DOT__eff_x) 
                                         >> 3U)))) 
                       << 6U)) | ((0x38U & ((IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__14__KET____DOT__eff_y) 
                                            << 3U)) 
                                  | (7U & (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__14__KET____DOT__eff_x))));
    vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_addrs[0xfU] 
        = ((0x3fc0U & ((vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                        [0xfU] + ((2U & ((IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__15__KET____DOT__eff_y) 
                                         >> 2U)) | 
                                  (1U & ((IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__15__KET____DOT__eff_x) 
                                         >> 3U)))) 
                       << 6U)) | ((0x38U & ((IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__15__KET____DOT__eff_y) 
                                            << 3U)) 
                                  | (7U & (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__15__KET____DOT__eff_x))));
    vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_addrs[0x10U] 
        = ((0x3fc0U & ((vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                        [0x10U] + ((2U & ((IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__16__KET____DOT__eff_y) 
                                          >> 2U)) | 
                                   (1U & ((IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__16__KET____DOT__eff_x) 
                                          >> 3U)))) 
                       << 6U)) | ((0x38U & ((IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__16__KET____DOT__eff_y) 
                                            << 3U)) 
                                  | (7U & (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__16__KET____DOT__eff_x))));
    vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_addrs[0x11U] 
        = ((0x3fc0U & ((vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                        [0x11U] + ((2U & ((IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__17__KET____DOT__eff_y) 
                                          >> 2U)) | 
                                   (1U & ((IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__17__KET____DOT__eff_x) 
                                          >> 3U)))) 
                       << 6U)) | ((0x38U & ((IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__17__KET____DOT__eff_y) 
                                            << 3U)) 
                                  | (7U & (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__17__KET____DOT__eff_x))));
    vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_addrs[0x12U] 
        = ((0x3fc0U & ((vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                        [0x12U] + ((2U & ((IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__18__KET____DOT__eff_y) 
                                          >> 2U)) | 
                                   (1U & ((IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__18__KET____DOT__eff_x) 
                                          >> 3U)))) 
                       << 6U)) | ((0x38U & ((IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__18__KET____DOT__eff_y) 
                                            << 3U)) 
                                  | (7U & (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__18__KET____DOT__eff_x))));
    vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_addrs[0x13U] 
        = ((0x3fc0U & ((vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                        [0x13U] + ((2U & ((IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__19__KET____DOT__eff_y) 
                                          >> 2U)) | 
                                   (1U & ((IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__19__KET____DOT__eff_x) 
                                          >> 3U)))) 
                       << 6U)) | ((0x38U & ((IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__19__KET____DOT__eff_y) 
                                            << 3U)) 
                                  | (7U & (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__19__KET____DOT__eff_x))));
    vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_addrs[0x14U] 
        = ((0x3fc0U & ((vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                        [0x14U] + ((2U & ((IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__20__KET____DOT__eff_y) 
                                          >> 2U)) | 
                                   (1U & ((IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__20__KET____DOT__eff_x) 
                                          >> 3U)))) 
                       << 6U)) | ((0x38U & ((IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__20__KET____DOT__eff_y) 
                                            << 3U)) 
                                  | (7U & (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__20__KET____DOT__eff_x))));
    vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_addrs[0x15U] 
        = ((0x3fc0U & ((vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                        [0x15U] + ((2U & ((IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__21__KET____DOT__eff_y) 
                                          >> 2U)) | 
                                   (1U & ((IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__21__KET____DOT__eff_x) 
                                          >> 3U)))) 
                       << 6U)) | ((0x38U & ((IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__21__KET____DOT__eff_y) 
                                            << 3U)) 
                                  | (7U & (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__21__KET____DOT__eff_x))));
    vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_addrs[0x16U] 
        = ((0x3fc0U & ((vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                        [0x16U] + ((2U & ((IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__22__KET____DOT__eff_y) 
                                          >> 2U)) | 
                                   (1U & ((IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__22__KET____DOT__eff_x) 
                                          >> 3U)))) 
                       << 6U)) | ((0x38U & ((IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__22__KET____DOT__eff_y) 
                                            << 3U)) 
                                  | (7U & (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__22__KET____DOT__eff_x))));
    vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_addrs[0x17U] 
        = ((0x3fc0U & ((vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                        [0x17U] + ((2U & ((IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__23__KET____DOT__eff_y) 
                                          >> 2U)) | 
                                   (1U & ((IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__23__KET____DOT__eff_x) 
                                          >> 3U)))) 
                       << 6U)) | ((0x38U & ((IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__23__KET____DOT__eff_y) 
                                            << 3U)) 
                                  | (7U & (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__23__KET____DOT__eff_x))));
    vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_addrs[0x18U] 
        = ((0x3fc0U & ((vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                        [0x18U] + ((2U & ((IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__24__KET____DOT__eff_y) 
                                          >> 2U)) | 
                                   (1U & ((IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__24__KET____DOT__eff_x) 
                                          >> 3U)))) 
                       << 6U)) | ((0x38U & ((IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__24__KET____DOT__eff_y) 
                                            << 3U)) 
                                  | (7U & (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__24__KET____DOT__eff_x))));
    vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_addrs[0x19U] 
        = ((0x3fc0U & ((vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                        [0x19U] + ((2U & ((IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__25__KET____DOT__eff_y) 
                                          >> 2U)) | 
                                   (1U & ((IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__25__KET____DOT__eff_x) 
                                          >> 3U)))) 
                       << 6U)) | ((0x38U & ((IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__25__KET____DOT__eff_y) 
                                            << 3U)) 
                                  | (7U & (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__25__KET____DOT__eff_x))));
    vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_addrs[0x1aU] 
        = ((0x3fc0U & ((vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                        [0x1aU] + ((2U & ((IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__26__KET____DOT__eff_y) 
                                          >> 2U)) | 
                                   (1U & ((IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__26__KET____DOT__eff_x) 
                                          >> 3U)))) 
                       << 6U)) | ((0x38U & ((IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__26__KET____DOT__eff_y) 
                                            << 3U)) 
                                  | (7U & (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__26__KET____DOT__eff_x))));
    vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_addrs[0x1bU] 
        = ((0x3fc0U & ((vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                        [0x1bU] + ((2U & ((IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__27__KET____DOT__eff_y) 
                                          >> 2U)) | 
                                   (1U & ((IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__27__KET____DOT__eff_x) 
                                          >> 3U)))) 
                       << 6U)) | ((0x38U & ((IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__27__KET____DOT__eff_y) 
                                            << 3U)) 
                                  | (7U & (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__27__KET____DOT__eff_x))));
    vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_addrs[0x1cU] 
        = ((0x3fc0U & ((vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                        [0x1cU] + ((2U & ((IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__28__KET____DOT__eff_y) 
                                          >> 2U)) | 
                                   (1U & ((IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__28__KET____DOT__eff_x) 
                                          >> 3U)))) 
                       << 6U)) | ((0x38U & ((IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__28__KET____DOT__eff_y) 
                                            << 3U)) 
                                  | (7U & (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__28__KET____DOT__eff_x))));
    vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_addrs[0x1dU] 
        = ((0x3fc0U & ((vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                        [0x1dU] + ((2U & ((IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__29__KET____DOT__eff_y) 
                                          >> 2U)) | 
                                   (1U & ((IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__29__KET____DOT__eff_x) 
                                          >> 3U)))) 
                       << 6U)) | ((0x38U & ((IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__29__KET____DOT__eff_y) 
                                            << 3U)) 
                                  | (7U & (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__29__KET____DOT__eff_x))));
    vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_addrs[0x1eU] 
        = ((0x3fc0U & ((vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                        [0x1eU] + ((2U & ((IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__30__KET____DOT__eff_y) 
                                          >> 2U)) | 
                                   (1U & ((IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__30__KET____DOT__eff_x) 
                                          >> 3U)))) 
                       << 6U)) | ((0x38U & ((IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__30__KET____DOT__eff_y) 
                                            << 3U)) 
                                  | (7U & (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__30__KET____DOT__eff_x))));
    vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_addrs[0x1fU] 
        = ((0x3fc0U & ((vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram
                        [0x1fU] + ((2U & ((IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__31__KET____DOT__eff_y) 
                                          >> 2U)) | 
                                   (1U & ((IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__31__KET____DOT__eff_x) 
                                          >> 3U)))) 
                       << 6U)) | ((0x38U & ((IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__31__KET____DOT__eff_y) 
                                            << 3U)) 
                                  | (7U & (IData)(gpu_de1_soc_top__DOT__u_sprite_engine__DOT__gen_sprites__BRA__31__KET____DOT__eff_x))));
    vlSelfRef.gpu_de1_soc_top__DOT__sp_vram_addr = 0U;
    if (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_hit
        [0x1fU]) {
        vlSelfRef.gpu_de1_soc_top__DOT__sp_vram_addr 
            = vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_addrs
            [0x1fU];
    }
    if (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_hit
        [0x1eU]) {
        vlSelfRef.gpu_de1_soc_top__DOT__sp_vram_addr 
            = vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_addrs
            [0x1eU];
    }
    if (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_hit
        [0x1dU]) {
        vlSelfRef.gpu_de1_soc_top__DOT__sp_vram_addr 
            = vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_addrs
            [0x1dU];
    }
    if (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_hit
        [0x1cU]) {
        vlSelfRef.gpu_de1_soc_top__DOT__sp_vram_addr 
            = vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_addrs
            [0x1cU];
    }
    if (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_hit
        [0x1bU]) {
        vlSelfRef.gpu_de1_soc_top__DOT__sp_vram_addr 
            = vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_addrs
            [0x1bU];
    }
    if (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_hit
        [0x1aU]) {
        vlSelfRef.gpu_de1_soc_top__DOT__sp_vram_addr 
            = vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_addrs
            [0x1aU];
    }
    if (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_hit
        [0x19U]) {
        vlSelfRef.gpu_de1_soc_top__DOT__sp_vram_addr 
            = vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_addrs
            [0x19U];
    }
    if (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_hit
        [0x18U]) {
        vlSelfRef.gpu_de1_soc_top__DOT__sp_vram_addr 
            = vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_addrs
            [0x18U];
    }
    if (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_hit
        [0x17U]) {
        vlSelfRef.gpu_de1_soc_top__DOT__sp_vram_addr 
            = vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_addrs
            [0x17U];
    }
    if (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_hit
        [0x16U]) {
        vlSelfRef.gpu_de1_soc_top__DOT__sp_vram_addr 
            = vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_addrs
            [0x16U];
    }
    if (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_hit
        [0x15U]) {
        vlSelfRef.gpu_de1_soc_top__DOT__sp_vram_addr 
            = vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_addrs
            [0x15U];
    }
    if (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_hit
        [0x14U]) {
        vlSelfRef.gpu_de1_soc_top__DOT__sp_vram_addr 
            = vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_addrs
            [0x14U];
    }
    if (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_hit
        [0x13U]) {
        vlSelfRef.gpu_de1_soc_top__DOT__sp_vram_addr 
            = vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_addrs
            [0x13U];
    }
    if (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_hit
        [0x12U]) {
        vlSelfRef.gpu_de1_soc_top__DOT__sp_vram_addr 
            = vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_addrs
            [0x12U];
    }
    if (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_hit
        [0x11U]) {
        vlSelfRef.gpu_de1_soc_top__DOT__sp_vram_addr 
            = vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_addrs
            [0x11U];
    }
    if (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_hit
        [0x10U]) {
        vlSelfRef.gpu_de1_soc_top__DOT__sp_vram_addr 
            = vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_addrs
            [0x10U];
    }
    if (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_hit
        [0xfU]) {
        vlSelfRef.gpu_de1_soc_top__DOT__sp_vram_addr 
            = vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_addrs
            [0xfU];
    }
    if (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_hit
        [0xeU]) {
        vlSelfRef.gpu_de1_soc_top__DOT__sp_vram_addr 
            = vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_addrs
            [0xeU];
    }
    if (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_hit
        [0xdU]) {
        vlSelfRef.gpu_de1_soc_top__DOT__sp_vram_addr 
            = vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_addrs
            [0xdU];
    }
    if (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_hit
        [0xcU]) {
        vlSelfRef.gpu_de1_soc_top__DOT__sp_vram_addr 
            = vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_addrs
            [0xcU];
    }
    if (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_hit
        [0xbU]) {
        vlSelfRef.gpu_de1_soc_top__DOT__sp_vram_addr 
            = vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_addrs
            [0xbU];
    }
    if (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_hit
        [0xaU]) {
        vlSelfRef.gpu_de1_soc_top__DOT__sp_vram_addr 
            = vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_addrs
            [0xaU];
    }
    if (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_hit
        [9U]) {
        vlSelfRef.gpu_de1_soc_top__DOT__sp_vram_addr 
            = vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_addrs
            [9U];
    }
    if (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_hit
        [8U]) {
        vlSelfRef.gpu_de1_soc_top__DOT__sp_vram_addr 
            = vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_addrs
            [8U];
    }
    if (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_hit
        [7U]) {
        vlSelfRef.gpu_de1_soc_top__DOT__sp_vram_addr 
            = vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_addrs
            [7U];
    }
    if (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_hit
        [6U]) {
        vlSelfRef.gpu_de1_soc_top__DOT__sp_vram_addr 
            = vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_addrs
            [6U];
    }
    if (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_hit
        [5U]) {
        vlSelfRef.gpu_de1_soc_top__DOT__sp_vram_addr 
            = vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_addrs
            [5U];
    }
    if (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_hit
        [4U]) {
        vlSelfRef.gpu_de1_soc_top__DOT__sp_vram_addr 
            = vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_addrs
            [4U];
    }
    if (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_hit
        [3U]) {
        vlSelfRef.gpu_de1_soc_top__DOT__sp_vram_addr 
            = vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_addrs
            [3U];
    }
    if (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_hit
        [2U]) {
        vlSelfRef.gpu_de1_soc_top__DOT__sp_vram_addr 
            = vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_addrs
            [2U];
    }
    if (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_hit
        [1U]) {
        vlSelfRef.gpu_de1_soc_top__DOT__sp_vram_addr 
            = vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_addrs
            [1U];
    }
    if (vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_hit
        [0U]) {
        vlSelfRef.gpu_de1_soc_top__DOT__sp_vram_addr 
            = vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_addrs
            [0U];
    }
}

VL_INLINE_OPT void Vgpu_de1_soc_top___024root___nba_sequent__TOP__5(Vgpu_de1_soc_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgpu_de1_soc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpu_de1_soc_top___024root___nba_sequent__TOP__5\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.gpu_de1_soc_top__DOT__buf_rd_addr = (0x1ffffU 
                                                   & (((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_y) 
                                                       << 8U) 
                                                      + 
                                                      (((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_y) 
                                                        << 6U) 
                                                       + (IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_x))));
}

VL_INLINE_OPT void Vgpu_de1_soc_top___024root___nba_sequent__TOP__6(Vgpu_de1_soc_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgpu_de1_soc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpu_de1_soc_top___024root___nba_sequent__TOP__6\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__gpu_de1_soc_top__DOT__u_poly_buffer__DOT__ram__v0) {
        vlSelfRef.gpu_de1_soc_top__DOT__u_poly_buffer__DOT__ram[vlSelfRef.__VdlyDim0__gpu_de1_soc_top__DOT__u_poly_buffer__DOT__ram__v0] 
            = vlSelfRef.__VdlyVal__gpu_de1_soc_top__DOT__u_poly_buffer__DOT__ram__v0;
    }
}

void Vgpu_de1_soc_top___024root___eval_triggers__act(Vgpu_de1_soc_top___024root* vlSelf);

bool Vgpu_de1_soc_top___024root___eval_phase__act(Vgpu_de1_soc_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgpu_de1_soc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpu_de1_soc_top___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vgpu_de1_soc_top___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vgpu_de1_soc_top___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vgpu_de1_soc_top___024root___eval_phase__nba(Vgpu_de1_soc_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgpu_de1_soc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpu_de1_soc_top___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vgpu_de1_soc_top___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vgpu_de1_soc_top___024root___dump_triggers__ico(Vgpu_de1_soc_top___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vgpu_de1_soc_top___024root___dump_triggers__nba(Vgpu_de1_soc_top___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vgpu_de1_soc_top___024root___dump_triggers__act(Vgpu_de1_soc_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vgpu_de1_soc_top___024root___eval(Vgpu_de1_soc_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgpu_de1_soc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpu_de1_soc_top___024root___eval\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vgpu_de1_soc_top___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("gpu_de1_soc_top.v", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vgpu_de1_soc_top___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vgpu_de1_soc_top___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("gpu_de1_soc_top.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vgpu_de1_soc_top___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("gpu_de1_soc_top.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vgpu_de1_soc_top___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vgpu_de1_soc_top___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vgpu_de1_soc_top___024root___eval_debug_assertions(Vgpu_de1_soc_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgpu_de1_soc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpu_de1_soc_top___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.CLOCK_50 & 0xfeU))) {
        Verilated::overWidthError("CLOCK_50");}
    if (VL_UNLIKELY((vlSelfRef.KEY & 0xf0U))) {
        Verilated::overWidthError("KEY");}
    if (VL_UNLIKELY((vlSelfRef.SW & 0xfc00U))) {
        Verilated::overWidthError("SW");}
}
#endif  // VL_DEBUG
