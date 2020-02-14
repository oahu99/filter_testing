// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vgenericfir__Syms.h"


//======================

void Vgenericfir::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vgenericfir* t = (Vgenericfir*)userthis;
    Vgenericfir__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void Vgenericfir::traceChgThis(Vgenericfir__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vgenericfir* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                | (vlTOPp->__Vm_traceActivity 
                                   >> 1U)) | (vlTOPp->__Vm_traceActivity 
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

void Vgenericfir::traceChgThis__2(Vgenericfir__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vgenericfir* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1,(vlTOPp->genericfir__DOT__tap[0]),16);
        vcdp->chgBus(c+2,(vlTOPp->genericfir__DOT__tap[1]),16);
        vcdp->chgBus(c+3,(vlTOPp->genericfir__DOT__tap[2]),16);
        vcdp->chgBus(c+4,(vlTOPp->genericfir__DOT__tap[3]),16);
        vcdp->chgBus(c+5,(vlTOPp->genericfir__DOT__tap[4]),16);
        vcdp->chgBus(c+6,(vlTOPp->genericfir__DOT__tap[5]),16);
        vcdp->chgBus(c+7,(vlTOPp->genericfir__DOT__tap[6]),16);
        vcdp->chgBus(c+8,(vlTOPp->genericfir__DOT__tap[7]),16);
        vcdp->chgBus(c+9,(vlTOPp->genericfir__DOT__tap[8]),16);
        vcdp->chgBus(c+10,(vlTOPp->genericfir__DOT__tap[9]),16);
        vcdp->chgBus(c+11,(vlTOPp->genericfir__DOT__tap[10]),16);
        vcdp->chgBus(c+12,(vlTOPp->genericfir__DOT__tap[11]),16);
        vcdp->chgBus(c+13,(vlTOPp->genericfir__DOT__tap[12]),16);
        vcdp->chgBus(c+14,(vlTOPp->genericfir__DOT__tap[13]),16);
        vcdp->chgBus(c+15,(vlTOPp->genericfir__DOT__tap[14]),16);
        vcdp->chgBus(c+16,(vlTOPp->genericfir__DOT__tap[15]),16);
        vcdp->chgBus(c+17,(vlTOPp->genericfir__DOT__tap[16]),16);
        vcdp->chgBus(c+137,(vlTOPp->genericfir__DOT__tapout[0]),16);
        vcdp->chgBus(c+138,(vlTOPp->genericfir__DOT__tapout[1]),16);
        vcdp->chgBus(c+139,(vlTOPp->genericfir__DOT__tapout[2]),16);
        vcdp->chgBus(c+140,(vlTOPp->genericfir__DOT__tapout[3]),16);
        vcdp->chgBus(c+141,(vlTOPp->genericfir__DOT__tapout[4]),16);
        vcdp->chgBus(c+142,(vlTOPp->genericfir__DOT__tapout[5]),16);
        vcdp->chgBus(c+143,(vlTOPp->genericfir__DOT__tapout[6]),16);
        vcdp->chgBus(c+144,(vlTOPp->genericfir__DOT__tapout[7]),16);
        vcdp->chgBus(c+145,(vlTOPp->genericfir__DOT__tapout[8]),16);
        vcdp->chgBus(c+146,(vlTOPp->genericfir__DOT__tapout[9]),16);
        vcdp->chgBus(c+147,(vlTOPp->genericfir__DOT__tapout[10]),16);
        vcdp->chgBus(c+148,(vlTOPp->genericfir__DOT__tapout[11]),16);
        vcdp->chgBus(c+149,(vlTOPp->genericfir__DOT__tapout[12]),16);
        vcdp->chgBus(c+150,(vlTOPp->genericfir__DOT__tapout[13]),16);
        vcdp->chgBus(c+151,(vlTOPp->genericfir__DOT__tapout[14]),16);
        vcdp->chgBus(c+152,(vlTOPp->genericfir__DOT__tapout[15]),16);
        vcdp->chgBus(c+153,(vlTOPp->genericfir__DOT__tapout[16]),16);
        vcdp->chgBus(c+273,(vlTOPp->genericfir__DOT__tapout
                            [0U]),16);
        vcdp->chgBus(c+281,(vlTOPp->genericfir__DOT__tapout
                            [1U]),16);
        vcdp->chgBus(c+289,(vlTOPp->genericfir__DOT__tapout
                            [2U]),16);
        vcdp->chgBus(c+297,(vlTOPp->genericfir__DOT__tapout
                            [3U]),16);
        vcdp->chgBus(c+305,(vlTOPp->genericfir__DOT__tapout
                            [4U]),16);
        vcdp->chgBus(c+313,(vlTOPp->genericfir__DOT__tapout
                            [5U]),16);
        vcdp->chgBus(c+321,(vlTOPp->genericfir__DOT__tapout
                            [6U]),16);
        vcdp->chgBus(c+329,(vlTOPp->genericfir__DOT__tapout
                            [7U]),16);
        vcdp->chgBus(c+337,(vlTOPp->genericfir__DOT__tapout
                            [8U]),16);
        vcdp->chgBus(c+345,(vlTOPp->genericfir__DOT__tapout
                            [9U]),16);
        vcdp->chgBus(c+353,(vlTOPp->genericfir__DOT__tapout
                            [0xaU]),16);
        vcdp->chgBus(c+361,(vlTOPp->genericfir__DOT__tapout
                            [0xbU]),16);
        vcdp->chgBus(c+369,(vlTOPp->genericfir__DOT__tapout
                            [0xcU]),16);
        vcdp->chgBus(c+377,(vlTOPp->genericfir__DOT__tapout
                            [0xdU]),16);
        vcdp->chgBus(c+385,(vlTOPp->genericfir__DOT__tapout
                            [0xeU]),16);
        vcdp->chgBus(c+393,(vlTOPp->genericfir__DOT__tapout
                            [0xfU]),16);
        vcdp->chgBus(c+401,(vlTOPp->genericfir__DOT__tap
                            [0xfU]),16);
        vcdp->chgBus(c+409,(vlTOPp->genericfir__DOT__tap
                            [0xeU]),16);
        vcdp->chgBus(c+417,(vlTOPp->genericfir__DOT__tap
                            [0xdU]),16);
        vcdp->chgBus(c+425,(vlTOPp->genericfir__DOT__tap
                            [0xcU]),16);
        vcdp->chgBus(c+433,(vlTOPp->genericfir__DOT__tap
                            [0xbU]),16);
        vcdp->chgBus(c+441,(vlTOPp->genericfir__DOT__tap
                            [0xaU]),16);
        vcdp->chgBus(c+449,(vlTOPp->genericfir__DOT__tap
                            [9U]),16);
        vcdp->chgBus(c+457,(vlTOPp->genericfir__DOT__tap
                            [8U]),16);
        vcdp->chgBus(c+465,(vlTOPp->genericfir__DOT__tap
                            [7U]),16);
        vcdp->chgBus(c+473,(vlTOPp->genericfir__DOT__tap
                            [6U]),16);
        vcdp->chgBus(c+481,(vlTOPp->genericfir__DOT__tap
                            [5U]),16);
        vcdp->chgBus(c+489,(vlTOPp->genericfir__DOT__tap
                            [4U]),16);
        vcdp->chgBus(c+497,(vlTOPp->genericfir__DOT__tap
                            [3U]),16);
        vcdp->chgBus(c+505,(vlTOPp->genericfir__DOT__tap
                            [2U]),16);
        vcdp->chgBus(c+513,(vlTOPp->genericfir__DOT__tap
                            [1U]),16);
        vcdp->chgBus(c+521,(vlTOPp->genericfir__DOT__tap
                            [0U]),16);
    }
}

void Vgenericfir::traceChgThis__3(Vgenericfir__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vgenericfir* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgQuad(c+529,(vlTOPp->genericfir__DOT__result[0]),39);
        vcdp->chgQuad(c+531,(vlTOPp->genericfir__DOT__result[1]),39);
        vcdp->chgQuad(c+533,(vlTOPp->genericfir__DOT__result[2]),39);
        vcdp->chgQuad(c+535,(vlTOPp->genericfir__DOT__result[3]),39);
        vcdp->chgQuad(c+537,(vlTOPp->genericfir__DOT__result[4]),39);
        vcdp->chgQuad(c+539,(vlTOPp->genericfir__DOT__result[5]),39);
        vcdp->chgQuad(c+541,(vlTOPp->genericfir__DOT__result[6]),39);
        vcdp->chgQuad(c+543,(vlTOPp->genericfir__DOT__result[7]),39);
        vcdp->chgQuad(c+545,(vlTOPp->genericfir__DOT__result[8]),39);
        vcdp->chgQuad(c+547,(vlTOPp->genericfir__DOT__result[9]),39);
        vcdp->chgQuad(c+549,(vlTOPp->genericfir__DOT__result[10]),39);
        vcdp->chgQuad(c+551,(vlTOPp->genericfir__DOT__result[11]),39);
        vcdp->chgQuad(c+553,(vlTOPp->genericfir__DOT__result[12]),39);
        vcdp->chgQuad(c+555,(vlTOPp->genericfir__DOT__result[13]),39);
        vcdp->chgQuad(c+557,(vlTOPp->genericfir__DOT__result[14]),39);
        vcdp->chgQuad(c+559,(vlTOPp->genericfir__DOT__result[15]),39);
        vcdp->chgQuad(c+561,(vlTOPp->genericfir__DOT__result[16]),39);
        vcdp->chgBus(c+801,(vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__0__KET____DOT__tapk____pinNumber8),16);
        vcdp->chgQuad(c+809,(vlTOPp->genericfir__DOT__result
                             [0U]),39);
        vcdp->chgQuad(c+825,(vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__0__KET____DOT__tapk____pinNumber10),39);
        vcdp->chgBus(c+841,(vlTOPp->genericfir__DOT__FILTER__BRA__0__KET____DOT__tapk__DOT__delayed_sample),16);
        vcdp->chgBus(c+849,(vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__1__KET____DOT__tapk____pinNumber8),16);
        vcdp->chgQuad(c+857,(vlTOPp->genericfir__DOT__result
                             [1U]),39);
        vcdp->chgQuad(c+873,(vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__1__KET____DOT__tapk____pinNumber10),39);
        vcdp->chgBus(c+889,(vlTOPp->genericfir__DOT__FILTER__BRA__1__KET____DOT__tapk__DOT__delayed_sample),16);
        vcdp->chgBus(c+897,(vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__2__KET____DOT__tapk____pinNumber8),16);
        vcdp->chgQuad(c+905,(vlTOPp->genericfir__DOT__result
                             [2U]),39);
        vcdp->chgQuad(c+921,(vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__2__KET____DOT__tapk____pinNumber10),39);
        vcdp->chgBus(c+937,(vlTOPp->genericfir__DOT__FILTER__BRA__2__KET____DOT__tapk__DOT__delayed_sample),16);
        vcdp->chgBus(c+945,(vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__3__KET____DOT__tapk____pinNumber8),16);
        vcdp->chgQuad(c+953,(vlTOPp->genericfir__DOT__result
                             [3U]),39);
        vcdp->chgQuad(c+969,(vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__3__KET____DOT__tapk____pinNumber10),39);
        vcdp->chgBus(c+985,(vlTOPp->genericfir__DOT__FILTER__BRA__3__KET____DOT__tapk__DOT__delayed_sample),16);
        vcdp->chgBus(c+993,(vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__4__KET____DOT__tapk____pinNumber8),16);
        vcdp->chgQuad(c+1001,(vlTOPp->genericfir__DOT__result
                              [4U]),39);
        vcdp->chgQuad(c+1017,(vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__4__KET____DOT__tapk____pinNumber10),39);
        vcdp->chgBus(c+1033,(vlTOPp->genericfir__DOT__FILTER__BRA__4__KET____DOT__tapk__DOT__delayed_sample),16);
        vcdp->chgBus(c+1041,(vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__5__KET____DOT__tapk____pinNumber8),16);
        vcdp->chgQuad(c+1049,(vlTOPp->genericfir__DOT__result
                              [5U]),39);
        vcdp->chgQuad(c+1065,(vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__5__KET____DOT__tapk____pinNumber10),39);
        vcdp->chgBus(c+1081,(vlTOPp->genericfir__DOT__FILTER__BRA__5__KET____DOT__tapk__DOT__delayed_sample),16);
        vcdp->chgBus(c+1089,(vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__6__KET____DOT__tapk____pinNumber8),16);
        vcdp->chgQuad(c+1097,(vlTOPp->genericfir__DOT__result
                              [6U]),39);
        vcdp->chgQuad(c+1113,(vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__6__KET____DOT__tapk____pinNumber10),39);
        vcdp->chgBus(c+1129,(vlTOPp->genericfir__DOT__FILTER__BRA__6__KET____DOT__tapk__DOT__delayed_sample),16);
        vcdp->chgBus(c+1137,(vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__7__KET____DOT__tapk____pinNumber8),16);
        vcdp->chgQuad(c+1145,(vlTOPp->genericfir__DOT__result
                              [7U]),39);
        vcdp->chgQuad(c+1161,(vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__7__KET____DOT__tapk____pinNumber10),39);
        vcdp->chgBus(c+1177,(vlTOPp->genericfir__DOT__FILTER__BRA__7__KET____DOT__tapk__DOT__delayed_sample),16);
        vcdp->chgBus(c+1185,(vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__8__KET____DOT__tapk____pinNumber8),16);
        vcdp->chgQuad(c+1193,(vlTOPp->genericfir__DOT__result
                              [8U]),39);
        vcdp->chgQuad(c+1209,(vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__8__KET____DOT__tapk____pinNumber10),39);
        vcdp->chgBus(c+1225,(vlTOPp->genericfir__DOT__FILTER__BRA__8__KET____DOT__tapk__DOT__delayed_sample),16);
        vcdp->chgBus(c+1233,(vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__9__KET____DOT__tapk____pinNumber8),16);
        vcdp->chgQuad(c+1241,(vlTOPp->genericfir__DOT__result
                              [9U]),39);
        vcdp->chgQuad(c+1257,(vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__9__KET____DOT__tapk____pinNumber10),39);
        vcdp->chgBus(c+1273,(vlTOPp->genericfir__DOT__FILTER__BRA__9__KET____DOT__tapk__DOT__delayed_sample),16);
        vcdp->chgBus(c+1281,(vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__10__KET____DOT__tapk____pinNumber8),16);
        vcdp->chgQuad(c+1289,(vlTOPp->genericfir__DOT__result
                              [0xaU]),39);
        vcdp->chgQuad(c+1305,(vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__10__KET____DOT__tapk____pinNumber10),39);
        vcdp->chgBus(c+1321,(vlTOPp->genericfir__DOT__FILTER__BRA__10__KET____DOT__tapk__DOT__delayed_sample),16);
        vcdp->chgBus(c+1329,(vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__11__KET____DOT__tapk____pinNumber8),16);
        vcdp->chgQuad(c+1337,(vlTOPp->genericfir__DOT__result
                              [0xbU]),39);
        vcdp->chgQuad(c+1353,(vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__11__KET____DOT__tapk____pinNumber10),39);
        vcdp->chgBus(c+1369,(vlTOPp->genericfir__DOT__FILTER__BRA__11__KET____DOT__tapk__DOT__delayed_sample),16);
        vcdp->chgBus(c+1377,(vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__12__KET____DOT__tapk____pinNumber8),16);
        vcdp->chgQuad(c+1385,(vlTOPp->genericfir__DOT__result
                              [0xcU]),39);
        vcdp->chgQuad(c+1401,(vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__12__KET____DOT__tapk____pinNumber10),39);
        vcdp->chgBus(c+1417,(vlTOPp->genericfir__DOT__FILTER__BRA__12__KET____DOT__tapk__DOT__delayed_sample),16);
        vcdp->chgBus(c+1425,(vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__13__KET____DOT__tapk____pinNumber8),16);
        vcdp->chgQuad(c+1433,(vlTOPp->genericfir__DOT__result
                              [0xdU]),39);
        vcdp->chgQuad(c+1449,(vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__13__KET____DOT__tapk____pinNumber10),39);
        vcdp->chgBus(c+1465,(vlTOPp->genericfir__DOT__FILTER__BRA__13__KET____DOT__tapk__DOT__delayed_sample),16);
        vcdp->chgBus(c+1473,(vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__14__KET____DOT__tapk____pinNumber8),16);
        vcdp->chgQuad(c+1481,(vlTOPp->genericfir__DOT__result
                              [0xeU]),39);
        vcdp->chgQuad(c+1497,(vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__14__KET____DOT__tapk____pinNumber10),39);
        vcdp->chgBus(c+1513,(vlTOPp->genericfir__DOT__FILTER__BRA__14__KET____DOT__tapk__DOT__delayed_sample),16);
        vcdp->chgBus(c+1521,(vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__15__KET____DOT__tapk____pinNumber8),16);
        vcdp->chgQuad(c+1529,(vlTOPp->genericfir__DOT__result
                              [0xfU]),39);
        vcdp->chgQuad(c+1545,(vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__15__KET____DOT__tapk____pinNumber10),39);
        vcdp->chgBus(c+1561,(vlTOPp->genericfir__DOT__FILTER__BRA__15__KET____DOT__tapk__DOT__delayed_sample),16);
    }
}

void Vgenericfir::traceChgThis__4(Vgenericfir__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vgenericfir* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1569,(vlTOPp->genericfir__DOT__sample[0]),16);
        vcdp->chgBus(c+1570,(vlTOPp->genericfir__DOT__sample[1]),16);
        vcdp->chgBus(c+1571,(vlTOPp->genericfir__DOT__sample[2]),16);
        vcdp->chgBus(c+1572,(vlTOPp->genericfir__DOT__sample[3]),16);
        vcdp->chgBus(c+1573,(vlTOPp->genericfir__DOT__sample[4]),16);
        vcdp->chgBus(c+1574,(vlTOPp->genericfir__DOT__sample[5]),16);
        vcdp->chgBus(c+1575,(vlTOPp->genericfir__DOT__sample[6]),16);
        vcdp->chgBus(c+1576,(vlTOPp->genericfir__DOT__sample[7]),16);
        vcdp->chgBus(c+1577,(vlTOPp->genericfir__DOT__sample[8]),16);
        vcdp->chgBus(c+1578,(vlTOPp->genericfir__DOT__sample[9]),16);
        vcdp->chgBus(c+1579,(vlTOPp->genericfir__DOT__sample[10]),16);
        vcdp->chgBus(c+1580,(vlTOPp->genericfir__DOT__sample[11]),16);
        vcdp->chgBus(c+1581,(vlTOPp->genericfir__DOT__sample[12]),16);
        vcdp->chgBus(c+1582,(vlTOPp->genericfir__DOT__sample[13]),16);
        vcdp->chgBus(c+1583,(vlTOPp->genericfir__DOT__sample[14]),16);
        vcdp->chgBus(c+1584,(vlTOPp->genericfir__DOT__sample[15]),16);
        vcdp->chgBus(c+1585,(vlTOPp->genericfir__DOT__sample[16]),16);
        vcdp->chgBus(c+1705,(vlTOPp->genericfir__DOT__sample
                             [0U]),16);
        vcdp->chgBus(c+1713,(vlTOPp->genericfir__DOT__sample
                             [1U]),16);
        vcdp->chgBus(c+1721,(vlTOPp->genericfir__DOT__sample
                             [2U]),16);
        vcdp->chgBus(c+1729,(vlTOPp->genericfir__DOT__sample
                             [3U]),16);
        vcdp->chgBus(c+1737,(vlTOPp->genericfir__DOT__sample
                             [4U]),16);
        vcdp->chgBus(c+1745,(vlTOPp->genericfir__DOT__sample
                             [5U]),16);
        vcdp->chgBus(c+1753,(vlTOPp->genericfir__DOT__sample
                             [6U]),16);
        vcdp->chgBus(c+1761,(vlTOPp->genericfir__DOT__sample
                             [7U]),16);
        vcdp->chgBus(c+1769,(vlTOPp->genericfir__DOT__sample
                             [8U]),16);
        vcdp->chgBus(c+1777,(vlTOPp->genericfir__DOT__sample
                             [9U]),16);
        vcdp->chgBus(c+1785,(vlTOPp->genericfir__DOT__sample
                             [0xaU]),16);
        vcdp->chgBus(c+1793,(vlTOPp->genericfir__DOT__sample
                             [0xbU]),16);
        vcdp->chgBus(c+1801,(vlTOPp->genericfir__DOT__sample
                             [0xcU]),16);
        vcdp->chgBus(c+1809,(vlTOPp->genericfir__DOT__sample
                             [0xdU]),16);
        vcdp->chgBus(c+1817,(vlTOPp->genericfir__DOT__sample
                             [0xeU]),16);
        vcdp->chgBus(c+1825,(vlTOPp->genericfir__DOT__sample
                             [0xfU]),16);
    }
}

void Vgenericfir::traceChgThis__5(Vgenericfir__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vgenericfir* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1833,(vlTOPp->genericfir__DOT__FILTER__BRA__0__KET____DOT__tapk__DOT__product),32);
        vcdp->chgBus(c+1841,(vlTOPp->genericfir__DOT__FILTER__BRA__1__KET____DOT__tapk__DOT__product),32);
        vcdp->chgBus(c+1849,(vlTOPp->genericfir__DOT__FILTER__BRA__2__KET____DOT__tapk__DOT__product),32);
        vcdp->chgBus(c+1857,(vlTOPp->genericfir__DOT__FILTER__BRA__3__KET____DOT__tapk__DOT__product),32);
        vcdp->chgBus(c+1865,(vlTOPp->genericfir__DOT__FILTER__BRA__4__KET____DOT__tapk__DOT__product),32);
        vcdp->chgBus(c+1873,(vlTOPp->genericfir__DOT__FILTER__BRA__5__KET____DOT__tapk__DOT__product),32);
        vcdp->chgBus(c+1881,(vlTOPp->genericfir__DOT__FILTER__BRA__6__KET____DOT__tapk__DOT__product),32);
        vcdp->chgBus(c+1889,(vlTOPp->genericfir__DOT__FILTER__BRA__7__KET____DOT__tapk__DOT__product),32);
        vcdp->chgBus(c+1897,(vlTOPp->genericfir__DOT__FILTER__BRA__8__KET____DOT__tapk__DOT__product),32);
        vcdp->chgBus(c+1905,(vlTOPp->genericfir__DOT__FILTER__BRA__9__KET____DOT__tapk__DOT__product),32);
        vcdp->chgBus(c+1913,(vlTOPp->genericfir__DOT__FILTER__BRA__10__KET____DOT__tapk__DOT__product),32);
        vcdp->chgBus(c+1921,(vlTOPp->genericfir__DOT__FILTER__BRA__11__KET____DOT__tapk__DOT__product),32);
        vcdp->chgBus(c+1929,(vlTOPp->genericfir__DOT__FILTER__BRA__12__KET____DOT__tapk__DOT__product),32);
        vcdp->chgBus(c+1937,(vlTOPp->genericfir__DOT__FILTER__BRA__13__KET____DOT__tapk__DOT__product),32);
        vcdp->chgBus(c+1945,(vlTOPp->genericfir__DOT__FILTER__BRA__14__KET____DOT__tapk__DOT__product),32);
        vcdp->chgBus(c+1953,(vlTOPp->genericfir__DOT__FILTER__BRA__15__KET____DOT__tapk__DOT__product),32);
    }
}

void Vgenericfir::traceChgThis__6(Vgenericfir__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vgenericfir* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1961,(vlTOPp->i_clk));
        vcdp->chgBit(c+1969,(vlTOPp->i_reset));
        vcdp->chgBit(c+1977,(vlTOPp->i_tap_wr));
        vcdp->chgBus(c+1985,(vlTOPp->i_tap),16);
        vcdp->chgBit(c+1993,(vlTOPp->i_ce));
        vcdp->chgBus(c+2001,(vlTOPp->i_sample),16);
        vcdp->chgQuad(c+2009,(vlTOPp->o_result),39);
        vcdp->chgBus(c+2025,((((IData)(vlTOPp->i_tap_wr) 
                               << 0x10U) | (IData)(vlTOPp->i_tap))),17);
    }
}
