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
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                | (vlTOPp->__Vm_traceActivity 
                                   >> 1U)) | (vlTOPp->__Vm_traceActivity 
                                              >> 2U))))) {
            vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 2U))))) {
            vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
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
        vcdp->chgBus(c+1,(vlTOPp->filter_control__DOT__filter_0__DOT__tap[0]),16);
        vcdp->chgBus(c+2,(vlTOPp->filter_control__DOT__filter_0__DOT__tap[1]),16);
        vcdp->chgBus(c+3,(vlTOPp->filter_control__DOT__filter_0__DOT__tap[2]),16);
        vcdp->chgBus(c+4,(vlTOPp->filter_control__DOT__filter_0__DOT__tap[3]),16);
        vcdp->chgBus(c+5,(vlTOPp->filter_control__DOT__filter_0__DOT__tap[4]),16);
        vcdp->chgBus(c+6,(vlTOPp->filter_control__DOT__filter_0__DOT__tap[5]),16);
        vcdp->chgBus(c+7,(vlTOPp->filter_control__DOT__filter_0__DOT__tap[6]),16);
        vcdp->chgBus(c+8,(vlTOPp->filter_control__DOT__filter_0__DOT__tap[7]),16);
        vcdp->chgBus(c+9,(vlTOPp->filter_control__DOT__filter_0__DOT__tap[8]),16);
        vcdp->chgBus(c+10,(vlTOPp->filter_control__DOT__filter_0__DOT__tap[9]),16);
        vcdp->chgBus(c+11,(vlTOPp->filter_control__DOT__filter_0__DOT__tap[10]),16);
        vcdp->chgBus(c+12,(vlTOPp->filter_control__DOT__filter_0__DOT__tap[11]),16);
        vcdp->chgBus(c+13,(vlTOPp->filter_control__DOT__filter_0__DOT__tap[12]),16);
        vcdp->chgBus(c+14,(vlTOPp->filter_control__DOT__filter_0__DOT__tap[13]),16);
        vcdp->chgBus(c+15,(vlTOPp->filter_control__DOT__filter_0__DOT__tap[14]),16);
        vcdp->chgBus(c+16,(vlTOPp->filter_control__DOT__filter_0__DOT__tap[15]),16);
        vcdp->chgBus(c+17,(vlTOPp->filter_control__DOT__filter_0__DOT__tap[16]),16);
        vcdp->chgBus(c+137,(vlTOPp->filter_control__DOT__filter_0__DOT__tapout[0]),16);
        vcdp->chgBus(c+138,(vlTOPp->filter_control__DOT__filter_0__DOT__tapout[1]),16);
        vcdp->chgBus(c+139,(vlTOPp->filter_control__DOT__filter_0__DOT__tapout[2]),16);
        vcdp->chgBus(c+140,(vlTOPp->filter_control__DOT__filter_0__DOT__tapout[3]),16);
        vcdp->chgBus(c+141,(vlTOPp->filter_control__DOT__filter_0__DOT__tapout[4]),16);
        vcdp->chgBus(c+142,(vlTOPp->filter_control__DOT__filter_0__DOT__tapout[5]),16);
        vcdp->chgBus(c+143,(vlTOPp->filter_control__DOT__filter_0__DOT__tapout[6]),16);
        vcdp->chgBus(c+144,(vlTOPp->filter_control__DOT__filter_0__DOT__tapout[7]),16);
        vcdp->chgBus(c+145,(vlTOPp->filter_control__DOT__filter_0__DOT__tapout[8]),16);
        vcdp->chgBus(c+146,(vlTOPp->filter_control__DOT__filter_0__DOT__tapout[9]),16);
        vcdp->chgBus(c+147,(vlTOPp->filter_control__DOT__filter_0__DOT__tapout[10]),16);
        vcdp->chgBus(c+148,(vlTOPp->filter_control__DOT__filter_0__DOT__tapout[11]),16);
        vcdp->chgBus(c+149,(vlTOPp->filter_control__DOT__filter_0__DOT__tapout[12]),16);
        vcdp->chgBus(c+150,(vlTOPp->filter_control__DOT__filter_0__DOT__tapout[13]),16);
        vcdp->chgBus(c+151,(vlTOPp->filter_control__DOT__filter_0__DOT__tapout[14]),16);
        vcdp->chgBus(c+152,(vlTOPp->filter_control__DOT__filter_0__DOT__tapout[15]),16);
        vcdp->chgBus(c+153,(vlTOPp->filter_control__DOT__filter_0__DOT__tapout[16]),16);
        vcdp->chgQuad(c+273,(vlTOPp->filter_control__DOT__filter_0__DOT__result[0]),39);
        vcdp->chgQuad(c+275,(vlTOPp->filter_control__DOT__filter_0__DOT__result[1]),39);
        vcdp->chgQuad(c+277,(vlTOPp->filter_control__DOT__filter_0__DOT__result[2]),39);
        vcdp->chgQuad(c+279,(vlTOPp->filter_control__DOT__filter_0__DOT__result[3]),39);
        vcdp->chgQuad(c+281,(vlTOPp->filter_control__DOT__filter_0__DOT__result[4]),39);
        vcdp->chgQuad(c+283,(vlTOPp->filter_control__DOT__filter_0__DOT__result[5]),39);
        vcdp->chgQuad(c+285,(vlTOPp->filter_control__DOT__filter_0__DOT__result[6]),39);
        vcdp->chgQuad(c+287,(vlTOPp->filter_control__DOT__filter_0__DOT__result[7]),39);
        vcdp->chgQuad(c+289,(vlTOPp->filter_control__DOT__filter_0__DOT__result[8]),39);
        vcdp->chgQuad(c+291,(vlTOPp->filter_control__DOT__filter_0__DOT__result[9]),39);
        vcdp->chgQuad(c+293,(vlTOPp->filter_control__DOT__filter_0__DOT__result[10]),39);
        vcdp->chgQuad(c+295,(vlTOPp->filter_control__DOT__filter_0__DOT__result[11]),39);
        vcdp->chgQuad(c+297,(vlTOPp->filter_control__DOT__filter_0__DOT__result[12]),39);
        vcdp->chgQuad(c+299,(vlTOPp->filter_control__DOT__filter_0__DOT__result[13]),39);
        vcdp->chgQuad(c+301,(vlTOPp->filter_control__DOT__filter_0__DOT__result[14]),39);
        vcdp->chgQuad(c+303,(vlTOPp->filter_control__DOT__filter_0__DOT__result[15]),39);
        vcdp->chgQuad(c+305,(vlTOPp->filter_control__DOT__filter_0__DOT__result[16]),39);
        vcdp->chgBus(c+545,(vlTOPp->filter_control__DOT__filter_0__DOT__tap
                            [0xfU]),16);
        vcdp->chgBus(c+553,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__0__KET____DOT__tapk__DOT__genblk2__DOT__tap),16);
        vcdp->chgBus(c+561,(vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__0__KET____DOT__tapk____pinNumber8),16);
        vcdp->chgQuad(c+569,(vlTOPp->filter_control__DOT__filter_0__DOT__result
                             [0U]),39);
        vcdp->chgQuad(c+585,(vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__0__KET____DOT__tapk____pinNumber10),39);
        vcdp->chgBus(c+601,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__0__KET____DOT__tapk__DOT__delayed_sample),16);
        vcdp->chgBus(c+609,(vlTOPp->filter_control__DOT__filter_0__DOT__tap
                            [0xeU]),16);
        vcdp->chgBus(c+617,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__1__KET____DOT__tapk__DOT__genblk2__DOT__tap),16);
        vcdp->chgBus(c+625,(vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__1__KET____DOT__tapk____pinNumber8),16);
        vcdp->chgQuad(c+633,(vlTOPp->filter_control__DOT__filter_0__DOT__result
                             [1U]),39);
        vcdp->chgQuad(c+649,(vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__1__KET____DOT__tapk____pinNumber10),39);
        vcdp->chgBus(c+665,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__1__KET____DOT__tapk__DOT__delayed_sample),16);
        vcdp->chgBus(c+673,(vlTOPp->filter_control__DOT__filter_0__DOT__tap
                            [0xdU]),16);
        vcdp->chgBus(c+681,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__2__KET____DOT__tapk__DOT__genblk2__DOT__tap),16);
        vcdp->chgBus(c+689,(vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__2__KET____DOT__tapk____pinNumber8),16);
        vcdp->chgQuad(c+697,(vlTOPp->filter_control__DOT__filter_0__DOT__result
                             [2U]),39);
        vcdp->chgQuad(c+713,(vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__2__KET____DOT__tapk____pinNumber10),39);
        vcdp->chgBus(c+729,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__2__KET____DOT__tapk__DOT__delayed_sample),16);
        vcdp->chgBus(c+737,(vlTOPp->filter_control__DOT__filter_0__DOT__tap
                            [0xcU]),16);
        vcdp->chgBus(c+745,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__3__KET____DOT__tapk__DOT__genblk2__DOT__tap),16);
        vcdp->chgBus(c+753,(vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__3__KET____DOT__tapk____pinNumber8),16);
        vcdp->chgQuad(c+761,(vlTOPp->filter_control__DOT__filter_0__DOT__result
                             [3U]),39);
        vcdp->chgQuad(c+777,(vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__3__KET____DOT__tapk____pinNumber10),39);
        vcdp->chgBus(c+793,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__3__KET____DOT__tapk__DOT__delayed_sample),16);
        vcdp->chgBus(c+801,(vlTOPp->filter_control__DOT__filter_0__DOT__tap
                            [0xbU]),16);
        vcdp->chgBus(c+809,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__4__KET____DOT__tapk__DOT__genblk2__DOT__tap),16);
        vcdp->chgBus(c+817,(vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__4__KET____DOT__tapk____pinNumber8),16);
        vcdp->chgQuad(c+825,(vlTOPp->filter_control__DOT__filter_0__DOT__result
                             [4U]),39);
        vcdp->chgQuad(c+841,(vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__4__KET____DOT__tapk____pinNumber10),39);
        vcdp->chgBus(c+857,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__4__KET____DOT__tapk__DOT__delayed_sample),16);
        vcdp->chgBus(c+865,(vlTOPp->filter_control__DOT__filter_0__DOT__tap
                            [0xaU]),16);
        vcdp->chgBus(c+873,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__5__KET____DOT__tapk__DOT__genblk2__DOT__tap),16);
        vcdp->chgBus(c+881,(vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__5__KET____DOT__tapk____pinNumber8),16);
        vcdp->chgQuad(c+889,(vlTOPp->filter_control__DOT__filter_0__DOT__result
                             [5U]),39);
        vcdp->chgQuad(c+905,(vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__5__KET____DOT__tapk____pinNumber10),39);
        vcdp->chgBus(c+921,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__5__KET____DOT__tapk__DOT__delayed_sample),16);
        vcdp->chgBus(c+929,(vlTOPp->filter_control__DOT__filter_0__DOT__tap
                            [9U]),16);
        vcdp->chgBus(c+937,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__6__KET____DOT__tapk__DOT__genblk2__DOT__tap),16);
        vcdp->chgBus(c+945,(vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__6__KET____DOT__tapk____pinNumber8),16);
        vcdp->chgQuad(c+953,(vlTOPp->filter_control__DOT__filter_0__DOT__result
                             [6U]),39);
        vcdp->chgQuad(c+969,(vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__6__KET____DOT__tapk____pinNumber10),39);
        vcdp->chgBus(c+985,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__6__KET____DOT__tapk__DOT__delayed_sample),16);
        vcdp->chgBus(c+993,(vlTOPp->filter_control__DOT__filter_0__DOT__tap
                            [8U]),16);
        vcdp->chgBus(c+1001,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__7__KET____DOT__tapk__DOT__genblk2__DOT__tap),16);
        vcdp->chgBus(c+1009,(vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__7__KET____DOT__tapk____pinNumber8),16);
        vcdp->chgQuad(c+1017,(vlTOPp->filter_control__DOT__filter_0__DOT__result
                              [7U]),39);
        vcdp->chgQuad(c+1033,(vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__7__KET____DOT__tapk____pinNumber10),39);
        vcdp->chgBus(c+1049,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__7__KET____DOT__tapk__DOT__delayed_sample),16);
        vcdp->chgBus(c+1057,(vlTOPp->filter_control__DOT__filter_0__DOT__tap
                             [7U]),16);
        vcdp->chgBus(c+1065,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__8__KET____DOT__tapk__DOT__genblk2__DOT__tap),16);
        vcdp->chgBus(c+1073,(vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__8__KET____DOT__tapk____pinNumber8),16);
        vcdp->chgQuad(c+1081,(vlTOPp->filter_control__DOT__filter_0__DOT__result
                              [8U]),39);
        vcdp->chgQuad(c+1097,(vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__8__KET____DOT__tapk____pinNumber10),39);
        vcdp->chgBus(c+1113,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__8__KET____DOT__tapk__DOT__delayed_sample),16);
        vcdp->chgBus(c+1121,(vlTOPp->filter_control__DOT__filter_0__DOT__tap
                             [6U]),16);
        vcdp->chgBus(c+1129,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__9__KET____DOT__tapk__DOT__genblk2__DOT__tap),16);
        vcdp->chgBus(c+1137,(vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__9__KET____DOT__tapk____pinNumber8),16);
        vcdp->chgQuad(c+1145,(vlTOPp->filter_control__DOT__filter_0__DOT__result
                              [9U]),39);
        vcdp->chgQuad(c+1161,(vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__9__KET____DOT__tapk____pinNumber10),39);
        vcdp->chgBus(c+1177,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__9__KET____DOT__tapk__DOT__delayed_sample),16);
        vcdp->chgBus(c+1185,(vlTOPp->filter_control__DOT__filter_0__DOT__tap
                             [5U]),16);
        vcdp->chgBus(c+1193,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__10__KET____DOT__tapk__DOT__genblk2__DOT__tap),16);
        vcdp->chgBus(c+1201,(vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__10__KET____DOT__tapk____pinNumber8),16);
        vcdp->chgQuad(c+1209,(vlTOPp->filter_control__DOT__filter_0__DOT__result
                              [0xaU]),39);
        vcdp->chgQuad(c+1225,(vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__10__KET____DOT__tapk____pinNumber10),39);
        vcdp->chgBus(c+1241,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__10__KET____DOT__tapk__DOT__delayed_sample),16);
        vcdp->chgBus(c+1249,(vlTOPp->filter_control__DOT__filter_0__DOT__tap
                             [4U]),16);
        vcdp->chgBus(c+1257,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__11__KET____DOT__tapk__DOT__genblk2__DOT__tap),16);
        vcdp->chgBus(c+1265,(vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__11__KET____DOT__tapk____pinNumber8),16);
        vcdp->chgQuad(c+1273,(vlTOPp->filter_control__DOT__filter_0__DOT__result
                              [0xbU]),39);
        vcdp->chgQuad(c+1289,(vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__11__KET____DOT__tapk____pinNumber10),39);
        vcdp->chgBus(c+1305,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__11__KET____DOT__tapk__DOT__delayed_sample),16);
        vcdp->chgBus(c+1313,(vlTOPp->filter_control__DOT__filter_0__DOT__tap
                             [3U]),16);
        vcdp->chgBus(c+1321,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__12__KET____DOT__tapk__DOT__genblk2__DOT__tap),16);
        vcdp->chgBus(c+1329,(vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__12__KET____DOT__tapk____pinNumber8),16);
        vcdp->chgQuad(c+1337,(vlTOPp->filter_control__DOT__filter_0__DOT__result
                              [0xcU]),39);
        vcdp->chgQuad(c+1353,(vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__12__KET____DOT__tapk____pinNumber10),39);
        vcdp->chgBus(c+1369,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__12__KET____DOT__tapk__DOT__delayed_sample),16);
        vcdp->chgBus(c+1377,(vlTOPp->filter_control__DOT__filter_0__DOT__tap
                             [2U]),16);
        vcdp->chgBus(c+1385,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__13__KET____DOT__tapk__DOT__genblk2__DOT__tap),16);
        vcdp->chgBus(c+1393,(vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__13__KET____DOT__tapk____pinNumber8),16);
        vcdp->chgQuad(c+1401,(vlTOPp->filter_control__DOT__filter_0__DOT__result
                              [0xdU]),39);
        vcdp->chgQuad(c+1417,(vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__13__KET____DOT__tapk____pinNumber10),39);
        vcdp->chgBus(c+1433,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__13__KET____DOT__tapk__DOT__delayed_sample),16);
        vcdp->chgBus(c+1441,(vlTOPp->filter_control__DOT__filter_0__DOT__tap
                             [1U]),16);
        vcdp->chgBus(c+1449,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__14__KET____DOT__tapk__DOT__genblk2__DOT__tap),16);
        vcdp->chgBus(c+1457,(vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__14__KET____DOT__tapk____pinNumber8),16);
        vcdp->chgQuad(c+1465,(vlTOPp->filter_control__DOT__filter_0__DOT__result
                              [0xeU]),39);
        vcdp->chgQuad(c+1481,(vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__14__KET____DOT__tapk____pinNumber10),39);
        vcdp->chgBus(c+1497,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__14__KET____DOT__tapk__DOT__delayed_sample),16);
        vcdp->chgBus(c+1505,(vlTOPp->filter_control__DOT__filter_0__DOT__tap
                             [0U]),16);
        vcdp->chgBus(c+1513,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__15__KET____DOT__tapk__DOT__genblk2__DOT__tap),16);
        vcdp->chgBus(c+1521,(vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__15__KET____DOT__tapk____pinNumber8),16);
        vcdp->chgQuad(c+1529,(vlTOPp->filter_control__DOT__filter_0__DOT__result
                              [0xfU]),39);
        vcdp->chgQuad(c+1545,(vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__15__KET____DOT__tapk____pinNumber10),39);
        vcdp->chgBus(c+1561,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__15__KET____DOT__tapk__DOT__delayed_sample),16);
    }
}

void Vfilter_control::traceChgThis__3(Vfilter_control__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vfilter_control* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    WData/*255:0*/ __Vtemp6[8];
    // Body
    {
        vcdp->chgBus(c+1569,(vlTOPp->filter_control__DOT__filter_0__DOT__sample[0]),16);
        vcdp->chgBus(c+1570,(vlTOPp->filter_control__DOT__filter_0__DOT__sample[1]),16);
        vcdp->chgBus(c+1571,(vlTOPp->filter_control__DOT__filter_0__DOT__sample[2]),16);
        vcdp->chgBus(c+1572,(vlTOPp->filter_control__DOT__filter_0__DOT__sample[3]),16);
        vcdp->chgBus(c+1573,(vlTOPp->filter_control__DOT__filter_0__DOT__sample[4]),16);
        vcdp->chgBus(c+1574,(vlTOPp->filter_control__DOT__filter_0__DOT__sample[5]),16);
        vcdp->chgBus(c+1575,(vlTOPp->filter_control__DOT__filter_0__DOT__sample[6]),16);
        vcdp->chgBus(c+1576,(vlTOPp->filter_control__DOT__filter_0__DOT__sample[7]),16);
        vcdp->chgBus(c+1577,(vlTOPp->filter_control__DOT__filter_0__DOT__sample[8]),16);
        vcdp->chgBus(c+1578,(vlTOPp->filter_control__DOT__filter_0__DOT__sample[9]),16);
        vcdp->chgBus(c+1579,(vlTOPp->filter_control__DOT__filter_0__DOT__sample[10]),16);
        vcdp->chgBus(c+1580,(vlTOPp->filter_control__DOT__filter_0__DOT__sample[11]),16);
        vcdp->chgBus(c+1581,(vlTOPp->filter_control__DOT__filter_0__DOT__sample[12]),16);
        vcdp->chgBus(c+1582,(vlTOPp->filter_control__DOT__filter_0__DOT__sample[13]),16);
        vcdp->chgBus(c+1583,(vlTOPp->filter_control__DOT__filter_0__DOT__sample[14]),16);
        vcdp->chgBus(c+1584,(vlTOPp->filter_control__DOT__filter_0__DOT__sample[15]),16);
        vcdp->chgBus(c+1585,(vlTOPp->filter_control__DOT__filter_0__DOT__sample[16]),16);
        __Vtemp6[0U] = 0xffffffffU;
        __Vtemp6[1U] = 0xffffffffU;
        __Vtemp6[2U] = 0xffffffffU;
        __Vtemp6[3U] = 0xffffffffU;
        __Vtemp6[4U] = 0xffffffffU;
        __Vtemp6[5U] = 0xffffffffU;
        __Vtemp6[6U] = 0xffffffffU;
        __Vtemp6[7U] = 0xffffffffU;
        vcdp->chgBus(c+1705,((((IData)(vlTOPp->filter_control__DOT__i_tap_wr) 
                               << 0x10U) | (0xffffU 
                                            & (((0U 
                                                 == 
                                                 (0x10U 
                                                  & (((IData)(vlTOPp->filter_control__DOT__state) 
                                                      - (IData)(1U)) 
                                                     << 4U)))
                                                 ? 0U
                                                 : 
                                                (__Vtemp6[
                                                 ((IData)(1U) 
                                                  + 
                                                  (7U 
                                                   & (((IData)(vlTOPp->filter_control__DOT__state) 
                                                       - (IData)(1U)) 
                                                      >> 1U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x10U 
                                                   & (((IData)(vlTOPp->filter_control__DOT__state) 
                                                       - (IData)(1U)) 
                                                      << 4U))))) 
                                               | (__Vtemp6[
                                                  (7U 
                                                   & (((IData)(vlTOPp->filter_control__DOT__state) 
                                                       - (IData)(1U)) 
                                                      >> 1U))] 
                                                  >> 
                                                  (0x10U 
                                                   & (((IData)(vlTOPp->filter_control__DOT__state) 
                                                       - (IData)(1U)) 
                                                      << 4U))))))),17);
        vcdp->chgBus(c+1713,(vlTOPp->filter_control__DOT__filter_0__DOT__sample
                             [0U]),16);
        vcdp->chgBus(c+1721,(vlTOPp->filter_control__DOT__filter_0__DOT__sample
                             [1U]),16);
        vcdp->chgBus(c+1729,(vlTOPp->filter_control__DOT__filter_0__DOT__sample
                             [2U]),16);
        vcdp->chgBus(c+1737,(vlTOPp->filter_control__DOT__filter_0__DOT__sample
                             [3U]),16);
        vcdp->chgBus(c+1745,(vlTOPp->filter_control__DOT__filter_0__DOT__sample
                             [4U]),16);
        vcdp->chgBus(c+1753,(vlTOPp->filter_control__DOT__filter_0__DOT__sample
                             [5U]),16);
        vcdp->chgBus(c+1761,(vlTOPp->filter_control__DOT__filter_0__DOT__sample
                             [6U]),16);
        vcdp->chgBus(c+1769,(vlTOPp->filter_control__DOT__filter_0__DOT__sample
                             [7U]),16);
        vcdp->chgBus(c+1777,(vlTOPp->filter_control__DOT__filter_0__DOT__sample
                             [8U]),16);
        vcdp->chgBus(c+1785,(vlTOPp->filter_control__DOT__filter_0__DOT__sample
                             [9U]),16);
        vcdp->chgBus(c+1793,(vlTOPp->filter_control__DOT__filter_0__DOT__sample
                             [0xaU]),16);
        vcdp->chgBus(c+1801,(vlTOPp->filter_control__DOT__filter_0__DOT__sample
                             [0xbU]),16);
        vcdp->chgBus(c+1809,(vlTOPp->filter_control__DOT__filter_0__DOT__sample
                             [0xcU]),16);
        vcdp->chgBus(c+1817,(vlTOPp->filter_control__DOT__filter_0__DOT__sample
                             [0xdU]),16);
        vcdp->chgBus(c+1825,(vlTOPp->filter_control__DOT__filter_0__DOT__sample
                             [0xeU]),16);
        vcdp->chgBus(c+1833,(vlTOPp->filter_control__DOT__filter_0__DOT__sample
                             [0xfU]),16);
    }
}

void Vfilter_control::traceChgThis__4(Vfilter_control__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vfilter_control* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1841,(vlTOPp->filter_control__DOT__next_state),5);
        vcdp->chgBit(c+1849,(vlTOPp->filter_control__DOT__i_tap_wr));
    }
}

void Vfilter_control::traceChgThis__5(Vfilter_control__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vfilter_control* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    WData/*255:0*/ __Vtemp7[8];
    // Body
    {
        vcdp->chgBus(c+1857,(vlTOPp->filter_control__DOT__state),5);
        __Vtemp7[0U] = 0xffffffffU;
        __Vtemp7[1U] = 0xffffffffU;
        __Vtemp7[2U] = 0xffffffffU;
        __Vtemp7[3U] = 0xffffffffU;
        __Vtemp7[4U] = 0xffffffffU;
        __Vtemp7[5U] = 0xffffffffU;
        __Vtemp7[6U] = 0xffffffffU;
        __Vtemp7[7U] = 0xffffffffU;
        vcdp->chgBus(c+1865,((0xffffU & (((0U == (0x10U 
                                                  & (((IData)(vlTOPp->filter_control__DOT__state) 
                                                      - (IData)(1U)) 
                                                     << 4U)))
                                           ? 0U : (
                                                   __Vtemp7[
                                                   ((IData)(1U) 
                                                    + 
                                                    (7U 
                                                     & (((IData)(vlTOPp->filter_control__DOT__state) 
                                                         - (IData)(1U)) 
                                                        >> 1U)))] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x10U 
                                                     & (((IData)(vlTOPp->filter_control__DOT__state) 
                                                         - (IData)(1U)) 
                                                        << 4U))))) 
                                         | (__Vtemp7[
                                            (7U & (
                                                   ((IData)(vlTOPp->filter_control__DOT__state) 
                                                    - (IData)(1U)) 
                                                   >> 1U))] 
                                            >> (0x10U 
                                                & (((IData)(vlTOPp->filter_control__DOT__state) 
                                                    - (IData)(1U)) 
                                                   << 4U)))))),16);
        vcdp->chgBus(c+1873,((0x1fU & ((IData)(vlTOPp->filter_control__DOT__state) 
                                       - (IData)(1U)))),5);
        vcdp->chgBus(c+1881,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__0__KET____DOT__tapk__DOT__product),32);
        vcdp->chgBus(c+1889,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__1__KET____DOT__tapk__DOT__product),32);
        vcdp->chgBus(c+1897,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__2__KET____DOT__tapk__DOT__product),32);
        vcdp->chgBus(c+1905,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__3__KET____DOT__tapk__DOT__product),32);
        vcdp->chgBus(c+1913,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__4__KET____DOT__tapk__DOT__product),32);
        vcdp->chgBus(c+1921,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__5__KET____DOT__tapk__DOT__product),32);
        vcdp->chgBus(c+1929,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__6__KET____DOT__tapk__DOT__product),32);
        vcdp->chgBus(c+1937,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__7__KET____DOT__tapk__DOT__product),32);
        vcdp->chgBus(c+1945,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__8__KET____DOT__tapk__DOT__product),32);
        vcdp->chgBus(c+1953,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__9__KET____DOT__tapk__DOT__product),32);
        vcdp->chgBus(c+1961,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__10__KET____DOT__tapk__DOT__product),32);
        vcdp->chgBus(c+1969,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__11__KET____DOT__tapk__DOT__product),32);
        vcdp->chgBus(c+1977,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__12__KET____DOT__tapk__DOT__product),32);
        vcdp->chgBus(c+1985,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__13__KET____DOT__tapk__DOT__product),32);
        vcdp->chgBus(c+1993,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__14__KET____DOT__tapk__DOT__product),32);
        vcdp->chgBus(c+2001,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__15__KET____DOT__tapk__DOT__product),32);
    }
}

void Vfilter_control::traceChgThis__6(Vfilter_control__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vfilter_control* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+2009,(vlTOPp->i_clk));
        vcdp->chgBit(c+2017,(vlTOPp->i_reset));
        vcdp->chgBit(c+2025,(vlTOPp->i_ce));
        vcdp->chgBit(c+2033,(vlTOPp->i_start));
        vcdp->chgBus(c+2041,(vlTOPp->i_sample),16);
        vcdp->chgQuad(c+2049,(vlTOPp->o_result),39);
    }
}
