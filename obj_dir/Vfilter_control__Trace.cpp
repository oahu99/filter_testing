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
        if (VL_UNLIKELY((1U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 1U))))) {
            vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 2U))))) {
            vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((4U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
        }
        vlTOPp->traceChgThis__6(vlSymsp, vcdp, code);
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
        vcdp->chgBus(c+1,(vlTOPp->filter_control__DOT__i_taps_arr_0[0]),16);
        vcdp->chgBus(c+2,(vlTOPp->filter_control__DOT__i_taps_arr_0[1]),16);
        vcdp->chgBus(c+3,(vlTOPp->filter_control__DOT__i_taps_arr_0[2]),16);
        vcdp->chgBus(c+4,(vlTOPp->filter_control__DOT__i_taps_arr_0[3]),16);
        vcdp->chgBus(c+5,(vlTOPp->filter_control__DOT__i_taps_arr_0[4]),16);
        vcdp->chgBus(c+6,(vlTOPp->filter_control__DOT__i_taps_arr_0[5]),16);
        vcdp->chgBus(c+7,(vlTOPp->filter_control__DOT__i_taps_arr_0[6]),16);
        vcdp->chgBus(c+8,(vlTOPp->filter_control__DOT__i_taps_arr_0[7]),16);
        vcdp->chgBus(c+9,(vlTOPp->filter_control__DOT__i_taps_arr_0[8]),16);
        vcdp->chgBus(c+10,(vlTOPp->filter_control__DOT__i_taps_arr_0[9]),16);
        vcdp->chgBus(c+11,(vlTOPp->filter_control__DOT__i_taps_arr_0[10]),16);
        vcdp->chgBus(c+12,(vlTOPp->filter_control__DOT__i_taps_arr_0[11]),16);
        vcdp->chgBus(c+13,(vlTOPp->filter_control__DOT__i_taps_arr_0[12]),16);
        vcdp->chgBus(c+14,(vlTOPp->filter_control__DOT__i_taps_arr_0[13]),16);
        vcdp->chgBus(c+15,(vlTOPp->filter_control__DOT__i_taps_arr_0[14]),16);
        vcdp->chgBus(c+16,(vlTOPp->filter_control__DOT__i_taps_arr_0[15]),16);
        vcdp->chgBus(c+17,(vlTOPp->filter_control__DOT__i_taps_arr_0[16]),16);
        vcdp->chgBus(c+18,(vlTOPp->filter_control__DOT__i_taps_arr_0[17]),16);
        vcdp->chgBus(c+19,(vlTOPp->filter_control__DOT__i_taps_arr_0[18]),16);
        vcdp->chgBus(c+20,(vlTOPp->filter_control__DOT__i_taps_arr_0[19]),16);
        vcdp->chgBus(c+21,(vlTOPp->filter_control__DOT__i_taps_arr_0[20]),16);
        vcdp->chgBus(c+22,(vlTOPp->filter_control__DOT__i_taps_arr_0[21]),16);
        vcdp->chgBus(c+23,(vlTOPp->filter_control__DOT__i_taps_arr_0[22]),16);
        vcdp->chgBus(c+24,(vlTOPp->filter_control__DOT__i_taps_arr_0[23]),16);
        vcdp->chgBus(c+25,(vlTOPp->filter_control__DOT__i_taps_arr_0[24]),16);
        vcdp->chgBus(c+26,(vlTOPp->filter_control__DOT__i_taps_arr_0[25]),16);
        vcdp->chgBus(c+27,(vlTOPp->filter_control__DOT__i_taps_arr_0[26]),16);
        vcdp->chgBus(c+28,(vlTOPp->filter_control__DOT__i_taps_arr_0[27]),16);
        vcdp->chgBus(c+29,(vlTOPp->filter_control__DOT__i_taps_arr_0[28]),16);
        vcdp->chgBus(c+30,(vlTOPp->filter_control__DOT__i_taps_arr_0[29]),16);
        vcdp->chgBus(c+31,(vlTOPp->filter_control__DOT__i_taps_arr_0[30]),16);
        vcdp->chgBus(c+32,(vlTOPp->filter_control__DOT__i_taps_arr_0[31]),16);
        vcdp->chgBus(c+33,(vlTOPp->filter_control__DOT__i_taps_arr_0[32]),16);
        vcdp->chgBus(c+34,(vlTOPp->filter_control__DOT__i_taps_arr_0[33]),16);
        vcdp->chgBus(c+35,(vlTOPp->filter_control__DOT__i_taps_arr_0[34]),16);
        vcdp->chgBus(c+36,(vlTOPp->filter_control__DOT__i_taps_arr_0[35]),16);
        vcdp->chgBus(c+37,(vlTOPp->filter_control__DOT__i_taps_arr_0[36]),16);
        vcdp->chgBus(c+38,(vlTOPp->filter_control__DOT__i_taps_arr_0[37]),16);
        vcdp->chgBus(c+39,(vlTOPp->filter_control__DOT__i_taps_arr_0[38]),16);
        vcdp->chgBus(c+40,(vlTOPp->filter_control__DOT__i_taps_arr_0[39]),16);
        vcdp->chgBus(c+41,(vlTOPp->filter_control__DOT__i_taps_arr_0[40]),16);
        vcdp->chgBus(c+42,(vlTOPp->filter_control__DOT__i_taps_arr_0[41]),16);
        vcdp->chgBus(c+43,(vlTOPp->filter_control__DOT__i_taps_arr_0[42]),16);
        vcdp->chgBus(c+44,(vlTOPp->filter_control__DOT__i_taps_arr_0[43]),16);
        vcdp->chgBus(c+45,(vlTOPp->filter_control__DOT__i_taps_arr_0[44]),16);
        vcdp->chgBus(c+46,(vlTOPp->filter_control__DOT__i_taps_arr_0[45]),16);
        vcdp->chgBus(c+47,(vlTOPp->filter_control__DOT__i_taps_arr_0[46]),16);
        vcdp->chgBus(c+48,(vlTOPp->filter_control__DOT__i_taps_arr_0[47]),16);
        vcdp->chgBus(c+49,(vlTOPp->filter_control__DOT__i_taps_arr_0[48]),16);
        vcdp->chgBus(c+50,(vlTOPp->filter_control__DOT__i_taps_arr_0[49]),16);
        vcdp->chgBus(c+51,(vlTOPp->filter_control__DOT__i_taps_arr_0[50]),16);
        vcdp->chgBus(c+52,(vlTOPp->filter_control__DOT__i_taps_arr_0[51]),16);
        vcdp->chgBus(c+53,(vlTOPp->filter_control__DOT__i_taps_arr_0[52]),16);
        vcdp->chgBus(c+54,(vlTOPp->filter_control__DOT__i_taps_arr_0[53]),16);
        vcdp->chgBus(c+55,(vlTOPp->filter_control__DOT__i_taps_arr_0[54]),16);
        vcdp->chgBus(c+56,(vlTOPp->filter_control__DOT__i_taps_arr_0[55]),16);
        vcdp->chgBus(c+57,(vlTOPp->filter_control__DOT__i_taps_arr_0[56]),16);
        vcdp->chgBus(c+58,(vlTOPp->filter_control__DOT__i_taps_arr_0[57]),16);
        vcdp->chgBus(c+59,(vlTOPp->filter_control__DOT__i_taps_arr_0[58]),16);
        vcdp->chgBus(c+60,(vlTOPp->filter_control__DOT__i_taps_arr_0[59]),16);
        vcdp->chgBus(c+61,(vlTOPp->filter_control__DOT__i_taps_arr_0[60]),16);
        vcdp->chgBus(c+62,(vlTOPp->filter_control__DOT__i_taps_arr_0[61]),16);
        vcdp->chgBus(c+63,(vlTOPp->filter_control__DOT__i_taps_arr_0[62]),16);
        vcdp->chgBus(c+64,(vlTOPp->filter_control__DOT__i_taps_arr_0[63]),16);
        vcdp->chgBus(c+65,(vlTOPp->filter_control__DOT__i_taps_arr_0[64]),16);
        vcdp->chgBus(c+66,(vlTOPp->filter_control__DOT__i_taps_arr_0[65]),16);
        vcdp->chgBus(c+67,(vlTOPp->filter_control__DOT__i_taps_arr_0[66]),16);
        vcdp->chgBus(c+68,(vlTOPp->filter_control__DOT__i_taps_arr_0[67]),16);
        vcdp->chgBus(c+69,(vlTOPp->filter_control__DOT__i_taps_arr_0[68]),16);
        vcdp->chgBus(c+70,(vlTOPp->filter_control__DOT__i_taps_arr_0[69]),16);
        vcdp->chgBus(c+71,(vlTOPp->filter_control__DOT__i_taps_arr_0[70]),16);
        vcdp->chgBus(c+72,(vlTOPp->filter_control__DOT__i_taps_arr_0[71]),16);
        vcdp->chgBus(c+73,(vlTOPp->filter_control__DOT__i_taps_arr_0[72]),16);
        vcdp->chgBus(c+74,(vlTOPp->filter_control__DOT__i_taps_arr_0[73]),16);
        vcdp->chgBus(c+75,(vlTOPp->filter_control__DOT__i_taps_arr_0[74]),16);
        vcdp->chgBus(c+76,(vlTOPp->filter_control__DOT__i_taps_arr_0[75]),16);
        vcdp->chgBus(c+77,(vlTOPp->filter_control__DOT__i_taps_arr_0[76]),16);
        vcdp->chgBus(c+78,(vlTOPp->filter_control__DOT__i_taps_arr_0[77]),16);
        vcdp->chgBus(c+79,(vlTOPp->filter_control__DOT__i_taps_arr_0[78]),16);
        vcdp->chgBus(c+80,(vlTOPp->filter_control__DOT__i_taps_arr_0[79]),16);
        vcdp->chgBus(c+81,(vlTOPp->filter_control__DOT__i_taps_arr_0[80]),16);
        vcdp->chgBus(c+82,(vlTOPp->filter_control__DOT__i_taps_arr_0[81]),16);
        vcdp->chgBus(c+83,(vlTOPp->filter_control__DOT__i_taps_arr_0[82]),16);
        vcdp->chgBus(c+84,(vlTOPp->filter_control__DOT__i_taps_arr_0[83]),16);
        vcdp->chgBus(c+85,(vlTOPp->filter_control__DOT__i_taps_arr_0[84]),16);
        vcdp->chgBus(c+86,(vlTOPp->filter_control__DOT__i_taps_arr_0[85]),16);
        vcdp->chgBus(c+87,(vlTOPp->filter_control__DOT__i_taps_arr_0[86]),16);
        vcdp->chgBus(c+88,(vlTOPp->filter_control__DOT__i_taps_arr_0[87]),16);
        vcdp->chgBus(c+89,(vlTOPp->filter_control__DOT__i_taps_arr_0[88]),16);
        vcdp->chgBus(c+90,(vlTOPp->filter_control__DOT__i_taps_arr_0[89]),16);
        vcdp->chgBus(c+91,(vlTOPp->filter_control__DOT__i_taps_arr_0[90]),16);
        vcdp->chgBus(c+92,(vlTOPp->filter_control__DOT__i_taps_arr_0[91]),16);
        vcdp->chgBus(c+93,(vlTOPp->filter_control__DOT__i_taps_arr_0[92]),16);
        vcdp->chgBus(c+94,(vlTOPp->filter_control__DOT__i_taps_arr_0[93]),16);
        vcdp->chgBus(c+95,(vlTOPp->filter_control__DOT__i_taps_arr_0[94]),16);
        vcdp->chgBus(c+96,(vlTOPp->filter_control__DOT__i_taps_arr_0[95]),16);
        vcdp->chgBus(c+97,(vlTOPp->filter_control__DOT__i_taps_arr_0[96]),16);
        vcdp->chgBus(c+98,(vlTOPp->filter_control__DOT__i_taps_arr_0[97]),16);
        vcdp->chgBus(c+99,(vlTOPp->filter_control__DOT__i_taps_arr_0[98]),16);
        vcdp->chgBus(c+100,(vlTOPp->filter_control__DOT__i_taps_arr_0[99]),16);
        vcdp->chgBus(c+101,(vlTOPp->filter_control__DOT__i_taps_arr_0[100]),16);
        vcdp->chgBus(c+102,(vlTOPp->filter_control__DOT__i_taps_arr_0[101]),16);
        vcdp->chgBus(c+103,(vlTOPp->filter_control__DOT__i_taps_arr_0[102]),16);
    }
}

void Vfilter_control::traceChgThis__3(Vfilter_control__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vfilter_control* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+825,(vlTOPp->filter_control__DOT__next_state),16);
        vcdp->chgBus(c+833,(vlTOPp->filter_control__DOT__o_float),32);
        vcdp->chgBus(c+841,(vlTOPp->filter_control__DOT__fixed_0__DOT__exponent),8);
        vcdp->chgBit(c+849,(vlTOPp->filter_control__DOT__fixed_0__DOT__sign));
        vcdp->chgBus(c+857,(vlTOPp->filter_control__DOT__fixed_0__DOT__mantissa),23);
        vcdp->chgBus(c+865,(vlTOPp->filter_control__DOT__fixed_0__DOT__unsigned_fixed),16);
    }
}

void Vfilter_control::traceChgThis__4(Vfilter_control__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vfilter_control* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+873,(vlTOPp->filter_control__DOT__i_tap_wr));
        vcdp->chgBus(c+881,(vlTOPp->filter_control__DOT__out),32);
        vcdp->chgBus(c+889,(vlTOPp->filter_control__DOT__tap),32);
        vcdp->chgBus(c+897,((((0xffU == (0xffU & (vlTOPp->filter_control__DOT__add_0__DOT__operand_a 
                                                  >> 0x17U))) 
                              | (0xffU == (0xffU & 
                                           (vlTOPp->filter_control__DOT__add_0__DOT__operand_b 
                                            >> 0x17U))))
                              ? 0U : ((IData)(vlTOPp->filter_control__DOT__add_0__DOT__operation_sub_addBar)
                                       ? ((0x80000000U 
                                           & vlTOPp->filter_control__DOT__add_0__DOT__operand_a) 
                                          | vlTOPp->filter_control__DOT__add_0__DOT__add_sum)
                                       : ((0x80000000U 
                                           & vlTOPp->filter_control__DOT__add_0__DOT__operand_a) 
                                          | vlTOPp->filter_control__DOT__add_0__DOT__sub_diff)))),32);
        vcdp->chgBit(c+905,(((0xffU == (0xffU & (vlTOPp->filter_control__DOT__add_0__DOT__operand_a 
                                                 >> 0x17U))) 
                             | (0xffU == (0xffU & (vlTOPp->filter_control__DOT__add_0__DOT__operand_b 
                                                   >> 0x17U))))));
        vcdp->chgBit(c+913,(vlTOPp->filter_control__DOT__add_0__DOT__operation_sub_addBar));
        vcdp->chgBit(c+921,(((0x3f800000U > (0x7fffffffU 
                                             & vlTOPp->filter_control__DOT__tap))
                              ? 1U : (1U & (IData)(
                                                   ((QData)((IData)(vlTOPp->filter_control__DOT__tap)) 
                                                    >> 0x20U))))));
        vcdp->chgBit(c+929,((1U & (vlTOPp->filter_control__DOT__add_0__DOT__operand_a 
                                   >> 0x1fU))));
        vcdp->chgBus(c+937,(vlTOPp->filter_control__DOT__add_0__DOT__operand_a),32);
        vcdp->chgBus(c+945,(vlTOPp->filter_control__DOT__add_0__DOT__operand_b),32);
        vcdp->chgBus(c+953,(vlTOPp->filter_control__DOT__add_0__DOT__significand_a),24);
        vcdp->chgBus(c+961,(((0U != (0xffU & (vlTOPp->filter_control__DOT__add_0__DOT__operand_b 
                                              >> 0x17U)))
                              ? (0x800000U | (0x7fffffU 
                                              & vlTOPp->filter_control__DOT__add_0__DOT__operand_b))
                              : (0x7fffffU & vlTOPp->filter_control__DOT__add_0__DOT__operand_b))),24);
        vcdp->chgBus(c+969,(vlTOPp->filter_control__DOT__add_0__DOT__exponent_diff),8);
        vcdp->chgBus(c+977,(vlTOPp->filter_control__DOT__add_0__DOT__significand_b_add_sub),24);
        vcdp->chgBus(c+985,((0xffU & ((vlTOPp->filter_control__DOT__add_0__DOT__operand_b 
                                       >> 0x17U) + (IData)(vlTOPp->filter_control__DOT__add_0__DOT__exponent_diff)))),8);
        vcdp->chgBus(c+993,(vlTOPp->filter_control__DOT__add_0__DOT__significand_add),25);
        vcdp->chgBus(c+1001,(vlTOPp->filter_control__DOT__add_0__DOT__add_sum),31);
        vcdp->chgBus(c+1009,((((IData)(vlTOPp->filter_control__DOT__add_0__DOT__perform) 
                               & (~ (IData)(vlTOPp->filter_control__DOT__add_0__DOT__operation_sub_addBar)))
                               ? (0xffffffU & ((IData)(1U) 
                                               + (~ vlTOPp->filter_control__DOT__add_0__DOT__significand_b_add_sub)))
                               : 0U)),24);
        vcdp->chgBus(c+1017,(vlTOPp->filter_control__DOT__add_0__DOT__significand_sub),25);
        vcdp->chgBus(c+1025,(vlTOPp->filter_control__DOT__add_0__DOT__sub_diff),31);
        vcdp->chgBus(c+1033,(vlTOPp->filter_control__DOT__add_0__DOT__subtraction_diff),25);
        vcdp->chgBus(c+1041,((0xffU & ((vlTOPp->filter_control__DOT__add_0__DOT__operand_a 
                                        >> 0x17U) - (IData)(vlTOPp->filter_control__DOT__add_0__DOT__pe__DOT__shift)))),8);
        vcdp->chgBit(c+1049,((1U & (vlTOPp->filter_control__DOT__add_0__DOT__operand_a 
                                    >> 0x17U))));
        vcdp->chgBit(c+1057,((1U & (vlTOPp->filter_control__DOT__add_0__DOT__operand_b 
                                    >> 0x17U))));
        vcdp->chgBit(c+1065,(vlTOPp->filter_control__DOT__add_0__DOT__perform));
        vcdp->chgBus(c+1073,((0xffU & (vlTOPp->filter_control__DOT__add_0__DOT__operand_a 
                                       >> 0x17U))),8);
        vcdp->chgBus(c+1081,(vlTOPp->filter_control__DOT__add_0__DOT__pe__DOT__shift),5);
        vcdp->chgBit(c+1089,(vlTOPp->filter_control__DOT__fir_0__DOT__o_ce));
        vcdp->chgBus(c+1097,(vlTOPp->filter_control__DOT__fir_0__DOT__tap),32);
        vcdp->chgBus(c+1105,(vlTOPp->filter_control__DOT__fir_0__DOT__dwidx),7);
        vcdp->chgBus(c+1113,(vlTOPp->filter_control__DOT__fir_0__DOT__didx),7);
        vcdp->chgBus(c+1121,(vlTOPp->filter_control__DOT__fir_0__DOT__tidx),7);
        vcdp->chgBus(c+1129,(vlTOPp->filter_control__DOT__fir_0__DOT__data),32);
        vcdp->chgBit(c+1137,(vlTOPp->filter_control__DOT__fir_0__DOT__d_ce));
        vcdp->chgBit(c+1145,(vlTOPp->filter_control__DOT__fir_0__DOT__p_ce));
        vcdp->chgBit(c+1153,(vlTOPp->filter_control__DOT__fir_0__DOT__m_ce));
        vcdp->chgBus(c+1161,(vlTOPp->filter_control__DOT__fir_0__DOT__product),32);
        vcdp->chgBus(c+1169,(vlTOPp->filter_control__DOT__fir_0__DOT__r_acc),32);
        vcdp->chgBus(c+1177,((((0xffU == (0xffU & (vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__operand_a 
                                                   >> 0x17U))) 
                               | (0xffU == (0xffU & 
                                            (vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__operand_b 
                                             >> 0x17U))))
                               ? 0U : ((IData)(vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__operation_sub_addBar)
                                        ? ((0x80000000U 
                                            & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__operand_a) 
                                           | vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__add_sum)
                                        : ((0x80000000U 
                                            & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__operand_a) 
                                           | vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__sub_diff)))),32);
        vcdp->chgBus(c+1185,(((IData)(vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__Exception)
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
                                                      | vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__product_mantissa))))))),32);
        vcdp->chgBit(c+1193,((1U >= ((IData)(0x7fU) 
                                     - (IData)(vlTOPp->filter_control__DOT__fir_0__DOT__tidx)))));
        vcdp->chgBus(c+1201,(vlTOPp->filter_control__DOT__fir_0__DOT__pre_acc_ce),3);
        vcdp->chgBus(c+1209,(vlTOPp->filter_control__DOT__fir_0__DOT__genblk2__DOT__tapwidx),7);
        vcdp->chgBit(c+1217,(((0xffU == (0xffU & (vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__operand_a 
                                                  >> 0x17U))) 
                              | (0xffU == (0xffU & 
                                           (vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__operand_b 
                                            >> 0x17U))))));
        vcdp->chgBit(c+1225,(vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__operation_sub_addBar));
        vcdp->chgBit(c+1233,((((0x7fffffffU & vlTOPp->filter_control__DOT__fir_0__DOT__r_acc) 
                               < (0x7fffffffU & vlTOPp->filter_control__DOT__fir_0__DOT__product))
                               ? 1U : (1U & (IData)(
                                                    ((QData)((IData)(vlTOPp->filter_control__DOT__fir_0__DOT__r_acc)) 
                                                     >> 0x20U))))));
        vcdp->chgBit(c+1241,((1U & (vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__operand_a 
                                    >> 0x1fU))));
        vcdp->chgBus(c+1249,(vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__operand_a),32);
        vcdp->chgBus(c+1257,(vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__operand_b),32);
        vcdp->chgBus(c+1265,(vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_a),24);
        vcdp->chgBus(c+1273,(((0U != (0xffU & (vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__operand_b 
                                               >> 0x17U)))
                               ? (0x800000U | (0x7fffffU 
                                               & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__operand_b))
                               : (0x7fffffU & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__operand_b))),24);
        vcdp->chgBus(c+1281,(vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__exponent_diff),8);
        vcdp->chgBus(c+1289,(vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_b_add_sub),24);
        vcdp->chgBus(c+1297,((0xffU & ((vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__operand_b 
                                        >> 0x17U) + (IData)(vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__exponent_diff)))),8);
        vcdp->chgBus(c+1305,(vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_add),25);
        vcdp->chgBus(c+1313,(vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__add_sum),31);
        vcdp->chgBus(c+1321,((((IData)(vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__perform) 
                               & (~ (IData)(vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__operation_sub_addBar)))
                               ? (0xffffffU & ((IData)(1U) 
                                               + (~ vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_b_add_sub)))
                               : 0U)),24);
        vcdp->chgBus(c+1329,(vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub),25);
        vcdp->chgBus(c+1337,(vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__sub_diff),31);
        vcdp->chgBus(c+1345,(vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__subtraction_diff),25);
        vcdp->chgBus(c+1353,((0xffU & ((vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__operand_a 
                                        >> 0x17U) - (IData)(vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__pe__DOT__shift)))),8);
        vcdp->chgBit(c+1361,((1U & (vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__operand_a 
                                    >> 0x17U))));
        vcdp->chgBit(c+1369,((1U & (vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__operand_b 
                                    >> 0x17U))));
        vcdp->chgBit(c+1377,(vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__perform));
        vcdp->chgBus(c+1385,((0xffU & (vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__operand_a 
                                       >> 0x17U))),8);
        vcdp->chgBus(c+1393,(vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__pe__DOT__shift),5);
        vcdp->chgBit(c+1401,(vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__Exception));
        vcdp->chgBit(c+1409,((1U & ((((IData)(vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__exponent) 
                                      >> 8U) & (~ ((IData)(vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__exponent) 
                                                   >> 7U))) 
                                    & (~ (IData)(vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__zero))))));
        vcdp->chgBit(c+1417,((1U & ((((IData)(vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__exponent) 
                                      >> 8U) & ((IData)(vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__exponent) 
                                                >> 7U)) 
                                    & (~ (IData)(vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__zero))))));
        vcdp->chgBit(c+1425,(vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__sign));
        vcdp->chgBit(c+1433,((0U != (0x7fffffU & (IData)(vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__product_normalised)))));
        vcdp->chgBit(c+1441,((1U & (IData)((vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__product 
                                            >> 0x2fU)))));
        vcdp->chgBit(c+1449,(vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__zero));
        vcdp->chgBus(c+1457,(vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__exponent),9);
        vcdp->chgBus(c+1465,(vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__sum_exponent),9);
        vcdp->chgBus(c+1473,(vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__product_mantissa),23);
        vcdp->chgBus(c+1481,(((0U != (0xffU & (vlTOPp->filter_control__DOT__fir_0__DOT__tap 
                                               >> 0x17U)))
                               ? (0x800000U | (0x7fffffU 
                                               & vlTOPp->filter_control__DOT__fir_0__DOT__tap))
                               : (0x7fffffU & vlTOPp->filter_control__DOT__fir_0__DOT__tap))),24);
        vcdp->chgBus(c+1489,(((0U != (0xffU & (vlTOPp->filter_control__DOT__fir_0__DOT__data 
                                               >> 0x17U)))
                               ? (0x800000U | (0x7fffffU 
                                               & vlTOPp->filter_control__DOT__fir_0__DOT__data))
                               : (0x7fffffU & vlTOPp->filter_control__DOT__fir_0__DOT__data))),24);
        vcdp->chgQuad(c+1497,(vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__product),48);
        vcdp->chgQuad(c+1513,(vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__product_normalised),48);
        vcdp->chgBus(c+1529,(vlTOPp->filter_control__DOT__convert_0__DOT__Integer_Value),24);
        vcdp->chgQuad(c+1537,((QData)((IData)(((0xff800000U 
                                                & vlTOPp->filter_control__DOT__out) 
                                               | (0x7fffffU 
                                                  & (vlTOPp->filter_control__DOT__convert_0__DOT__Integer_Value 
                                                     >> 1U)))))),33);
    }
}

void Vfilter_control::traceChgThis__5(Vfilter_control__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vfilter_control* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1553,(vlTOPp->filter_control__DOT__state),16);
        vcdp->chgBus(c+1561,(((0U != (IData)(vlTOPp->filter_control__DOT__state))
                               ? (0x1ffU & ((IData)(vlTOPp->filter_control__DOT__state) 
                                            - (IData)(1U)))
                               : 0U)),9);
        vcdp->chgBus(c+1569,(vlTOPp->filter_control__DOT__impulse),32);
        vcdp->chgBus(c+1577,(vlTOPp->filter_control__DOT__counter),16);
        vcdp->chgBus(c+1585,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[0]),32);
        vcdp->chgBus(c+1586,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[1]),32);
        vcdp->chgBus(c+1587,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[2]),32);
        vcdp->chgBus(c+1588,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[3]),32);
        vcdp->chgBus(c+1589,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[4]),32);
        vcdp->chgBus(c+1590,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[5]),32);
        vcdp->chgBus(c+1591,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[6]),32);
        vcdp->chgBus(c+1592,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[7]),32);
        vcdp->chgBus(c+1593,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[8]),32);
        vcdp->chgBus(c+1594,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[9]),32);
        vcdp->chgBus(c+1595,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[10]),32);
        vcdp->chgBus(c+1596,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[11]),32);
        vcdp->chgBus(c+1597,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[12]),32);
        vcdp->chgBus(c+1598,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[13]),32);
        vcdp->chgBus(c+1599,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[14]),32);
        vcdp->chgBus(c+1600,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[15]),32);
        vcdp->chgBus(c+1601,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[16]),32);
        vcdp->chgBus(c+1602,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[17]),32);
        vcdp->chgBus(c+1603,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[18]),32);
        vcdp->chgBus(c+1604,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[19]),32);
        vcdp->chgBus(c+1605,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[20]),32);
        vcdp->chgBus(c+1606,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[21]),32);
        vcdp->chgBus(c+1607,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[22]),32);
        vcdp->chgBus(c+1608,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[23]),32);
        vcdp->chgBus(c+1609,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[24]),32);
        vcdp->chgBus(c+1610,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[25]),32);
        vcdp->chgBus(c+1611,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[26]),32);
        vcdp->chgBus(c+1612,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[27]),32);
        vcdp->chgBus(c+1613,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[28]),32);
        vcdp->chgBus(c+1614,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[29]),32);
        vcdp->chgBus(c+1615,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[30]),32);
        vcdp->chgBus(c+1616,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[31]),32);
        vcdp->chgBus(c+1617,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[32]),32);
        vcdp->chgBus(c+1618,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[33]),32);
        vcdp->chgBus(c+1619,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[34]),32);
        vcdp->chgBus(c+1620,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[35]),32);
        vcdp->chgBus(c+1621,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[36]),32);
        vcdp->chgBus(c+1622,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[37]),32);
        vcdp->chgBus(c+1623,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[38]),32);
        vcdp->chgBus(c+1624,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[39]),32);
        vcdp->chgBus(c+1625,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[40]),32);
        vcdp->chgBus(c+1626,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[41]),32);
        vcdp->chgBus(c+1627,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[42]),32);
        vcdp->chgBus(c+1628,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[43]),32);
        vcdp->chgBus(c+1629,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[44]),32);
        vcdp->chgBus(c+1630,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[45]),32);
        vcdp->chgBus(c+1631,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[46]),32);
        vcdp->chgBus(c+1632,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[47]),32);
        vcdp->chgBus(c+1633,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[48]),32);
        vcdp->chgBus(c+1634,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[49]),32);
        vcdp->chgBus(c+1635,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[50]),32);
        vcdp->chgBus(c+1636,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[51]),32);
        vcdp->chgBus(c+1637,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[52]),32);
        vcdp->chgBus(c+1638,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[53]),32);
        vcdp->chgBus(c+1639,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[54]),32);
        vcdp->chgBus(c+1640,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[55]),32);
        vcdp->chgBus(c+1641,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[56]),32);
        vcdp->chgBus(c+1642,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[57]),32);
        vcdp->chgBus(c+1643,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[58]),32);
        vcdp->chgBus(c+1644,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[59]),32);
        vcdp->chgBus(c+1645,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[60]),32);
        vcdp->chgBus(c+1646,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[61]),32);
        vcdp->chgBus(c+1647,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[62]),32);
        vcdp->chgBus(c+1648,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[63]),32);
        vcdp->chgBus(c+1649,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[64]),32);
        vcdp->chgBus(c+1650,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[65]),32);
        vcdp->chgBus(c+1651,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[66]),32);
        vcdp->chgBus(c+1652,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[67]),32);
        vcdp->chgBus(c+1653,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[68]),32);
        vcdp->chgBus(c+1654,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[69]),32);
        vcdp->chgBus(c+1655,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[70]),32);
        vcdp->chgBus(c+1656,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[71]),32);
        vcdp->chgBus(c+1657,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[72]),32);
        vcdp->chgBus(c+1658,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[73]),32);
        vcdp->chgBus(c+1659,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[74]),32);
        vcdp->chgBus(c+1660,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[75]),32);
        vcdp->chgBus(c+1661,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[76]),32);
        vcdp->chgBus(c+1662,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[77]),32);
        vcdp->chgBus(c+1663,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[78]),32);
        vcdp->chgBus(c+1664,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[79]),32);
        vcdp->chgBus(c+1665,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[80]),32);
        vcdp->chgBus(c+1666,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[81]),32);
        vcdp->chgBus(c+1667,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[82]),32);
        vcdp->chgBus(c+1668,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[83]),32);
        vcdp->chgBus(c+1669,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[84]),32);
        vcdp->chgBus(c+1670,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[85]),32);
        vcdp->chgBus(c+1671,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[86]),32);
        vcdp->chgBus(c+1672,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[87]),32);
        vcdp->chgBus(c+1673,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[88]),32);
        vcdp->chgBus(c+1674,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[89]),32);
        vcdp->chgBus(c+1675,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[90]),32);
        vcdp->chgBus(c+1676,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[91]),32);
        vcdp->chgBus(c+1677,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[92]),32);
        vcdp->chgBus(c+1678,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[93]),32);
        vcdp->chgBus(c+1679,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[94]),32);
        vcdp->chgBus(c+1680,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[95]),32);
        vcdp->chgBus(c+1681,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[96]),32);
        vcdp->chgBus(c+1682,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[97]),32);
        vcdp->chgBus(c+1683,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[98]),32);
        vcdp->chgBus(c+1684,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[99]),32);
        vcdp->chgBus(c+1685,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[100]),32);
        vcdp->chgBus(c+1686,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[101]),32);
        vcdp->chgBus(c+1687,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[102]),32);
        vcdp->chgBus(c+1688,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[103]),32);
        vcdp->chgBus(c+1689,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[104]),32);
        vcdp->chgBus(c+1690,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[105]),32);
        vcdp->chgBus(c+1691,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[106]),32);
        vcdp->chgBus(c+1692,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[107]),32);
        vcdp->chgBus(c+1693,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[108]),32);
        vcdp->chgBus(c+1694,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[109]),32);
        vcdp->chgBus(c+1695,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[110]),32);
        vcdp->chgBus(c+1696,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[111]),32);
        vcdp->chgBus(c+1697,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[112]),32);
        vcdp->chgBus(c+1698,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[113]),32);
        vcdp->chgBus(c+1699,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[114]),32);
        vcdp->chgBus(c+1700,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[115]),32);
        vcdp->chgBus(c+1701,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[116]),32);
        vcdp->chgBus(c+1702,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[117]),32);
        vcdp->chgBus(c+1703,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[118]),32);
        vcdp->chgBus(c+1704,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[119]),32);
        vcdp->chgBus(c+1705,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[120]),32);
        vcdp->chgBus(c+1706,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[121]),32);
        vcdp->chgBus(c+1707,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[122]),32);
        vcdp->chgBus(c+1708,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[123]),32);
        vcdp->chgBus(c+1709,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[124]),32);
        vcdp->chgBus(c+1710,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[125]),32);
        vcdp->chgBus(c+1711,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[126]),32);
        vcdp->chgBus(c+1712,(vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[127]),32);
        vcdp->chgBus(c+2609,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[0]),32);
        vcdp->chgBus(c+2610,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[1]),32);
        vcdp->chgBus(c+2611,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[2]),32);
        vcdp->chgBus(c+2612,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[3]),32);
        vcdp->chgBus(c+2613,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[4]),32);
        vcdp->chgBus(c+2614,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[5]),32);
        vcdp->chgBus(c+2615,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[6]),32);
        vcdp->chgBus(c+2616,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[7]),32);
        vcdp->chgBus(c+2617,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[8]),32);
        vcdp->chgBus(c+2618,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[9]),32);
        vcdp->chgBus(c+2619,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[10]),32);
        vcdp->chgBus(c+2620,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[11]),32);
        vcdp->chgBus(c+2621,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[12]),32);
        vcdp->chgBus(c+2622,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[13]),32);
        vcdp->chgBus(c+2623,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[14]),32);
        vcdp->chgBus(c+2624,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[15]),32);
        vcdp->chgBus(c+2625,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[16]),32);
        vcdp->chgBus(c+2626,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[17]),32);
        vcdp->chgBus(c+2627,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[18]),32);
        vcdp->chgBus(c+2628,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[19]),32);
        vcdp->chgBus(c+2629,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[20]),32);
        vcdp->chgBus(c+2630,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[21]),32);
        vcdp->chgBus(c+2631,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[22]),32);
        vcdp->chgBus(c+2632,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[23]),32);
        vcdp->chgBus(c+2633,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[24]),32);
        vcdp->chgBus(c+2634,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[25]),32);
        vcdp->chgBus(c+2635,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[26]),32);
        vcdp->chgBus(c+2636,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[27]),32);
        vcdp->chgBus(c+2637,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[28]),32);
        vcdp->chgBus(c+2638,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[29]),32);
        vcdp->chgBus(c+2639,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[30]),32);
        vcdp->chgBus(c+2640,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[31]),32);
        vcdp->chgBus(c+2641,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[32]),32);
        vcdp->chgBus(c+2642,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[33]),32);
        vcdp->chgBus(c+2643,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[34]),32);
        vcdp->chgBus(c+2644,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[35]),32);
        vcdp->chgBus(c+2645,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[36]),32);
        vcdp->chgBus(c+2646,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[37]),32);
        vcdp->chgBus(c+2647,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[38]),32);
        vcdp->chgBus(c+2648,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[39]),32);
        vcdp->chgBus(c+2649,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[40]),32);
        vcdp->chgBus(c+2650,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[41]),32);
        vcdp->chgBus(c+2651,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[42]),32);
        vcdp->chgBus(c+2652,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[43]),32);
        vcdp->chgBus(c+2653,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[44]),32);
        vcdp->chgBus(c+2654,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[45]),32);
        vcdp->chgBus(c+2655,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[46]),32);
        vcdp->chgBus(c+2656,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[47]),32);
        vcdp->chgBus(c+2657,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[48]),32);
        vcdp->chgBus(c+2658,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[49]),32);
        vcdp->chgBus(c+2659,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[50]),32);
        vcdp->chgBus(c+2660,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[51]),32);
        vcdp->chgBus(c+2661,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[52]),32);
        vcdp->chgBus(c+2662,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[53]),32);
        vcdp->chgBus(c+2663,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[54]),32);
        vcdp->chgBus(c+2664,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[55]),32);
        vcdp->chgBus(c+2665,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[56]),32);
        vcdp->chgBus(c+2666,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[57]),32);
        vcdp->chgBus(c+2667,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[58]),32);
        vcdp->chgBus(c+2668,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[59]),32);
        vcdp->chgBus(c+2669,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[60]),32);
        vcdp->chgBus(c+2670,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[61]),32);
        vcdp->chgBus(c+2671,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[62]),32);
        vcdp->chgBus(c+2672,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[63]),32);
        vcdp->chgBus(c+2673,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[64]),32);
        vcdp->chgBus(c+2674,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[65]),32);
        vcdp->chgBus(c+2675,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[66]),32);
        vcdp->chgBus(c+2676,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[67]),32);
        vcdp->chgBus(c+2677,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[68]),32);
        vcdp->chgBus(c+2678,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[69]),32);
        vcdp->chgBus(c+2679,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[70]),32);
        vcdp->chgBus(c+2680,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[71]),32);
        vcdp->chgBus(c+2681,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[72]),32);
        vcdp->chgBus(c+2682,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[73]),32);
        vcdp->chgBus(c+2683,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[74]),32);
        vcdp->chgBus(c+2684,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[75]),32);
        vcdp->chgBus(c+2685,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[76]),32);
        vcdp->chgBus(c+2686,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[77]),32);
        vcdp->chgBus(c+2687,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[78]),32);
        vcdp->chgBus(c+2688,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[79]),32);
        vcdp->chgBus(c+2689,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[80]),32);
        vcdp->chgBus(c+2690,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[81]),32);
        vcdp->chgBus(c+2691,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[82]),32);
        vcdp->chgBus(c+2692,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[83]),32);
        vcdp->chgBus(c+2693,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[84]),32);
        vcdp->chgBus(c+2694,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[85]),32);
        vcdp->chgBus(c+2695,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[86]),32);
        vcdp->chgBus(c+2696,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[87]),32);
        vcdp->chgBus(c+2697,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[88]),32);
        vcdp->chgBus(c+2698,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[89]),32);
        vcdp->chgBus(c+2699,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[90]),32);
        vcdp->chgBus(c+2700,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[91]),32);
        vcdp->chgBus(c+2701,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[92]),32);
        vcdp->chgBus(c+2702,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[93]),32);
        vcdp->chgBus(c+2703,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[94]),32);
        vcdp->chgBus(c+2704,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[95]),32);
        vcdp->chgBus(c+2705,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[96]),32);
        vcdp->chgBus(c+2706,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[97]),32);
        vcdp->chgBus(c+2707,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[98]),32);
        vcdp->chgBus(c+2708,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[99]),32);
        vcdp->chgBus(c+2709,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[100]),32);
        vcdp->chgBus(c+2710,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[101]),32);
        vcdp->chgBus(c+2711,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[102]),32);
        vcdp->chgBus(c+2712,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[103]),32);
        vcdp->chgBus(c+2713,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[104]),32);
        vcdp->chgBus(c+2714,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[105]),32);
        vcdp->chgBus(c+2715,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[106]),32);
        vcdp->chgBus(c+2716,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[107]),32);
        vcdp->chgBus(c+2717,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[108]),32);
        vcdp->chgBus(c+2718,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[109]),32);
        vcdp->chgBus(c+2719,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[110]),32);
        vcdp->chgBus(c+2720,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[111]),32);
        vcdp->chgBus(c+2721,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[112]),32);
        vcdp->chgBus(c+2722,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[113]),32);
        vcdp->chgBus(c+2723,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[114]),32);
        vcdp->chgBus(c+2724,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[115]),32);
        vcdp->chgBus(c+2725,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[116]),32);
        vcdp->chgBus(c+2726,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[117]),32);
        vcdp->chgBus(c+2727,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[118]),32);
        vcdp->chgBus(c+2728,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[119]),32);
        vcdp->chgBus(c+2729,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[120]),32);
        vcdp->chgBus(c+2730,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[121]),32);
        vcdp->chgBus(c+2731,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[122]),32);
        vcdp->chgBus(c+2732,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[123]),32);
        vcdp->chgBus(c+2733,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[124]),32);
        vcdp->chgBus(c+2734,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[125]),32);
        vcdp->chgBus(c+2735,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[126]),32);
        vcdp->chgBus(c+2736,(vlTOPp->filter_control__DOT__fir_0__DOT__dmem[127]),32);
    }
}

void Vfilter_control::traceChgThis__6(Vfilter_control__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vfilter_control* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+3633,(vlTOPp->i_clk));
        vcdp->chgBit(c+3641,(vlTOPp->i_reset));
        vcdp->chgBit(c+3649,(vlTOPp->i_ce));
        vcdp->chgBit(c+3657,(vlTOPp->i_start));
        vcdp->chgBus(c+3665,(vlTOPp->i_sample),16);
        vcdp->chgBus(c+3673,(vlTOPp->o_result),16);
        vcdp->chgBit(c+3681,((1U & (~ (IData)(vlTOPp->i_reset)))));
    }
}
