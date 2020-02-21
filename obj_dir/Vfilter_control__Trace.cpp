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
                                  >> 2U))))) {
            vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 3U))))) {
            vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                | (vlTOPp->__Vm_traceActivity 
                                   >> 3U)) | (vlTOPp->__Vm_traceActivity 
                                              >> 4U))))) {
            vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 4U))))) {
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
        vlTOPp->traceChgThis__9(vlSymsp, vcdp, code);
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
        vcdp->chgBit(c+1,(vlTOPp->filter_control__DOT__i2s_m0__DOT__wsd));
        vcdp->chgBit(c+9,(vlTOPp->filter_control__DOT__i2s_m0__DOT__wsp));
    }
}

void Vfilter_control::traceChgThis__3(Vfilter_control__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vfilter_control* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+17,(vlTOPp->filter_control__DOT__filter_0__DOT__tapout[0]),16);
        vcdp->chgBus(c+18,(vlTOPp->filter_control__DOT__filter_0__DOT__tapout[1]),16);
        vcdp->chgBus(c+19,(vlTOPp->filter_control__DOT__filter_0__DOT__tapout[2]),16);
        vcdp->chgBus(c+20,(vlTOPp->filter_control__DOT__filter_0__DOT__tapout[3]),16);
        vcdp->chgBus(c+21,(vlTOPp->filter_control__DOT__filter_0__DOT__tapout[4]),16);
        vcdp->chgBus(c+22,(vlTOPp->filter_control__DOT__filter_0__DOT__tapout[5]),16);
        vcdp->chgBus(c+23,(vlTOPp->filter_control__DOT__filter_0__DOT__tapout[6]),16);
        vcdp->chgBus(c+24,(vlTOPp->filter_control__DOT__filter_0__DOT__tapout[7]),16);
        vcdp->chgBus(c+25,(vlTOPp->filter_control__DOT__filter_0__DOT__tapout[8]),16);
        vcdp->chgBus(c+26,(vlTOPp->filter_control__DOT__filter_0__DOT__tapout[9]),16);
        vcdp->chgBus(c+27,(vlTOPp->filter_control__DOT__filter_0__DOT__tapout[10]),16);
        vcdp->chgBus(c+28,(vlTOPp->filter_control__DOT__filter_0__DOT__tapout[11]),16);
        vcdp->chgBus(c+29,(vlTOPp->filter_control__DOT__filter_0__DOT__tapout[12]),16);
        vcdp->chgBus(c+30,(vlTOPp->filter_control__DOT__filter_0__DOT__tapout[13]),16);
        vcdp->chgBus(c+31,(vlTOPp->filter_control__DOT__filter_0__DOT__tapout[14]),16);
        vcdp->chgBus(c+32,(vlTOPp->filter_control__DOT__filter_0__DOT__tapout[15]),16);
        vcdp->chgBus(c+33,(vlTOPp->filter_control__DOT__filter_0__DOT__tapout[16]),16);
        vcdp->chgQuad(c+153,(vlTOPp->filter_control__DOT__filter_0__DOT__result[0]),39);
        vcdp->chgQuad(c+155,(vlTOPp->filter_control__DOT__filter_0__DOT__result[1]),39);
        vcdp->chgQuad(c+157,(vlTOPp->filter_control__DOT__filter_0__DOT__result[2]),39);
        vcdp->chgQuad(c+159,(vlTOPp->filter_control__DOT__filter_0__DOT__result[3]),39);
        vcdp->chgQuad(c+161,(vlTOPp->filter_control__DOT__filter_0__DOT__result[4]),39);
        vcdp->chgQuad(c+163,(vlTOPp->filter_control__DOT__filter_0__DOT__result[5]),39);
        vcdp->chgQuad(c+165,(vlTOPp->filter_control__DOT__filter_0__DOT__result[6]),39);
        vcdp->chgQuad(c+167,(vlTOPp->filter_control__DOT__filter_0__DOT__result[7]),39);
        vcdp->chgQuad(c+169,(vlTOPp->filter_control__DOT__filter_0__DOT__result[8]),39);
        vcdp->chgQuad(c+171,(vlTOPp->filter_control__DOT__filter_0__DOT__result[9]),39);
        vcdp->chgQuad(c+173,(vlTOPp->filter_control__DOT__filter_0__DOT__result[10]),39);
        vcdp->chgQuad(c+175,(vlTOPp->filter_control__DOT__filter_0__DOT__result[11]),39);
        vcdp->chgQuad(c+177,(vlTOPp->filter_control__DOT__filter_0__DOT__result[12]),39);
        vcdp->chgQuad(c+179,(vlTOPp->filter_control__DOT__filter_0__DOT__result[13]),39);
        vcdp->chgQuad(c+181,(vlTOPp->filter_control__DOT__filter_0__DOT__result[14]),39);
        vcdp->chgQuad(c+183,(vlTOPp->filter_control__DOT__filter_0__DOT__result[15]),39);
        vcdp->chgQuad(c+185,(vlTOPp->filter_control__DOT__filter_0__DOT__result[16]),39);
        vcdp->chgBus(c+425,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__0__KET____DOT__tapk__DOT__genblk2__DOT__tap),16);
        vcdp->chgBus(c+433,(vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__0__KET____DOT__tapk____pinNumber8),16);
        vcdp->chgQuad(c+441,(vlTOPp->filter_control__DOT__filter_0__DOT__result
                             [0U]),39);
        vcdp->chgQuad(c+457,(vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__0__KET____DOT__tapk____pinNumber10),39);
        vcdp->chgBus(c+473,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__0__KET____DOT__tapk__DOT__delayed_sample),16);
        vcdp->chgBus(c+481,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__1__KET____DOT__tapk__DOT__genblk2__DOT__tap),16);
        vcdp->chgBus(c+489,(vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__1__KET____DOT__tapk____pinNumber8),16);
        vcdp->chgQuad(c+497,(vlTOPp->filter_control__DOT__filter_0__DOT__result
                             [1U]),39);
        vcdp->chgQuad(c+513,(vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__1__KET____DOT__tapk____pinNumber10),39);
        vcdp->chgBus(c+529,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__1__KET____DOT__tapk__DOT__delayed_sample),16);
        vcdp->chgBus(c+537,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__2__KET____DOT__tapk__DOT__genblk2__DOT__tap),16);
        vcdp->chgBus(c+545,(vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__2__KET____DOT__tapk____pinNumber8),16);
        vcdp->chgQuad(c+553,(vlTOPp->filter_control__DOT__filter_0__DOT__result
                             [2U]),39);
        vcdp->chgQuad(c+569,(vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__2__KET____DOT__tapk____pinNumber10),39);
        vcdp->chgBus(c+585,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__2__KET____DOT__tapk__DOT__delayed_sample),16);
        vcdp->chgBus(c+593,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__3__KET____DOT__tapk__DOT__genblk2__DOT__tap),16);
        vcdp->chgBus(c+601,(vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__3__KET____DOT__tapk____pinNumber8),16);
        vcdp->chgQuad(c+609,(vlTOPp->filter_control__DOT__filter_0__DOT__result
                             [3U]),39);
        vcdp->chgQuad(c+625,(vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__3__KET____DOT__tapk____pinNumber10),39);
        vcdp->chgBus(c+641,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__3__KET____DOT__tapk__DOT__delayed_sample),16);
        vcdp->chgBus(c+649,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__4__KET____DOT__tapk__DOT__genblk2__DOT__tap),16);
        vcdp->chgBus(c+657,(vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__4__KET____DOT__tapk____pinNumber8),16);
        vcdp->chgQuad(c+665,(vlTOPp->filter_control__DOT__filter_0__DOT__result
                             [4U]),39);
        vcdp->chgQuad(c+681,(vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__4__KET____DOT__tapk____pinNumber10),39);
        vcdp->chgBus(c+697,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__4__KET____DOT__tapk__DOT__delayed_sample),16);
        vcdp->chgBus(c+705,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__5__KET____DOT__tapk__DOT__genblk2__DOT__tap),16);
        vcdp->chgBus(c+713,(vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__5__KET____DOT__tapk____pinNumber8),16);
        vcdp->chgQuad(c+721,(vlTOPp->filter_control__DOT__filter_0__DOT__result
                             [5U]),39);
        vcdp->chgQuad(c+737,(vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__5__KET____DOT__tapk____pinNumber10),39);
        vcdp->chgBus(c+753,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__5__KET____DOT__tapk__DOT__delayed_sample),16);
        vcdp->chgBus(c+761,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__6__KET____DOT__tapk__DOT__genblk2__DOT__tap),16);
        vcdp->chgBus(c+769,(vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__6__KET____DOT__tapk____pinNumber8),16);
        vcdp->chgQuad(c+777,(vlTOPp->filter_control__DOT__filter_0__DOT__result
                             [6U]),39);
        vcdp->chgQuad(c+793,(vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__6__KET____DOT__tapk____pinNumber10),39);
        vcdp->chgBus(c+809,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__6__KET____DOT__tapk__DOT__delayed_sample),16);
        vcdp->chgBus(c+817,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__7__KET____DOT__tapk__DOT__genblk2__DOT__tap),16);
        vcdp->chgBus(c+825,(vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__7__KET____DOT__tapk____pinNumber8),16);
        vcdp->chgQuad(c+833,(vlTOPp->filter_control__DOT__filter_0__DOT__result
                             [7U]),39);
        vcdp->chgQuad(c+849,(vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__7__KET____DOT__tapk____pinNumber10),39);
        vcdp->chgBus(c+865,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__7__KET____DOT__tapk__DOT__delayed_sample),16);
        vcdp->chgBus(c+873,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__8__KET____DOT__tapk__DOT__genblk2__DOT__tap),16);
        vcdp->chgBus(c+881,(vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__8__KET____DOT__tapk____pinNumber8),16);
        vcdp->chgQuad(c+889,(vlTOPp->filter_control__DOT__filter_0__DOT__result
                             [8U]),39);
        vcdp->chgQuad(c+905,(vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__8__KET____DOT__tapk____pinNumber10),39);
        vcdp->chgBus(c+921,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__8__KET____DOT__tapk__DOT__delayed_sample),16);
        vcdp->chgBus(c+929,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__9__KET____DOT__tapk__DOT__genblk2__DOT__tap),16);
        vcdp->chgBus(c+937,(vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__9__KET____DOT__tapk____pinNumber8),16);
        vcdp->chgQuad(c+945,(vlTOPp->filter_control__DOT__filter_0__DOT__result
                             [9U]),39);
        vcdp->chgQuad(c+961,(vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__9__KET____DOT__tapk____pinNumber10),39);
        vcdp->chgBus(c+977,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__9__KET____DOT__tapk__DOT__delayed_sample),16);
        vcdp->chgBus(c+985,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__10__KET____DOT__tapk__DOT__genblk2__DOT__tap),16);
        vcdp->chgBus(c+993,(vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__10__KET____DOT__tapk____pinNumber8),16);
        vcdp->chgQuad(c+1001,(vlTOPp->filter_control__DOT__filter_0__DOT__result
                              [0xaU]),39);
        vcdp->chgQuad(c+1017,(vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__10__KET____DOT__tapk____pinNumber10),39);
        vcdp->chgBus(c+1033,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__10__KET____DOT__tapk__DOT__delayed_sample),16);
        vcdp->chgBus(c+1041,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__11__KET____DOT__tapk__DOT__genblk2__DOT__tap),16);
        vcdp->chgBus(c+1049,(vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__11__KET____DOT__tapk____pinNumber8),16);
        vcdp->chgQuad(c+1057,(vlTOPp->filter_control__DOT__filter_0__DOT__result
                              [0xbU]),39);
        vcdp->chgQuad(c+1073,(vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__11__KET____DOT__tapk____pinNumber10),39);
        vcdp->chgBus(c+1089,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__11__KET____DOT__tapk__DOT__delayed_sample),16);
        vcdp->chgBus(c+1097,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__12__KET____DOT__tapk__DOT__genblk2__DOT__tap),16);
        vcdp->chgBus(c+1105,(vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__12__KET____DOT__tapk____pinNumber8),16);
        vcdp->chgQuad(c+1113,(vlTOPp->filter_control__DOT__filter_0__DOT__result
                              [0xcU]),39);
        vcdp->chgQuad(c+1129,(vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__12__KET____DOT__tapk____pinNumber10),39);
        vcdp->chgBus(c+1145,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__12__KET____DOT__tapk__DOT__delayed_sample),16);
        vcdp->chgBus(c+1153,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__13__KET____DOT__tapk__DOT__genblk2__DOT__tap),16);
        vcdp->chgBus(c+1161,(vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__13__KET____DOT__tapk____pinNumber8),16);
        vcdp->chgQuad(c+1169,(vlTOPp->filter_control__DOT__filter_0__DOT__result
                              [0xdU]),39);
        vcdp->chgQuad(c+1185,(vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__13__KET____DOT__tapk____pinNumber10),39);
        vcdp->chgBus(c+1201,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__13__KET____DOT__tapk__DOT__delayed_sample),16);
        vcdp->chgBus(c+1209,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__14__KET____DOT__tapk__DOT__genblk2__DOT__tap),16);
        vcdp->chgBus(c+1217,(vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__14__KET____DOT__tapk____pinNumber8),16);
        vcdp->chgQuad(c+1225,(vlTOPp->filter_control__DOT__filter_0__DOT__result
                              [0xeU]),39);
        vcdp->chgQuad(c+1241,(vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__14__KET____DOT__tapk____pinNumber10),39);
        vcdp->chgBus(c+1257,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__14__KET____DOT__tapk__DOT__delayed_sample),16);
        vcdp->chgBus(c+1265,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__15__KET____DOT__tapk__DOT__genblk2__DOT__tap),16);
        vcdp->chgBus(c+1273,(vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__15__KET____DOT__tapk____pinNumber8),16);
        vcdp->chgQuad(c+1281,(vlTOPp->filter_control__DOT__filter_0__DOT__result
                              [0xfU]),39);
        vcdp->chgQuad(c+1297,(vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__15__KET____DOT__tapk____pinNumber10),39);
        vcdp->chgBus(c+1313,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__15__KET____DOT__tapk__DOT__delayed_sample),16);
    }
}

void Vfilter_control::traceChgThis__4(Vfilter_control__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vfilter_control* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1321,(vlTOPp->filter_control__DOT__filter_0__DOT__tap[0]),16);
        vcdp->chgBus(c+1322,(vlTOPp->filter_control__DOT__filter_0__DOT__tap[1]),16);
        vcdp->chgBus(c+1323,(vlTOPp->filter_control__DOT__filter_0__DOT__tap[2]),16);
        vcdp->chgBus(c+1324,(vlTOPp->filter_control__DOT__filter_0__DOT__tap[3]),16);
        vcdp->chgBus(c+1325,(vlTOPp->filter_control__DOT__filter_0__DOT__tap[4]),16);
        vcdp->chgBus(c+1326,(vlTOPp->filter_control__DOT__filter_0__DOT__tap[5]),16);
        vcdp->chgBus(c+1327,(vlTOPp->filter_control__DOT__filter_0__DOT__tap[6]),16);
        vcdp->chgBus(c+1328,(vlTOPp->filter_control__DOT__filter_0__DOT__tap[7]),16);
        vcdp->chgBus(c+1329,(vlTOPp->filter_control__DOT__filter_0__DOT__tap[8]),16);
        vcdp->chgBus(c+1330,(vlTOPp->filter_control__DOT__filter_0__DOT__tap[9]),16);
        vcdp->chgBus(c+1331,(vlTOPp->filter_control__DOT__filter_0__DOT__tap[10]),16);
        vcdp->chgBus(c+1332,(vlTOPp->filter_control__DOT__filter_0__DOT__tap[11]),16);
        vcdp->chgBus(c+1333,(vlTOPp->filter_control__DOT__filter_0__DOT__tap[12]),16);
        vcdp->chgBus(c+1334,(vlTOPp->filter_control__DOT__filter_0__DOT__tap[13]),16);
        vcdp->chgBus(c+1335,(vlTOPp->filter_control__DOT__filter_0__DOT__tap[14]),16);
        vcdp->chgBus(c+1336,(vlTOPp->filter_control__DOT__filter_0__DOT__tap[15]),16);
        vcdp->chgBus(c+1337,(vlTOPp->filter_control__DOT__filter_0__DOT__tap[16]),16);
        vcdp->chgBus(c+1457,(vlTOPp->filter_control__DOT__filter_0__DOT__sample[0]),16);
        vcdp->chgBus(c+1458,(vlTOPp->filter_control__DOT__filter_0__DOT__sample[1]),16);
        vcdp->chgBus(c+1459,(vlTOPp->filter_control__DOT__filter_0__DOT__sample[2]),16);
        vcdp->chgBus(c+1460,(vlTOPp->filter_control__DOT__filter_0__DOT__sample[3]),16);
        vcdp->chgBus(c+1461,(vlTOPp->filter_control__DOT__filter_0__DOT__sample[4]),16);
        vcdp->chgBus(c+1462,(vlTOPp->filter_control__DOT__filter_0__DOT__sample[5]),16);
        vcdp->chgBus(c+1463,(vlTOPp->filter_control__DOT__filter_0__DOT__sample[6]),16);
        vcdp->chgBus(c+1464,(vlTOPp->filter_control__DOT__filter_0__DOT__sample[7]),16);
        vcdp->chgBus(c+1465,(vlTOPp->filter_control__DOT__filter_0__DOT__sample[8]),16);
        vcdp->chgBus(c+1466,(vlTOPp->filter_control__DOT__filter_0__DOT__sample[9]),16);
        vcdp->chgBus(c+1467,(vlTOPp->filter_control__DOT__filter_0__DOT__sample[10]),16);
        vcdp->chgBus(c+1468,(vlTOPp->filter_control__DOT__filter_0__DOT__sample[11]),16);
        vcdp->chgBus(c+1469,(vlTOPp->filter_control__DOT__filter_0__DOT__sample[12]),16);
        vcdp->chgBus(c+1470,(vlTOPp->filter_control__DOT__filter_0__DOT__sample[13]),16);
        vcdp->chgBus(c+1471,(vlTOPp->filter_control__DOT__filter_0__DOT__sample[14]),16);
        vcdp->chgBus(c+1472,(vlTOPp->filter_control__DOT__filter_0__DOT__sample[15]),16);
        vcdp->chgBus(c+1473,(vlTOPp->filter_control__DOT__filter_0__DOT__sample[16]),16);
        vcdp->chgBus(c+1593,(vlTOPp->filter_control__DOT__filter_0__DOT__tap
                             [0xfU]),16);
        vcdp->chgBus(c+1601,(vlTOPp->filter_control__DOT__filter_0__DOT__sample
                             [0U]),16);
        vcdp->chgBus(c+1609,(vlTOPp->filter_control__DOT__filter_0__DOT__tap
                             [0xeU]),16);
        vcdp->chgBus(c+1617,(vlTOPp->filter_control__DOT__filter_0__DOT__sample
                             [1U]),16);
        vcdp->chgBus(c+1625,(vlTOPp->filter_control__DOT__filter_0__DOT__tap
                             [0xdU]),16);
        vcdp->chgBus(c+1633,(vlTOPp->filter_control__DOT__filter_0__DOT__sample
                             [2U]),16);
        vcdp->chgBus(c+1641,(vlTOPp->filter_control__DOT__filter_0__DOT__tap
                             [0xcU]),16);
        vcdp->chgBus(c+1649,(vlTOPp->filter_control__DOT__filter_0__DOT__sample
                             [3U]),16);
        vcdp->chgBus(c+1657,(vlTOPp->filter_control__DOT__filter_0__DOT__tap
                             [0xbU]),16);
        vcdp->chgBus(c+1665,(vlTOPp->filter_control__DOT__filter_0__DOT__sample
                             [4U]),16);
        vcdp->chgBus(c+1673,(vlTOPp->filter_control__DOT__filter_0__DOT__tap
                             [0xaU]),16);
        vcdp->chgBus(c+1681,(vlTOPp->filter_control__DOT__filter_0__DOT__sample
                             [5U]),16);
        vcdp->chgBus(c+1689,(vlTOPp->filter_control__DOT__filter_0__DOT__tap
                             [9U]),16);
        vcdp->chgBus(c+1697,(vlTOPp->filter_control__DOT__filter_0__DOT__sample
                             [6U]),16);
        vcdp->chgBus(c+1705,(vlTOPp->filter_control__DOT__filter_0__DOT__tap
                             [8U]),16);
        vcdp->chgBus(c+1713,(vlTOPp->filter_control__DOT__filter_0__DOT__sample
                             [7U]),16);
        vcdp->chgBus(c+1721,(vlTOPp->filter_control__DOT__filter_0__DOT__tap
                             [7U]),16);
        vcdp->chgBus(c+1729,(vlTOPp->filter_control__DOT__filter_0__DOT__sample
                             [8U]),16);
        vcdp->chgBus(c+1737,(vlTOPp->filter_control__DOT__filter_0__DOT__tap
                             [6U]),16);
        vcdp->chgBus(c+1745,(vlTOPp->filter_control__DOT__filter_0__DOT__sample
                             [9U]),16);
        vcdp->chgBus(c+1753,(vlTOPp->filter_control__DOT__filter_0__DOT__tap
                             [5U]),16);
        vcdp->chgBus(c+1761,(vlTOPp->filter_control__DOT__filter_0__DOT__sample
                             [0xaU]),16);
        vcdp->chgBus(c+1769,(vlTOPp->filter_control__DOT__filter_0__DOT__tap
                             [4U]),16);
        vcdp->chgBus(c+1777,(vlTOPp->filter_control__DOT__filter_0__DOT__sample
                             [0xbU]),16);
        vcdp->chgBus(c+1785,(vlTOPp->filter_control__DOT__filter_0__DOT__tap
                             [3U]),16);
        vcdp->chgBus(c+1793,(vlTOPp->filter_control__DOT__filter_0__DOT__sample
                             [0xcU]),16);
        vcdp->chgBus(c+1801,(vlTOPp->filter_control__DOT__filter_0__DOT__tap
                             [2U]),16);
        vcdp->chgBus(c+1809,(vlTOPp->filter_control__DOT__filter_0__DOT__sample
                             [0xdU]),16);
        vcdp->chgBus(c+1817,(vlTOPp->filter_control__DOT__filter_0__DOT__tap
                             [1U]),16);
        vcdp->chgBus(c+1825,(vlTOPp->filter_control__DOT__filter_0__DOT__sample
                             [0xeU]),16);
        vcdp->chgBus(c+1833,(vlTOPp->filter_control__DOT__filter_0__DOT__tap
                             [0U]),16);
        vcdp->chgBus(c+1841,(vlTOPp->filter_control__DOT__filter_0__DOT__sample
                             [0xfU]),16);
    }
}

void Vfilter_control::traceChgThis__5(Vfilter_control__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vfilter_control* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    WData/*255:0*/ __Vtemp6[8];
    WData/*255:0*/ __Vtemp7[8];
    // Body
    {
        vcdp->chgBus(c+1849,(vlTOPp->filter_control__DOT__next_state),5);
        vcdp->chgBus(c+1857,(vlTOPp->filter_control__DOT__i_idx),5);
        vcdp->chgBit(c+1865,(vlTOPp->filter_control__DOT__i_tap_wr));
        __Vtemp6[0U] = 0xbd90565U;
        __Vtemp6[1U] = 0xff270b0bU;
        __Vtemp6[2U] = 0xfb52f3a7U;
        __Vtemp6[3U] = 0x3384182eU;
        __Vtemp6[4U] = 0x182e3384U;
        __Vtemp6[5U] = 0xf3a7fb52U;
        __Vtemp6[6U] = 0xb0bff27U;
        __Vtemp6[7U] = 0x5650bd9U;
        vcdp->chgBus(c+1873,((0xffffU & (((0U == (0x1fU 
                                                  & ((IData)(vlTOPp->filter_control__DOT__i_idx) 
                                                     << 4U)))
                                           ? 0U : (
                                                   __Vtemp6[
                                                   ((IData)(1U) 
                                                    + 
                                                    (7U 
                                                     & ((IData)(vlTOPp->filter_control__DOT__i_idx) 
                                                        >> 1U)))] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(vlTOPp->filter_control__DOT__i_idx) 
                                                        << 4U))))) 
                                         | (__Vtemp6[
                                            (7U & ((IData)(vlTOPp->filter_control__DOT__i_idx) 
                                                   >> 1U))] 
                                            >> (0x1fU 
                                                & ((IData)(vlTOPp->filter_control__DOT__i_idx) 
                                                   << 4U)))))),16);
        __Vtemp7[0U] = 0xbd90565U;
        __Vtemp7[1U] = 0xff270b0bU;
        __Vtemp7[2U] = 0xfb52f3a7U;
        __Vtemp7[3U] = 0x3384182eU;
        __Vtemp7[4U] = 0x182e3384U;
        __Vtemp7[5U] = 0xf3a7fb52U;
        __Vtemp7[6U] = 0xb0bff27U;
        __Vtemp7[7U] = 0x5650bd9U;
        vcdp->chgBus(c+1881,((((IData)(vlTOPp->filter_control__DOT__i_tap_wr) 
                               << 0x10U) | (0xffffU 
                                            & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & ((IData)(vlTOPp->filter_control__DOT__i_idx) 
                                                     << 4U)))
                                                 ? 0U
                                                 : 
                                                (__Vtemp7[
                                                 ((IData)(1U) 
                                                  + 
                                                  (7U 
                                                   & ((IData)(vlTOPp->filter_control__DOT__i_idx) 
                                                      >> 1U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlTOPp->filter_control__DOT__i_idx) 
                                                      << 4U))))) 
                                               | (__Vtemp7[
                                                  (7U 
                                                   & ((IData)(vlTOPp->filter_control__DOT__i_idx) 
                                                      >> 1U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(vlTOPp->filter_control__DOT__i_idx) 
                                                      << 4U))))))),17);
    }
}

void Vfilter_control::traceChgThis__6(Vfilter_control__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vfilter_control* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1889,(vlTOPp->filter_control__DOT__i2s_m0__DOT__counter),5);
    }
}

void Vfilter_control::traceChgThis__7(Vfilter_control__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vfilter_control* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1897,(vlTOPp->filter_control__DOT__left_channel),16);
        vcdp->chgBus(c+1905,(vlTOPp->filter_control__DOT__right_channel),16);
        vcdp->chgBit(c+1913,(vlTOPp->filter_control__DOT__i2s_m0__DOT__wsdd));
        vcdp->chgBus(c+1921,(vlTOPp->filter_control__DOT__i2s_m0__DOT__shift),16);
    }
}

void Vfilter_control::traceChgThis__8(Vfilter_control__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vfilter_control* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1929,(vlTOPp->filter_control__DOT__state),5);
        vcdp->chgBus(c+1937,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__0__KET____DOT__tapk__DOT__product),32);
        vcdp->chgBus(c+1945,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__1__KET____DOT__tapk__DOT__product),32);
        vcdp->chgBus(c+1953,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__2__KET____DOT__tapk__DOT__product),32);
        vcdp->chgBus(c+1961,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__3__KET____DOT__tapk__DOT__product),32);
        vcdp->chgBus(c+1969,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__4__KET____DOT__tapk__DOT__product),32);
        vcdp->chgBus(c+1977,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__5__KET____DOT__tapk__DOT__product),32);
        vcdp->chgBus(c+1985,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__6__KET____DOT__tapk__DOT__product),32);
        vcdp->chgBus(c+1993,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__7__KET____DOT__tapk__DOT__product),32);
        vcdp->chgBus(c+2001,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__8__KET____DOT__tapk__DOT__product),32);
        vcdp->chgBus(c+2009,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__9__KET____DOT__tapk__DOT__product),32);
        vcdp->chgBus(c+2017,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__10__KET____DOT__tapk__DOT__product),32);
        vcdp->chgBus(c+2025,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__11__KET____DOT__tapk__DOT__product),32);
        vcdp->chgBus(c+2033,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__12__KET____DOT__tapk__DOT__product),32);
        vcdp->chgBus(c+2041,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__13__KET____DOT__tapk__DOT__product),32);
        vcdp->chgBus(c+2049,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__14__KET____DOT__tapk__DOT__product),32);
        vcdp->chgBus(c+2057,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__15__KET____DOT__tapk__DOT__product),32);
    }
}

void Vfilter_control::traceChgThis__9(Vfilter_control__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vfilter_control* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+2065,(vlTOPp->i_clk));
        vcdp->chgBit(c+2073,(vlTOPp->i_reset));
        vcdp->chgBit(c+2081,(vlTOPp->i_ce));
        vcdp->chgBit(c+2089,(vlTOPp->i_start));
        vcdp->chgBus(c+2097,(vlTOPp->i_sample),16);
        vcdp->chgQuad(c+2105,(vlTOPp->o_result),39);
        vcdp->chgBit(c+2121,(vlTOPp->i2s_sck));
        vcdp->chgBit(c+2129,(vlTOPp->i2s_ws));
        vcdp->chgBit(c+2137,(vlTOPp->i2s_sda));
        vcdp->chgBit(c+2145,((1U & (~ (IData)(vlTOPp->i_reset)))));
    }
}
