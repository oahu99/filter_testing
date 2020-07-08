// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vfilter_control__Syms.h"


//======================

void Vfilter_control::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vfilter_control* t = (Vfilter_control*)userthis;
    Vfilter_control__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void Vfilter_control::traceChgThis(Vfilter_control__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vfilter_control* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 3U))))) {
            vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 4U))))) {
            vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 5U))))) {
            vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 7U))))) {
            vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__6(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((4U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__7(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((8U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__8(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((0x10U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__9(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((0x40U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__10(vlSymsp, vcdp, code);
        }
        vlTOPp->traceChgThis__11(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vfilter_control::traceChgThis__2(Vfilter_control__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vfilter_control* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1,(vlTOPp->filter_control__DOT__i_tap_wr));
        vcdp->chgBit(c+9,(vlTOPp->filter_control__DOT__filter_0__DOT__o_ce));
        vcdp->chgBus(c+17,(vlTOPp->filter_control__DOT__filter_0__DOT__tap),16);
        vcdp->chgBus(c+25,(vlTOPp->filter_control__DOT__filter_0__DOT__dwidx),7);
        vcdp->chgBus(c+33,(vlTOPp->filter_control__DOT__filter_0__DOT__didx),7);
        vcdp->chgBus(c+41,(vlTOPp->filter_control__DOT__filter_0__DOT__tidx),7);
        vcdp->chgBus(c+49,(vlTOPp->filter_control__DOT__filter_0__DOT__data),16);
        vcdp->chgBit(c+57,(vlTOPp->filter_control__DOT__filter_0__DOT__d_ce));
        vcdp->chgBit(c+65,(vlTOPp->filter_control__DOT__filter_0__DOT__p_ce));
        vcdp->chgBit(c+73,(vlTOPp->filter_control__DOT__filter_0__DOT__m_ce));
        vcdp->chgBus(c+81,(vlTOPp->filter_control__DOT__filter_0__DOT__product),32);
        vcdp->chgQuad(c+89,(vlTOPp->filter_control__DOT__filter_0__DOT__r_acc),39);
        vcdp->chgBit(c+105,((1U >= ((IData)(0x67U) 
                                    - (IData)(vlTOPp->filter_control__DOT__filter_0__DOT__tidx)))));
        vcdp->chgBus(c+113,(vlTOPp->filter_control__DOT__filter_0__DOT__pre_acc_ce),3);
        vcdp->chgBus(c+121,(vlTOPp->filter_control__DOT__filter_0__DOT__genblk2__DOT__tapwidx),7);
    }
}

void Vfilter_control::traceChgThis__3(Vfilter_control__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vfilter_control* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+129,(vlTOPp->filter_control__DOT__i2s_m0__DOT__wsd));
    }
}

void Vfilter_control::traceChgThis__4(Vfilter_control__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vfilter_control* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+137,(vlTOPp->filter_control__DOT__next_state),16);
    }
}

void Vfilter_control::traceChgThis__5(Vfilter_control__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vfilter_control* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+145,(vlTOPp->filter_control__DOT__i2s_wsp));
    }
}

void Vfilter_control::traceChgThis__6(Vfilter_control__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vfilter_control* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+153,(vlTOPp->filter_control__DOT__i2s_m0__DOT__counter),5);
    }
}

void Vfilter_control::traceChgThis__7(Vfilter_control__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vfilter_control* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+161,(vlTOPp->filter_control__DOT__right_channel),16);
        vcdp->chgBit(c+169,(vlTOPp->filter_control__DOT__i_ce_flag_2));
        vcdp->chgBit(c+177,(vlTOPp->filter_control__DOT__i2s_m0__DOT__wsdd));
    }
}

void Vfilter_control::traceChgThis__8(Vfilter_control__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vfilter_control* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+185,(vlTOPp->filter_control__DOT__state),16);
        vcdp->chgBus(c+193,(((0U != (IData)(vlTOPp->filter_control__DOT__state))
                              ? (0xffffU & ((IData)(vlTOPp->filter_control__DOT__state) 
                                            - (IData)(1U)))
                              : 0U)),16);
    }
}

void Vfilter_control::traceChgThis__9(Vfilter_control__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vfilter_control* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+201,(vlTOPp->filter_control__DOT__left_channel),16);
        vcdp->chgBus(c+209,(vlTOPp->filter_control__DOT__i2s_m0__DOT__shift),16);
    }
}

void Vfilter_control::traceChgThis__10(Vfilter_control__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vfilter_control* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+217,(vlTOPp->filter_control__DOT__i_ce_flag_1));
    }
}

void Vfilter_control::traceChgThis__11(Vfilter_control__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vfilter_control* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+225,(vlTOPp->i_clk));
        vcdp->chgBit(c+233,(vlTOPp->i_reset));
        vcdp->chgBit(c+241,(vlTOPp->i_start));
        vcdp->chgQuad(c+249,(vlTOPp->o_result),39);
        vcdp->chgBit(c+265,(vlTOPp->i2s_sck));
        vcdp->chgBit(c+273,(vlTOPp->i2s_ws));
        vcdp->chgBit(c+281,(vlTOPp->i2s_sda));
        vcdp->chgBit(c+289,(vlTOPp->i_ce));
        vcdp->chgBit(c+297,((1U & (~ (IData)(vlTOPp->i_reset)))));
    }
}
