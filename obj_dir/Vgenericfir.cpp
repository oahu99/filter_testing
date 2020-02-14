// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vgenericfir.h for the primary calling header

#include "Vgenericfir.h"
#include "Vgenericfir__Syms.h"


//--------------------

VL_CTOR_IMP(Vgenericfir) {
    Vgenericfir__Syms* __restrict vlSymsp = __VlSymsp = new Vgenericfir__Syms(this, name());
    Vgenericfir* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vgenericfir::__Vconfigure(Vgenericfir__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vgenericfir::~Vgenericfir() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void Vgenericfir::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vgenericfir::eval\n"); );
    Vgenericfir__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vgenericfir* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("genericfir.v", 41, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vgenericfir::_eval_initial_loop(Vgenericfir__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("genericfir.v", 41, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

//--------------------
// Internal Methods

void Vgenericfir::_initial__TOP__1(Vgenericfir__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgenericfir::_initial__TOP__1\n"); );
    Vgenericfir* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__0__KET____DOT__tapk____pinNumber8 = 0U;
    vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__1__KET____DOT__tapk____pinNumber8 = 0U;
    vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__2__KET____DOT__tapk____pinNumber8 = 0U;
    vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__3__KET____DOT__tapk____pinNumber8 = 0U;
    vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__4__KET____DOT__tapk____pinNumber8 = 0U;
    vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__5__KET____DOT__tapk____pinNumber8 = 0U;
    vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__6__KET____DOT__tapk____pinNumber8 = 0U;
    vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__7__KET____DOT__tapk____pinNumber8 = 0U;
    vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__8__KET____DOT__tapk____pinNumber8 = 0U;
    vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__9__KET____DOT__tapk____pinNumber8 = 0U;
    vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__10__KET____DOT__tapk____pinNumber8 = 0U;
    vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__11__KET____DOT__tapk____pinNumber8 = 0U;
    vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__12__KET____DOT__tapk____pinNumber8 = 0U;
    vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__13__KET____DOT__tapk____pinNumber8 = 0U;
    vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__14__KET____DOT__tapk____pinNumber8 = 0U;
    vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__15__KET____DOT__tapk____pinNumber8 = 0U;
    vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__0__KET____DOT__tapk____pinNumber10 = VL_ULL(0);
    vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__1__KET____DOT__tapk____pinNumber10 = VL_ULL(0);
    vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__2__KET____DOT__tapk____pinNumber10 = VL_ULL(0);
    vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__3__KET____DOT__tapk____pinNumber10 = VL_ULL(0);
    vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__4__KET____DOT__tapk____pinNumber10 = VL_ULL(0);
    vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__5__KET____DOT__tapk____pinNumber10 = VL_ULL(0);
    vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__6__KET____DOT__tapk____pinNumber10 = VL_ULL(0);
    vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__7__KET____DOT__tapk____pinNumber10 = VL_ULL(0);
    vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__8__KET____DOT__tapk____pinNumber10 = VL_ULL(0);
    vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__9__KET____DOT__tapk____pinNumber10 = VL_ULL(0);
    vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__10__KET____DOT__tapk____pinNumber10 = VL_ULL(0);
    vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__11__KET____DOT__tapk____pinNumber10 = VL_ULL(0);
    vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__12__KET____DOT__tapk____pinNumber10 = VL_ULL(0);
    vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__13__KET____DOT__tapk____pinNumber10 = VL_ULL(0);
    vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__14__KET____DOT__tapk____pinNumber10 = VL_ULL(0);
    vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__15__KET____DOT__tapk____pinNumber10 = VL_ULL(0);
    vlTOPp->genericfir__DOT__FILTER__BRA__0__KET____DOT__tapk__DOT__delayed_sample = 0U;
    vlTOPp->genericfir__DOT__FILTER__BRA__1__KET____DOT__tapk__DOT__delayed_sample = 0U;
    vlTOPp->genericfir__DOT__FILTER__BRA__2__KET____DOT__tapk__DOT__delayed_sample = 0U;
    vlTOPp->genericfir__DOT__FILTER__BRA__3__KET____DOT__tapk__DOT__delayed_sample = 0U;
    vlTOPp->genericfir__DOT__FILTER__BRA__4__KET____DOT__tapk__DOT__delayed_sample = 0U;
    vlTOPp->genericfir__DOT__FILTER__BRA__5__KET____DOT__tapk__DOT__delayed_sample = 0U;
    vlTOPp->genericfir__DOT__FILTER__BRA__6__KET____DOT__tapk__DOT__delayed_sample = 0U;
    vlTOPp->genericfir__DOT__FILTER__BRA__7__KET____DOT__tapk__DOT__delayed_sample = 0U;
    vlTOPp->genericfir__DOT__FILTER__BRA__8__KET____DOT__tapk__DOT__delayed_sample = 0U;
    vlTOPp->genericfir__DOT__FILTER__BRA__9__KET____DOT__tapk__DOT__delayed_sample = 0U;
    vlTOPp->genericfir__DOT__FILTER__BRA__10__KET____DOT__tapk__DOT__delayed_sample = 0U;
    vlTOPp->genericfir__DOT__FILTER__BRA__11__KET____DOT__tapk__DOT__delayed_sample = 0U;
    vlTOPp->genericfir__DOT__FILTER__BRA__12__KET____DOT__tapk__DOT__delayed_sample = 0U;
    vlTOPp->genericfir__DOT__FILTER__BRA__13__KET____DOT__tapk__DOT__delayed_sample = 0U;
    vlTOPp->genericfir__DOT__FILTER__BRA__14__KET____DOT__tapk__DOT__delayed_sample = 0U;
    vlTOPp->genericfir__DOT__FILTER__BRA__15__KET____DOT__tapk__DOT__delayed_sample = 0U;
    VL_READMEM_N(true, 16, 17, 0, std::string("taps.dat")
                 , vlTOPp->genericfir__DOT__tap, 0, ~VL_ULL(0));
    vlTOPp->genericfir__DOT__tapout[0U] = vlTOPp->genericfir__DOT__tap
        [0xfU];
    vlTOPp->genericfir__DOT__tapout[1U] = vlTOPp->genericfir__DOT__tap
        [0xeU];
    vlTOPp->genericfir__DOT__tapout[2U] = vlTOPp->genericfir__DOT__tap
        [0xdU];
    vlTOPp->genericfir__DOT__tapout[3U] = vlTOPp->genericfir__DOT__tap
        [0xcU];
    vlTOPp->genericfir__DOT__tapout[4U] = vlTOPp->genericfir__DOT__tap
        [0xbU];
    vlTOPp->genericfir__DOT__tapout[5U] = vlTOPp->genericfir__DOT__tap
        [0xaU];
    vlTOPp->genericfir__DOT__tapout[6U] = vlTOPp->genericfir__DOT__tap
        [9U];
    vlTOPp->genericfir__DOT__tapout[7U] = vlTOPp->genericfir__DOT__tap
        [8U];
    vlTOPp->genericfir__DOT__tapout[8U] = vlTOPp->genericfir__DOT__tap
        [7U];
    vlTOPp->genericfir__DOT__tapout[9U] = vlTOPp->genericfir__DOT__tap
        [6U];
    vlTOPp->genericfir__DOT__tapout[0xaU] = vlTOPp->genericfir__DOT__tap
        [5U];
    vlTOPp->genericfir__DOT__tapout[0xbU] = vlTOPp->genericfir__DOT__tap
        [4U];
    vlTOPp->genericfir__DOT__tapout[0xcU] = vlTOPp->genericfir__DOT__tap
        [3U];
    vlTOPp->genericfir__DOT__tapout[0xdU] = vlTOPp->genericfir__DOT__tap
        [2U];
    vlTOPp->genericfir__DOT__tapout[0xeU] = vlTOPp->genericfir__DOT__tap
        [1U];
    vlTOPp->genericfir__DOT__tapout[0xfU] = vlTOPp->genericfir__DOT__tap
        [0U];
}

VL_INLINE_OPT void Vgenericfir::_sequent__TOP__2(Vgenericfir__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgenericfir::_sequent__TOP__2\n"); );
    Vgenericfir* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->i_reset) {
        vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__15__KET____DOT__tapk____pinNumber8 = 0U;
    } else {
        if (vlTOPp->i_ce) {
            vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__15__KET____DOT__tapk____pinNumber8 
                = vlTOPp->genericfir__DOT__FILTER__BRA__15__KET____DOT__tapk__DOT__delayed_sample;
        }
    }
    if (vlTOPp->i_reset) {
        vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__14__KET____DOT__tapk____pinNumber8 = 0U;
    } else {
        if (vlTOPp->i_ce) {
            vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__14__KET____DOT__tapk____pinNumber8 
                = vlTOPp->genericfir__DOT__FILTER__BRA__14__KET____DOT__tapk__DOT__delayed_sample;
        }
    }
    if (vlTOPp->i_reset) {
        vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__13__KET____DOT__tapk____pinNumber8 = 0U;
    } else {
        if (vlTOPp->i_ce) {
            vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__13__KET____DOT__tapk____pinNumber8 
                = vlTOPp->genericfir__DOT__FILTER__BRA__13__KET____DOT__tapk__DOT__delayed_sample;
        }
    }
    if (vlTOPp->i_reset) {
        vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__12__KET____DOT__tapk____pinNumber8 = 0U;
    } else {
        if (vlTOPp->i_ce) {
            vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__12__KET____DOT__tapk____pinNumber8 
                = vlTOPp->genericfir__DOT__FILTER__BRA__12__KET____DOT__tapk__DOT__delayed_sample;
        }
    }
    if (vlTOPp->i_reset) {
        vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__11__KET____DOT__tapk____pinNumber8 = 0U;
    } else {
        if (vlTOPp->i_ce) {
            vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__11__KET____DOT__tapk____pinNumber8 
                = vlTOPp->genericfir__DOT__FILTER__BRA__11__KET____DOT__tapk__DOT__delayed_sample;
        }
    }
    if (vlTOPp->i_reset) {
        vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__10__KET____DOT__tapk____pinNumber8 = 0U;
    } else {
        if (vlTOPp->i_ce) {
            vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__10__KET____DOT__tapk____pinNumber8 
                = vlTOPp->genericfir__DOT__FILTER__BRA__10__KET____DOT__tapk__DOT__delayed_sample;
        }
    }
    if (vlTOPp->i_reset) {
        vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__9__KET____DOT__tapk____pinNumber8 = 0U;
    } else {
        if (vlTOPp->i_ce) {
            vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__9__KET____DOT__tapk____pinNumber8 
                = vlTOPp->genericfir__DOT__FILTER__BRA__9__KET____DOT__tapk__DOT__delayed_sample;
        }
    }
    if (vlTOPp->i_reset) {
        vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__8__KET____DOT__tapk____pinNumber8 = 0U;
    } else {
        if (vlTOPp->i_ce) {
            vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__8__KET____DOT__tapk____pinNumber8 
                = vlTOPp->genericfir__DOT__FILTER__BRA__8__KET____DOT__tapk__DOT__delayed_sample;
        }
    }
    if (vlTOPp->i_reset) {
        vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__7__KET____DOT__tapk____pinNumber8 = 0U;
    } else {
        if (vlTOPp->i_ce) {
            vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__7__KET____DOT__tapk____pinNumber8 
                = vlTOPp->genericfir__DOT__FILTER__BRA__7__KET____DOT__tapk__DOT__delayed_sample;
        }
    }
    if (vlTOPp->i_reset) {
        vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__6__KET____DOT__tapk____pinNumber8 = 0U;
    } else {
        if (vlTOPp->i_ce) {
            vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__6__KET____DOT__tapk____pinNumber8 
                = vlTOPp->genericfir__DOT__FILTER__BRA__6__KET____DOT__tapk__DOT__delayed_sample;
        }
    }
    if (vlTOPp->i_reset) {
        vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__5__KET____DOT__tapk____pinNumber8 = 0U;
    } else {
        if (vlTOPp->i_ce) {
            vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__5__KET____DOT__tapk____pinNumber8 
                = vlTOPp->genericfir__DOT__FILTER__BRA__5__KET____DOT__tapk__DOT__delayed_sample;
        }
    }
    if (vlTOPp->i_reset) {
        vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__4__KET____DOT__tapk____pinNumber8 = 0U;
    } else {
        if (vlTOPp->i_ce) {
            vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__4__KET____DOT__tapk____pinNumber8 
                = vlTOPp->genericfir__DOT__FILTER__BRA__4__KET____DOT__tapk__DOT__delayed_sample;
        }
    }
    if (vlTOPp->i_reset) {
        vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__3__KET____DOT__tapk____pinNumber8 = 0U;
    } else {
        if (vlTOPp->i_ce) {
            vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__3__KET____DOT__tapk____pinNumber8 
                = vlTOPp->genericfir__DOT__FILTER__BRA__3__KET____DOT__tapk__DOT__delayed_sample;
        }
    }
    if (vlTOPp->i_reset) {
        vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__2__KET____DOT__tapk____pinNumber8 = 0U;
    } else {
        if (vlTOPp->i_ce) {
            vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__2__KET____DOT__tapk____pinNumber8 
                = vlTOPp->genericfir__DOT__FILTER__BRA__2__KET____DOT__tapk__DOT__delayed_sample;
        }
    }
    if (vlTOPp->i_reset) {
        vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__1__KET____DOT__tapk____pinNumber8 = 0U;
    } else {
        if (vlTOPp->i_ce) {
            vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__1__KET____DOT__tapk____pinNumber8 
                = vlTOPp->genericfir__DOT__FILTER__BRA__1__KET____DOT__tapk__DOT__delayed_sample;
        }
    }
    if (vlTOPp->i_reset) {
        vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__0__KET____DOT__tapk____pinNumber8 = 0U;
    } else {
        if (vlTOPp->i_ce) {
            vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__0__KET____DOT__tapk____pinNumber8 
                = vlTOPp->genericfir__DOT__FILTER__BRA__0__KET____DOT__tapk__DOT__delayed_sample;
        }
    }
    if (vlTOPp->i_reset) {
        vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__15__KET____DOT__tapk____pinNumber10 = VL_ULL(0);
    } else {
        if (vlTOPp->i_ce) {
            vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__15__KET____DOT__tapk____pinNumber10 
                = (VL_ULL(0x7fffffffff) & (vlTOPp->genericfir__DOT__result
                                           [0xfU] + 
                                           (((QData)((IData)(
                                                             (0x7fU 
                                                              & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (vlTOPp->genericfir__DOT__FILTER__BRA__15__KET____DOT__tapk__DOT__product 
                                                                                >> 0x1fU))))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlTOPp->genericfir__DOT__FILTER__BRA__15__KET____DOT__tapk__DOT__product)))));
        }
    }
    if (vlTOPp->i_reset) {
        vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__14__KET____DOT__tapk____pinNumber10 = VL_ULL(0);
    } else {
        if (vlTOPp->i_ce) {
            vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__14__KET____DOT__tapk____pinNumber10 
                = (VL_ULL(0x7fffffffff) & (vlTOPp->genericfir__DOT__result
                                           [0xeU] + 
                                           (((QData)((IData)(
                                                             (0x7fU 
                                                              & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (vlTOPp->genericfir__DOT__FILTER__BRA__14__KET____DOT__tapk__DOT__product 
                                                                                >> 0x1fU))))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlTOPp->genericfir__DOT__FILTER__BRA__14__KET____DOT__tapk__DOT__product)))));
        }
    }
    if (vlTOPp->i_reset) {
        vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__13__KET____DOT__tapk____pinNumber10 = VL_ULL(0);
    } else {
        if (vlTOPp->i_ce) {
            vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__13__KET____DOT__tapk____pinNumber10 
                = (VL_ULL(0x7fffffffff) & (vlTOPp->genericfir__DOT__result
                                           [0xdU] + 
                                           (((QData)((IData)(
                                                             (0x7fU 
                                                              & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (vlTOPp->genericfir__DOT__FILTER__BRA__13__KET____DOT__tapk__DOT__product 
                                                                                >> 0x1fU))))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlTOPp->genericfir__DOT__FILTER__BRA__13__KET____DOT__tapk__DOT__product)))));
        }
    }
    if (vlTOPp->i_reset) {
        vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__12__KET____DOT__tapk____pinNumber10 = VL_ULL(0);
    } else {
        if (vlTOPp->i_ce) {
            vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__12__KET____DOT__tapk____pinNumber10 
                = (VL_ULL(0x7fffffffff) & (vlTOPp->genericfir__DOT__result
                                           [0xcU] + 
                                           (((QData)((IData)(
                                                             (0x7fU 
                                                              & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (vlTOPp->genericfir__DOT__FILTER__BRA__12__KET____DOT__tapk__DOT__product 
                                                                                >> 0x1fU))))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlTOPp->genericfir__DOT__FILTER__BRA__12__KET____DOT__tapk__DOT__product)))));
        }
    }
    if (vlTOPp->i_reset) {
        vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__11__KET____DOT__tapk____pinNumber10 = VL_ULL(0);
    } else {
        if (vlTOPp->i_ce) {
            vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__11__KET____DOT__tapk____pinNumber10 
                = (VL_ULL(0x7fffffffff) & (vlTOPp->genericfir__DOT__result
                                           [0xbU] + 
                                           (((QData)((IData)(
                                                             (0x7fU 
                                                              & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (vlTOPp->genericfir__DOT__FILTER__BRA__11__KET____DOT__tapk__DOT__product 
                                                                                >> 0x1fU))))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlTOPp->genericfir__DOT__FILTER__BRA__11__KET____DOT__tapk__DOT__product)))));
        }
    }
    if (vlTOPp->i_reset) {
        vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__10__KET____DOT__tapk____pinNumber10 = VL_ULL(0);
    } else {
        if (vlTOPp->i_ce) {
            vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__10__KET____DOT__tapk____pinNumber10 
                = (VL_ULL(0x7fffffffff) & (vlTOPp->genericfir__DOT__result
                                           [0xaU] + 
                                           (((QData)((IData)(
                                                             (0x7fU 
                                                              & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (vlTOPp->genericfir__DOT__FILTER__BRA__10__KET____DOT__tapk__DOT__product 
                                                                                >> 0x1fU))))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlTOPp->genericfir__DOT__FILTER__BRA__10__KET____DOT__tapk__DOT__product)))));
        }
    }
    if (vlTOPp->i_reset) {
        vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__9__KET____DOT__tapk____pinNumber10 = VL_ULL(0);
    } else {
        if (vlTOPp->i_ce) {
            vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__9__KET____DOT__tapk____pinNumber10 
                = (VL_ULL(0x7fffffffff) & (vlTOPp->genericfir__DOT__result
                                           [9U] + (
                                                   ((QData)((IData)(
                                                                    (0x7fU 
                                                                     & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (vlTOPp->genericfir__DOT__FILTER__BRA__9__KET____DOT__tapk__DOT__product 
                                                                                >> 0x1fU))))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlTOPp->genericfir__DOT__FILTER__BRA__9__KET____DOT__tapk__DOT__product)))));
        }
    }
    if (vlTOPp->i_reset) {
        vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__8__KET____DOT__tapk____pinNumber10 = VL_ULL(0);
    } else {
        if (vlTOPp->i_ce) {
            vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__8__KET____DOT__tapk____pinNumber10 
                = (VL_ULL(0x7fffffffff) & (vlTOPp->genericfir__DOT__result
                                           [8U] + (
                                                   ((QData)((IData)(
                                                                    (0x7fU 
                                                                     & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (vlTOPp->genericfir__DOT__FILTER__BRA__8__KET____DOT__tapk__DOT__product 
                                                                                >> 0x1fU))))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlTOPp->genericfir__DOT__FILTER__BRA__8__KET____DOT__tapk__DOT__product)))));
        }
    }
    if (vlTOPp->i_reset) {
        vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__7__KET____DOT__tapk____pinNumber10 = VL_ULL(0);
    } else {
        if (vlTOPp->i_ce) {
            vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__7__KET____DOT__tapk____pinNumber10 
                = (VL_ULL(0x7fffffffff) & (vlTOPp->genericfir__DOT__result
                                           [7U] + (
                                                   ((QData)((IData)(
                                                                    (0x7fU 
                                                                     & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (vlTOPp->genericfir__DOT__FILTER__BRA__7__KET____DOT__tapk__DOT__product 
                                                                                >> 0x1fU))))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlTOPp->genericfir__DOT__FILTER__BRA__7__KET____DOT__tapk__DOT__product)))));
        }
    }
    if (vlTOPp->i_reset) {
        vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__6__KET____DOT__tapk____pinNumber10 = VL_ULL(0);
    } else {
        if (vlTOPp->i_ce) {
            vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__6__KET____DOT__tapk____pinNumber10 
                = (VL_ULL(0x7fffffffff) & (vlTOPp->genericfir__DOT__result
                                           [6U] + (
                                                   ((QData)((IData)(
                                                                    (0x7fU 
                                                                     & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (vlTOPp->genericfir__DOT__FILTER__BRA__6__KET____DOT__tapk__DOT__product 
                                                                                >> 0x1fU))))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlTOPp->genericfir__DOT__FILTER__BRA__6__KET____DOT__tapk__DOT__product)))));
        }
    }
    if (vlTOPp->i_reset) {
        vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__5__KET____DOT__tapk____pinNumber10 = VL_ULL(0);
    } else {
        if (vlTOPp->i_ce) {
            vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__5__KET____DOT__tapk____pinNumber10 
                = (VL_ULL(0x7fffffffff) & (vlTOPp->genericfir__DOT__result
                                           [5U] + (
                                                   ((QData)((IData)(
                                                                    (0x7fU 
                                                                     & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (vlTOPp->genericfir__DOT__FILTER__BRA__5__KET____DOT__tapk__DOT__product 
                                                                                >> 0x1fU))))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlTOPp->genericfir__DOT__FILTER__BRA__5__KET____DOT__tapk__DOT__product)))));
        }
    }
    if (vlTOPp->i_reset) {
        vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__4__KET____DOT__tapk____pinNumber10 = VL_ULL(0);
    } else {
        if (vlTOPp->i_ce) {
            vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__4__KET____DOT__tapk____pinNumber10 
                = (VL_ULL(0x7fffffffff) & (vlTOPp->genericfir__DOT__result
                                           [4U] + (
                                                   ((QData)((IData)(
                                                                    (0x7fU 
                                                                     & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (vlTOPp->genericfir__DOT__FILTER__BRA__4__KET____DOT__tapk__DOT__product 
                                                                                >> 0x1fU))))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlTOPp->genericfir__DOT__FILTER__BRA__4__KET____DOT__tapk__DOT__product)))));
        }
    }
    if (vlTOPp->i_reset) {
        vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__3__KET____DOT__tapk____pinNumber10 = VL_ULL(0);
    } else {
        if (vlTOPp->i_ce) {
            vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__3__KET____DOT__tapk____pinNumber10 
                = (VL_ULL(0x7fffffffff) & (vlTOPp->genericfir__DOT__result
                                           [3U] + (
                                                   ((QData)((IData)(
                                                                    (0x7fU 
                                                                     & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (vlTOPp->genericfir__DOT__FILTER__BRA__3__KET____DOT__tapk__DOT__product 
                                                                                >> 0x1fU))))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlTOPp->genericfir__DOT__FILTER__BRA__3__KET____DOT__tapk__DOT__product)))));
        }
    }
    if (vlTOPp->i_reset) {
        vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__2__KET____DOT__tapk____pinNumber10 = VL_ULL(0);
    } else {
        if (vlTOPp->i_ce) {
            vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__2__KET____DOT__tapk____pinNumber10 
                = (VL_ULL(0x7fffffffff) & (vlTOPp->genericfir__DOT__result
                                           [2U] + (
                                                   ((QData)((IData)(
                                                                    (0x7fU 
                                                                     & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (vlTOPp->genericfir__DOT__FILTER__BRA__2__KET____DOT__tapk__DOT__product 
                                                                                >> 0x1fU))))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlTOPp->genericfir__DOT__FILTER__BRA__2__KET____DOT__tapk__DOT__product)))));
        }
    }
    if (vlTOPp->i_reset) {
        vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__1__KET____DOT__tapk____pinNumber10 = VL_ULL(0);
    } else {
        if (vlTOPp->i_ce) {
            vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__1__KET____DOT__tapk____pinNumber10 
                = (VL_ULL(0x7fffffffff) & (vlTOPp->genericfir__DOT__result
                                           [1U] + (
                                                   ((QData)((IData)(
                                                                    (0x7fU 
                                                                     & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (vlTOPp->genericfir__DOT__FILTER__BRA__1__KET____DOT__tapk__DOT__product 
                                                                                >> 0x1fU))))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlTOPp->genericfir__DOT__FILTER__BRA__1__KET____DOT__tapk__DOT__product)))));
        }
    }
    if (vlTOPp->i_reset) {
        vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__0__KET____DOT__tapk____pinNumber10 = VL_ULL(0);
    } else {
        if (vlTOPp->i_ce) {
            vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__0__KET____DOT__tapk____pinNumber10 
                = (VL_ULL(0x7fffffffff) & (vlTOPp->genericfir__DOT__result
                                           [0U] + (
                                                   ((QData)((IData)(
                                                                    (0x7fU 
                                                                     & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (vlTOPp->genericfir__DOT__FILTER__BRA__0__KET____DOT__tapk__DOT__product 
                                                                                >> 0x1fU))))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlTOPp->genericfir__DOT__FILTER__BRA__0__KET____DOT__tapk__DOT__product)))));
        }
    }
    if (vlTOPp->i_reset) {
        vlTOPp->genericfir__DOT__FILTER__BRA__15__KET____DOT__tapk__DOT__delayed_sample = 0U;
    } else {
        if (vlTOPp->i_ce) {
            vlTOPp->genericfir__DOT__FILTER__BRA__15__KET____DOT__tapk__DOT__delayed_sample 
                = vlTOPp->genericfir__DOT__sample[0xfU];
        }
    }
    if (vlTOPp->i_reset) {
        vlTOPp->genericfir__DOT__FILTER__BRA__14__KET____DOT__tapk__DOT__delayed_sample = 0U;
    } else {
        if (vlTOPp->i_ce) {
            vlTOPp->genericfir__DOT__FILTER__BRA__14__KET____DOT__tapk__DOT__delayed_sample 
                = vlTOPp->genericfir__DOT__sample[0xeU];
        }
    }
    if (vlTOPp->i_reset) {
        vlTOPp->genericfir__DOT__FILTER__BRA__13__KET____DOT__tapk__DOT__delayed_sample = 0U;
    } else {
        if (vlTOPp->i_ce) {
            vlTOPp->genericfir__DOT__FILTER__BRA__13__KET____DOT__tapk__DOT__delayed_sample 
                = vlTOPp->genericfir__DOT__sample[0xdU];
        }
    }
    if (vlTOPp->i_reset) {
        vlTOPp->genericfir__DOT__FILTER__BRA__12__KET____DOT__tapk__DOT__delayed_sample = 0U;
    } else {
        if (vlTOPp->i_ce) {
            vlTOPp->genericfir__DOT__FILTER__BRA__12__KET____DOT__tapk__DOT__delayed_sample 
                = vlTOPp->genericfir__DOT__sample[0xcU];
        }
    }
    if (vlTOPp->i_reset) {
        vlTOPp->genericfir__DOT__FILTER__BRA__11__KET____DOT__tapk__DOT__delayed_sample = 0U;
    } else {
        if (vlTOPp->i_ce) {
            vlTOPp->genericfir__DOT__FILTER__BRA__11__KET____DOT__tapk__DOT__delayed_sample 
                = vlTOPp->genericfir__DOT__sample[0xbU];
        }
    }
    if (vlTOPp->i_reset) {
        vlTOPp->genericfir__DOT__FILTER__BRA__10__KET____DOT__tapk__DOT__delayed_sample = 0U;
    } else {
        if (vlTOPp->i_ce) {
            vlTOPp->genericfir__DOT__FILTER__BRA__10__KET____DOT__tapk__DOT__delayed_sample 
                = vlTOPp->genericfir__DOT__sample[0xaU];
        }
    }
    if (vlTOPp->i_reset) {
        vlTOPp->genericfir__DOT__FILTER__BRA__9__KET____DOT__tapk__DOT__delayed_sample = 0U;
    } else {
        if (vlTOPp->i_ce) {
            vlTOPp->genericfir__DOT__FILTER__BRA__9__KET____DOT__tapk__DOT__delayed_sample 
                = vlTOPp->genericfir__DOT__sample[9U];
        }
    }
    if (vlTOPp->i_reset) {
        vlTOPp->genericfir__DOT__FILTER__BRA__8__KET____DOT__tapk__DOT__delayed_sample = 0U;
    } else {
        if (vlTOPp->i_ce) {
            vlTOPp->genericfir__DOT__FILTER__BRA__8__KET____DOT__tapk__DOT__delayed_sample 
                = vlTOPp->genericfir__DOT__sample[8U];
        }
    }
    if (vlTOPp->i_reset) {
        vlTOPp->genericfir__DOT__FILTER__BRA__7__KET____DOT__tapk__DOT__delayed_sample = 0U;
    } else {
        if (vlTOPp->i_ce) {
            vlTOPp->genericfir__DOT__FILTER__BRA__7__KET____DOT__tapk__DOT__delayed_sample 
                = vlTOPp->genericfir__DOT__sample[7U];
        }
    }
    if (vlTOPp->i_reset) {
        vlTOPp->genericfir__DOT__FILTER__BRA__6__KET____DOT__tapk__DOT__delayed_sample = 0U;
    } else {
        if (vlTOPp->i_ce) {
            vlTOPp->genericfir__DOT__FILTER__BRA__6__KET____DOT__tapk__DOT__delayed_sample 
                = vlTOPp->genericfir__DOT__sample[6U];
        }
    }
    if (vlTOPp->i_reset) {
        vlTOPp->genericfir__DOT__FILTER__BRA__5__KET____DOT__tapk__DOT__delayed_sample = 0U;
    } else {
        if (vlTOPp->i_ce) {
            vlTOPp->genericfir__DOT__FILTER__BRA__5__KET____DOT__tapk__DOT__delayed_sample 
                = vlTOPp->genericfir__DOT__sample[5U];
        }
    }
    if (vlTOPp->i_reset) {
        vlTOPp->genericfir__DOT__FILTER__BRA__4__KET____DOT__tapk__DOT__delayed_sample = 0U;
    } else {
        if (vlTOPp->i_ce) {
            vlTOPp->genericfir__DOT__FILTER__BRA__4__KET____DOT__tapk__DOT__delayed_sample 
                = vlTOPp->genericfir__DOT__sample[4U];
        }
    }
    if (vlTOPp->i_reset) {
        vlTOPp->genericfir__DOT__FILTER__BRA__3__KET____DOT__tapk__DOT__delayed_sample = 0U;
    } else {
        if (vlTOPp->i_ce) {
            vlTOPp->genericfir__DOT__FILTER__BRA__3__KET____DOT__tapk__DOT__delayed_sample 
                = vlTOPp->genericfir__DOT__sample[3U];
        }
    }
    if (vlTOPp->i_reset) {
        vlTOPp->genericfir__DOT__FILTER__BRA__2__KET____DOT__tapk__DOT__delayed_sample = 0U;
    } else {
        if (vlTOPp->i_ce) {
            vlTOPp->genericfir__DOT__FILTER__BRA__2__KET____DOT__tapk__DOT__delayed_sample 
                = vlTOPp->genericfir__DOT__sample[2U];
        }
    }
    if (vlTOPp->i_reset) {
        vlTOPp->genericfir__DOT__FILTER__BRA__1__KET____DOT__tapk__DOT__delayed_sample = 0U;
    } else {
        if (vlTOPp->i_ce) {
            vlTOPp->genericfir__DOT__FILTER__BRA__1__KET____DOT__tapk__DOT__delayed_sample 
                = vlTOPp->genericfir__DOT__sample[1U];
        }
    }
    if (vlTOPp->i_reset) {
        vlTOPp->genericfir__DOT__FILTER__BRA__0__KET____DOT__tapk__DOT__delayed_sample = 0U;
    } else {
        if (vlTOPp->i_ce) {
            vlTOPp->genericfir__DOT__FILTER__BRA__0__KET____DOT__tapk__DOT__delayed_sample 
                = vlTOPp->genericfir__DOT__sample[0U];
        }
    }
    vlTOPp->genericfir__DOT__result[0x10U] = vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__15__KET____DOT__tapk____pinNumber10;
    if (vlTOPp->i_reset) {
        vlTOPp->genericfir__DOT__FILTER__BRA__15__KET____DOT__tapk__DOT__product = 0U;
    } else {
        if (vlTOPp->i_ce) {
            vlTOPp->genericfir__DOT__FILTER__BRA__15__KET____DOT__tapk__DOT__product 
                = VL_MULS_III(32,32,32, VL_EXTENDS_II(32,16, 
                                                      vlTOPp->genericfir__DOT__tap
                                                      [0U]), 
                              VL_EXTENDS_II(32,16, 
                                            vlTOPp->genericfir__DOT__sample
                                            [0xfU]));
        }
    }
    vlTOPp->genericfir__DOT__result[0xfU] = vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__14__KET____DOT__tapk____pinNumber10;
    if (vlTOPp->i_reset) {
        vlTOPp->genericfir__DOT__FILTER__BRA__14__KET____DOT__tapk__DOT__product = 0U;
    } else {
        if (vlTOPp->i_ce) {
            vlTOPp->genericfir__DOT__FILTER__BRA__14__KET____DOT__tapk__DOT__product 
                = VL_MULS_III(32,32,32, VL_EXTENDS_II(32,16, 
                                                      vlTOPp->genericfir__DOT__tap
                                                      [1U]), 
                              VL_EXTENDS_II(32,16, 
                                            vlTOPp->genericfir__DOT__sample
                                            [0xeU]));
        }
    }
    vlTOPp->genericfir__DOT__result[0xeU] = vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__13__KET____DOT__tapk____pinNumber10;
    if (vlTOPp->i_reset) {
        vlTOPp->genericfir__DOT__FILTER__BRA__13__KET____DOT__tapk__DOT__product = 0U;
    } else {
        if (vlTOPp->i_ce) {
            vlTOPp->genericfir__DOT__FILTER__BRA__13__KET____DOT__tapk__DOT__product 
                = VL_MULS_III(32,32,32, VL_EXTENDS_II(32,16, 
                                                      vlTOPp->genericfir__DOT__tap
                                                      [2U]), 
                              VL_EXTENDS_II(32,16, 
                                            vlTOPp->genericfir__DOT__sample
                                            [0xdU]));
        }
    }
    vlTOPp->genericfir__DOT__result[0xdU] = vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__12__KET____DOT__tapk____pinNumber10;
    if (vlTOPp->i_reset) {
        vlTOPp->genericfir__DOT__FILTER__BRA__12__KET____DOT__tapk__DOT__product = 0U;
    } else {
        if (vlTOPp->i_ce) {
            vlTOPp->genericfir__DOT__FILTER__BRA__12__KET____DOT__tapk__DOT__product 
                = VL_MULS_III(32,32,32, VL_EXTENDS_II(32,16, 
                                                      vlTOPp->genericfir__DOT__tap
                                                      [3U]), 
                              VL_EXTENDS_II(32,16, 
                                            vlTOPp->genericfir__DOT__sample
                                            [0xcU]));
        }
    }
    vlTOPp->genericfir__DOT__result[0xcU] = vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__11__KET____DOT__tapk____pinNumber10;
    if (vlTOPp->i_reset) {
        vlTOPp->genericfir__DOT__FILTER__BRA__11__KET____DOT__tapk__DOT__product = 0U;
    } else {
        if (vlTOPp->i_ce) {
            vlTOPp->genericfir__DOT__FILTER__BRA__11__KET____DOT__tapk__DOT__product 
                = VL_MULS_III(32,32,32, VL_EXTENDS_II(32,16, 
                                                      vlTOPp->genericfir__DOT__tap
                                                      [4U]), 
                              VL_EXTENDS_II(32,16, 
                                            vlTOPp->genericfir__DOT__sample
                                            [0xbU]));
        }
    }
    vlTOPp->genericfir__DOT__result[0xbU] = vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__10__KET____DOT__tapk____pinNumber10;
    if (vlTOPp->i_reset) {
        vlTOPp->genericfir__DOT__FILTER__BRA__10__KET____DOT__tapk__DOT__product = 0U;
    } else {
        if (vlTOPp->i_ce) {
            vlTOPp->genericfir__DOT__FILTER__BRA__10__KET____DOT__tapk__DOT__product 
                = VL_MULS_III(32,32,32, VL_EXTENDS_II(32,16, 
                                                      vlTOPp->genericfir__DOT__tap
                                                      [5U]), 
                              VL_EXTENDS_II(32,16, 
                                            vlTOPp->genericfir__DOT__sample
                                            [0xaU]));
        }
    }
    vlTOPp->genericfir__DOT__result[0xaU] = vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__9__KET____DOT__tapk____pinNumber10;
    if (vlTOPp->i_reset) {
        vlTOPp->genericfir__DOT__FILTER__BRA__9__KET____DOT__tapk__DOT__product = 0U;
    } else {
        if (vlTOPp->i_ce) {
            vlTOPp->genericfir__DOT__FILTER__BRA__9__KET____DOT__tapk__DOT__product 
                = VL_MULS_III(32,32,32, VL_EXTENDS_II(32,16, 
                                                      vlTOPp->genericfir__DOT__tap
                                                      [6U]), 
                              VL_EXTENDS_II(32,16, 
                                            vlTOPp->genericfir__DOT__sample
                                            [9U]));
        }
    }
    vlTOPp->genericfir__DOT__result[9U] = vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__8__KET____DOT__tapk____pinNumber10;
    if (vlTOPp->i_reset) {
        vlTOPp->genericfir__DOT__FILTER__BRA__8__KET____DOT__tapk__DOT__product = 0U;
    } else {
        if (vlTOPp->i_ce) {
            vlTOPp->genericfir__DOT__FILTER__BRA__8__KET____DOT__tapk__DOT__product 
                = VL_MULS_III(32,32,32, VL_EXTENDS_II(32,16, 
                                                      vlTOPp->genericfir__DOT__tap
                                                      [7U]), 
                              VL_EXTENDS_II(32,16, 
                                            vlTOPp->genericfir__DOT__sample
                                            [8U]));
        }
    }
    vlTOPp->genericfir__DOT__result[8U] = vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__7__KET____DOT__tapk____pinNumber10;
    if (vlTOPp->i_reset) {
        vlTOPp->genericfir__DOT__FILTER__BRA__7__KET____DOT__tapk__DOT__product = 0U;
    } else {
        if (vlTOPp->i_ce) {
            vlTOPp->genericfir__DOT__FILTER__BRA__7__KET____DOT__tapk__DOT__product 
                = VL_MULS_III(32,32,32, VL_EXTENDS_II(32,16, 
                                                      vlTOPp->genericfir__DOT__tap
                                                      [8U]), 
                              VL_EXTENDS_II(32,16, 
                                            vlTOPp->genericfir__DOT__sample
                                            [7U]));
        }
    }
    vlTOPp->genericfir__DOT__result[7U] = vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__6__KET____DOT__tapk____pinNumber10;
    if (vlTOPp->i_reset) {
        vlTOPp->genericfir__DOT__FILTER__BRA__6__KET____DOT__tapk__DOT__product = 0U;
    } else {
        if (vlTOPp->i_ce) {
            vlTOPp->genericfir__DOT__FILTER__BRA__6__KET____DOT__tapk__DOT__product 
                = VL_MULS_III(32,32,32, VL_EXTENDS_II(32,16, 
                                                      vlTOPp->genericfir__DOT__tap
                                                      [9U]), 
                              VL_EXTENDS_II(32,16, 
                                            vlTOPp->genericfir__DOT__sample
                                            [6U]));
        }
    }
    vlTOPp->genericfir__DOT__result[6U] = vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__5__KET____DOT__tapk____pinNumber10;
    if (vlTOPp->i_reset) {
        vlTOPp->genericfir__DOT__FILTER__BRA__5__KET____DOT__tapk__DOT__product = 0U;
    } else {
        if (vlTOPp->i_ce) {
            vlTOPp->genericfir__DOT__FILTER__BRA__5__KET____DOT__tapk__DOT__product 
                = VL_MULS_III(32,32,32, VL_EXTENDS_II(32,16, 
                                                      vlTOPp->genericfir__DOT__tap
                                                      [0xaU]), 
                              VL_EXTENDS_II(32,16, 
                                            vlTOPp->genericfir__DOT__sample
                                            [5U]));
        }
    }
    vlTOPp->genericfir__DOT__result[5U] = vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__4__KET____DOT__tapk____pinNumber10;
    if (vlTOPp->i_reset) {
        vlTOPp->genericfir__DOT__FILTER__BRA__4__KET____DOT__tapk__DOT__product = 0U;
    } else {
        if (vlTOPp->i_ce) {
            vlTOPp->genericfir__DOT__FILTER__BRA__4__KET____DOT__tapk__DOT__product 
                = VL_MULS_III(32,32,32, VL_EXTENDS_II(32,16, 
                                                      vlTOPp->genericfir__DOT__tap
                                                      [0xbU]), 
                              VL_EXTENDS_II(32,16, 
                                            vlTOPp->genericfir__DOT__sample
                                            [4U]));
        }
    }
    vlTOPp->genericfir__DOT__result[4U] = vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__3__KET____DOT__tapk____pinNumber10;
    if (vlTOPp->i_reset) {
        vlTOPp->genericfir__DOT__FILTER__BRA__3__KET____DOT__tapk__DOT__product = 0U;
    } else {
        if (vlTOPp->i_ce) {
            vlTOPp->genericfir__DOT__FILTER__BRA__3__KET____DOT__tapk__DOT__product 
                = VL_MULS_III(32,32,32, VL_EXTENDS_II(32,16, 
                                                      vlTOPp->genericfir__DOT__tap
                                                      [0xcU]), 
                              VL_EXTENDS_II(32,16, 
                                            vlTOPp->genericfir__DOT__sample
                                            [3U]));
        }
    }
    vlTOPp->genericfir__DOT__result[3U] = vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__2__KET____DOT__tapk____pinNumber10;
    if (vlTOPp->i_reset) {
        vlTOPp->genericfir__DOT__FILTER__BRA__2__KET____DOT__tapk__DOT__product = 0U;
    } else {
        if (vlTOPp->i_ce) {
            vlTOPp->genericfir__DOT__FILTER__BRA__2__KET____DOT__tapk__DOT__product 
                = VL_MULS_III(32,32,32, VL_EXTENDS_II(32,16, 
                                                      vlTOPp->genericfir__DOT__tap
                                                      [0xdU]), 
                              VL_EXTENDS_II(32,16, 
                                            vlTOPp->genericfir__DOT__sample
                                            [2U]));
        }
    }
    vlTOPp->genericfir__DOT__result[2U] = vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__1__KET____DOT__tapk____pinNumber10;
    if (vlTOPp->i_reset) {
        vlTOPp->genericfir__DOT__FILTER__BRA__1__KET____DOT__tapk__DOT__product = 0U;
    } else {
        if (vlTOPp->i_ce) {
            vlTOPp->genericfir__DOT__FILTER__BRA__1__KET____DOT__tapk__DOT__product 
                = VL_MULS_III(32,32,32, VL_EXTENDS_II(32,16, 
                                                      vlTOPp->genericfir__DOT__tap
                                                      [0xeU]), 
                              VL_EXTENDS_II(32,16, 
                                            vlTOPp->genericfir__DOT__sample
                                            [1U]));
        }
    }
    vlTOPp->genericfir__DOT__result[1U] = vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__0__KET____DOT__tapk____pinNumber10;
    if (vlTOPp->i_reset) {
        vlTOPp->genericfir__DOT__FILTER__BRA__0__KET____DOT__tapk__DOT__product = 0U;
    } else {
        if (vlTOPp->i_ce) {
            vlTOPp->genericfir__DOT__FILTER__BRA__0__KET____DOT__tapk__DOT__product 
                = VL_MULS_III(32,32,32, VL_EXTENDS_II(32,16, 
                                                      vlTOPp->genericfir__DOT__tap
                                                      [0xfU]), 
                              VL_EXTENDS_II(32,16, 
                                            vlTOPp->genericfir__DOT__sample
                                            [0U]));
        }
    }
    vlTOPp->o_result = vlTOPp->genericfir__DOT__result
        [0x10U];
    vlTOPp->genericfir__DOT__sample[1U] = vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__0__KET____DOT__tapk____pinNumber8;
    vlTOPp->genericfir__DOT__sample[2U] = vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__1__KET____DOT__tapk____pinNumber8;
    vlTOPp->genericfir__DOT__sample[3U] = vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__2__KET____DOT__tapk____pinNumber8;
    vlTOPp->genericfir__DOT__sample[4U] = vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__3__KET____DOT__tapk____pinNumber8;
    vlTOPp->genericfir__DOT__sample[5U] = vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__4__KET____DOT__tapk____pinNumber8;
    vlTOPp->genericfir__DOT__sample[6U] = vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__5__KET____DOT__tapk____pinNumber8;
    vlTOPp->genericfir__DOT__sample[7U] = vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__6__KET____DOT__tapk____pinNumber8;
    vlTOPp->genericfir__DOT__sample[8U] = vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__7__KET____DOT__tapk____pinNumber8;
    vlTOPp->genericfir__DOT__sample[9U] = vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__8__KET____DOT__tapk____pinNumber8;
    vlTOPp->genericfir__DOT__sample[0xaU] = vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__9__KET____DOT__tapk____pinNumber8;
    vlTOPp->genericfir__DOT__sample[0xbU] = vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__10__KET____DOT__tapk____pinNumber8;
    vlTOPp->genericfir__DOT__sample[0xcU] = vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__11__KET____DOT__tapk____pinNumber8;
    vlTOPp->genericfir__DOT__sample[0xdU] = vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__12__KET____DOT__tapk____pinNumber8;
    vlTOPp->genericfir__DOT__sample[0xeU] = vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__13__KET____DOT__tapk____pinNumber8;
    vlTOPp->genericfir__DOT__sample[0xfU] = vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__14__KET____DOT__tapk____pinNumber8;
    vlTOPp->genericfir__DOT__sample[0x10U] = vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__15__KET____DOT__tapk____pinNumber8;
}

void Vgenericfir::_settle__TOP__3(Vgenericfir__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgenericfir::_settle__TOP__3\n"); );
    Vgenericfir* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->genericfir__DOT__result[0U] = VL_ULL(0);
    vlTOPp->genericfir__DOT__sample[0U] = vlTOPp->i_sample;
    vlTOPp->genericfir__DOT__sample[1U] = vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__0__KET____DOT__tapk____pinNumber8;
    vlTOPp->genericfir__DOT__sample[2U] = vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__1__KET____DOT__tapk____pinNumber8;
    vlTOPp->genericfir__DOT__sample[3U] = vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__2__KET____DOT__tapk____pinNumber8;
    vlTOPp->genericfir__DOT__sample[4U] = vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__3__KET____DOT__tapk____pinNumber8;
    vlTOPp->genericfir__DOT__sample[5U] = vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__4__KET____DOT__tapk____pinNumber8;
    vlTOPp->genericfir__DOT__sample[6U] = vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__5__KET____DOT__tapk____pinNumber8;
    vlTOPp->genericfir__DOT__sample[7U] = vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__6__KET____DOT__tapk____pinNumber8;
    vlTOPp->genericfir__DOT__sample[8U] = vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__7__KET____DOT__tapk____pinNumber8;
    vlTOPp->genericfir__DOT__sample[9U] = vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__8__KET____DOT__tapk____pinNumber8;
    vlTOPp->genericfir__DOT__sample[0xaU] = vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__9__KET____DOT__tapk____pinNumber8;
    vlTOPp->genericfir__DOT__sample[0xbU] = vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__10__KET____DOT__tapk____pinNumber8;
    vlTOPp->genericfir__DOT__sample[0xcU] = vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__11__KET____DOT__tapk____pinNumber8;
    vlTOPp->genericfir__DOT__sample[0xdU] = vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__12__KET____DOT__tapk____pinNumber8;
    vlTOPp->genericfir__DOT__sample[0xeU] = vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__13__KET____DOT__tapk____pinNumber8;
    vlTOPp->genericfir__DOT__sample[0xfU] = vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__14__KET____DOT__tapk____pinNumber8;
    vlTOPp->genericfir__DOT__sample[0x10U] = vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__15__KET____DOT__tapk____pinNumber8;
    vlTOPp->genericfir__DOT__result[1U] = vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__0__KET____DOT__tapk____pinNumber10;
    vlTOPp->genericfir__DOT__result[2U] = vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__1__KET____DOT__tapk____pinNumber10;
    vlTOPp->genericfir__DOT__result[3U] = vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__2__KET____DOT__tapk____pinNumber10;
    vlTOPp->genericfir__DOT__result[4U] = vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__3__KET____DOT__tapk____pinNumber10;
    vlTOPp->genericfir__DOT__result[5U] = vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__4__KET____DOT__tapk____pinNumber10;
    vlTOPp->genericfir__DOT__result[6U] = vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__5__KET____DOT__tapk____pinNumber10;
    vlTOPp->genericfir__DOT__result[7U] = vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__6__KET____DOT__tapk____pinNumber10;
    vlTOPp->genericfir__DOT__result[8U] = vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__7__KET____DOT__tapk____pinNumber10;
    vlTOPp->genericfir__DOT__result[9U] = vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__8__KET____DOT__tapk____pinNumber10;
    vlTOPp->genericfir__DOT__result[0xaU] = vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__9__KET____DOT__tapk____pinNumber10;
    vlTOPp->genericfir__DOT__result[0xbU] = vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__10__KET____DOT__tapk____pinNumber10;
    vlTOPp->genericfir__DOT__result[0xcU] = vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__11__KET____DOT__tapk____pinNumber10;
    vlTOPp->genericfir__DOT__result[0xdU] = vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__12__KET____DOT__tapk____pinNumber10;
    vlTOPp->genericfir__DOT__result[0xeU] = vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__13__KET____DOT__tapk____pinNumber10;
    vlTOPp->genericfir__DOT__result[0xfU] = vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__14__KET____DOT__tapk____pinNumber10;
    vlTOPp->genericfir__DOT__result[0x10U] = vlTOPp->genericfir__DOT____Vcellout__FILTER__BRA__15__KET____DOT__tapk____pinNumber10;
    vlTOPp->genericfir__DOT__tapout[0U] = vlTOPp->genericfir__DOT__tap
        [0xfU];
    vlTOPp->genericfir__DOT__tapout[1U] = vlTOPp->genericfir__DOT__tap
        [0xeU];
    vlTOPp->genericfir__DOT__tapout[2U] = vlTOPp->genericfir__DOT__tap
        [0xdU];
    vlTOPp->genericfir__DOT__tapout[3U] = vlTOPp->genericfir__DOT__tap
        [0xcU];
    vlTOPp->genericfir__DOT__tapout[4U] = vlTOPp->genericfir__DOT__tap
        [0xbU];
    vlTOPp->genericfir__DOT__tapout[5U] = vlTOPp->genericfir__DOT__tap
        [0xaU];
    vlTOPp->genericfir__DOT__tapout[6U] = vlTOPp->genericfir__DOT__tap
        [9U];
    vlTOPp->genericfir__DOT__tapout[7U] = vlTOPp->genericfir__DOT__tap
        [8U];
    vlTOPp->genericfir__DOT__tapout[8U] = vlTOPp->genericfir__DOT__tap
        [7U];
    vlTOPp->genericfir__DOT__tapout[9U] = vlTOPp->genericfir__DOT__tap
        [6U];
    vlTOPp->genericfir__DOT__tapout[0xaU] = vlTOPp->genericfir__DOT__tap
        [5U];
    vlTOPp->genericfir__DOT__tapout[0xbU] = vlTOPp->genericfir__DOT__tap
        [4U];
    vlTOPp->genericfir__DOT__tapout[0xcU] = vlTOPp->genericfir__DOT__tap
        [3U];
    vlTOPp->genericfir__DOT__tapout[0xdU] = vlTOPp->genericfir__DOT__tap
        [2U];
    vlTOPp->genericfir__DOT__tapout[0xeU] = vlTOPp->genericfir__DOT__tap
        [1U];
    vlTOPp->genericfir__DOT__tapout[0xfU] = vlTOPp->genericfir__DOT__tap
        [0U];
    vlTOPp->o_result = vlTOPp->genericfir__DOT__result
        [0x10U];
}

VL_INLINE_OPT void Vgenericfir::_combo__TOP__4(Vgenericfir__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgenericfir::_combo__TOP__4\n"); );
    Vgenericfir* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->genericfir__DOT__sample[0U] = vlTOPp->i_sample;
}

void Vgenericfir::_eval(Vgenericfir__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgenericfir::_eval\n"); );
    Vgenericfir* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->i_clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__i_clk)))) {
        vlTOPp->_sequent__TOP__2(vlSymsp);
        vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__4(vlSymsp);
    vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
    // Final
    vlTOPp->__Vclklast__TOP__i_clk = vlTOPp->i_clk;
}

void Vgenericfir::_eval_initial(Vgenericfir__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgenericfir::_eval_initial\n"); );
    Vgenericfir* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
    vlTOPp->__Vclklast__TOP__i_clk = vlTOPp->i_clk;
}

void Vgenericfir::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgenericfir::final\n"); );
    // Variables
    Vgenericfir__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vgenericfir* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vgenericfir::_eval_settle(Vgenericfir__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgenericfir::_eval_settle\n"); );
    Vgenericfir* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__3(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

VL_INLINE_OPT QData Vgenericfir::_change_request(Vgenericfir__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgenericfir::_change_request\n"); );
    Vgenericfir* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vgenericfir::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgenericfir::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((i_clk & 0xfeU))) {
        Verilated::overWidthError("i_clk");}
    if (VL_UNLIKELY((i_reset & 0xfeU))) {
        Verilated::overWidthError("i_reset");}
    if (VL_UNLIKELY((i_tap_wr & 0xfeU))) {
        Verilated::overWidthError("i_tap_wr");}
    if (VL_UNLIKELY((i_ce & 0xfeU))) {
        Verilated::overWidthError("i_ce");}
}
#endif  // VL_DEBUG

void Vgenericfir::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgenericfir::_ctor_var_reset\n"); );
    // Body
    i_clk = VL_RAND_RESET_I(1);
    i_reset = VL_RAND_RESET_I(1);
    i_tap_wr = VL_RAND_RESET_I(1);
    i_tap = VL_RAND_RESET_I(16);
    i_ce = VL_RAND_RESET_I(1);
    i_sample = VL_RAND_RESET_I(16);
    o_result = VL_RAND_RESET_Q(39);
    { int __Vi0=0; for (; __Vi0<17; ++__Vi0) {
            genericfir__DOT__tap[__Vi0] = VL_RAND_RESET_I(16);
    }}
    { int __Vi0=0; for (; __Vi0<17; ++__Vi0) {
            genericfir__DOT__tapout[__Vi0] = VL_RAND_RESET_I(16);
    }}
    { int __Vi0=0; for (; __Vi0<17; ++__Vi0) {
            genericfir__DOT__sample[__Vi0] = VL_RAND_RESET_I(16);
    }}
    { int __Vi0=0; for (; __Vi0<17; ++__Vi0) {
            genericfir__DOT__result[__Vi0] = VL_RAND_RESET_Q(39);
    }}
    genericfir__DOT____Vcellout__FILTER__BRA__0__KET____DOT__tapk____pinNumber10 = VL_RAND_RESET_Q(39);
    genericfir__DOT____Vcellout__FILTER__BRA__0__KET____DOT__tapk____pinNumber8 = VL_RAND_RESET_I(16);
    genericfir__DOT____Vcellout__FILTER__BRA__1__KET____DOT__tapk____pinNumber10 = VL_RAND_RESET_Q(39);
    genericfir__DOT____Vcellout__FILTER__BRA__1__KET____DOT__tapk____pinNumber8 = VL_RAND_RESET_I(16);
    genericfir__DOT____Vcellout__FILTER__BRA__2__KET____DOT__tapk____pinNumber10 = VL_RAND_RESET_Q(39);
    genericfir__DOT____Vcellout__FILTER__BRA__2__KET____DOT__tapk____pinNumber8 = VL_RAND_RESET_I(16);
    genericfir__DOT____Vcellout__FILTER__BRA__3__KET____DOT__tapk____pinNumber10 = VL_RAND_RESET_Q(39);
    genericfir__DOT____Vcellout__FILTER__BRA__3__KET____DOT__tapk____pinNumber8 = VL_RAND_RESET_I(16);
    genericfir__DOT____Vcellout__FILTER__BRA__4__KET____DOT__tapk____pinNumber10 = VL_RAND_RESET_Q(39);
    genericfir__DOT____Vcellout__FILTER__BRA__4__KET____DOT__tapk____pinNumber8 = VL_RAND_RESET_I(16);
    genericfir__DOT____Vcellout__FILTER__BRA__5__KET____DOT__tapk____pinNumber10 = VL_RAND_RESET_Q(39);
    genericfir__DOT____Vcellout__FILTER__BRA__5__KET____DOT__tapk____pinNumber8 = VL_RAND_RESET_I(16);
    genericfir__DOT____Vcellout__FILTER__BRA__6__KET____DOT__tapk____pinNumber10 = VL_RAND_RESET_Q(39);
    genericfir__DOT____Vcellout__FILTER__BRA__6__KET____DOT__tapk____pinNumber8 = VL_RAND_RESET_I(16);
    genericfir__DOT____Vcellout__FILTER__BRA__7__KET____DOT__tapk____pinNumber10 = VL_RAND_RESET_Q(39);
    genericfir__DOT____Vcellout__FILTER__BRA__7__KET____DOT__tapk____pinNumber8 = VL_RAND_RESET_I(16);
    genericfir__DOT____Vcellout__FILTER__BRA__8__KET____DOT__tapk____pinNumber10 = VL_RAND_RESET_Q(39);
    genericfir__DOT____Vcellout__FILTER__BRA__8__KET____DOT__tapk____pinNumber8 = VL_RAND_RESET_I(16);
    genericfir__DOT____Vcellout__FILTER__BRA__9__KET____DOT__tapk____pinNumber10 = VL_RAND_RESET_Q(39);
    genericfir__DOT____Vcellout__FILTER__BRA__9__KET____DOT__tapk____pinNumber8 = VL_RAND_RESET_I(16);
    genericfir__DOT____Vcellout__FILTER__BRA__10__KET____DOT__tapk____pinNumber10 = VL_RAND_RESET_Q(39);
    genericfir__DOT____Vcellout__FILTER__BRA__10__KET____DOT__tapk____pinNumber8 = VL_RAND_RESET_I(16);
    genericfir__DOT____Vcellout__FILTER__BRA__11__KET____DOT__tapk____pinNumber10 = VL_RAND_RESET_Q(39);
    genericfir__DOT____Vcellout__FILTER__BRA__11__KET____DOT__tapk____pinNumber8 = VL_RAND_RESET_I(16);
    genericfir__DOT____Vcellout__FILTER__BRA__12__KET____DOT__tapk____pinNumber10 = VL_RAND_RESET_Q(39);
    genericfir__DOT____Vcellout__FILTER__BRA__12__KET____DOT__tapk____pinNumber8 = VL_RAND_RESET_I(16);
    genericfir__DOT____Vcellout__FILTER__BRA__13__KET____DOT__tapk____pinNumber10 = VL_RAND_RESET_Q(39);
    genericfir__DOT____Vcellout__FILTER__BRA__13__KET____DOT__tapk____pinNumber8 = VL_RAND_RESET_I(16);
    genericfir__DOT____Vcellout__FILTER__BRA__14__KET____DOT__tapk____pinNumber10 = VL_RAND_RESET_Q(39);
    genericfir__DOT____Vcellout__FILTER__BRA__14__KET____DOT__tapk____pinNumber8 = VL_RAND_RESET_I(16);
    genericfir__DOT____Vcellout__FILTER__BRA__15__KET____DOT__tapk____pinNumber10 = VL_RAND_RESET_Q(39);
    genericfir__DOT____Vcellout__FILTER__BRA__15__KET____DOT__tapk____pinNumber8 = VL_RAND_RESET_I(16);
    genericfir__DOT__FILTER__BRA__0__KET____DOT__tapk__DOT__delayed_sample = VL_RAND_RESET_I(16);
    genericfir__DOT__FILTER__BRA__0__KET____DOT__tapk__DOT__product = VL_RAND_RESET_I(32);
    genericfir__DOT__FILTER__BRA__1__KET____DOT__tapk__DOT__delayed_sample = VL_RAND_RESET_I(16);
    genericfir__DOT__FILTER__BRA__1__KET____DOT__tapk__DOT__product = VL_RAND_RESET_I(32);
    genericfir__DOT__FILTER__BRA__2__KET____DOT__tapk__DOT__delayed_sample = VL_RAND_RESET_I(16);
    genericfir__DOT__FILTER__BRA__2__KET____DOT__tapk__DOT__product = VL_RAND_RESET_I(32);
    genericfir__DOT__FILTER__BRA__3__KET____DOT__tapk__DOT__delayed_sample = VL_RAND_RESET_I(16);
    genericfir__DOT__FILTER__BRA__3__KET____DOT__tapk__DOT__product = VL_RAND_RESET_I(32);
    genericfir__DOT__FILTER__BRA__4__KET____DOT__tapk__DOT__delayed_sample = VL_RAND_RESET_I(16);
    genericfir__DOT__FILTER__BRA__4__KET____DOT__tapk__DOT__product = VL_RAND_RESET_I(32);
    genericfir__DOT__FILTER__BRA__5__KET____DOT__tapk__DOT__delayed_sample = VL_RAND_RESET_I(16);
    genericfir__DOT__FILTER__BRA__5__KET____DOT__tapk__DOT__product = VL_RAND_RESET_I(32);
    genericfir__DOT__FILTER__BRA__6__KET____DOT__tapk__DOT__delayed_sample = VL_RAND_RESET_I(16);
    genericfir__DOT__FILTER__BRA__6__KET____DOT__tapk__DOT__product = VL_RAND_RESET_I(32);
    genericfir__DOT__FILTER__BRA__7__KET____DOT__tapk__DOT__delayed_sample = VL_RAND_RESET_I(16);
    genericfir__DOT__FILTER__BRA__7__KET____DOT__tapk__DOT__product = VL_RAND_RESET_I(32);
    genericfir__DOT__FILTER__BRA__8__KET____DOT__tapk__DOT__delayed_sample = VL_RAND_RESET_I(16);
    genericfir__DOT__FILTER__BRA__8__KET____DOT__tapk__DOT__product = VL_RAND_RESET_I(32);
    genericfir__DOT__FILTER__BRA__9__KET____DOT__tapk__DOT__delayed_sample = VL_RAND_RESET_I(16);
    genericfir__DOT__FILTER__BRA__9__KET____DOT__tapk__DOT__product = VL_RAND_RESET_I(32);
    genericfir__DOT__FILTER__BRA__10__KET____DOT__tapk__DOT__delayed_sample = VL_RAND_RESET_I(16);
    genericfir__DOT__FILTER__BRA__10__KET____DOT__tapk__DOT__product = VL_RAND_RESET_I(32);
    genericfir__DOT__FILTER__BRA__11__KET____DOT__tapk__DOT__delayed_sample = VL_RAND_RESET_I(16);
    genericfir__DOT__FILTER__BRA__11__KET____DOT__tapk__DOT__product = VL_RAND_RESET_I(32);
    genericfir__DOT__FILTER__BRA__12__KET____DOT__tapk__DOT__delayed_sample = VL_RAND_RESET_I(16);
    genericfir__DOT__FILTER__BRA__12__KET____DOT__tapk__DOT__product = VL_RAND_RESET_I(32);
    genericfir__DOT__FILTER__BRA__13__KET____DOT__tapk__DOT__delayed_sample = VL_RAND_RESET_I(16);
    genericfir__DOT__FILTER__BRA__13__KET____DOT__tapk__DOT__product = VL_RAND_RESET_I(32);
    genericfir__DOT__FILTER__BRA__14__KET____DOT__tapk__DOT__delayed_sample = VL_RAND_RESET_I(16);
    genericfir__DOT__FILTER__BRA__14__KET____DOT__tapk__DOT__product = VL_RAND_RESET_I(32);
    genericfir__DOT__FILTER__BRA__15__KET____DOT__tapk__DOT__delayed_sample = VL_RAND_RESET_I(16);
    genericfir__DOT__FILTER__BRA__15__KET____DOT__tapk__DOT__product = VL_RAND_RESET_I(32);
    __Vm_traceActivity = 0;
}
