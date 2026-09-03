// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vgpu_de1_soc_top__pch.h"

//============================================================
// Constructors

Vgpu_de1_soc_top::Vgpu_de1_soc_top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vgpu_de1_soc_top__Syms(contextp(), _vcname__, this)}
    , CLOCK_50{vlSymsp->TOP.CLOCK_50}
    , KEY{vlSymsp->TOP.KEY}
    , VGA_HS{vlSymsp->TOP.VGA_HS}
    , VGA_VS{vlSymsp->TOP.VGA_VS}
    , VGA_R{vlSymsp->TOP.VGA_R}
    , VGA_G{vlSymsp->TOP.VGA_G}
    , VGA_B{vlSymsp->TOP.VGA_B}
    , VGA_BLANK_N{vlSymsp->TOP.VGA_BLANK_N}
    , VGA_SYNC_N{vlSymsp->TOP.VGA_SYNC_N}
    , VGA_CLK{vlSymsp->TOP.VGA_CLK}
    , SW{vlSymsp->TOP.SW}
    , LEDR{vlSymsp->TOP.LEDR}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vgpu_de1_soc_top::Vgpu_de1_soc_top(const char* _vcname__)
    : Vgpu_de1_soc_top(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vgpu_de1_soc_top::~Vgpu_de1_soc_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vgpu_de1_soc_top___024root___eval_debug_assertions(Vgpu_de1_soc_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vgpu_de1_soc_top___024root___eval_static(Vgpu_de1_soc_top___024root* vlSelf);
void Vgpu_de1_soc_top___024root___eval_initial(Vgpu_de1_soc_top___024root* vlSelf);
void Vgpu_de1_soc_top___024root___eval_settle(Vgpu_de1_soc_top___024root* vlSelf);
void Vgpu_de1_soc_top___024root___eval(Vgpu_de1_soc_top___024root* vlSelf);

void Vgpu_de1_soc_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vgpu_de1_soc_top::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vgpu_de1_soc_top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vgpu_de1_soc_top___024root___eval_static(&(vlSymsp->TOP));
        Vgpu_de1_soc_top___024root___eval_initial(&(vlSymsp->TOP));
        Vgpu_de1_soc_top___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vgpu_de1_soc_top___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vgpu_de1_soc_top::eventsPending() { return false; }

uint64_t Vgpu_de1_soc_top::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vgpu_de1_soc_top::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vgpu_de1_soc_top___024root___eval_final(Vgpu_de1_soc_top___024root* vlSelf);

VL_ATTR_COLD void Vgpu_de1_soc_top::final() {
    Vgpu_de1_soc_top___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vgpu_de1_soc_top::hierName() const { return vlSymsp->name(); }
const char* Vgpu_de1_soc_top::modelName() const { return "Vgpu_de1_soc_top"; }
unsigned Vgpu_de1_soc_top::threads() const { return 1; }
void Vgpu_de1_soc_top::prepareClone() const { contextp()->prepareClone(); }
void Vgpu_de1_soc_top::atClone() const {
    contextp()->threadPoolpOnClone();
}
