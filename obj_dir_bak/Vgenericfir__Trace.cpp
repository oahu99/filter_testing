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
        if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
        }
        vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
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
        vcdp->chgBus(c+1,(vlTOPp->genericfir__DOT__tapout[0]),16);
        vcdp->chgBus(c+2,(vlTOPp->genericfir__DOT__tapout[1]),16);
        vcdp->chgBus(c+3,(vlTOPp->genericfir__DOT__tapout[2]),16);
        vcdp->chgBus(c+4,(vlTOPp->genericfir__DOT__tapout[3]),16);
        vcdp->chgBus(c+5,(vlTOPp->genericfir__DOT__tapout[4]),16);
        vcdp->chgBus(c+6,(vlTOPp->genericfir__DOT__tapout[5]),16);
        vcdp->chgBus(c+7,(vlTOPp->genericfir__DOT__tapout[6]),16);
        vcdp->chgBus(c+8,(vlTOPp->genericfir__DOT__tapout[7]),16);
        vcdp->chgBus(c+9,(vlTOPp->genericfir__DOT__tapout[8]),16);
        vcdp->chgBus(c+10,(vlTOPp->genericfir__DOT__tapout[9]),16);
        vcdp->chgBus(c+11,(vlTOPp->genericfir__DOT__tapout[10]),16);
        vcdp->chgBus(c+12,(vlTOPp->genericfir__DOT__tapout[11]),16);
        vcdp->chgBus(c+13,(vlTOPp->genericfir__DOT__tapout[12]),16);
        vcdp->chgBus(c+14,(vlTOPp->genericfir__DOT__tapout[13]),16);
        vcdp->chgBus(c+15,(vlTOPp->genericfir__DOT__tapout[14]),16);
        vcdp->chgBus(c+16,(vlTOPp->genericfir__DOT__tapout[15]),16);
        vcdp->chgBus(c+17,(vlTOPp->genericfir__DOT__tapout[16]),16);
        vcdp->chgQuad(c+137,(vlTOPp->genericfir__DOT__result[0]),39);
        vcdp->chgQuad(c+139,(vlTOPp->genericfir__DOT__result[1]),39);
        vcdp->chgQuad(c+141,(vlTOPp->genericfir__DOT__result[2]),39);
        vcdp->chgQuad(c+143,(vlTOPp->genericfir__DOT__result[3]),39);
        vcdp->chgQuad(c+145,(vlTOPp->genericfir__DOT__result[4]),39);
        vcdp->chgQuad(c+147,(vlTOPp->genericfir__DOT__result[5]),39);
        vcdp->chgQuad(c+149,(vlTOPp->genericfir__DOT__result[6]),39);
        vcdp->chgQuad(c+151,(vlTOPp->genericfir__DOT__result[7]),39);
        vcdp->chgQuad(c+153,(vlTOPp->genericfir__DOT__result[8]),39);
        vcdp->chgQuad(c+155,(vlTOPp->genericfir__DOT__result[9]),39);
        vcdp->chgQuad(c+157,(vlTOPp->genericfir__DOT__result[10]),39);
        vcdp->chgQuad(c+159,(vlTOPp->genericfir__DOT__result[11]),39);
        vcdp->chgQuad(c+161,(vlTOPp->genericfir__DOT__result[12]),39);
        vcdp->chgQuad(c+163,(vlTOPp->genericfir__DOT__result[13]),39);
        vcdp->chgQuad(c+165,(vlTOPp->genericfir__DOT__result[14]),39);
        vcdp->chgQuad(c+167,(vlTOPp->genericfir__DOT__result[15]),39);
        vcdp->chgQuad(c+169,(vlTOPp->genericfir__DOT__result[16]),39);
        vcdp->chgBus(c+409,(vlTOPp->genericfir__DOT__FILTER__BRA__0__KET____DOT__tapk__DOT__genblk2__DOT__tap),16);
        vcdp->chgBus(c+417,(vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__0__KET____DOT__tapk____pinNumber8),16);
        vcdp->chgQuad(c+425,(vlTOPp->genericfir__DOT__result
                             [0U]),39);
        vcdp->chgQuad(c+441,(vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__0__KET____DOT__tapk____pinNumber10),39);
        vcdp->chgBus(c+457,(vlTOPp->genericfir__DOT__FILTER__BRA__0__KET____DOT__tapk__DOT__delayed_sample),16);
        vcdp->chgBus(c+465,(vlTOPp->genericfir__DOT__FILTER__BRA__1__KET____DOT__tapk__DOT__genblk2__DOT__tap),16);
        vcdp->chgBus(c+473,(vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__1__KET____DOT__tapk____pinNumber8),16);
        vcdp->chgQuad(c+481,(vlTOPp->genericfir__DOT__result
                             [1U]),39);
        vcdp->chgQuad(c+497,(vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__1__KET____DOT__tapk____pinNumber10),39);
        vcdp->chgBus(c+513,(vlTOPp->genericfir__DOT__FILTER__BRA__1__KET____DOT__tapk__DOT__delayed_sample),16);
        vcdp->chgBus(c+521,(vlTOPp->genericfir__DOT__FILTER__BRA__2__KET____DOT__tapk__DOT__genblk2__DOT__tap),16);
        vcdp->chgBus(c+529,(vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__2__KET____DOT__tapk____pinNumber8),16);
        vcdp->chgQuad(c+537,(vlTOPp->genericfir__DOT__result
                             [2U]),39);
        vcdp->chgQuad(c+553,(vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__2__KET____DOT__tapk____pinNumber10),39);
        vcdp->chgBus(c+569,(vlTOPp->genericfir__DOT__FILTER__BRA__2__KET____DOT__tapk__DOT__delayed_sample),16);
        vcdp->chgBus(c+577,(vlTOPp->genericfir__DOT__FILTER__BRA__3__KET____DOT__tapk__DOT__genblk2__DOT__tap),16);
        vcdp->chgBus(c+585,(vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__3__KET____DOT__tapk____pinNumber8),16);
        vcdp->chgQuad(c+593,(vlTOPp->genericfir__DOT__result
                             [3U]),39);
        vcdp->chgQuad(c+609,(vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__3__KET____DOT__tapk____pinNumber10),39);
        vcdp->chgBus(c+625,(vlTOPp->genericfir__DOT__FILTER__BRA__3__KET____DOT__tapk__DOT__delayed_sample),16);
        vcdp->chgBus(c+633,(vlTOPp->genericfir__DOT__FILTER__BRA__4__KET____DOT__tapk__DOT__genblk2__DOT__tap),16);
        vcdp->chgBus(c+641,(vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__4__KET____DOT__tapk____pinNumber8),16);
        vcdp->chgQuad(c+649,(vlTOPp->genericfir__DOT__result
                             [4U]),39);
        vcdp->chgQuad(c+665,(vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__4__KET____DOT__tapk____pinNumber10),39);
        vcdp->chgBus(c+681,(vlTOPp->genericfir__DOT__FILTER__BRA__4__KET____DOT__tapk__DOT__delayed_sample),16);
        vcdp->chgBus(c+689,(vlTOPp->genericfir__DOT__FILTER__BRA__5__KET____DOT__tapk__DOT__genblk2__DOT__tap),16);
        vcdp->chgBus(c+697,(vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__5__KET____DOT__tapk____pinNumber8),16);
        vcdp->chgQuad(c+705,(vlTOPp->genericfir__DOT__result
                             [5U]),39);
        vcdp->chgQuad(c+721,(vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__5__KET____DOT__tapk____pinNumber10),39);
        vcdp->chgBus(c+737,(vlTOPp->genericfir__DOT__FILTER__BRA__5__KET____DOT__tapk__DOT__delayed_sample),16);
        vcdp->chgBus(c+745,(vlTOPp->genericfir__DOT__FILTER__BRA__6__KET____DOT__tapk__DOT__genblk2__DOT__tap),16);
        vcdp->chgBus(c+753,(vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__6__KET____DOT__tapk____pinNumber8),16);
        vcdp->chgQuad(c+761,(vlTOPp->genericfir__DOT__result
                             [6U]),39);
        vcdp->chgQuad(c+777,(vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__6__KET____DOT__tapk____pinNumber10),39);
        vcdp->chgBus(c+793,(vlTOPp->genericfir__DOT__FILTER__BRA__6__KET____DOT__tapk__DOT__delayed_sample),16);
        vcdp->chgBus(c+801,(vlTOPp->genericfir__DOT__FILTER__BRA__7__KET____DOT__tapk__DOT__genblk2__DOT__tap),16);
        vcdp->chgBus(c+809,(vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__7__KET____DOT__tapk____pinNumber8),16);
        vcdp->chgQuad(c+817,(vlTOPp->genericfir__DOT__result
                             [7U]),39);
        vcdp->chgQuad(c+833,(vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__7__KET____DOT__tapk____pinNumber10),39);
        vcdp->chgBus(c+849,(vlTOPp->genericfir__DOT__FILTER__BRA__7__KET____DOT__tapk__DOT__delayed_sample),16);
        vcdp->chgBus(c+857,(vlTOPp->genericfir__DOT__FILTER__BRA__8__KET____DOT__tapk__DOT__genblk2__DOT__tap),16);
        vcdp->chgBus(c+865,(vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__8__KET____DOT__tapk____pinNumber8),16);
        vcdp->chgQuad(c+873,(vlTOPp->genericfir__DOT__result
                             [8U]),39);
        vcdp->chgQuad(c+889,(vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__8__KET____DOT__tapk____pinNumber10),39);
        vcdp->chgBus(c+905,(vlTOPp->genericfir__DOT__FILTER__BRA__8__KET____DOT__tapk__DOT__delayed_sample),16);
        vcdp->chgBus(c+913,(vlTOPp->genericfir__DOT__FILTER__BRA__9__KET____DOT__tapk__DOT__genblk2__DOT__tap),16);
        vcdp->chgBus(c+921,(vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__9__KET____DOT__tapk____pinNumber8),16);
        vcdp->chgQuad(c+929,(vlTOPp->genericfir__DOT__result
                             [9U]),39);
        vcdp->chgQuad(c+945,(vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__9__KET____DOT__tapk____pinNumber10),39);
        vcdp->chgBus(c+961,(vlTOPp->genericfir__DOT__FILTER__BRA__9__KET____DOT__tapk__DOT__delayed_sample),16);
        vcdp->chgBus(c+969,(vlTOPp->genericfir__DOT__FILTER__BRA__10__KET____DOT__tapk__DOT__genblk2__DOT__tap),16);
        vcdp->chgBus(c+977,(vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__10__KET____DOT__tapk____pinNumber8),16);
        vcdp->chgQuad(c+985,(vlTOPp->genericfir__DOT__result
                             [0xaU]),39);
        vcdp->chgQuad(c+1001,(vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__10__KET____DOT__tapk____pinNumber10),39);
        vcdp->chgBus(c+1017,(vlTOPp->genericfir__DOT__FILTER__BRA__10__KET____DOT__tapk__DOT__delayed_sample),16);
        vcdp->chgBus(c+1025,(vlTOPp->genericfir__DOT__FILTER__BRA__11__KET____DOT__tapk__DOT__genblk2__DOT__tap),16);
        vcdp->chgBus(c+1033,(vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__11__KET____DOT__tapk____pinNumber8),16);
        vcdp->chgQuad(c+1041,(vlTOPp->genericfir__DOT__result
                              [0xbU]),39);
        vcdp->chgQuad(c+1057,(vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__11__KET____DOT__tapk____pinNumber10),39);
        vcdp->chgBus(c+1073,(vlTOPp->genericfir__DOT__FILTER__BRA__11__KET____DOT__tapk__DOT__delayed_sample),16);
        vcdp->chgBus(c+1081,(vlTOPp->genericfir__DOT__FILTER__BRA__12__KET____DOT__tapk__DOT__genblk2__DOT__tap),16);
        vcdp->chgBus(c+1089,(vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__12__KET____DOT__tapk____pinNumber8),16);
        vcdp->chgQuad(c+1097,(vlTOPp->genericfir__DOT__result
                              [0xcU]),39);
        vcdp->chgQuad(c+1113,(vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__12__KET____DOT__tapk____pinNumber10),39);
        vcdp->chgBus(c+1129,(vlTOPp->genericfir__DOT__FILTER__BRA__12__KET____DOT__tapk__DOT__delayed_sample),16);
        vcdp->chgBus(c+1137,(vlTOPp->genericfir__DOT__FILTER__BRA__13__KET____DOT__tapk__DOT__genblk2__DOT__tap),16);
        vcdp->chgBus(c+1145,(vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__13__KET____DOT__tapk____pinNumber8),16);
        vcdp->chgQuad(c+1153,(vlTOPp->genericfir__DOT__result
                              [0xdU]),39);
        vcdp->chgQuad(c+1169,(vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__13__KET____DOT__tapk____pinNumber10),39);
        vcdp->chgBus(c+1185,(vlTOPp->genericfir__DOT__FILTER__BRA__13__KET____DOT__tapk__DOT__delayed_sample),16);
        vcdp->chgBus(c+1193,(vlTOPp->genericfir__DOT__FILTER__BRA__14__KET____DOT__tapk__DOT__genblk2__DOT__tap),16);
        vcdp->chgBus(c+1201,(vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__14__KET____DOT__tapk____pinNumber8),16);
        vcdp->chgQuad(c+1209,(vlTOPp->genericfir__DOT__result
                              [0xeU]),39);
        vcdp->chgQuad(c+1225,(vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__14__KET____DOT__tapk____pinNumber10),39);
        vcdp->chgBus(c+1241,(vlTOPp->genericfir__DOT__FILTER__BRA__14__KET____DOT__tapk__DOT__delayed_sample),16);
        vcdp->chgBus(c+1249,(vlTOPp->genericfir__DOT__FILTER__BRA__15__KET____DOT__tapk__DOT__genblk2__DOT__tap),16);
        vcdp->chgBus(c+1257,(vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__15__KET____DOT__tapk____pinNumber8),16);
        vcdp->chgQuad(c+1265,(vlTOPp->genericfir__DOT__result
                              [0xfU]),39);
        vcdp->chgQuad(c+1281,(vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__15__KET____DOT__tapk____pinNumber10),39);
        vcdp->chgBus(c+1297,(vlTOPp->genericfir__DOT__FILTER__BRA__15__KET____DOT__tapk__DOT__delayed_sample),16);
    }
}

void Vgenericfir::traceChgThis__3(Vgenericfir__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vgenericfir* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1305,(vlTOPp->genericfir__DOT__tap[0]),16);
        vcdp->chgBus(c+1306,(vlTOPp->genericfir__DOT__tap[1]),16);
        vcdp->chgBus(c+1307,(vlTOPp->genericfir__DOT__tap[2]),16);
        vcdp->chgBus(c+1308,(vlTOPp->genericfir__DOT__tap[3]),16);
        vcdp->chgBus(c+1309,(vlTOPp->genericfir__DOT__tap[4]),16);
        vcdp->chgBus(c+1310,(vlTOPp->genericfir__DOT__tap[5]),16);
        vcdp->chgBus(c+1311,(vlTOPp->genericfir__DOT__tap[6]),16);
        vcdp->chgBus(c+1312,(vlTOPp->genericfir__DOT__tap[7]),16);
        vcdp->chgBus(c+1313,(vlTOPp->genericfir__DOT__tap[8]),16);
        vcdp->chgBus(c+1314,(vlTOPp->genericfir__DOT__tap[9]),16);
        vcdp->chgBus(c+1315,(vlTOPp->genericfir__DOT__tap[10]),16);
        vcdp->chgBus(c+1316,(vlTOPp->genericfir__DOT__tap[11]),16);
        vcdp->chgBus(c+1317,(vlTOPp->genericfir__DOT__tap[12]),16);
        vcdp->chgBus(c+1318,(vlTOPp->genericfir__DOT__tap[13]),16);
        vcdp->chgBus(c+1319,(vlTOPp->genericfir__DOT__tap[14]),16);
        vcdp->chgBus(c+1320,(vlTOPp->genericfir__DOT__tap[15]),16);
        vcdp->chgBus(c+1321,(vlTOPp->genericfir__DOT__tap[16]),16);
        vcdp->chgBus(c+1441,(vlTOPp->genericfir__DOT__sample[0]),16);
        vcdp->chgBus(c+1442,(vlTOPp->genericfir__DOT__sample[1]),16);
        vcdp->chgBus(c+1443,(vlTOPp->genericfir__DOT__sample[2]),16);
        vcdp->chgBus(c+1444,(vlTOPp->genericfir__DOT__sample[3]),16);
        vcdp->chgBus(c+1445,(vlTOPp->genericfir__DOT__sample[4]),16);
        vcdp->chgBus(c+1446,(vlTOPp->genericfir__DOT__sample[5]),16);
        vcdp->chgBus(c+1447,(vlTOPp->genericfir__DOT__sample[6]),16);
        vcdp->chgBus(c+1448,(vlTOPp->genericfir__DOT__sample[7]),16);
        vcdp->chgBus(c+1449,(vlTOPp->genericfir__DOT__sample[8]),16);
        vcdp->chgBus(c+1450,(vlTOPp->genericfir__DOT__sample[9]),16);
        vcdp->chgBus(c+1451,(vlTOPp->genericfir__DOT__sample[10]),16);
        vcdp->chgBus(c+1452,(vlTOPp->genericfir__DOT__sample[11]),16);
        vcdp->chgBus(c+1453,(vlTOPp->genericfir__DOT__sample[12]),16);
        vcdp->chgBus(c+1454,(vlTOPp->genericfir__DOT__sample[13]),16);
        vcdp->chgBus(c+1455,(vlTOPp->genericfir__DOT__sample[14]),16);
        vcdp->chgBus(c+1456,(vlTOPp->genericfir__DOT__sample[15]),16);
        vcdp->chgBus(c+1457,(vlTOPp->genericfir__DOT__sample[16]),16);
        vcdp->chgBus(c+1577,(vlTOPp->genericfir__DOT__tap
                             [0xfU]),16);
        vcdp->chgBus(c+1585,(vlTOPp->genericfir__DOT__sample
                             [0U]),16);
        vcdp->chgBus(c+1593,(vlTOPp->genericfir__DOT__tap
                             [0xeU]),16);
        vcdp->chgBus(c+1601,(vlTOPp->genericfir__DOT__sample
                             [1U]),16);
        vcdp->chgBus(c+1609,(vlTOPp->genericfir__DOT__tap
                             [0xdU]),16);
        vcdp->chgBus(c+1617,(vlTOPp->genericfir__DOT__sample
                             [2U]),16);
        vcdp->chgBus(c+1625,(vlTOPp->genericfir__DOT__tap
                             [0xcU]),16);
        vcdp->chgBus(c+1633,(vlTOPp->genericfir__DOT__sample
                             [3U]),16);
        vcdp->chgBus(c+1641,(vlTOPp->genericfir__DOT__tap
                             [0xbU]),16);
        vcdp->chgBus(c+1649,(vlTOPp->genericfir__DOT__sample
                             [4U]),16);
        vcdp->chgBus(c+1657,(vlTOPp->genericfir__DOT__tap
                             [0xaU]),16);
        vcdp->chgBus(c+1665,(vlTOPp->genericfir__DOT__sample
                             [5U]),16);
        vcdp->chgBus(c+1673,(vlTOPp->genericfir__DOT__tap
                             [9U]),16);
        vcdp->chgBus(c+1681,(vlTOPp->genericfir__DOT__sample
                             [6U]),16);
        vcdp->chgBus(c+1689,(vlTOPp->genericfir__DOT__tap
                             [8U]),16);
        vcdp->chgBus(c+1697,(vlTOPp->genericfir__DOT__sample
                             [7U]),16);
        vcdp->chgBus(c+1705,(vlTOPp->genericfir__DOT__tap
                             [7U]),16);
        vcdp->chgBus(c+1713,(vlTOPp->genericfir__DOT__sample
                             [8U]),16);
        vcdp->chgBus(c+1721,(vlTOPp->genericfir__DOT__tap
                             [6U]),16);
        vcdp->chgBus(c+1729,(vlTOPp->genericfir__DOT__sample
                             [9U]),16);
        vcdp->chgBus(c+1737,(vlTOPp->genericfir__DOT__tap
                             [5U]),16);
        vcdp->chgBus(c+1745,(vlTOPp->genericfir__DOT__sample
                             [0xaU]),16);
        vcdp->chgBus(c+1753,(vlTOPp->genericfir__DOT__tap
                             [4U]),16);
        vcdp->chgBus(c+1761,(vlTOPp->genericfir__DOT__sample
                             [0xbU]),16);
        vcdp->chgBus(c+1769,(vlTOPp->genericfir__DOT__tap
                             [3U]),16);
        vcdp->chgBus(c+1777,(vlTOPp->genericfir__DOT__sample
                             [0xcU]),16);
        vcdp->chgBus(c+1785,(vlTOPp->genericfir__DOT__tap
                             [2U]),16);
        vcdp->chgBus(c+1793,(vlTOPp->genericfir__DOT__sample
                             [0xdU]),16);
        vcdp->chgBus(c+1801,(vlTOPp->genericfir__DOT__tap
                             [1U]),16);
        vcdp->chgBus(c+1809,(vlTOPp->genericfir__DOT__sample
                             [0xeU]),16);
        vcdp->chgBus(c+1817,(vlTOPp->genericfir__DOT__tap
                             [0U]),16);
        vcdp->chgBus(c+1825,(vlTOPp->genericfir__DOT__sample
                             [0xfU]),16);
    }
}

void Vgenericfir::traceChgThis__4(Vgenericfir__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
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

void Vgenericfir::traceChgThis__5(Vgenericfir__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
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
