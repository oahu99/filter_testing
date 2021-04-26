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
                                  >> 1U))))) {
            vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 2U))))) {
            vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
        }
        vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
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
        vcdp->chgBus(c+1,(vlTOPp->filter_control__DOT__out),32);
        vcdp->chgArray(c+9,(vlTOPp->filter_control__DOT__dc0__DOT__next_state),128);
        vcdp->chgBit(c+41,(vlTOPp->filter_control__DOT__dc0__DOT__done));
        vcdp->chgBit(c+49,(vlTOPp->filter_control__DOT__fir_0__DOT__o_ce));
        vcdp->chgBus(c+57,(vlTOPp->filter_control__DOT__fir_0__DOT__tap),32);
        vcdp->chgBus(c+65,(vlTOPp->filter_control__DOT__fir_0__DOT__dwidx),11);
        vcdp->chgBus(c+73,(vlTOPp->filter_control__DOT__fir_0__DOT__didx),11);
        vcdp->chgBus(c+81,(vlTOPp->filter_control__DOT__fir_0__DOT__tidx),11);
        vcdp->chgBus(c+89,(vlTOPp->filter_control__DOT__fir_0__DOT__data),32);
        vcdp->chgBit(c+97,(vlTOPp->filter_control__DOT__fir_0__DOT__d_ce));
        vcdp->chgBit(c+105,(vlTOPp->filter_control__DOT__fir_0__DOT__p_ce));
        vcdp->chgBit(c+113,(vlTOPp->filter_control__DOT__fir_0__DOT__m_ce));
        vcdp->chgBus(c+121,(vlTOPp->filter_control__DOT__fir_0__DOT__product),32);
        vcdp->chgBus(c+129,(vlTOPp->filter_control__DOT__fir_0__DOT__r_acc),32);
        vcdp->chgBus(c+137,(((0U == (0x7fffffffU & vlTOPp->filter_control__DOT__fir_0__DOT__r_acc))
                              ? vlTOPp->filter_control__DOT__fir_0__DOT__product
                              : ((0U == (0x7fffffffU 
                                         & vlTOPp->filter_control__DOT__fir_0__DOT__product))
                                  ? vlTOPp->filter_control__DOT__fir_0__DOT__r_acc
                                  : (((0xffU == (0xffU 
                                                 & (vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__operand_a 
                                                    >> 0x17U))) 
                                      | (0xffU == (0xffU 
                                                   & (vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__operand_b 
                                                      >> 0x17U))))
                                      ? 0U : ((IData)(vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__operation_sub_addBar)
                                               ? ((0x80000000U 
                                                   & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__operand_a) 
                                                  | vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__add_sum)
                                               : ((0x80000000U 
                                                   & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__operand_a) 
                                                  | vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__sub_diff)))))),32);
        vcdp->chgBus(c+145,(((IData)(vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__Exception)
                              ? 0U : ((IData)(vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__zero)
                                       ? ((IData)(vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__sign) 
                                          << 0x1fU)
                                       : ((1U & ((((IData)(vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__exponent) 
                                                   >> 8U) 
                                                  & (~ 
                                                     ((IData)(vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__exponent) 
                                                      >> 7U))) 
                                                 & (~ (IData)(vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__zero))))
                                           ? (0x7f800000U 
                                              | ((IData)(vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__sign) 
                                                 << 0x1fU))
                                           : ((1U & 
                                               ((((IData)(vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__exponent) 
                                                  >> 8U) 
                                                 & ((IData)(vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__exponent) 
                                                    >> 7U)) 
                                                & (~ (IData)(vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__zero))))
                                               ? ((IData)(vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__sign) 
                                                  << 0x1fU)
                                               : (((IData)(vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__sign) 
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
        vcdp->chgBit(c+153,((1U >= ((IData)(0x7ffU) 
                                    - (IData)(vlTOPp->filter_control__DOT__fir_0__DOT__tidx)))));
        vcdp->chgBus(c+161,(vlTOPp->filter_control__DOT__fir_0__DOT__pre_acc_ce),3);
        vcdp->chgBit(c+169,(((0xffU == (0xffU & (vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__operand_a 
                                                 >> 0x17U))) 
                             | (0xffU == (0xffU & (vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__operand_b 
                                                   >> 0x17U))))));
        vcdp->chgBit(c+177,(vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__operation_sub_addBar));
        vcdp->chgBit(c+185,((((0x7fffffffU & vlTOPp->filter_control__DOT__fir_0__DOT__r_acc) 
                              < (0x7fffffffU & vlTOPp->filter_control__DOT__fir_0__DOT__product))
                              ? 1U : (1U & (IData)(
                                                   ((QData)((IData)(vlTOPp->filter_control__DOT__fir_0__DOT__r_acc)) 
                                                    >> 0x20U))))));
        vcdp->chgBit(c+193,((1U & (vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__operand_a 
                                   >> 0x1fU))));
        vcdp->chgBus(c+201,(vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__operand_a),32);
        vcdp->chgBus(c+209,(vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__operand_b),32);
        vcdp->chgBus(c+217,(vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_a),24);
        vcdp->chgBus(c+225,(((0U != (0xffU & (vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__operand_b 
                                              >> 0x17U)))
                              ? (0x800000U | (0x7fffffU 
                                              & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__operand_b))
                              : (0x7fffffU & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__operand_b))),24);
        vcdp->chgBus(c+233,(vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__exponent_diff),8);
        vcdp->chgBus(c+241,(vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_b_add_sub),24);
        vcdp->chgBus(c+249,((0xffU & ((vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__operand_b 
                                       >> 0x17U) + (IData)(vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__exponent_diff)))),8);
        vcdp->chgBus(c+257,(vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_add),25);
        vcdp->chgBus(c+265,(vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__add_sum),31);
        vcdp->chgBus(c+273,((((IData)(vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__perform) 
                              & (~ (IData)(vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__operation_sub_addBar)))
                              ? (0xffffffU & ((IData)(1U) 
                                              + (~ vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_b_add_sub)))
                              : 0U)),24);
        vcdp->chgBus(c+281,(vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub),25);
        vcdp->chgBus(c+289,(vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__sub_diff),31);
        vcdp->chgBus(c+297,(vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__subtraction_diff),25);
        vcdp->chgBus(c+305,((0xffU & ((vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__operand_a 
                                       >> 0x17U) - (IData)(vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__pe__DOT__shift)))),8);
        vcdp->chgBit(c+313,((1U & (vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__operand_a 
                                   >> 0x17U))));
        vcdp->chgBit(c+321,((1U & (vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__operand_b 
                                   >> 0x17U))));
        vcdp->chgBit(c+329,(vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__perform));
        vcdp->chgBus(c+337,((0xffU & (vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__operand_a 
                                      >> 0x17U))),8);
        vcdp->chgBus(c+345,(vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__pe__DOT__shift),5);
        vcdp->chgBit(c+353,(vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__Exception));
        vcdp->chgBit(c+361,((1U & ((((IData)(vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__exponent) 
                                     >> 8U) & (~ ((IData)(vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__exponent) 
                                                  >> 7U))) 
                                   & (~ (IData)(vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__zero))))));
        vcdp->chgBit(c+369,((1U & ((((IData)(vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__exponent) 
                                     >> 8U) & ((IData)(vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__exponent) 
                                               >> 7U)) 
                                   & (~ (IData)(vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__zero))))));
        vcdp->chgBit(c+377,(vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__sign));
        vcdp->chgBit(c+385,((0U != (0x7fffffU & (IData)(vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__product_normalised)))));
        vcdp->chgBit(c+393,((1U & (IData)((vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__product 
                                           >> 0x2fU)))));
        vcdp->chgBit(c+401,(vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__zero));
        vcdp->chgBus(c+409,(vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__exponent),9);
        vcdp->chgBus(c+417,((0x1ffU & ((0xffU & (vlTOPp->filter_control__DOT__fir_0__DOT__tap 
                                                 >> 0x17U)) 
                                       + (0xffU & (vlTOPp->filter_control__DOT__fir_0__DOT__data 
                                                   >> 0x17U))))),9);
        vcdp->chgBus(c+425,((0x7fffffU & ((IData)((vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__product_normalised 
                                                   >> 0x18U)) 
                                          + (1U & ((IData)(
                                                           (vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__product_normalised 
                                                            >> 0x17U)) 
                                                   & (0U 
                                                      != 
                                                      (0x7fffffU 
                                                       & (IData)(vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__product_normalised)))))))),23);
        vcdp->chgBus(c+433,(((0U != (0xffU & (vlTOPp->filter_control__DOT__fir_0__DOT__tap 
                                              >> 0x17U)))
                              ? (0x800000U | (0x7fffffU 
                                              & vlTOPp->filter_control__DOT__fir_0__DOT__tap))
                              : (0x7fffffU & vlTOPp->filter_control__DOT__fir_0__DOT__tap))),24);
        vcdp->chgBus(c+441,(((0U != (0xffU & (vlTOPp->filter_control__DOT__fir_0__DOT__data 
                                              >> 0x17U)))
                              ? (0x800000U | (0x7fffffU 
                                              & vlTOPp->filter_control__DOT__fir_0__DOT__data))
                              : (0x7fffffU & vlTOPp->filter_control__DOT__fir_0__DOT__data))),24);
        vcdp->chgQuad(c+449,(vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__product),48);
        vcdp->chgQuad(c+465,(vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__product_normalised),48);
        vcdp->chgBus(c+481,((0xffU & (vlTOPp->filter_control__DOT__out 
                                      >> 0x17U))),8);
        vcdp->chgBit(c+489,((1U & (vlTOPp->filter_control__DOT__out 
                                   >> 0x1fU))));
        vcdp->chgBus(c+497,((0x7fffffU & vlTOPp->filter_control__DOT__out)),23);
        vcdp->chgBus(c+505,(vlTOPp->filter_control__DOT__convert_0__DOT__unsigned_int),16);
    }
}

void Vfilter_control::traceChgThis__3(Vfilter_control__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vfilter_control* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+513,(vlTOPp->filter_control__DOT__o_float),32);
        vcdp->chgBus(c+521,(vlTOPp->filter_control__DOT__normalized),16);
        vcdp->chgBus(c+529,(vlTOPp->filter_control__DOT__fixed_0__DOT__exponent),8);
        vcdp->chgBit(c+537,(vlTOPp->filter_control__DOT__fixed_0__DOT__sign));
        vcdp->chgBus(c+545,(vlTOPp->filter_control__DOT__fixed_0__DOT__mantissa),23);
        vcdp->chgBus(c+553,(vlTOPp->filter_control__DOT__fixed_0__DOT__unsigned_fixed),16);
    }
}

void Vfilter_control::traceChgThis__4(Vfilter_control__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vfilter_control* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgArray(c+561,(vlTOPp->filter_control__DOT__dc0__DOT__state),128);
        vcdp->chgArray(c+593,(vlTOPp->filter_control__DOT__dc0__DOT__offset),128);
        vcdp->chgArray(c+625,(vlTOPp->filter_control__DOT__dc0__DOT__accumulate),128);
    }
}

void Vfilter_control::traceChgThis__5(Vfilter_control__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vfilter_control* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    WData/*127:0*/ __Vtemp58[4];
    // Body
    {
        vcdp->chgBit(c+657,(vlTOPp->i_clk));
        vcdp->chgBit(c+665,(vlTOPp->i_reset));
        vcdp->chgBit(c+673,(vlTOPp->i_ce));
        vcdp->chgBit(c+681,(vlTOPp->i_start));
        vcdp->chgBus(c+689,(vlTOPp->i_sample),16);
        vcdp->chgBus(c+697,(vlTOPp->o_result),16);
        vcdp->chgBit(c+705,((1U & (~ (IData)(vlTOPp->i_reset)))));
        __Vtemp58[0U] = ((0xffff0000U & (VL_NEGATE_I((IData)(
                                                             (1U 
                                                              & ((IData)(vlTOPp->i_sample) 
                                                                 >> 0xfU)))) 
                                         << 0x10U)) 
                         | (IData)(vlTOPp->i_sample));
        __Vtemp58[1U] = ((0xffffU & (VL_NEGATE_I((IData)(
                                                         (1U 
                                                          & ((IData)(vlTOPp->i_sample) 
                                                             >> 0xfU)))) 
                                     >> 0x10U)) | (0xffff0000U 
                                                   & (VL_NEGATE_I((IData)(
                                                                          (1U 
                                                                           & ((IData)(vlTOPp->i_sample) 
                                                                              >> 0xfU)))) 
                                                      << 0x10U)));
        __Vtemp58[2U] = ((0xffffU & (VL_NEGATE_I((IData)(
                                                         (1U 
                                                          & ((IData)(vlTOPp->i_sample) 
                                                             >> 0xfU)))) 
                                     >> 0x10U)) | (0xffff0000U 
                                                   & (VL_NEGATE_I((IData)(
                                                                          (1U 
                                                                           & ((IData)(vlTOPp->i_sample) 
                                                                              >> 0xfU)))) 
                                                      << 0x10U)));
        __Vtemp58[3U] = ((0xffffU & (VL_NEGATE_I((IData)(
                                                         (1U 
                                                          & ((IData)(vlTOPp->i_sample) 
                                                             >> 0xfU)))) 
                                     >> 0x10U)) | (0xffff0000U 
                                                   & (VL_NEGATE_I((IData)(
                                                                          (1U 
                                                                           & ((IData)(vlTOPp->i_sample) 
                                                                              >> 0xfU)))) 
                                                      << 0x10U)));
        vcdp->chgArray(c+713,(__Vtemp58),128);
    }
}
