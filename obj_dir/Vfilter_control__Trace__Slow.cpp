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
        vcdp->declBit(c+657,"i_clk", false,-1);
        vcdp->declBit(c+665,"i_reset", false,-1);
        vcdp->declBit(c+673,"i_ce", false,-1);
        vcdp->declBit(c+681,"i_start", false,-1);
        vcdp->declBus(c+689,"i_sample", false,-1, 15,0);
        vcdp->declBus(c+697,"o_result", false,-1, 15,0);
        vcdp->declBit(c+657,"filter_control i_clk", false,-1);
        vcdp->declBit(c+665,"filter_control i_reset", false,-1);
        vcdp->declBit(c+673,"filter_control i_ce", false,-1);
        vcdp->declBit(c+681,"filter_control i_start", false,-1);
        vcdp->declBus(c+689,"filter_control i_sample", false,-1, 15,0);
        vcdp->declBus(c+697,"filter_control o_result", false,-1, 15,0);
        vcdp->declBit(c+745,"filter_control i_tap_wr", false,-1);
        vcdp->declBus(c+753,"filter_control i_tap", false,-1, 15,0);
        vcdp->declQuad(c+761,"filter_control counter", false,-1, 63,0);
        vcdp->declBus(c+777,"filter_control impulse", false,-1, 31,0);
        vcdp->declBit(c+785,"filter_control i_ce_local", false,-1);
        vcdp->declBus(c+1,"filter_control out", false,-1, 31,0);
        vcdp->declBus(c+513,"filter_control o_float", false,-1, 31,0);
        vcdp->declBus(c+521,"filter_control normalized", false,-1, 15,0);
        vcdp->declBus(c+793,"filter_control dc0 ACCUMULATE_NUM", false,-1, 31,0);
        vcdp->declBit(c+657,"filter_control dc0 clk", false,-1);
        vcdp->declBit(c+705,"filter_control dc0 rst", false,-1);
        vcdp->declBus(c+801,"filter_control dc0 gain", false,-1, 15,0);
        vcdp->declBus(c+689,"filter_control dc0 mic_in", false,-1, 15,0);
        vcdp->declBus(c+521,"filter_control dc0 mic_out", false,-1, 15,0);
        vcdp->declBit(c+809,"filter_control dc0 calibrate", false,-1);
        vcdp->declArray(c+561,"filter_control dc0 state", false,-1, 127,0);
        vcdp->declArray(c+9,"filter_control dc0 next_state", false,-1, 127,0);
        vcdp->declArray(c+593,"filter_control dc0 offset", false,-1, 127,0);
        vcdp->declArray(c+625,"filter_control dc0 accumulate", false,-1, 127,0);
        vcdp->declArray(c+713,"filter_control dc0 mic_in_sext", false,-1, 127,0);
        vcdp->declArray(c+817,"filter_control dc0 mic_out_sext", false,-1, 127,0);
        vcdp->declBit(c+41,"filter_control dc0 done", false,-1);
        vcdp->declBus(c+521,"filter_control fixed_0 i_fixed", false,-1, 15,0);
        vcdp->declBus(c+513,"filter_control fixed_0 o_float", false,-1, 31,0);
        vcdp->declBus(c+529,"filter_control fixed_0 exponent", false,-1, 7,0);
        vcdp->declBit(c+537,"filter_control fixed_0 sign", false,-1);
        vcdp->declBus(c+545,"filter_control fixed_0 mantissa", false,-1, 22,0);
        vcdp->declBus(c+553,"filter_control fixed_0 unsigned_fixed", false,-1, 15,0);
        vcdp->declBus(c+849,"filter_control fir_0 LGNTAPS", false,-1, 31,0);
        vcdp->declBus(c+857,"filter_control fir_0 IW", false,-1, 31,0);
        vcdp->declBus(c+857,"filter_control fir_0 TW", false,-1, 31,0);
        vcdp->declBus(c+857,"filter_control fir_0 OW", false,-1, 31,0);
        vcdp->declBus(c+865,"filter_control fir_0 NTAPS", false,-1, 11,0);
        vcdp->declBus(c+873,"filter_control fir_0 FIXED_TAPS", false,-1, 0,0);
        vcdp->declArray(c+881,"filter_control fir_0 INITIAL_COEFFS", false,-1, 103,0);
        vcdp->declBus(c+793,"filter_control fir_0 MEMSZ", false,-1, 31,0);
        vcdp->declBit(c+657,"filter_control fir_0 i_clk", false,-1);
        vcdp->declBit(c+705,"filter_control fir_0 i_reset", false,-1);
        vcdp->declBit(c+745,"filter_control fir_0 i_tap_wr", false,-1);
        vcdp->declBus(c+913,"filter_control fir_0 i_tap", false,-1, 31,0);
        vcdp->declBit(c+673,"filter_control fir_0 i_ce", false,-1);
        vcdp->declBus(c+513,"filter_control fir_0 i_sample", false,-1, 31,0);
        vcdp->declBit(c+49,"filter_control fir_0 o_ce", false,-1);
        vcdp->declBus(c+1,"filter_control fir_0 o_result", false,-1, 31,0);
        vcdp->declBus(c+57,"filter_control fir_0 tap", false,-1, 31,0);
        vcdp->declBus(c+65,"filter_control fir_0 dwidx", false,-1, 10,0);
        vcdp->declBus(c+73,"filter_control fir_0 didx", false,-1, 10,0);
        vcdp->declBus(c+81,"filter_control fir_0 tidx", false,-1, 10,0);
        vcdp->declBus(c+89,"filter_control fir_0 data", false,-1, 31,0);
        vcdp->declBit(c+97,"filter_control fir_0 d_ce", false,-1);
        vcdp->declBit(c+105,"filter_control fir_0 p_ce", false,-1);
        vcdp->declBit(c+113,"filter_control fir_0 m_ce", false,-1);
        vcdp->declBus(c+121,"filter_control fir_0 product", false,-1, 31,0);
        vcdp->declBus(c+129,"filter_control fir_0 r_acc", false,-1, 31,0);
        vcdp->declBus(c+137,"filter_control fir_0 addition_result", false,-1, 31,0);
        vcdp->declBus(c+145,"filter_control fir_0 multiplication_result", false,-1, 31,0);
        vcdp->declBit(c+153,"filter_control fir_0 last_tap_index", false,-1);
        vcdp->declBus(c+161,"filter_control fir_0 pre_acc_ce", false,-1, 2,0);
        vcdp->declQuad(c+921,"filter_control fir_0 genblk1 ignored_inputs", false,-1, 32,0);
        vcdp->declBus(c+129,"filter_control fir_0 add_sub0 a_operand", false,-1, 31,0);
        vcdp->declBus(c+121,"filter_control fir_0 add_sub0 b_operand", false,-1, 31,0);
        vcdp->declBit(c+937,"filter_control fir_0 add_sub0 AddBar_Sub", false,-1);
        vcdp->declBit(c+169,"filter_control fir_0 add_sub0 Exception", false,-1);
        vcdp->declBus(c+137,"filter_control fir_0 add_sub0 result", false,-1, 31,0);
        vcdp->declBit(c+177,"filter_control fir_0 add_sub0 operation_sub_addBar", false,-1);
        vcdp->declBit(c+185,"filter_control fir_0 add_sub0 Comp_enable", false,-1);
        vcdp->declBit(c+193,"filter_control fir_0 add_sub0 output_sign", false,-1);
        vcdp->declBus(c+201,"filter_control fir_0 add_sub0 operand_a", false,-1, 31,0);
        vcdp->declBus(c+209,"filter_control fir_0 add_sub0 operand_b", false,-1, 31,0);
        vcdp->declBus(c+217,"filter_control fir_0 add_sub0 significand_a", false,-1, 23,0);
        vcdp->declBus(c+225,"filter_control fir_0 add_sub0 significand_b", false,-1, 23,0);
        vcdp->declBus(c+233,"filter_control fir_0 add_sub0 exponent_diff", false,-1, 7,0);
        vcdp->declBus(c+241,"filter_control fir_0 add_sub0 significand_b_add_sub", false,-1, 23,0);
        vcdp->declBus(c+249,"filter_control fir_0 add_sub0 exponent_b_add_sub", false,-1, 7,0);
        vcdp->declBus(c+257,"filter_control fir_0 add_sub0 significand_add", false,-1, 24,0);
        vcdp->declBus(c+265,"filter_control fir_0 add_sub0 add_sum", false,-1, 30,0);
        vcdp->declBus(c+273,"filter_control fir_0 add_sub0 significand_sub_complement", false,-1, 23,0);
        vcdp->declBus(c+281,"filter_control fir_0 add_sub0 significand_sub", false,-1, 24,0);
        vcdp->declBus(c+289,"filter_control fir_0 add_sub0 sub_diff", false,-1, 30,0);
        vcdp->declBus(c+297,"filter_control fir_0 add_sub0 subtraction_diff", false,-1, 24,0);
        vcdp->declBus(c+305,"filter_control fir_0 add_sub0 exponent_sub", false,-1, 7,0);
        vcdp->declBit(c+313,"filter_control fir_0 add_sub0 exp_a", false,-1);
        vcdp->declBit(c+321,"filter_control fir_0 add_sub0 exp_b", false,-1);
        vcdp->declBit(c+329,"filter_control fir_0 add_sub0 perform", false,-1);
        vcdp->declBus(c+281,"filter_control fir_0 add_sub0 pe significand", false,-1, 24,0);
        vcdp->declBus(c+337,"filter_control fir_0 add_sub0 pe Exponent_a", false,-1, 7,0);
        vcdp->declBus(c+297,"filter_control fir_0 add_sub0 pe Significand", false,-1, 24,0);
        vcdp->declBus(c+305,"filter_control fir_0 add_sub0 pe Exponent_sub", false,-1, 7,0);
        vcdp->declBus(c+345,"filter_control fir_0 add_sub0 pe shift", false,-1, 4,0);
        vcdp->declBus(c+57,"filter_control fir_0 m_0 a_operand", false,-1, 31,0);
        vcdp->declBus(c+89,"filter_control fir_0 m_0 b_operand", false,-1, 31,0);
        vcdp->declBit(c+353,"filter_control fir_0 m_0 Exception", false,-1);
        vcdp->declBit(c+361,"filter_control fir_0 m_0 Overflow", false,-1);
        vcdp->declBit(c+369,"filter_control fir_0 m_0 Underflow", false,-1);
        vcdp->declBus(c+145,"filter_control fir_0 m_0 result", false,-1, 31,0);
        vcdp->declBit(c+377,"filter_control fir_0 m_0 sign", false,-1);
        vcdp->declBit(c+385,"filter_control fir_0 m_0 product_round", false,-1);
        vcdp->declBit(c+393,"filter_control fir_0 m_0 normalised", false,-1);
        vcdp->declBit(c+401,"filter_control fir_0 m_0 zero", false,-1);
        vcdp->declBus(c+409,"filter_control fir_0 m_0 exponent", false,-1, 8,0);
        vcdp->declBus(c+417,"filter_control fir_0 m_0 sum_exponent", false,-1, 8,0);
        vcdp->declBus(c+425,"filter_control fir_0 m_0 product_mantissa", false,-1, 22,0);
        vcdp->declBus(c+433,"filter_control fir_0 m_0 operand_a", false,-1, 23,0);
        vcdp->declBus(c+441,"filter_control fir_0 m_0 operand_b", false,-1, 23,0);
        vcdp->declQuad(c+449,"filter_control fir_0 m_0 product", false,-1, 47,0);
        vcdp->declQuad(c+465,"filter_control fir_0 m_0 product_normalised", false,-1, 47,0);
        vcdp->declBus(c+1,"filter_control convert_0 i_float", false,-1, 31,0);
        vcdp->declBus(c+697,"filter_control convert_0 o_fixed", false,-1, 15,0);
        vcdp->declBus(c+481,"filter_control convert_0 exponent", false,-1, 7,0);
        vcdp->declBit(c+489,"filter_control convert_0 sign", false,-1);
        vcdp->declBus(c+497,"filter_control convert_0 mantissa", false,-1, 22,0);
        vcdp->declBus(c+505,"filter_control convert_0 unsigned_int", false,-1, 15,0);
    }
}

void Vfilter_control::traceFullThis__1(Vfilter_control__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vfilter_control* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    WData/*127:0*/ __Vtemp49[4];
    WData/*127:0*/ __Vtemp50[4];
    // Body
    {
        vcdp->fullBus(c+1,(vlTOPp->filter_control__DOT__out),32);
        vcdp->fullArray(c+9,(vlTOPp->filter_control__DOT__dc0__DOT__next_state),128);
        vcdp->fullBit(c+41,(vlTOPp->filter_control__DOT__dc0__DOT__done));
        vcdp->fullBit(c+49,(vlTOPp->filter_control__DOT__fir_0__DOT__o_ce));
        vcdp->fullBus(c+57,(vlTOPp->filter_control__DOT__fir_0__DOT__tap),32);
        vcdp->fullBus(c+65,(vlTOPp->filter_control__DOT__fir_0__DOT__dwidx),11);
        vcdp->fullBus(c+73,(vlTOPp->filter_control__DOT__fir_0__DOT__didx),11);
        vcdp->fullBus(c+81,(vlTOPp->filter_control__DOT__fir_0__DOT__tidx),11);
        vcdp->fullBus(c+89,(vlTOPp->filter_control__DOT__fir_0__DOT__data),32);
        vcdp->fullBit(c+97,(vlTOPp->filter_control__DOT__fir_0__DOT__d_ce));
        vcdp->fullBit(c+105,(vlTOPp->filter_control__DOT__fir_0__DOT__p_ce));
        vcdp->fullBit(c+113,(vlTOPp->filter_control__DOT__fir_0__DOT__m_ce));
        vcdp->fullBus(c+121,(vlTOPp->filter_control__DOT__fir_0__DOT__product),32);
        vcdp->fullBus(c+129,(vlTOPp->filter_control__DOT__fir_0__DOT__r_acc),32);
        vcdp->fullBus(c+137,(((0U == (0x7fffffffU & vlTOPp->filter_control__DOT__fir_0__DOT__r_acc))
                               ? vlTOPp->filter_control__DOT__fir_0__DOT__product
                               : ((0U == (0x7fffffffU 
                                          & vlTOPp->filter_control__DOT__fir_0__DOT__product))
                                   ? vlTOPp->filter_control__DOT__fir_0__DOT__r_acc
                                   : (((0xffU == (0xffU 
                                                  & (vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__operand_a 
                                                     >> 0x17U))) 
                                       | (0xffU == 
                                          (0xffU & 
                                           (vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__operand_b 
                                            >> 0x17U))))
                                       ? 0U : ((IData)(vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__operation_sub_addBar)
                                                ? (
                                                   (0x80000000U 
                                                    & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__operand_a) 
                                                   | vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__add_sum)
                                                : (
                                                   (0x80000000U 
                                                    & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__operand_a) 
                                                   | vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__sub_diff)))))),32);
        vcdp->fullBus(c+145,(((IData)(vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__Exception)
                               ? 0U : ((IData)(vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__zero)
                                        ? ((IData)(vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__sign) 
                                           << 0x1fU)
                                        : ((1U & ((
                                                   ((IData)(vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__exponent) 
                                                    >> 8U) 
                                                   & (~ 
                                                      ((IData)(vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__exponent) 
                                                       >> 7U))) 
                                                  & (~ (IData)(vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__zero))))
                                            ? (0x7f800000U 
                                               | ((IData)(vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__sign) 
                                                  << 0x1fU))
                                            : ((1U 
                                                & ((((IData)(vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__exponent) 
                                                     >> 8U) 
                                                    & ((IData)(vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__exponent) 
                                                       >> 7U)) 
                                                   & (~ (IData)(vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__zero))))
                                                ? ((IData)(vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__sign) 
                                                   << 0x1fU)
                                                : (
                                                   ((IData)(vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__sign) 
                                                    << 0x1fU) 
                                                   | ((0x7f800000U 
                                                       & ((IData)(vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__exponent) 
                                                          << 0x17U)) 
                                                      | (0x7fffffU 
                                                         & ((IData)(
                                                                    (vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__product_normalised 
                                                                     >> 0x18U)) 
                                                            + 
                                                            (1U 
                                                             & ((IData)(
                                                                        (vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__product_normalised 
                                                                         >> 0x17U)) 
                                                                & (0U 
                                                                   != 
                                                                   (0x7fffffU 
                                                                    & (IData)(vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__product_normalised)))))))))))))),32);
        vcdp->fullBit(c+153,((1U >= ((IData)(0x7ffU) 
                                     - (IData)(vlTOPp->filter_control__DOT__fir_0__DOT__tidx)))));
        vcdp->fullBus(c+161,(vlTOPp->filter_control__DOT__fir_0__DOT__pre_acc_ce),3);
        vcdp->fullBit(c+169,(((0xffU == (0xffU & (vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__operand_a 
                                                  >> 0x17U))) 
                              | (0xffU == (0xffU & 
                                           (vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__operand_b 
                                            >> 0x17U))))));
        vcdp->fullBit(c+177,(vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__operation_sub_addBar));
        vcdp->fullBit(c+185,((((0x7fffffffU & vlTOPp->filter_control__DOT__fir_0__DOT__r_acc) 
                               < (0x7fffffffU & vlTOPp->filter_control__DOT__fir_0__DOT__product))
                               ? 1U : (1U & (IData)(
                                                    ((QData)((IData)(vlTOPp->filter_control__DOT__fir_0__DOT__r_acc)) 
                                                     >> 0x20U))))));
        vcdp->fullBit(c+193,((1U & (vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__operand_a 
                                    >> 0x1fU))));
        vcdp->fullBus(c+201,(vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__operand_a),32);
        vcdp->fullBus(c+209,(vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__operand_b),32);
        vcdp->fullBus(c+217,(vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_a),24);
        vcdp->fullBus(c+225,(((0U != (0xffU & (vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__operand_b 
                                               >> 0x17U)))
                               ? (0x800000U | (0x7fffffU 
                                               & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__operand_b))
                               : (0x7fffffU & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__operand_b))),24);
        vcdp->fullBus(c+233,(vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__exponent_diff),8);
        vcdp->fullBus(c+241,(vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_b_add_sub),24);
        vcdp->fullBus(c+249,((0xffU & ((vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__operand_b 
                                        >> 0x17U) + (IData)(vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__exponent_diff)))),8);
        vcdp->fullBus(c+257,(vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_add),25);
        vcdp->fullBus(c+265,(vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__add_sum),31);
        vcdp->fullBus(c+273,((((IData)(vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__perform) 
                               & (~ (IData)(vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__operation_sub_addBar)))
                               ? (0xffffffU & ((IData)(1U) 
                                               + (~ vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_b_add_sub)))
                               : 0U)),24);
        vcdp->fullBus(c+281,(vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub),25);
        vcdp->fullBus(c+289,(vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__sub_diff),31);
        vcdp->fullBus(c+297,(vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__subtraction_diff),25);
        vcdp->fullBus(c+305,((0xffU & ((vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__operand_a 
                                        >> 0x17U) - (IData)(vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__pe__DOT__shift)))),8);
        vcdp->fullBit(c+313,((1U & (vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__operand_a 
                                    >> 0x17U))));
        vcdp->fullBit(c+321,((1U & (vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__operand_b 
                                    >> 0x17U))));
        vcdp->fullBit(c+329,(vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__perform));
        vcdp->fullBus(c+337,((0xffU & (vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__operand_a 
                                       >> 0x17U))),8);
        vcdp->fullBus(c+345,(vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__pe__DOT__shift),5);
        vcdp->fullBit(c+353,(vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__Exception));
        vcdp->fullBit(c+361,((1U & ((((IData)(vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__exponent) 
                                      >> 8U) & (~ ((IData)(vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__exponent) 
                                                   >> 7U))) 
                                    & (~ (IData)(vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__zero))))));
        vcdp->fullBit(c+369,((1U & ((((IData)(vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__exponent) 
                                      >> 8U) & ((IData)(vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__exponent) 
                                                >> 7U)) 
                                    & (~ (IData)(vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__zero))))));
        vcdp->fullBit(c+377,(vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__sign));
        vcdp->fullBit(c+385,((0U != (0x7fffffU & (IData)(vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__product_normalised)))));
        vcdp->fullBit(c+393,((1U & (IData)((vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__product 
                                            >> 0x2fU)))));
        vcdp->fullBit(c+401,(vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__zero));
        vcdp->fullBus(c+409,(vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__exponent),9);
        vcdp->fullBus(c+417,((0x1ffU & ((0xffU & (vlTOPp->filter_control__DOT__fir_0__DOT__tap 
                                                  >> 0x17U)) 
                                        + (0xffU & 
                                           (vlTOPp->filter_control__DOT__fir_0__DOT__data 
                                            >> 0x17U))))),9);
        vcdp->fullBus(c+425,((0x7fffffU & ((IData)(
                                                   (vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__product_normalised 
                                                    >> 0x18U)) 
                                           + (1U & 
                                              ((IData)(
                                                       (vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__product_normalised 
                                                        >> 0x17U)) 
                                               & (0U 
                                                  != 
                                                  (0x7fffffU 
                                                   & (IData)(vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__product_normalised)))))))),23);
        vcdp->fullBus(c+433,(((0U != (0xffU & (vlTOPp->filter_control__DOT__fir_0__DOT__tap 
                                               >> 0x17U)))
                               ? (0x800000U | (0x7fffffU 
                                               & vlTOPp->filter_control__DOT__fir_0__DOT__tap))
                               : (0x7fffffU & vlTOPp->filter_control__DOT__fir_0__DOT__tap))),24);
        vcdp->fullBus(c+441,(((0U != (0xffU & (vlTOPp->filter_control__DOT__fir_0__DOT__data 
                                               >> 0x17U)))
                               ? (0x800000U | (0x7fffffU 
                                               & vlTOPp->filter_control__DOT__fir_0__DOT__data))
                               : (0x7fffffU & vlTOPp->filter_control__DOT__fir_0__DOT__data))),24);
        vcdp->fullQuad(c+449,(vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__product),48);
        vcdp->fullQuad(c+465,(vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__product_normalised),48);
        vcdp->fullBus(c+481,((0xffU & (vlTOPp->filter_control__DOT__out 
                                       >> 0x17U))),8);
        vcdp->fullBit(c+489,((1U & (vlTOPp->filter_control__DOT__out 
                                    >> 0x1fU))));
        vcdp->fullBus(c+497,((0x7fffffU & vlTOPp->filter_control__DOT__out)),23);
        vcdp->fullBus(c+505,(vlTOPp->filter_control__DOT__convert_0__DOT__unsigned_int),16);
        vcdp->fullBus(c+513,(vlTOPp->filter_control__DOT__o_float),32);
        vcdp->fullBus(c+521,(vlTOPp->filter_control__DOT__normalized),16);
        vcdp->fullBus(c+529,(vlTOPp->filter_control__DOT__fixed_0__DOT__exponent),8);
        vcdp->fullBit(c+537,(vlTOPp->filter_control__DOT__fixed_0__DOT__sign));
        vcdp->fullBus(c+545,(vlTOPp->filter_control__DOT__fixed_0__DOT__mantissa),23);
        vcdp->fullBus(c+553,(vlTOPp->filter_control__DOT__fixed_0__DOT__unsigned_fixed),16);
        vcdp->fullArray(c+561,(vlTOPp->filter_control__DOT__dc0__DOT__state),128);
        vcdp->fullArray(c+593,(vlTOPp->filter_control__DOT__dc0__DOT__offset),128);
        vcdp->fullArray(c+625,(vlTOPp->filter_control__DOT__dc0__DOT__accumulate),128);
        vcdp->fullBit(c+657,(vlTOPp->i_clk));
        vcdp->fullBit(c+665,(vlTOPp->i_reset));
        vcdp->fullBit(c+673,(vlTOPp->i_ce));
        vcdp->fullBit(c+681,(vlTOPp->i_start));
        vcdp->fullBus(c+689,(vlTOPp->i_sample),16);
        vcdp->fullBus(c+697,(vlTOPp->o_result),16);
        vcdp->fullBit(c+705,((1U & (~ (IData)(vlTOPp->i_reset)))));
        __Vtemp49[0U] = ((0xffff0000U & (VL_NEGATE_I((IData)(
                                                             (1U 
                                                              & ((IData)(vlTOPp->i_sample) 
                                                                 >> 0xfU)))) 
                                         << 0x10U)) 
                         | (IData)(vlTOPp->i_sample));
        __Vtemp49[1U] = ((0xffffU & (VL_NEGATE_I((IData)(
                                                         (1U 
                                                          & ((IData)(vlTOPp->i_sample) 
                                                             >> 0xfU)))) 
                                     >> 0x10U)) | (0xffff0000U 
                                                   & (VL_NEGATE_I((IData)(
                                                                          (1U 
                                                                           & ((IData)(vlTOPp->i_sample) 
                                                                              >> 0xfU)))) 
                                                      << 0x10U)));
        __Vtemp49[2U] = ((0xffffU & (VL_NEGATE_I((IData)(
                                                         (1U 
                                                          & ((IData)(vlTOPp->i_sample) 
                                                             >> 0xfU)))) 
                                     >> 0x10U)) | (0xffff0000U 
                                                   & (VL_NEGATE_I((IData)(
                                                                          (1U 
                                                                           & ((IData)(vlTOPp->i_sample) 
                                                                              >> 0xfU)))) 
                                                      << 0x10U)));
        __Vtemp49[3U] = ((0xffffU & (VL_NEGATE_I((IData)(
                                                         (1U 
                                                          & ((IData)(vlTOPp->i_sample) 
                                                             >> 0xfU)))) 
                                     >> 0x10U)) | (0xffff0000U 
                                                   & (VL_NEGATE_I((IData)(
                                                                          (1U 
                                                                           & ((IData)(vlTOPp->i_sample) 
                                                                              >> 0xfU)))) 
                                                      << 0x10U)));
        vcdp->fullArray(c+713,(__Vtemp49),128);
        vcdp->fullBit(c+745,(vlTOPp->filter_control__DOT__i_tap_wr));
        vcdp->fullBus(c+753,(vlTOPp->filter_control__DOT__i_tap),16);
        vcdp->fullQuad(c+761,(vlTOPp->filter_control__DOT__counter),64);
        vcdp->fullBus(c+777,(vlTOPp->filter_control__DOT__impulse),32);
        vcdp->fullBit(c+785,(vlTOPp->filter_control__DOT__i_ce_local));
        vcdp->fullBus(c+793,(0x800U),32);
        vcdp->fullBus(c+801,(vlTOPp->filter_control__DOT__dc0__DOT__gain),16);
        vcdp->fullBit(c+809,(1U));
        vcdp->fullArray(c+817,(vlTOPp->filter_control__DOT__dc0__DOT__mic_out_sext),128);
        vcdp->fullBus(c+849,(0xbU),32);
        vcdp->fullBus(c+857,(0x20U),32);
        vcdp->fullBus(c+865,(0x7ffU),12);
        vcdp->fullBit(c+873,(1U));
        __Vtemp50[0U] = 0x2e646174U;
        __Vtemp50[1U] = 0x74657374U;
        __Vtemp50[2U] = 0x79616e5fU;
        __Vtemp50[3U] = 0x72U;
        vcdp->fullArray(c+881,(__Vtemp50),104);
        vcdp->fullBus(c+913,(vlTOPp->filter_control__DOT__i_tap),32);
        vcdp->fullQuad(c+921,((((QData)((IData)(vlTOPp->filter_control__DOT__i_tap_wr)) 
                                << 0x20U) | (QData)((IData)(vlTOPp->filter_control__DOT__i_tap)))),33);
        vcdp->fullBit(c+937,(0U));
    }
}
