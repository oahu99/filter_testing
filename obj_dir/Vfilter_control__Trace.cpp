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
        vcdp->chgBus(c+1,(vlTOPp->filter_control__DOT__filter_0__DOT__tapout[0]),16);
        vcdp->chgBus(c+2,(vlTOPp->filter_control__DOT__filter_0__DOT__tapout[1]),16);
        vcdp->chgBus(c+3,(vlTOPp->filter_control__DOT__filter_0__DOT__tapout[2]),16);
        vcdp->chgBus(c+4,(vlTOPp->filter_control__DOT__filter_0__DOT__tapout[3]),16);
        vcdp->chgBus(c+5,(vlTOPp->filter_control__DOT__filter_0__DOT__tapout[4]),16);
        vcdp->chgBus(c+6,(vlTOPp->filter_control__DOT__filter_0__DOT__tapout[5]),16);
        vcdp->chgBus(c+7,(vlTOPp->filter_control__DOT__filter_0__DOT__tapout[6]),16);
        vcdp->chgBus(c+8,(vlTOPp->filter_control__DOT__filter_0__DOT__tapout[7]),16);
        vcdp->chgBus(c+9,(vlTOPp->filter_control__DOT__filter_0__DOT__tapout[8]),16);
        vcdp->chgBus(c+10,(vlTOPp->filter_control__DOT__filter_0__DOT__tapout[9]),16);
        vcdp->chgBus(c+11,(vlTOPp->filter_control__DOT__filter_0__DOT__tapout[10]),16);
        vcdp->chgBus(c+12,(vlTOPp->filter_control__DOT__filter_0__DOT__tapout[11]),16);
        vcdp->chgBus(c+13,(vlTOPp->filter_control__DOT__filter_0__DOT__tapout[12]),16);
        vcdp->chgBus(c+14,(vlTOPp->filter_control__DOT__filter_0__DOT__tapout[13]),16);
        vcdp->chgBus(c+15,(vlTOPp->filter_control__DOT__filter_0__DOT__tapout[14]),16);
        vcdp->chgBus(c+16,(vlTOPp->filter_control__DOT__filter_0__DOT__tapout[15]),16);
        vcdp->chgBus(c+17,(vlTOPp->filter_control__DOT__filter_0__DOT__tapout[16]),16);
        vcdp->chgQuad(c+137,(vlTOPp->filter_control__DOT__filter_0__DOT__result[0]),39);
        vcdp->chgQuad(c+139,(vlTOPp->filter_control__DOT__filter_0__DOT__result[1]),39);
        vcdp->chgQuad(c+141,(vlTOPp->filter_control__DOT__filter_0__DOT__result[2]),39);
        vcdp->chgQuad(c+143,(vlTOPp->filter_control__DOT__filter_0__DOT__result[3]),39);
        vcdp->chgQuad(c+145,(vlTOPp->filter_control__DOT__filter_0__DOT__result[4]),39);
        vcdp->chgQuad(c+147,(vlTOPp->filter_control__DOT__filter_0__DOT__result[5]),39);
        vcdp->chgQuad(c+149,(vlTOPp->filter_control__DOT__filter_0__DOT__result[6]),39);
        vcdp->chgQuad(c+151,(vlTOPp->filter_control__DOT__filter_0__DOT__result[7]),39);
        vcdp->chgQuad(c+153,(vlTOPp->filter_control__DOT__filter_0__DOT__result[8]),39);
        vcdp->chgQuad(c+155,(vlTOPp->filter_control__DOT__filter_0__DOT__result[9]),39);
        vcdp->chgQuad(c+157,(vlTOPp->filter_control__DOT__filter_0__DOT__result[10]),39);
        vcdp->chgQuad(c+159,(vlTOPp->filter_control__DOT__filter_0__DOT__result[11]),39);
        vcdp->chgQuad(c+161,(vlTOPp->filter_control__DOT__filter_0__DOT__result[12]),39);
        vcdp->chgQuad(c+163,(vlTOPp->filter_control__DOT__filter_0__DOT__result[13]),39);
        vcdp->chgQuad(c+165,(vlTOPp->filter_control__DOT__filter_0__DOT__result[14]),39);
        vcdp->chgQuad(c+167,(vlTOPp->filter_control__DOT__filter_0__DOT__result[15]),39);
        vcdp->chgQuad(c+169,(vlTOPp->filter_control__DOT__filter_0__DOT__result[16]),39);
        vcdp->chgBus(c+409,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__0__KET____DOT__tapk__DOT__genblk2__DOT__tap),16);
        vcdp->chgBus(c+417,(vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__0__KET____DOT__tapk____pinNumber8),16);
        vcdp->chgQuad(c+425,(vlTOPp->filter_control__DOT__filter_0__DOT__result
                             [0U]),39);
        vcdp->chgQuad(c+441,(vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__0__KET____DOT__tapk____pinNumber10),39);
        vcdp->chgBus(c+457,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__0__KET____DOT__tapk__DOT__delayed_sample),16);
        vcdp->chgBus(c+465,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__1__KET____DOT__tapk__DOT__genblk2__DOT__tap),16);
        vcdp->chgBus(c+473,(vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__1__KET____DOT__tapk____pinNumber8),16);
        vcdp->chgQuad(c+481,(vlTOPp->filter_control__DOT__filter_0__DOT__result
                             [1U]),39);
        vcdp->chgQuad(c+497,(vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__1__KET____DOT__tapk____pinNumber10),39);
        vcdp->chgBus(c+513,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__1__KET____DOT__tapk__DOT__delayed_sample),16);
        vcdp->chgBus(c+521,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__2__KET____DOT__tapk__DOT__genblk2__DOT__tap),16);
        vcdp->chgBus(c+529,(vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__2__KET____DOT__tapk____pinNumber8),16);
        vcdp->chgQuad(c+537,(vlTOPp->filter_control__DOT__filter_0__DOT__result
                             [2U]),39);
        vcdp->chgQuad(c+553,(vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__2__KET____DOT__tapk____pinNumber10),39);
        vcdp->chgBus(c+569,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__2__KET____DOT__tapk__DOT__delayed_sample),16);
        vcdp->chgBus(c+577,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__3__KET____DOT__tapk__DOT__genblk2__DOT__tap),16);
        vcdp->chgBus(c+585,(vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__3__KET____DOT__tapk____pinNumber8),16);
        vcdp->chgQuad(c+593,(vlTOPp->filter_control__DOT__filter_0__DOT__result
                             [3U]),39);
        vcdp->chgQuad(c+609,(vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__3__KET____DOT__tapk____pinNumber10),39);
        vcdp->chgBus(c+625,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__3__KET____DOT__tapk__DOT__delayed_sample),16);
        vcdp->chgBus(c+633,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__4__KET____DOT__tapk__DOT__genblk2__DOT__tap),16);
        vcdp->chgBus(c+641,(vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__4__KET____DOT__tapk____pinNumber8),16);
        vcdp->chgQuad(c+649,(vlTOPp->filter_control__DOT__filter_0__DOT__result
                             [4U]),39);
        vcdp->chgQuad(c+665,(vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__4__KET____DOT__tapk____pinNumber10),39);
        vcdp->chgBus(c+681,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__4__KET____DOT__tapk__DOT__delayed_sample),16);
        vcdp->chgBus(c+689,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__5__KET____DOT__tapk__DOT__genblk2__DOT__tap),16);
        vcdp->chgBus(c+697,(vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__5__KET____DOT__tapk____pinNumber8),16);
        vcdp->chgQuad(c+705,(vlTOPp->filter_control__DOT__filter_0__DOT__result
                             [5U]),39);
        vcdp->chgQuad(c+721,(vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__5__KET____DOT__tapk____pinNumber10),39);
        vcdp->chgBus(c+737,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__5__KET____DOT__tapk__DOT__delayed_sample),16);
        vcdp->chgBus(c+745,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__6__KET____DOT__tapk__DOT__genblk2__DOT__tap),16);
        vcdp->chgBus(c+753,(vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__6__KET____DOT__tapk____pinNumber8),16);
        vcdp->chgQuad(c+761,(vlTOPp->filter_control__DOT__filter_0__DOT__result
                             [6U]),39);
        vcdp->chgQuad(c+777,(vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__6__KET____DOT__tapk____pinNumber10),39);
        vcdp->chgBus(c+793,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__6__KET____DOT__tapk__DOT__delayed_sample),16);
        vcdp->chgBus(c+801,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__7__KET____DOT__tapk__DOT__genblk2__DOT__tap),16);
        vcdp->chgBus(c+809,(vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__7__KET____DOT__tapk____pinNumber8),16);
        vcdp->chgQuad(c+817,(vlTOPp->filter_control__DOT__filter_0__DOT__result
                             [7U]),39);
        vcdp->chgQuad(c+833,(vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__7__KET____DOT__tapk____pinNumber10),39);
        vcdp->chgBus(c+849,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__7__KET____DOT__tapk__DOT__delayed_sample),16);
        vcdp->chgBus(c+857,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__8__KET____DOT__tapk__DOT__genblk2__DOT__tap),16);
        vcdp->chgBus(c+865,(vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__8__KET____DOT__tapk____pinNumber8),16);
        vcdp->chgQuad(c+873,(vlTOPp->filter_control__DOT__filter_0__DOT__result
                             [8U]),39);
        vcdp->chgQuad(c+889,(vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__8__KET____DOT__tapk____pinNumber10),39);
        vcdp->chgBus(c+905,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__8__KET____DOT__tapk__DOT__delayed_sample),16);
        vcdp->chgBus(c+913,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__9__KET____DOT__tapk__DOT__genblk2__DOT__tap),16);
        vcdp->chgBus(c+921,(vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__9__KET____DOT__tapk____pinNumber8),16);
        vcdp->chgQuad(c+929,(vlTOPp->filter_control__DOT__filter_0__DOT__result
                             [9U]),39);
        vcdp->chgQuad(c+945,(vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__9__KET____DOT__tapk____pinNumber10),39);
        vcdp->chgBus(c+961,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__9__KET____DOT__tapk__DOT__delayed_sample),16);
        vcdp->chgBus(c+969,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__10__KET____DOT__tapk__DOT__genblk2__DOT__tap),16);
        vcdp->chgBus(c+977,(vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__10__KET____DOT__tapk____pinNumber8),16);
        vcdp->chgQuad(c+985,(vlTOPp->filter_control__DOT__filter_0__DOT__result
                             [0xaU]),39);
        vcdp->chgQuad(c+1001,(vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__10__KET____DOT__tapk____pinNumber10),39);
        vcdp->chgBus(c+1017,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__10__KET____DOT__tapk__DOT__delayed_sample),16);
        vcdp->chgBus(c+1025,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__11__KET____DOT__tapk__DOT__genblk2__DOT__tap),16);
        vcdp->chgBus(c+1033,(vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__11__KET____DOT__tapk____pinNumber8),16);
        vcdp->chgQuad(c+1041,(vlTOPp->filter_control__DOT__filter_0__DOT__result
                              [0xbU]),39);
        vcdp->chgQuad(c+1057,(vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__11__KET____DOT__tapk____pinNumber10),39);
        vcdp->chgBus(c+1073,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__11__KET____DOT__tapk__DOT__delayed_sample),16);
        vcdp->chgBus(c+1081,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__12__KET____DOT__tapk__DOT__genblk2__DOT__tap),16);
        vcdp->chgBus(c+1089,(vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__12__KET____DOT__tapk____pinNumber8),16);
        vcdp->chgQuad(c+1097,(vlTOPp->filter_control__DOT__filter_0__DOT__result
                              [0xcU]),39);
        vcdp->chgQuad(c+1113,(vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__12__KET____DOT__tapk____pinNumber10),39);
        vcdp->chgBus(c+1129,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__12__KET____DOT__tapk__DOT__delayed_sample),16);
        vcdp->chgBus(c+1137,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__13__KET____DOT__tapk__DOT__genblk2__DOT__tap),16);
        vcdp->chgBus(c+1145,(vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__13__KET____DOT__tapk____pinNumber8),16);
        vcdp->chgQuad(c+1153,(vlTOPp->filter_control__DOT__filter_0__DOT__result
                              [0xdU]),39);
        vcdp->chgQuad(c+1169,(vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__13__KET____DOT__tapk____pinNumber10),39);
        vcdp->chgBus(c+1185,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__13__KET____DOT__tapk__DOT__delayed_sample),16);
        vcdp->chgBus(c+1193,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__14__KET____DOT__tapk__DOT__genblk2__DOT__tap),16);
        vcdp->chgBus(c+1201,(vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__14__KET____DOT__tapk____pinNumber8),16);
        vcdp->chgQuad(c+1209,(vlTOPp->filter_control__DOT__filter_0__DOT__result
                              [0xeU]),39);
        vcdp->chgQuad(c+1225,(vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__14__KET____DOT__tapk____pinNumber10),39);
        vcdp->chgBus(c+1241,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__14__KET____DOT__tapk__DOT__delayed_sample),16);
        vcdp->chgBus(c+1249,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__15__KET____DOT__tapk__DOT__genblk2__DOT__tap),16);
        vcdp->chgBus(c+1257,(vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__15__KET____DOT__tapk____pinNumber8),16);
        vcdp->chgQuad(c+1265,(vlTOPp->filter_control__DOT__filter_0__DOT__result
                              [0xfU]),39);
        vcdp->chgQuad(c+1281,(vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__15__KET____DOT__tapk____pinNumber10),39);
        vcdp->chgBus(c+1297,(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__15__KET____DOT__tapk__DOT__delayed_sample),16);
    }
}

void Vfilter_control::traceChgThis__3(Vfilter_control__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vfilter_control* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1305,(vlTOPp->filter_control__DOT__filter_0__DOT__tap[0]),16);
        vcdp->chgBus(c+1306,(vlTOPp->filter_control__DOT__filter_0__DOT__tap[1]),16);
        vcdp->chgBus(c+1307,(vlTOPp->filter_control__DOT__filter_0__DOT__tap[2]),16);
        vcdp->chgBus(c+1308,(vlTOPp->filter_control__DOT__filter_0__DOT__tap[3]),16);
        vcdp->chgBus(c+1309,(vlTOPp->filter_control__DOT__filter_0__DOT__tap[4]),16);
        vcdp->chgBus(c+1310,(vlTOPp->filter_control__DOT__filter_0__DOT__tap[5]),16);
        vcdp->chgBus(c+1311,(vlTOPp->filter_control__DOT__filter_0__DOT__tap[6]),16);
        vcdp->chgBus(c+1312,(vlTOPp->filter_control__DOT__filter_0__DOT__tap[7]),16);
        vcdp->chgBus(c+1313,(vlTOPp->filter_control__DOT__filter_0__DOT__tap[8]),16);
        vcdp->chgBus(c+1314,(vlTOPp->filter_control__DOT__filter_0__DOT__tap[9]),16);
        vcdp->chgBus(c+1315,(vlTOPp->filter_control__DOT__filter_0__DOT__tap[10]),16);
        vcdp->chgBus(c+1316,(vlTOPp->filter_control__DOT__filter_0__DOT__tap[11]),16);
        vcdp->chgBus(c+1317,(vlTOPp->filter_control__DOT__filter_0__DOT__tap[12]),16);
        vcdp->chgBus(c+1318,(vlTOPp->filter_control__DOT__filter_0__DOT__tap[13]),16);
        vcdp->chgBus(c+1319,(vlTOPp->filter_control__DOT__filter_0__DOT__tap[14]),16);
        vcdp->chgBus(c+1320,(vlTOPp->filter_control__DOT__filter_0__DOT__tap[15]),16);
        vcdp->chgBus(c+1321,(vlTOPp->filter_control__DOT__filter_0__DOT__tap[16]),16);
        vcdp->chgBus(c+1441,(vlTOPp->filter_control__DOT__filter_0__DOT__sample[0]),16);
        vcdp->chgBus(c+1442,(vlTOPp->filter_control__DOT__filter_0__DOT__sample[1]),16);
        vcdp->chgBus(c+1443,(vlTOPp->filter_control__DOT__filter_0__DOT__sample[2]),16);
        vcdp->chgBus(c+1444,(vlTOPp->filter_control__DOT__filter_0__DOT__sample[3]),16);
        vcdp->chgBus(c+1445,(vlTOPp->filter_control__DOT__filter_0__DOT__sample[4]),16);
        vcdp->chgBus(c+1446,(vlTOPp->filter_control__DOT__filter_0__DOT__sample[5]),16);
        vcdp->chgBus(c+1447,(vlTOPp->filter_control__DOT__filter_0__DOT__sample[6]),16);
        vcdp->chgBus(c+1448,(vlTOPp->filter_control__DOT__filter_0__DOT__sample[7]),16);
        vcdp->chgBus(c+1449,(vlTOPp->filter_control__DOT__filter_0__DOT__sample[8]),16);
        vcdp->chgBus(c+1450,(vlTOPp->filter_control__DOT__filter_0__DOT__sample[9]),16);
        vcdp->chgBus(c+1451,(vlTOPp->filter_control__DOT__filter_0__DOT__sample[10]),16);
        vcdp->chgBus(c+1452,(vlTOPp->filter_control__DOT__filter_0__DOT__sample[11]),16);
        vcdp->chgBus(c+1453,(vlTOPp->filter_control__DOT__filter_0__DOT__sample[12]),16);
        vcdp->chgBus(c+1454,(vlTOPp->filter_control__DOT__filter_0__DOT__sample[13]),16);
        vcdp->chgBus(c+1455,(vlTOPp->filter_control__DOT__filter_0__DOT__sample[14]),16);
        vcdp->chgBus(c+1456,(vlTOPp->filter_control__DOT__filter_0__DOT__sample[15]),16);
        vcdp->chgBus(c+1457,(vlTOPp->filter_control__DOT__filter_0__DOT__sample[16]),16);
        vcdp->chgBus(c+1577,(vlTOPp->filter_control__DOT__filter_0__DOT__tap
                             [0xfU]),16);
        vcdp->chgBus(c+1585,(vlTOPp->filter_control__DOT__filter_0__DOT__sample
                             [0U]),16);
        vcdp->chgBus(c+1593,(vlTOPp->filter_control__DOT__filter_0__DOT__tap
                             [0xeU]),16);
        vcdp->chgBus(c+1601,(vlTOPp->filter_control__DOT__filter_0__DOT__sample
                             [1U]),16);
        vcdp->chgBus(c+1609,(vlTOPp->filter_control__DOT__filter_0__DOT__tap
                             [0xdU]),16);
        vcdp->chgBus(c+1617,(vlTOPp->filter_control__DOT__filter_0__DOT__sample
                             [2U]),16);
        vcdp->chgBus(c+1625,(vlTOPp->filter_control__DOT__filter_0__DOT__tap
                             [0xcU]),16);
        vcdp->chgBus(c+1633,(vlTOPp->filter_control__DOT__filter_0__DOT__sample
                             [3U]),16);
        vcdp->chgBus(c+1641,(vlTOPp->filter_control__DOT__filter_0__DOT__tap
                             [0xbU]),16);
        vcdp->chgBus(c+1649,(vlTOPp->filter_control__DOT__filter_0__DOT__sample
                             [4U]),16);
        vcdp->chgBus(c+1657,(vlTOPp->filter_control__DOT__filter_0__DOT__tap
                             [0xaU]),16);
        vcdp->chgBus(c+1665,(vlTOPp->filter_control__DOT__filter_0__DOT__sample
                             [5U]),16);
        vcdp->chgBus(c+1673,(vlTOPp->filter_control__DOT__filter_0__DOT__tap
                             [9U]),16);
        vcdp->chgBus(c+1681,(vlTOPp->filter_control__DOT__filter_0__DOT__sample
                             [6U]),16);
        vcdp->chgBus(c+1689,(vlTOPp->filter_control__DOT__filter_0__DOT__tap
                             [8U]),16);
        vcdp->chgBus(c+1697,(vlTOPp->filter_control__DOT__filter_0__DOT__sample
                             [7U]),16);
        vcdp->chgBus(c+1705,(vlTOPp->filter_control__DOT__filter_0__DOT__tap
                             [7U]),16);
        vcdp->chgBus(c+1713,(vlTOPp->filter_control__DOT__filter_0__DOT__sample
                             [8U]),16);
        vcdp->chgBus(c+1721,(vlTOPp->filter_control__DOT__filter_0__DOT__tap
                             [6U]),16);
        vcdp->chgBus(c+1729,(vlTOPp->filter_control__DOT__filter_0__DOT__sample
                             [9U]),16);
        vcdp->chgBus(c+1737,(vlTOPp->filter_control__DOT__filter_0__DOT__tap
                             [5U]),16);
        vcdp->chgBus(c+1745,(vlTOPp->filter_control__DOT__filter_0__DOT__sample
                             [0xaU]),16);
        vcdp->chgBus(c+1753,(vlTOPp->filter_control__DOT__filter_0__DOT__tap
                             [4U]),16);
        vcdp->chgBus(c+1761,(vlTOPp->filter_control__DOT__filter_0__DOT__sample
                             [0xbU]),16);
        vcdp->chgBus(c+1769,(vlTOPp->filter_control__DOT__filter_0__DOT__tap
                             [3U]),16);
        vcdp->chgBus(c+1777,(vlTOPp->filter_control__DOT__filter_0__DOT__sample
                             [0xcU]),16);
        vcdp->chgBus(c+1785,(vlTOPp->filter_control__DOT__filter_0__DOT__tap
                             [2U]),16);
        vcdp->chgBus(c+1793,(vlTOPp->filter_control__DOT__filter_0__DOT__sample
                             [0xdU]),16);
        vcdp->chgBus(c+1801,(vlTOPp->filter_control__DOT__filter_0__DOT__tap
                             [1U]),16);
        vcdp->chgBus(c+1809,(vlTOPp->filter_control__DOT__filter_0__DOT__sample
                             [0xeU]),16);
        vcdp->chgBus(c+1817,(vlTOPp->filter_control__DOT__filter_0__DOT__tap
                             [0U]),16);
        vcdp->chgBus(c+1825,(vlTOPp->filter_control__DOT__filter_0__DOT__sample
                             [0xfU]),16);
    }
}

void Vfilter_control::traceChgThis__4(Vfilter_control__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vfilter_control* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    WData/*255:0*/ __Vtemp6[8];
    WData/*255:0*/ __Vtemp7[8];
    // Body
    {
        vcdp->chgBus(c+1833,(vlTOPp->filter_control__DOT__next_state),5);
        vcdp->chgBus(c+1841,(vlTOPp->filter_control__DOT__i_idx),5);
        vcdp->chgBit(c+1849,(vlTOPp->filter_control__DOT__i_tap_wr));
        __Vtemp6[0U] = 0xbd90565U;
        __Vtemp6[1U] = 0xff270b0bU;
        __Vtemp6[2U] = 0xfb52f3a7U;
        __Vtemp6[3U] = 0x3384182eU;
        __Vtemp6[4U] = 0x182e3384U;
        __Vtemp6[5U] = 0xf3a7fb52U;
        __Vtemp6[6U] = 0xb0bff27U;
        __Vtemp6[7U] = 0x5650bd9U;
        vcdp->chgBus(c+1857,((0xffffU & (((0U == (0x1fU 
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
        vcdp->chgBus(c+1865,((((IData)(vlTOPp->filter_control__DOT__i_tap_wr) 
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

void Vfilter_control::traceChgThis__5(Vfilter_control__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vfilter_control* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1873,(vlTOPp->filter_control__DOT__state),5);
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
        vcdp->chgBit(c+2065,((1U & (~ (IData)(vlTOPp->i_reset)))));
    }
}
