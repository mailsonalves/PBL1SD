// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vgpu_de1_soc_top.h for the primary calling header

#include "Vgpu_de1_soc_top__pch.h"
#include "Vgpu_de1_soc_top__Syms.h"
#include "Vgpu_de1_soc_top___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vgpu_de1_soc_top___024root___dump_triggers__ico(Vgpu_de1_soc_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vgpu_de1_soc_top___024root___eval_triggers__ico(Vgpu_de1_soc_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgpu_de1_soc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpu_de1_soc_top___024root___eval_triggers__ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.set(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vgpu_de1_soc_top___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vgpu_de1_soc_top___024root___dump_triggers__act(Vgpu_de1_soc_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vgpu_de1_soc_top___024root___eval_triggers__act(Vgpu_de1_soc_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgpu_de1_soc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpu_de1_soc_top___024root___eval_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.CLOCK_50) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__CLOCK_50__0))));
    vlSelfRef.__VactTriggered.set(1U, ((~ (IData)(vlSelfRef.gpu_de1_soc_top__DOT__rst_n)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__gpu_de1_soc_top__DOT__rst_n__0)));
    vlSelfRef.__VactTriggered.set(2U, ((IData)(vlSelfRef.gpu_de1_soc_top__DOT__clk_25m) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__gpu_de1_soc_top__DOT__clk_25m__0))));
    vlSelfRef.__Vtrigprevexpr___TOP__CLOCK_50__0 = vlSelfRef.CLOCK_50;
    vlSelfRef.__Vtrigprevexpr___TOP__gpu_de1_soc_top__DOT__rst_n__0 
        = vlSelfRef.gpu_de1_soc_top__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__gpu_de1_soc_top__DOT__clk_25m__0 
        = vlSelfRef.gpu_de1_soc_top__DOT__clk_25m;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vgpu_de1_soc_top___024root___dump_triggers__act(vlSelf);
    }
#endif
}
