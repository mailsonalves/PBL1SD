// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vgpu_de1_soc_top.h for the primary calling header

#include "Vgpu_de1_soc_top__pch.h"
#include "Vgpu_de1_soc_top___024root.h"

VL_ATTR_COLD void Vgpu_de1_soc_top___024root___eval_static(Vgpu_de1_soc_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgpu_de1_soc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpu_de1_soc_top___024root___eval_static\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vgpu_de1_soc_top___024root___eval_initial__TOP(Vgpu_de1_soc_top___024root* vlSelf);

VL_ATTR_COLD void Vgpu_de1_soc_top___024root___eval_initial(Vgpu_de1_soc_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgpu_de1_soc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpu_de1_soc_top___024root___eval_initial\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vgpu_de1_soc_top___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__CLOCK_50__0 = vlSelfRef.CLOCK_50;
    vlSelfRef.__Vtrigprevexpr___TOP__gpu_de1_soc_top__DOT__rst_n__0 
        = vlSelfRef.gpu_de1_soc_top__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__gpu_de1_soc_top__DOT__clk_25m__0 
        = vlSelfRef.gpu_de1_soc_top__DOT__clk_25m;
}

VL_ATTR_COLD void Vgpu_de1_soc_top___024root___eval_initial__TOP(Vgpu_de1_soc_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgpu_de1_soc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpu_de1_soc_top___024root___eval_initial__TOP\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    // Body
    vlSelfRef.VGA_SYNC_N = 0U;
    __Vtemp_1[0U] = 0x2e686578U;
    __Vtemp_1[1U] = 0x64617461U;
    __Vtemp_1[2U] = 0x6d61705fU;
    __Vtemp_1[3U] = 0x74696c65U;
    VL_READMEM_N(true, 8, 1200, 0, VL_CVT_PACK_STR_NW(4, __Vtemp_1)
                 ,  &(vlSelfRef.gpu_de1_soc_top__DOT__u_bg_engine__DOT__u_map_buffer__DOT__map_ram)
                 , 0, ~0ULL);
    __Vtemp_2[0U] = 0x2e686578U;
    __Vtemp_2[1U] = 0x696c6573U;
    __Vtemp_2[2U] = 0x74U;
    VL_READMEM_N(true, 8, 16384, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_2)
                 ,  &(vlSelfRef.gpu_de1_soc_top__DOT__u_patterns__DOT__ram)
                 , 0, ~0ULL);
    __Vtemp_3[0U] = 0x2e686578U;
    __Vtemp_3[1U] = 0x65747465U;
    __Vtemp_3[2U] = 0x70616cU;
    VL_READMEM_N(true, 24, 256, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_3)
                 ,  &(vlSelfRef.gpu_de1_soc_top__DOT__u_palette__DOT__clut_ram)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void Vgpu_de1_soc_top___024root___eval_final(Vgpu_de1_soc_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgpu_de1_soc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpu_de1_soc_top___024root___eval_final\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vgpu_de1_soc_top___024root___dump_triggers__stl(Vgpu_de1_soc_top___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vgpu_de1_soc_top___024root___eval_phase__stl(Vgpu_de1_soc_top___024root* vlSelf);

VL_ATTR_COLD void Vgpu_de1_soc_top___024root___eval_settle(Vgpu_de1_soc_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgpu_de1_soc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpu_de1_soc_top___024root___eval_settle\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vgpu_de1_soc_top___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("gpu_de1_soc_top.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vgpu_de1_soc_top___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vgpu_de1_soc_top___024root___dump_triggers__stl(Vgpu_de1_soc_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgpu_de1_soc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpu_de1_soc_top___024root___dump_triggers__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vgpu_de1_soc_top___024root___stl_sequent__TOP__0(Vgpu_de1_soc_top___024root* vlSelf);

VL_ATTR_COLD void Vgpu_de1_soc_top___024root___eval_stl(Vgpu_de1_soc_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgpu_de1_soc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpu_de1_soc_top___024root___eval_stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vgpu_de1_soc_top___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vgpu_de1_soc_top___024root___stl_sequent__TOP__0(Vgpu_de1_soc_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgpu_de1_soc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpu_de1_soc_top___024root___stl_sequent__TOP__0\n"); );
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
    vlSelfRef.VGA_CLK = vlSelfRef.gpu_de1_soc_top__DOT__clk_25m;
    vlSelfRef.gpu_de1_soc_top__DOT__u_input_ctrl__DOT__frame_tick 
        = (0xcb735U == vlSelfRef.gpu_de1_soc_top__DOT__u_input_ctrl__DOT__frame_cnt);
    vlSelfRef.gpu_de1_soc_top__DOT__u_input_ctrl__DOT__current_bird_y 
        = (0xffU & ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_input_ctrl__DOT__bird_y_sub) 
                    >> 4U));
    vlSelfRef.gpu_de1_soc_top__DOT__u_bg_engine__DOT__u_map_buffer__DOT__addr_wr 
        = (0x7ffU & (((IData)(vlSelfRef.gpu_de1_soc_top__DOT__tm_y) 
                      << 5U) + (((IData)(vlSelfRef.gpu_de1_soc_top__DOT__tm_y) 
                                 << 3U) + (IData)(vlSelfRef.gpu_de1_soc_top__DOT__tm_x))));
    vlSelfRef.LEDR = ((0x3f8U & (IData)(vlSelfRef.LEDR)) 
                      | ((4U & ((IData)(vlSelfRef.SW) 
                                << 2U)) | (((IData)(vlSelfRef.gpu_de1_soc_top__DOT__cmd_valid) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.gpu_de1_soc_top__DOT__rast_busy))));
    vlSelfRef.gpu_de1_soc_top__DOT__rst_n = (1U & (IData)(vlSelfRef.KEY));
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
    vlSelfRef.VGA_BLANK_N = ((0x280U > (IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_vga_sync__DOT__h_cnt)) 
                             & (0x1e0U > (IData)(vlSelfRef.gpu_de1_soc_top__DOT__u_vga_sync__DOT__v_cnt)));
    vlSelfRef.LEDR = ((0x1ffU & (IData)(vlSelfRef.LEDR)) 
                      | ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__rst_n) 
                         << 9U));
    if (vlSelfRef.VGA_BLANK_N) {
        vlSelfRef.VGA_R = (0xffU & (vlSelfRef.gpu_de1_soc_top__DOT__rgb_24 
                                    >> 0x10U));
        vlSelfRef.VGA_G = (0xffU & (vlSelfRef.gpu_de1_soc_top__DOT__rgb_24 
                                    >> 8U));
        vlSelfRef.VGA_B = (0xffU & vlSelfRef.gpu_de1_soc_top__DOT__rgb_24);
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
        vlSelfRef.VGA_R = 0U;
        vlSelfRef.VGA_G = 0U;
        vlSelfRef.VGA_B = 0U;
        vlSelfRef.gpu_de1_soc_top__DOT__pixel_y = 0U;
        vlSelfRef.gpu_de1_soc_top__DOT__pixel_x = 0U;
        vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT____VdfgRegularize_h46df5cdf_0_0 = 0U;
        vlSelfRef.gpu_de1_soc_top__DOT__u_sprite_engine__DOT____VdfgRegularize_h46df5cdf_0_1 = 0U;
    }
    gpu_de1_soc_top__DOT__u_bg_engine__DOT__sum_y = 
        (0x1ffU & ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_y) 
                   + (IData)(vlSelfRef.gpu_de1_soc_top__DOT__scroll_y)));
    vlSelfRef.gpu_de1_soc_top__DOT__buf_rd_addr = (0x1ffffU 
                                                   & (((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_y) 
                                                       << 8U) 
                                                      + 
                                                      (((IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_y) 
                                                        << 6U) 
                                                       + (IData)(vlSelfRef.gpu_de1_soc_top__DOT__pixel_x))));
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

VL_ATTR_COLD void Vgpu_de1_soc_top___024root___eval_triggers__stl(Vgpu_de1_soc_top___024root* vlSelf);

VL_ATTR_COLD bool Vgpu_de1_soc_top___024root___eval_phase__stl(Vgpu_de1_soc_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgpu_de1_soc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpu_de1_soc_top___024root___eval_phase__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vgpu_de1_soc_top___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vgpu_de1_soc_top___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vgpu_de1_soc_top___024root___dump_triggers__ico(Vgpu_de1_soc_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgpu_de1_soc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpu_de1_soc_top___024root___dump_triggers__ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vgpu_de1_soc_top___024root___dump_triggers__act(Vgpu_de1_soc_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgpu_de1_soc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpu_de1_soc_top___024root___dump_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge CLOCK_50)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge gpu_de1_soc_top.rst_n)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge gpu_de1_soc_top.clk_25m)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vgpu_de1_soc_top___024root___dump_triggers__nba(Vgpu_de1_soc_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgpu_de1_soc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpu_de1_soc_top___024root___dump_triggers__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge CLOCK_50)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge gpu_de1_soc_top.rst_n)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge gpu_de1_soc_top.clk_25m)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vgpu_de1_soc_top___024root___ctor_var_reset(Vgpu_de1_soc_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgpu_de1_soc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpu_de1_soc_top___024root___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->CLOCK_50 = VL_RAND_RESET_I(1);
    vlSelf->KEY = VL_RAND_RESET_I(4);
    vlSelf->SW = VL_RAND_RESET_I(10);
    vlSelf->LEDR = VL_RAND_RESET_I(10);
    vlSelf->VGA_HS = VL_RAND_RESET_I(1);
    vlSelf->VGA_VS = VL_RAND_RESET_I(1);
    vlSelf->VGA_R = VL_RAND_RESET_I(8);
    vlSelf->VGA_G = VL_RAND_RESET_I(8);
    vlSelf->VGA_B = VL_RAND_RESET_I(8);
    vlSelf->VGA_BLANK_N = VL_RAND_RESET_I(1);
    vlSelf->VGA_SYNC_N = VL_RAND_RESET_I(1);
    vlSelf->VGA_CLK = VL_RAND_RESET_I(1);
    vlSelf->gpu_de1_soc_top__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->gpu_de1_soc_top__DOT__clk_25m = VL_RAND_RESET_I(1);
    vlSelf->gpu_de1_soc_top__DOT__pixel_x = VL_RAND_RESET_I(9);
    vlSelf->gpu_de1_soc_top__DOT__pixel_y = VL_RAND_RESET_I(8);
    vlSelf->gpu_de1_soc_top__DOT__cmd_data = VL_RAND_RESET_I(32);
    vlSelf->gpu_de1_soc_top__DOT__cmd_valid = VL_RAND_RESET_I(1);
    vlSelf->gpu_de1_soc_top__DOT__pal_we = VL_RAND_RESET_I(1);
    vlSelf->gpu_de1_soc_top__DOT__pal_addr = VL_RAND_RESET_I(8);
    vlSelf->gpu_de1_soc_top__DOT__pal_data = VL_RAND_RESET_I(24);
    vlSelf->gpu_de1_soc_top__DOT__tm_we = VL_RAND_RESET_I(1);
    vlSelf->gpu_de1_soc_top__DOT__tm_x = VL_RAND_RESET_I(6);
    vlSelf->gpu_de1_soc_top__DOT__tm_y = VL_RAND_RESET_I(5);
    vlSelf->gpu_de1_soc_top__DOT__tm_tile_id = VL_RAND_RESET_I(8);
    vlSelf->gpu_de1_soc_top__DOT__scroll_x = VL_RAND_RESET_I(9);
    vlSelf->gpu_de1_soc_top__DOT__scroll_y = VL_RAND_RESET_I(8);
    vlSelf->gpu_de1_soc_top__DOT__sat_we = VL_RAND_RESET_I(1);
    vlSelf->gpu_de1_soc_top__DOT__sat_addr = VL_RAND_RESET_I(5);
    vlSelf->gpu_de1_soc_top__DOT__sat_data = VL_RAND_RESET_I(32);
    vlSelf->gpu_de1_soc_top__DOT__rast_x0 = VL_RAND_RESET_I(9);
    vlSelf->gpu_de1_soc_top__DOT__rast_x1 = VL_RAND_RESET_I(9);
    vlSelf->gpu_de1_soc_top__DOT__rast_x2 = VL_RAND_RESET_I(9);
    vlSelf->gpu_de1_soc_top__DOT__rast_y0 = VL_RAND_RESET_I(8);
    vlSelf->gpu_de1_soc_top__DOT__rast_y1 = VL_RAND_RESET_I(8);
    vlSelf->gpu_de1_soc_top__DOT__rast_y2 = VL_RAND_RESET_I(8);
    vlSelf->gpu_de1_soc_top__DOT__rast_color = VL_RAND_RESET_I(8);
    vlSelf->gpu_de1_soc_top__DOT__rast_clear_screen = VL_RAND_RESET_I(1);
    vlSelf->gpu_de1_soc_top__DOT__rast_start = VL_RAND_RESET_I(1);
    vlSelf->gpu_de1_soc_top__DOT__rast_busy = VL_RAND_RESET_I(1);
    vlSelf->gpu_de1_soc_top__DOT__sp_vram_addr = VL_RAND_RESET_I(14);
    vlSelf->gpu_de1_soc_top__DOT__bg_pixel = VL_RAND_RESET_I(8);
    vlSelf->gpu_de1_soc_top__DOT__sp_pixel = VL_RAND_RESET_I(8);
    vlSelf->gpu_de1_soc_top__DOT__buf_we = VL_RAND_RESET_I(1);
    vlSelf->gpu_de1_soc_top__DOT__buf_wr_addr = VL_RAND_RESET_I(17);
    vlSelf->gpu_de1_soc_top__DOT__buf_wr_data = VL_RAND_RESET_I(8);
    vlSelf->gpu_de1_soc_top__DOT__poly_pixel = VL_RAND_RESET_I(8);
    vlSelf->gpu_de1_soc_top__DOT__buf_rd_addr = VL_RAND_RESET_I(17);
    vlSelf->gpu_de1_soc_top__DOT__rgb_24 = VL_RAND_RESET_I(24);
    vlSelf->gpu_de1_soc_top__DOT__u_vga_sync__DOT__h_cnt = VL_RAND_RESET_I(10);
    vlSelf->gpu_de1_soc_top__DOT__u_vga_sync__DOT__v_cnt = VL_RAND_RESET_I(10);
    vlSelf->gpu_de1_soc_top__DOT__u_input_ctrl__DOT__frame_cnt = VL_RAND_RESET_I(20);
    vlSelf->gpu_de1_soc_top__DOT__u_input_ctrl__DOT__frame_tick = VL_RAND_RESET_I(1);
    vlSelf->gpu_de1_soc_top__DOT__u_input_ctrl__DOT__key1_sync = VL_RAND_RESET_I(3);
    vlSelf->gpu_de1_soc_top__DOT__u_input_ctrl__DOT__jump_request = VL_RAND_RESET_I(1);
    vlSelf->gpu_de1_soc_top__DOT__u_input_ctrl__DOT__bird_y_sub = VL_RAND_RESET_I(12);
    vlSelf->gpu_de1_soc_top__DOT__u_input_ctrl__DOT__velocity_y = VL_RAND_RESET_I(8);
    vlSelf->gpu_de1_soc_top__DOT__u_input_ctrl__DOT__bg_scroll_x = VL_RAND_RESET_I(9);
    vlSelf->gpu_de1_soc_top__DOT__u_input_ctrl__DOT__current_bird_y = VL_RAND_RESET_I(8);
    vlSelf->gpu_de1_soc_top__DOT__u_input_ctrl__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->gpu_de1_soc_top__DOT__u_bg_engine__DOT__current_tile_id = VL_RAND_RESET_I(8);
    vlSelf->gpu_de1_soc_top__DOT__u_bg_engine__DOT__sub_x_delay = VL_RAND_RESET_I(3);
    vlSelf->gpu_de1_soc_top__DOT__u_bg_engine__DOT__sub_y_delay = VL_RAND_RESET_I(3);
    vlSelf->gpu_de1_soc_top__DOT__u_bg_engine__DOT____VdfgRegularize_hf66fa8df_0_0 = VL_RAND_RESET_I(10);
    vlSelf->gpu_de1_soc_top__DOT__u_bg_engine__DOT____VdfgRegularize_hf66fa8df_1_0 = VL_RAND_RESET_I(9);
    for (int __Vi0 = 0; __Vi0 < 1200; ++__Vi0) {
        vlSelf->gpu_de1_soc_top__DOT__u_bg_engine__DOT__u_map_buffer__DOT__map_ram[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->gpu_de1_soc_top__DOT__u_bg_engine__DOT__u_map_buffer__DOT__addr_wr = VL_RAND_RESET_I(11);
    vlSelf->gpu_de1_soc_top__DOT__u_bg_engine__DOT__u_map_buffer__DOT__addr_rd = VL_RAND_RESET_I(11);
    vlSelf->gpu_de1_soc_top__DOT__u_bg_engine__DOT__u_map_buffer__DOT____Vlvbound_h813bd28f__0 = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sat_ram[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_addrs[__Vi0] = VL_RAND_RESET_I(14);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->gpu_de1_soc_top__DOT__u_sprite_engine__DOT__sprite_hit[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->gpu_de1_soc_top__DOT__u_sprite_engine__DOT____VdfgRegularize_h46df5cdf_0_0 = VL_RAND_RESET_I(4);
    vlSelf->gpu_de1_soc_top__DOT__u_sprite_engine__DOT____VdfgRegularize_h46df5cdf_0_1 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16384; ++__Vi0) {
        vlSelf->gpu_de1_soc_top__DOT__u_patterns__DOT__ram[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->gpu_de1_soc_top__DOT__u_rasterizer__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->gpu_de1_soc_top__DOT__u_rasterizer__DOT__min_x = VL_RAND_RESET_I(9);
    vlSelf->gpu_de1_soc_top__DOT__u_rasterizer__DOT__max_x = VL_RAND_RESET_I(9);
    vlSelf->gpu_de1_soc_top__DOT__u_rasterizer__DOT__min_y = VL_RAND_RESET_I(9);
    vlSelf->gpu_de1_soc_top__DOT__u_rasterizer__DOT__max_y = VL_RAND_RESET_I(9);
    vlSelf->gpu_de1_soc_top__DOT__u_rasterizer__DOT__curr_x = VL_RAND_RESET_I(9);
    vlSelf->gpu_de1_soc_top__DOT__u_rasterizer__DOT__curr_y = VL_RAND_RESET_I(9);
    vlSelf->gpu_de1_soc_top__DOT__u_rasterizer__DOT__vx0 = VL_RAND_RESET_I(11);
    vlSelf->gpu_de1_soc_top__DOT__u_rasterizer__DOT__vy0 = VL_RAND_RESET_I(11);
    vlSelf->gpu_de1_soc_top__DOT__u_rasterizer__DOT__vx1 = VL_RAND_RESET_I(11);
    vlSelf->gpu_de1_soc_top__DOT__u_rasterizer__DOT__vy1 = VL_RAND_RESET_I(11);
    vlSelf->gpu_de1_soc_top__DOT__u_rasterizer__DOT__vx2 = VL_RAND_RESET_I(11);
    vlSelf->gpu_de1_soc_top__DOT__u_rasterizer__DOT__vy2 = VL_RAND_RESET_I(11);
    vlSelf->gpu_de1_soc_top__DOT__u_rasterizer__DOT____VdfgRegularize_h9c5cd1d9_0_8 = VL_RAND_RESET_I(32);
    vlSelf->gpu_de1_soc_top__DOT__u_rasterizer__DOT____VdfgRegularize_h9c5cd1d9_0_9 = VL_RAND_RESET_I(32);
    vlSelf->gpu_de1_soc_top__DOT__u_rasterizer__DOT____VdfgRegularize_h9c5cd1d9_0_10 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 76800; ++__Vi0) {
        vlSelf->gpu_de1_soc_top__DOT__u_poly_buffer__DOT__ram[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->gpu_de1_soc_top__DOT__u_poly_buffer__DOT____Vlvbound_h87b1c6a8__0 = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->gpu_de1_soc_top__DOT__u_palette__DOT__clut_ram[__Vi0] = VL_RAND_RESET_I(24);
    }
    vlSelf->__Vdly__gpu_de1_soc_top__DOT__u_input_ctrl__DOT__frame_cnt = VL_RAND_RESET_I(20);
    vlSelf->__Vdly__gpu_de1_soc_top__DOT__u_input_ctrl__DOT__bg_scroll_x = VL_RAND_RESET_I(9);
    vlSelf->__Vdly__gpu_de1_soc_top__DOT__u_input_ctrl__DOT__bird_y_sub = VL_RAND_RESET_I(12);
    vlSelf->__Vdly__gpu_de1_soc_top__DOT__u_input_ctrl__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__gpu_de1_soc_top__DOT__rast_y0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__gpu_de1_soc_top__DOT__rast_x0 = VL_RAND_RESET_I(9);
    vlSelf->__Vdly__gpu_de1_soc_top__DOT__rast_y1 = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__gpu_de1_soc_top__DOT__rast_x1 = VL_RAND_RESET_I(9);
    vlSelf->__Vdly__gpu_de1_soc_top__DOT__rast_y2 = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__gpu_de1_soc_top__DOT__rast_start = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__gpu_de1_soc_top__DOT__rast_clear_screen = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__gpu_de1_soc_top__DOT__rast_color = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__gpu_de1_soc_top__DOT__rast_x2 = VL_RAND_RESET_I(9);
    vlSelf->__Vdly__gpu_de1_soc_top__DOT__u_rasterizer__DOT__curr_x = VL_RAND_RESET_I(9);
    vlSelf->__Vdly__gpu_de1_soc_top__DOT__u_rasterizer__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__gpu_de1_soc_top__DOT__u_rasterizer__DOT__curr_y = VL_RAND_RESET_I(9);
    vlSelf->__VdlyVal__gpu_de1_soc_top__DOT__u_poly_buffer__DOT__ram__v0 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyDim0__gpu_de1_soc_top__DOT__u_poly_buffer__DOT__ram__v0 = VL_RAND_RESET_I(17);
    vlSelf->__VdlySet__gpu_de1_soc_top__DOT__u_poly_buffer__DOT__ram__v0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__CLOCK_50__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__gpu_de1_soc_top__DOT__rst_n__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__gpu_de1_soc_top__DOT__clk_25m__0 = VL_RAND_RESET_I(1);
}
