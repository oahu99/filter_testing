// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vfilter_control__Syms.h"


//======================

void Vfilter_control::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&Vfilter_control::traceInit, &Vfilter_control::traceFull, &Vfilter_control::traceChg, this);
}
void Vfilter_control::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    Vfilter_control* t = (Vfilter_control*)userthis;
    Vfilter_control__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void Vfilter_control::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vfilter_control* t = (Vfilter_control*)userthis;
    Vfilter_control__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void Vfilter_control::traceInitThis(Vfilter_control__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vfilter_control* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
        vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void Vfilter_control::traceFullThis(Vfilter_control__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vfilter_control* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vfilter_control::traceInitThis__1(Vfilter_control__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vfilter_control* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBit(c+225,"i_clk", false,-1);
        vcdp->declBit(c+233,"i_reset", false,-1);
        vcdp->declBit(c+241,"i_start", false,-1);
        vcdp->declQuad(c+249,"o_result", false,-1, 38,0);
        vcdp->declBit(c+265,"i2s_sck", false,-1);
        vcdp->declBit(c+273,"i2s_ws", false,-1);
        vcdp->declBit(c+281,"i2s_sda", false,-1);
        vcdp->declBit(c+289,"i_ce", false,-1);
        vcdp->declBit(c+225,"filter_control i_clk", false,-1);
        vcdp->declBit(c+233,"filter_control i_reset", false,-1);
        vcdp->declBit(c+241,"filter_control i_start", false,-1);
        vcdp->declQuad(c+249,"filter_control o_result", false,-1, 38,0);
        vcdp->declBit(c+265,"filter_control i2s_sck", false,-1);
        vcdp->declBit(c+273,"filter_control i2s_ws", false,-1);
        vcdp->declBit(c+281,"filter_control i2s_sda", false,-1);
        vcdp->declBit(c+289,"filter_control i_ce", false,-1);
        vcdp->declBus(c+185,"filter_control state", false,-1, 15,0);
        vcdp->declBus(c+137,"filter_control next_state", false,-1, 15,0);
        vcdp->declBus(c+193,"filter_control i_idx", false,-1, 15,0);
        vcdp->declBit(c+1,"filter_control i_tap_wr", false,-1);
        vcdp->declBus(c+305,"filter_control i_tap", false,-1, 15,0);
        vcdp->declBus(c+201,"filter_control left_channel", false,-1, 15,0);
        vcdp->declBus(c+161,"filter_control right_channel", false,-1, 15,0);
        vcdp->declBit(c+145,"filter_control i2s_wsp", false,-1);
        vcdp->declBit(c+217,"filter_control i_ce_flag_1", false,-1);
        vcdp->declBit(c+169,"filter_control i_ce_flag_2", false,-1);
        vcdp->declBus(c+313,"filter_control filter_0 LGNTAPS", false,-1, 31,0);
        vcdp->declBus(c+321,"filter_control filter_0 IW", false,-1, 31,0);
        vcdp->declBus(c+321,"filter_control filter_0 TW", false,-1, 31,0);
        vcdp->declBus(c+329,"filter_control filter_0 OW", false,-1, 31,0);
        vcdp->declBus(c+337,"filter_control filter_0 NTAPS", false,-1, 7,0);
        vcdp->declBus(c+345,"filter_control filter_0 FIXED_TAPS", false,-1, 0,0);
        vcdp->declBus(c+345,"filter_control filter_0 INITIAL_COEFFS", false,-1, 0,0);
        vcdp->declBus(c+353,"filter_control filter_0 MEMSZ", false,-1, 31,0);
        vcdp->declBit(c+225,"filter_control filter_0 i_clk", false,-1);
        vcdp->declBit(c+297,"filter_control filter_0 i_reset", false,-1);
        vcdp->declBit(c+1,"filter_control filter_0 i_tap_wr", false,-1);
        vcdp->declBus(c+193,"filter_control filter_0 i_tap", false,-1, 15,0);
        vcdp->declBit(c+289,"filter_control filter_0 i_ce", false,-1);
        vcdp->declBus(c+201,"filter_control filter_0 i_sample", false,-1, 15,0);
        vcdp->declBit(c+9,"filter_control filter_0 o_ce", false,-1);
        vcdp->declQuad(c+249,"filter_control filter_0 o_result", false,-1, 38,0);
        vcdp->declBus(c+17,"filter_control filter_0 tap", false,-1, 15,0);
        vcdp->declBus(c+25,"filter_control filter_0 dwidx", false,-1, 6,0);
        vcdp->declBus(c+33,"filter_control filter_0 didx", false,-1, 6,0);
        vcdp->declBus(c+41,"filter_control filter_0 tidx", false,-1, 6,0);
        vcdp->declBus(c+49,"filter_control filter_0 data", false,-1, 15,0);
        vcdp->declBit(c+57,"filter_control filter_0 d_ce", false,-1);
        vcdp->declBit(c+65,"filter_control filter_0 p_ce", false,-1);
        vcdp->declBit(c+73,"filter_control filter_0 m_ce", false,-1);
        vcdp->declBus(c+81,"filter_control filter_0 product", false,-1, 31,0);
        vcdp->declQuad(c+89,"filter_control filter_0 r_acc", false,-1, 38,0);
        vcdp->declBit(c+105,"filter_control filter_0 last_tap_index", false,-1);
        vcdp->declBus(c+113,"filter_control filter_0 pre_acc_ce", false,-1, 2,0);
        vcdp->declBus(c+121,"filter_control filter_0 genblk2 tapwidx", false,-1, 6,0);
        vcdp->declBus(c+321,"filter_control i2s_m0 width", false,-1, 31,0);
        vcdp->declBit(c+265,"filter_control i2s_m0 sck", false,-1);
        vcdp->declBit(c+273,"filter_control i2s_m0 ws", false,-1);
        vcdp->declBit(c+281,"filter_control i2s_m0 sd", false,-1);
        vcdp->declBit(c+145,"filter_control i2s_m0 wsp", false,-1);
        vcdp->declBus(c+201,"filter_control i2s_m0 data_left", false,-1, 15,0);
        vcdp->declBus(c+161,"filter_control i2s_m0 data_right", false,-1, 15,0);
        vcdp->declBit(c+129,"filter_control i2s_m0 wsd", false,-1);
        vcdp->declBit(c+177,"filter_control i2s_m0 wsdd", false,-1);
        vcdp->declBus(c+153,"filter_control i2s_m0 counter", false,-1, 4,0);
        vcdp->declBus(c+209,"filter_control i2s_m0 shift", false,-1, 0,15);
    }
}

void Vfilter_control::traceFullThis__1(Vfilter_control__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vfilter_control* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBit(c+1,(vlTOPp->filter_control__DOT__i_tap_wr));
        vcdp->fullBit(c+9,(vlTOPp->filter_control__DOT__filter_0__DOT__o_ce));
        vcdp->fullBus(c+17,(vlTOPp->filter_control__DOT__filter_0__DOT__tap),16);
        vcdp->fullBus(c+25,(vlTOPp->filter_control__DOT__filter_0__DOT__dwidx),7);
        vcdp->fullBus(c+33,(vlTOPp->filter_control__DOT__filter_0__DOT__didx),7);
        vcdp->fullBus(c+41,(vlTOPp->filter_control__DOT__filter_0__DOT__tidx),7);
        vcdp->fullBus(c+49,(vlTOPp->filter_control__DOT__filter_0__DOT__data),16);
        vcdp->fullBit(c+57,(vlTOPp->filter_control__DOT__filter_0__DOT__d_ce));
        vcdp->fullBit(c+65,(vlTOPp->filter_control__DOT__filter_0__DOT__p_ce));
        vcdp->fullBit(c+73,(vlTOPp->filter_control__DOT__filter_0__DOT__m_ce));
        vcdp->fullBus(c+81,(vlTOPp->filter_control__DOT__filter_0__DOT__product),32);
        vcdp->fullQuad(c+89,(vlTOPp->filter_control__DOT__filter_0__DOT__r_acc),39);
        vcdp->fullBit(c+105,((1U >= ((IData)(0x67U) 
                                     - (IData)(vlTOPp->filter_control__DOT__filter_0__DOT__tidx)))));
        vcdp->fullBus(c+113,(vlTOPp->filter_control__DOT__filter_0__DOT__pre_acc_ce),3);
        vcdp->fullBus(c+121,(vlTOPp->filter_control__DOT__filter_0__DOT__genblk2__DOT__tapwidx),7);
        vcdp->fullBit(c+129,(vlTOPp->filter_control__DOT__i2s_m0__DOT__wsd));
        vcdp->fullBus(c+137,(vlTOPp->filter_control__DOT__next_state),16);
        vcdp->fullBit(c+145,(vlTOPp->filter_control__DOT__i2s_wsp));
        vcdp->fullBus(c+153,(vlTOPp->filter_control__DOT__i2s_m0__DOT__counter),5);
        vcdp->fullBus(c+161,(vlTOPp->filter_control__DOT__right_channel),16);
        vcdp->fullBit(c+169,(vlTOPp->filter_control__DOT__i_ce_flag_2));
        vcdp->fullBit(c+177,(vlTOPp->filter_control__DOT__i2s_m0__DOT__wsdd));
        vcdp->fullBus(c+185,(vlTOPp->filter_control__DOT__state),16);
        vcdp->fullBus(c+193,(((0U != (IData)(vlTOPp->filter_control__DOT__state))
                               ? (0xffffU & ((IData)(vlTOPp->filter_control__DOT__state) 
                                             - (IData)(1U)))
                               : 0U)),16);
        vcdp->fullBus(c+201,(vlTOPp->filter_control__DOT__left_channel),16);
        vcdp->fullBus(c+209,(vlTOPp->filter_control__DOT__i2s_m0__DOT__shift),16);
        vcdp->fullBit(c+217,(vlTOPp->filter_control__DOT__i_ce_flag_1));
        vcdp->fullBit(c+225,(vlTOPp->i_clk));
        vcdp->fullBit(c+233,(vlTOPp->i_reset));
        vcdp->fullBit(c+241,(vlTOPp->i_start));
        vcdp->fullQuad(c+249,(vlTOPp->o_result),39);
        vcdp->fullBit(c+265,(vlTOPp->i2s_sck));
        vcdp->fullBit(c+273,(vlTOPp->i2s_ws));
        vcdp->fullBit(c+281,(vlTOPp->i2s_sda));
        vcdp->fullBit(c+289,(vlTOPp->i_ce));
        vcdp->fullBit(c+297,((1U & (~ (IData)(vlTOPp->i_reset)))));
        vcdp->fullBus(c+305,(vlTOPp->filter_control__DOT__i_tap),16);
        vcdp->fullBus(c+313,(7U),32);
        vcdp->fullBus(c+321,(0x10U),32);
        vcdp->fullBus(c+329,(0x27U),32);
        vcdp->fullBus(c+337,(0x67U),8);
        vcdp->fullBit(c+345,(0U));
        vcdp->fullBus(c+353,(0x80U),32);
    }
}
