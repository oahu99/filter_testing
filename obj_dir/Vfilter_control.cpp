// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfilter_control.h for the primary calling header

#include "Vfilter_control.h"
#include "Vfilter_control__Syms.h"


//--------------------
CData/*4:0*/ Vfilter_control::__Vtable1_filter_control__DOT__i_idx[64];
CData/*4:0*/ Vfilter_control::__Vtable1_filter_control__DOT__next_state[64];
CData/*0:0*/ Vfilter_control::__Vtable1_filter_control__DOT__i_tap_wr[64];

VL_CTOR_IMP(Vfilter_control) {
    Vfilter_control__Syms* __restrict vlSymsp = __VlSymsp = new Vfilter_control__Syms(this, name());
    Vfilter_control* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vfilter_control::__Vconfigure(Vfilter_control__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vfilter_control::~Vfilter_control() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void Vfilter_control::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vfilter_control::eval\n"); );
    Vfilter_control__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vfilter_control* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("filter_control.sv", 1, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vfilter_control::_eval_initial_loop(Vfilter_control__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("filter_control.sv", 1, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

//--------------------
// Internal Methods

void Vfilter_control::_initial__TOP__1(Vfilter_control__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfilter_control::_initial__TOP__1\n"); );
    Vfilter_control* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__0__KET____DOT__tapk____pinNumber8 = 0U;
    vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__1__KET____DOT__tapk____pinNumber8 = 0U;
    vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__2__KET____DOT__tapk____pinNumber8 = 0U;
    vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__3__KET____DOT__tapk____pinNumber8 = 0U;
    vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__4__KET____DOT__tapk____pinNumber8 = 0U;
    vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__5__KET____DOT__tapk____pinNumber8 = 0U;
    vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__6__KET____DOT__tapk____pinNumber8 = 0U;
    vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__7__KET____DOT__tapk____pinNumber8 = 0U;
    vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__8__KET____DOT__tapk____pinNumber8 = 0U;
    vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__9__KET____DOT__tapk____pinNumber8 = 0U;
    vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__10__KET____DOT__tapk____pinNumber8 = 0U;
    vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__11__KET____DOT__tapk____pinNumber8 = 0U;
    vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__12__KET____DOT__tapk____pinNumber8 = 0U;
    vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__13__KET____DOT__tapk____pinNumber8 = 0U;
    vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__14__KET____DOT__tapk____pinNumber8 = 0U;
    vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__15__KET____DOT__tapk____pinNumber8 = 0U;
    vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__0__KET____DOT__tapk____pinNumber10 = VL_ULL(0);
    vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__1__KET____DOT__tapk____pinNumber10 = VL_ULL(0);
    vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__2__KET____DOT__tapk____pinNumber10 = VL_ULL(0);
    vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__3__KET____DOT__tapk____pinNumber10 = VL_ULL(0);
    vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__4__KET____DOT__tapk____pinNumber10 = VL_ULL(0);
    vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__5__KET____DOT__tapk____pinNumber10 = VL_ULL(0);
    vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__6__KET____DOT__tapk____pinNumber10 = VL_ULL(0);
    vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__7__KET____DOT__tapk____pinNumber10 = VL_ULL(0);
    vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__8__KET____DOT__tapk____pinNumber10 = VL_ULL(0);
    vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__9__KET____DOT__tapk____pinNumber10 = VL_ULL(0);
    vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__10__KET____DOT__tapk____pinNumber10 = VL_ULL(0);
    vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__11__KET____DOT__tapk____pinNumber10 = VL_ULL(0);
    vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__12__KET____DOT__tapk____pinNumber10 = VL_ULL(0);
    vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__13__KET____DOT__tapk____pinNumber10 = VL_ULL(0);
    vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__14__KET____DOT__tapk____pinNumber10 = VL_ULL(0);
    vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__15__KET____DOT__tapk____pinNumber10 = VL_ULL(0);
    vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__0__KET____DOT__tapk__DOT__delayed_sample = 0U;
    vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__1__KET____DOT__tapk__DOT__delayed_sample = 0U;
    vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__2__KET____DOT__tapk__DOT__delayed_sample = 0U;
    vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__3__KET____DOT__tapk__DOT__delayed_sample = 0U;
    vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__4__KET____DOT__tapk__DOT__delayed_sample = 0U;
    vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__5__KET____DOT__tapk__DOT__delayed_sample = 0U;
    vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__6__KET____DOT__tapk__DOT__delayed_sample = 0U;
    vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__7__KET____DOT__tapk__DOT__delayed_sample = 0U;
    vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__8__KET____DOT__tapk__DOT__delayed_sample = 0U;
    vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__9__KET____DOT__tapk__DOT__delayed_sample = 0U;
    vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__10__KET____DOT__tapk__DOT__delayed_sample = 0U;
    vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__11__KET____DOT__tapk__DOT__delayed_sample = 0U;
    vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__12__KET____DOT__tapk__DOT__delayed_sample = 0U;
    vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__13__KET____DOT__tapk__DOT__delayed_sample = 0U;
    vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__14__KET____DOT__tapk__DOT__delayed_sample = 0U;
    vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__15__KET____DOT__tapk__DOT__delayed_sample = 0U;
    vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__0__KET____DOT__tapk__DOT__genblk2__DOT__tap = 0U;
    vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__1__KET____DOT__tapk__DOT__genblk2__DOT__tap = 0U;
    vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__2__KET____DOT__tapk__DOT__genblk2__DOT__tap = 0U;
    vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__3__KET____DOT__tapk__DOT__genblk2__DOT__tap = 0U;
    vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__4__KET____DOT__tapk__DOT__genblk2__DOT__tap = 0U;
    vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__5__KET____DOT__tapk__DOT__genblk2__DOT__tap = 0U;
    vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__6__KET____DOT__tapk__DOT__genblk2__DOT__tap = 0U;
    vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__7__KET____DOT__tapk__DOT__genblk2__DOT__tap = 0U;
    vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__8__KET____DOT__tapk__DOT__genblk2__DOT__tap = 0U;
    vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__9__KET____DOT__tapk__DOT__genblk2__DOT__tap = 0U;
    vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__10__KET____DOT__tapk__DOT__genblk2__DOT__tap = 0U;
    vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__11__KET____DOT__tapk__DOT__genblk2__DOT__tap = 0U;
    vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__12__KET____DOT__tapk__DOT__genblk2__DOT__tap = 0U;
    vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__13__KET____DOT__tapk__DOT__genblk2__DOT__tap = 0U;
    vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__14__KET____DOT__tapk__DOT__genblk2__DOT__tap = 0U;
    vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__15__KET____DOT__tapk__DOT__genblk2__DOT__tap = 0U;
}

VL_INLINE_OPT void Vfilter_control::_sequent__TOP__2(Vfilter_control__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfilter_control::_sequent__TOP__2\n"); );
    Vfilter_control* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->filter_control__DOT__state = ((IData)(vlTOPp->i_reset)
                                           ? (IData)(vlTOPp->filter_control__DOT__next_state)
                                           : 0U);
    if (vlTOPp->i_reset) {
        if (vlTOPp->i_ce) {
            vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__15__KET____DOT__tapk____pinNumber8 
                = vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__15__KET____DOT__tapk__DOT__delayed_sample;
        }
    } else {
        vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__15__KET____DOT__tapk____pinNumber8 = 0U;
    }
    if (vlTOPp->i_reset) {
        if (vlTOPp->i_ce) {
            vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__14__KET____DOT__tapk____pinNumber8 
                = vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__14__KET____DOT__tapk__DOT__delayed_sample;
        }
    } else {
        vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__14__KET____DOT__tapk____pinNumber8 = 0U;
    }
    if (vlTOPp->i_reset) {
        if (vlTOPp->i_ce) {
            vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__13__KET____DOT__tapk____pinNumber8 
                = vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__13__KET____DOT__tapk__DOT__delayed_sample;
        }
    } else {
        vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__13__KET____DOT__tapk____pinNumber8 = 0U;
    }
    if (vlTOPp->i_reset) {
        if (vlTOPp->i_ce) {
            vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__12__KET____DOT__tapk____pinNumber8 
                = vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__12__KET____DOT__tapk__DOT__delayed_sample;
        }
    } else {
        vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__12__KET____DOT__tapk____pinNumber8 = 0U;
    }
    if (vlTOPp->i_reset) {
        if (vlTOPp->i_ce) {
            vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__11__KET____DOT__tapk____pinNumber8 
                = vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__11__KET____DOT__tapk__DOT__delayed_sample;
        }
    } else {
        vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__11__KET____DOT__tapk____pinNumber8 = 0U;
    }
    if (vlTOPp->i_reset) {
        if (vlTOPp->i_ce) {
            vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__10__KET____DOT__tapk____pinNumber8 
                = vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__10__KET____DOT__tapk__DOT__delayed_sample;
        }
    } else {
        vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__10__KET____DOT__tapk____pinNumber8 = 0U;
    }
    if (vlTOPp->i_reset) {
        if (vlTOPp->i_ce) {
            vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__9__KET____DOT__tapk____pinNumber8 
                = vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__9__KET____DOT__tapk__DOT__delayed_sample;
        }
    } else {
        vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__9__KET____DOT__tapk____pinNumber8 = 0U;
    }
    if (vlTOPp->i_reset) {
        if (vlTOPp->i_ce) {
            vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__8__KET____DOT__tapk____pinNumber8 
                = vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__8__KET____DOT__tapk__DOT__delayed_sample;
        }
    } else {
        vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__8__KET____DOT__tapk____pinNumber8 = 0U;
    }
    if (vlTOPp->i_reset) {
        if (vlTOPp->i_ce) {
            vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__7__KET____DOT__tapk____pinNumber8 
                = vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__7__KET____DOT__tapk__DOT__delayed_sample;
        }
    } else {
        vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__7__KET____DOT__tapk____pinNumber8 = 0U;
    }
    if (vlTOPp->i_reset) {
        if (vlTOPp->i_ce) {
            vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__6__KET____DOT__tapk____pinNumber8 
                = vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__6__KET____DOT__tapk__DOT__delayed_sample;
        }
    } else {
        vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__6__KET____DOT__tapk____pinNumber8 = 0U;
    }
    if (vlTOPp->i_reset) {
        if (vlTOPp->i_ce) {
            vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__5__KET____DOT__tapk____pinNumber8 
                = vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__5__KET____DOT__tapk__DOT__delayed_sample;
        }
    } else {
        vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__5__KET____DOT__tapk____pinNumber8 = 0U;
    }
    if (vlTOPp->i_reset) {
        if (vlTOPp->i_ce) {
            vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__4__KET____DOT__tapk____pinNumber8 
                = vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__4__KET____DOT__tapk__DOT__delayed_sample;
        }
    } else {
        vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__4__KET____DOT__tapk____pinNumber8 = 0U;
    }
    if (vlTOPp->i_reset) {
        if (vlTOPp->i_ce) {
            vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__3__KET____DOT__tapk____pinNumber8 
                = vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__3__KET____DOT__tapk__DOT__delayed_sample;
        }
    } else {
        vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__3__KET____DOT__tapk____pinNumber8 = 0U;
    }
    if (vlTOPp->i_reset) {
        if (vlTOPp->i_ce) {
            vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__2__KET____DOT__tapk____pinNumber8 
                = vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__2__KET____DOT__tapk__DOT__delayed_sample;
        }
    } else {
        vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__2__KET____DOT__tapk____pinNumber8 = 0U;
    }
    if (vlTOPp->i_reset) {
        if (vlTOPp->i_ce) {
            vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__1__KET____DOT__tapk____pinNumber8 
                = vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__1__KET____DOT__tapk__DOT__delayed_sample;
        }
    } else {
        vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__1__KET____DOT__tapk____pinNumber8 = 0U;
    }
    if (vlTOPp->i_reset) {
        if (vlTOPp->i_ce) {
            vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__0__KET____DOT__tapk____pinNumber8 
                = vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__0__KET____DOT__tapk__DOT__delayed_sample;
        }
    } else {
        vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__0__KET____DOT__tapk____pinNumber8 = 0U;
    }
    if (vlTOPp->i_reset) {
        if (vlTOPp->i_ce) {
            vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__15__KET____DOT__tapk____pinNumber10 
                = (VL_ULL(0x7fffffffff) & (vlTOPp->filter_control__DOT__filter_0__DOT__result
                                           [0xfU] + 
                                           (((QData)((IData)(
                                                             (0x7fU 
                                                              & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__15__KET____DOT__tapk__DOT__product 
                                                                                >> 0x1fU))))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__15__KET____DOT__tapk__DOT__product)))));
        }
    } else {
        vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__15__KET____DOT__tapk____pinNumber10 = VL_ULL(0);
    }
    if (vlTOPp->i_reset) {
        if (vlTOPp->i_ce) {
            vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__14__KET____DOT__tapk____pinNumber10 
                = (VL_ULL(0x7fffffffff) & (vlTOPp->filter_control__DOT__filter_0__DOT__result
                                           [0xeU] + 
                                           (((QData)((IData)(
                                                             (0x7fU 
                                                              & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__14__KET____DOT__tapk__DOT__product 
                                                                                >> 0x1fU))))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__14__KET____DOT__tapk__DOT__product)))));
        }
    } else {
        vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__14__KET____DOT__tapk____pinNumber10 = VL_ULL(0);
    }
    if (vlTOPp->i_reset) {
        if (vlTOPp->i_ce) {
            vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__13__KET____DOT__tapk____pinNumber10 
                = (VL_ULL(0x7fffffffff) & (vlTOPp->filter_control__DOT__filter_0__DOT__result
                                           [0xdU] + 
                                           (((QData)((IData)(
                                                             (0x7fU 
                                                              & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__13__KET____DOT__tapk__DOT__product 
                                                                                >> 0x1fU))))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__13__KET____DOT__tapk__DOT__product)))));
        }
    } else {
        vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__13__KET____DOT__tapk____pinNumber10 = VL_ULL(0);
    }
    if (vlTOPp->i_reset) {
        if (vlTOPp->i_ce) {
            vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__12__KET____DOT__tapk____pinNumber10 
                = (VL_ULL(0x7fffffffff) & (vlTOPp->filter_control__DOT__filter_0__DOT__result
                                           [0xcU] + 
                                           (((QData)((IData)(
                                                             (0x7fU 
                                                              & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__12__KET____DOT__tapk__DOT__product 
                                                                                >> 0x1fU))))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__12__KET____DOT__tapk__DOT__product)))));
        }
    } else {
        vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__12__KET____DOT__tapk____pinNumber10 = VL_ULL(0);
    }
    if (vlTOPp->i_reset) {
        if (vlTOPp->i_ce) {
            vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__11__KET____DOT__tapk____pinNumber10 
                = (VL_ULL(0x7fffffffff) & (vlTOPp->filter_control__DOT__filter_0__DOT__result
                                           [0xbU] + 
                                           (((QData)((IData)(
                                                             (0x7fU 
                                                              & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__11__KET____DOT__tapk__DOT__product 
                                                                                >> 0x1fU))))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__11__KET____DOT__tapk__DOT__product)))));
        }
    } else {
        vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__11__KET____DOT__tapk____pinNumber10 = VL_ULL(0);
    }
    if (vlTOPp->i_reset) {
        if (vlTOPp->i_ce) {
            vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__10__KET____DOT__tapk____pinNumber10 
                = (VL_ULL(0x7fffffffff) & (vlTOPp->filter_control__DOT__filter_0__DOT__result
                                           [0xaU] + 
                                           (((QData)((IData)(
                                                             (0x7fU 
                                                              & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__10__KET____DOT__tapk__DOT__product 
                                                                                >> 0x1fU))))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__10__KET____DOT__tapk__DOT__product)))));
        }
    } else {
        vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__10__KET____DOT__tapk____pinNumber10 = VL_ULL(0);
    }
    if (vlTOPp->i_reset) {
        if (vlTOPp->i_ce) {
            vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__9__KET____DOT__tapk____pinNumber10 
                = (VL_ULL(0x7fffffffff) & (vlTOPp->filter_control__DOT__filter_0__DOT__result
                                           [9U] + (
                                                   ((QData)((IData)(
                                                                    (0x7fU 
                                                                     & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__9__KET____DOT__tapk__DOT__product 
                                                                                >> 0x1fU))))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__9__KET____DOT__tapk__DOT__product)))));
        }
    } else {
        vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__9__KET____DOT__tapk____pinNumber10 = VL_ULL(0);
    }
    if (vlTOPp->i_reset) {
        if (vlTOPp->i_ce) {
            vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__8__KET____DOT__tapk____pinNumber10 
                = (VL_ULL(0x7fffffffff) & (vlTOPp->filter_control__DOT__filter_0__DOT__result
                                           [8U] + (
                                                   ((QData)((IData)(
                                                                    (0x7fU 
                                                                     & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__8__KET____DOT__tapk__DOT__product 
                                                                                >> 0x1fU))))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__8__KET____DOT__tapk__DOT__product)))));
        }
    } else {
        vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__8__KET____DOT__tapk____pinNumber10 = VL_ULL(0);
    }
    if (vlTOPp->i_reset) {
        if (vlTOPp->i_ce) {
            vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__7__KET____DOT__tapk____pinNumber10 
                = (VL_ULL(0x7fffffffff) & (vlTOPp->filter_control__DOT__filter_0__DOT__result
                                           [7U] + (
                                                   ((QData)((IData)(
                                                                    (0x7fU 
                                                                     & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__7__KET____DOT__tapk__DOT__product 
                                                                                >> 0x1fU))))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__7__KET____DOT__tapk__DOT__product)))));
        }
    } else {
        vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__7__KET____DOT__tapk____pinNumber10 = VL_ULL(0);
    }
    if (vlTOPp->i_reset) {
        if (vlTOPp->i_ce) {
            vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__6__KET____DOT__tapk____pinNumber10 
                = (VL_ULL(0x7fffffffff) & (vlTOPp->filter_control__DOT__filter_0__DOT__result
                                           [6U] + (
                                                   ((QData)((IData)(
                                                                    (0x7fU 
                                                                     & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__6__KET____DOT__tapk__DOT__product 
                                                                                >> 0x1fU))))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__6__KET____DOT__tapk__DOT__product)))));
        }
    } else {
        vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__6__KET____DOT__tapk____pinNumber10 = VL_ULL(0);
    }
    if (vlTOPp->i_reset) {
        if (vlTOPp->i_ce) {
            vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__5__KET____DOT__tapk____pinNumber10 
                = (VL_ULL(0x7fffffffff) & (vlTOPp->filter_control__DOT__filter_0__DOT__result
                                           [5U] + (
                                                   ((QData)((IData)(
                                                                    (0x7fU 
                                                                     & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__5__KET____DOT__tapk__DOT__product 
                                                                                >> 0x1fU))))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__5__KET____DOT__tapk__DOT__product)))));
        }
    } else {
        vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__5__KET____DOT__tapk____pinNumber10 = VL_ULL(0);
    }
    if (vlTOPp->i_reset) {
        if (vlTOPp->i_ce) {
            vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__4__KET____DOT__tapk____pinNumber10 
                = (VL_ULL(0x7fffffffff) & (vlTOPp->filter_control__DOT__filter_0__DOT__result
                                           [4U] + (
                                                   ((QData)((IData)(
                                                                    (0x7fU 
                                                                     & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__4__KET____DOT__tapk__DOT__product 
                                                                                >> 0x1fU))))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__4__KET____DOT__tapk__DOT__product)))));
        }
    } else {
        vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__4__KET____DOT__tapk____pinNumber10 = VL_ULL(0);
    }
    if (vlTOPp->i_reset) {
        if (vlTOPp->i_ce) {
            vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__3__KET____DOT__tapk____pinNumber10 
                = (VL_ULL(0x7fffffffff) & (vlTOPp->filter_control__DOT__filter_0__DOT__result
                                           [3U] + (
                                                   ((QData)((IData)(
                                                                    (0x7fU 
                                                                     & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__3__KET____DOT__tapk__DOT__product 
                                                                                >> 0x1fU))))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__3__KET____DOT__tapk__DOT__product)))));
        }
    } else {
        vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__3__KET____DOT__tapk____pinNumber10 = VL_ULL(0);
    }
    if (vlTOPp->i_reset) {
        if (vlTOPp->i_ce) {
            vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__2__KET____DOT__tapk____pinNumber10 
                = (VL_ULL(0x7fffffffff) & (vlTOPp->filter_control__DOT__filter_0__DOT__result
                                           [2U] + (
                                                   ((QData)((IData)(
                                                                    (0x7fU 
                                                                     & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__2__KET____DOT__tapk__DOT__product 
                                                                                >> 0x1fU))))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__2__KET____DOT__tapk__DOT__product)))));
        }
    } else {
        vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__2__KET____DOT__tapk____pinNumber10 = VL_ULL(0);
    }
    if (vlTOPp->i_reset) {
        if (vlTOPp->i_ce) {
            vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__1__KET____DOT__tapk____pinNumber10 
                = (VL_ULL(0x7fffffffff) & (vlTOPp->filter_control__DOT__filter_0__DOT__result
                                           [1U] + (
                                                   ((QData)((IData)(
                                                                    (0x7fU 
                                                                     & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__1__KET____DOT__tapk__DOT__product 
                                                                                >> 0x1fU))))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__1__KET____DOT__tapk__DOT__product)))));
        }
    } else {
        vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__1__KET____DOT__tapk____pinNumber10 = VL_ULL(0);
    }
    if (vlTOPp->i_reset) {
        if (vlTOPp->i_ce) {
            vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__0__KET____DOT__tapk____pinNumber10 
                = (VL_ULL(0x7fffffffff) & (vlTOPp->filter_control__DOT__filter_0__DOT__result
                                           [0U] + (
                                                   ((QData)((IData)(
                                                                    (0x7fU 
                                                                     & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__0__KET____DOT__tapk__DOT__product 
                                                                                >> 0x1fU))))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__0__KET____DOT__tapk__DOT__product)))));
        }
    } else {
        vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__0__KET____DOT__tapk____pinNumber10 = VL_ULL(0);
    }
    if (vlTOPp->i_reset) {
        if (vlTOPp->i_ce) {
            vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__15__KET____DOT__tapk__DOT__delayed_sample 
                = vlTOPp->filter_control__DOT__filter_0__DOT__sample
                [0xfU];
        }
    } else {
        vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__15__KET____DOT__tapk__DOT__delayed_sample = 0U;
    }
    if (vlTOPp->i_reset) {
        if (vlTOPp->i_ce) {
            vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__14__KET____DOT__tapk__DOT__delayed_sample 
                = vlTOPp->filter_control__DOT__filter_0__DOT__sample
                [0xeU];
        }
    } else {
        vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__14__KET____DOT__tapk__DOT__delayed_sample = 0U;
    }
    if (vlTOPp->i_reset) {
        if (vlTOPp->i_ce) {
            vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__13__KET____DOT__tapk__DOT__delayed_sample 
                = vlTOPp->filter_control__DOT__filter_0__DOT__sample
                [0xdU];
        }
    } else {
        vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__13__KET____DOT__tapk__DOT__delayed_sample = 0U;
    }
    if (vlTOPp->i_reset) {
        if (vlTOPp->i_ce) {
            vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__12__KET____DOT__tapk__DOT__delayed_sample 
                = vlTOPp->filter_control__DOT__filter_0__DOT__sample
                [0xcU];
        }
    } else {
        vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__12__KET____DOT__tapk__DOT__delayed_sample = 0U;
    }
    if (vlTOPp->i_reset) {
        if (vlTOPp->i_ce) {
            vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__11__KET____DOT__tapk__DOT__delayed_sample 
                = vlTOPp->filter_control__DOT__filter_0__DOT__sample
                [0xbU];
        }
    } else {
        vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__11__KET____DOT__tapk__DOT__delayed_sample = 0U;
    }
    if (vlTOPp->i_reset) {
        if (vlTOPp->i_ce) {
            vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__10__KET____DOT__tapk__DOT__delayed_sample 
                = vlTOPp->filter_control__DOT__filter_0__DOT__sample
                [0xaU];
        }
    } else {
        vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__10__KET____DOT__tapk__DOT__delayed_sample = 0U;
    }
    if (vlTOPp->i_reset) {
        if (vlTOPp->i_ce) {
            vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__9__KET____DOT__tapk__DOT__delayed_sample 
                = vlTOPp->filter_control__DOT__filter_0__DOT__sample
                [9U];
        }
    } else {
        vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__9__KET____DOT__tapk__DOT__delayed_sample = 0U;
    }
    if (vlTOPp->i_reset) {
        if (vlTOPp->i_ce) {
            vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__8__KET____DOT__tapk__DOT__delayed_sample 
                = vlTOPp->filter_control__DOT__filter_0__DOT__sample
                [8U];
        }
    } else {
        vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__8__KET____DOT__tapk__DOT__delayed_sample = 0U;
    }
    if (vlTOPp->i_reset) {
        if (vlTOPp->i_ce) {
            vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__7__KET____DOT__tapk__DOT__delayed_sample 
                = vlTOPp->filter_control__DOT__filter_0__DOT__sample
                [7U];
        }
    } else {
        vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__7__KET____DOT__tapk__DOT__delayed_sample = 0U;
    }
    if (vlTOPp->i_reset) {
        if (vlTOPp->i_ce) {
            vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__6__KET____DOT__tapk__DOT__delayed_sample 
                = vlTOPp->filter_control__DOT__filter_0__DOT__sample
                [6U];
        }
    } else {
        vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__6__KET____DOT__tapk__DOT__delayed_sample = 0U;
    }
    if (vlTOPp->i_reset) {
        if (vlTOPp->i_ce) {
            vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__5__KET____DOT__tapk__DOT__delayed_sample 
                = vlTOPp->filter_control__DOT__filter_0__DOT__sample
                [5U];
        }
    } else {
        vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__5__KET____DOT__tapk__DOT__delayed_sample = 0U;
    }
    if (vlTOPp->i_reset) {
        if (vlTOPp->i_ce) {
            vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__4__KET____DOT__tapk__DOT__delayed_sample 
                = vlTOPp->filter_control__DOT__filter_0__DOT__sample
                [4U];
        }
    } else {
        vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__4__KET____DOT__tapk__DOT__delayed_sample = 0U;
    }
    if (vlTOPp->i_reset) {
        if (vlTOPp->i_ce) {
            vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__3__KET____DOT__tapk__DOT__delayed_sample 
                = vlTOPp->filter_control__DOT__filter_0__DOT__sample
                [3U];
        }
    } else {
        vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__3__KET____DOT__tapk__DOT__delayed_sample = 0U;
    }
    if (vlTOPp->i_reset) {
        if (vlTOPp->i_ce) {
            vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__2__KET____DOT__tapk__DOT__delayed_sample 
                = vlTOPp->filter_control__DOT__filter_0__DOT__sample
                [2U];
        }
    } else {
        vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__2__KET____DOT__tapk__DOT__delayed_sample = 0U;
    }
    if (vlTOPp->i_reset) {
        if (vlTOPp->i_ce) {
            vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__1__KET____DOT__tapk__DOT__delayed_sample 
                = vlTOPp->filter_control__DOT__filter_0__DOT__sample
                [1U];
        }
    } else {
        vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__1__KET____DOT__tapk__DOT__delayed_sample = 0U;
    }
    if (vlTOPp->i_reset) {
        if (vlTOPp->i_ce) {
            vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__0__KET____DOT__tapk__DOT__delayed_sample 
                = vlTOPp->filter_control__DOT__filter_0__DOT__sample
                [0U];
        }
    } else {
        vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__0__KET____DOT__tapk__DOT__delayed_sample = 0U;
    }
    vlTOPp->filter_control__DOT__filter_0__DOT__result[0x10U] 
        = vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__15__KET____DOT__tapk____pinNumber10;
    if (vlTOPp->i_reset) {
        if (vlTOPp->i_ce) {
            vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__15__KET____DOT__tapk__DOT__product 
                = VL_MULS_III(32,32,32, VL_EXTENDS_II(32,16, (IData)(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__15__KET____DOT__tapk__DOT__genblk2__DOT__tap)), 
                              VL_EXTENDS_II(32,16, 
                                            vlTOPp->filter_control__DOT__filter_0__DOT__sample
                                            [0xfU]));
        }
    } else {
        vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__15__KET____DOT__tapk__DOT__product = 0U;
    }
    vlTOPp->filter_control__DOT__filter_0__DOT__result[0xfU] 
        = vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__14__KET____DOT__tapk____pinNumber10;
    if (vlTOPp->i_reset) {
        if (vlTOPp->i_ce) {
            vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__14__KET____DOT__tapk__DOT__product 
                = VL_MULS_III(32,32,32, VL_EXTENDS_II(32,16, (IData)(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__14__KET____DOT__tapk__DOT__genblk2__DOT__tap)), 
                              VL_EXTENDS_II(32,16, 
                                            vlTOPp->filter_control__DOT__filter_0__DOT__sample
                                            [0xeU]));
        }
    } else {
        vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__14__KET____DOT__tapk__DOT__product = 0U;
    }
    vlTOPp->filter_control__DOT__filter_0__DOT__result[0xeU] 
        = vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__13__KET____DOT__tapk____pinNumber10;
    if (vlTOPp->i_reset) {
        if (vlTOPp->i_ce) {
            vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__13__KET____DOT__tapk__DOT__product 
                = VL_MULS_III(32,32,32, VL_EXTENDS_II(32,16, (IData)(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__13__KET____DOT__tapk__DOT__genblk2__DOT__tap)), 
                              VL_EXTENDS_II(32,16, 
                                            vlTOPp->filter_control__DOT__filter_0__DOT__sample
                                            [0xdU]));
        }
    } else {
        vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__13__KET____DOT__tapk__DOT__product = 0U;
    }
    vlTOPp->filter_control__DOT__filter_0__DOT__result[0xdU] 
        = vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__12__KET____DOT__tapk____pinNumber10;
    if (vlTOPp->i_reset) {
        if (vlTOPp->i_ce) {
            vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__12__KET____DOT__tapk__DOT__product 
                = VL_MULS_III(32,32,32, VL_EXTENDS_II(32,16, (IData)(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__12__KET____DOT__tapk__DOT__genblk2__DOT__tap)), 
                              VL_EXTENDS_II(32,16, 
                                            vlTOPp->filter_control__DOT__filter_0__DOT__sample
                                            [0xcU]));
        }
    } else {
        vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__12__KET____DOT__tapk__DOT__product = 0U;
    }
    vlTOPp->filter_control__DOT__filter_0__DOT__result[0xcU] 
        = vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__11__KET____DOT__tapk____pinNumber10;
    if (vlTOPp->i_reset) {
        if (vlTOPp->i_ce) {
            vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__11__KET____DOT__tapk__DOT__product 
                = VL_MULS_III(32,32,32, VL_EXTENDS_II(32,16, (IData)(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__11__KET____DOT__tapk__DOT__genblk2__DOT__tap)), 
                              VL_EXTENDS_II(32,16, 
                                            vlTOPp->filter_control__DOT__filter_0__DOT__sample
                                            [0xbU]));
        }
    } else {
        vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__11__KET____DOT__tapk__DOT__product = 0U;
    }
    vlTOPp->filter_control__DOT__filter_0__DOT__result[0xbU] 
        = vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__10__KET____DOT__tapk____pinNumber10;
    if (vlTOPp->i_reset) {
        if (vlTOPp->i_ce) {
            vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__10__KET____DOT__tapk__DOT__product 
                = VL_MULS_III(32,32,32, VL_EXTENDS_II(32,16, (IData)(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__10__KET____DOT__tapk__DOT__genblk2__DOT__tap)), 
                              VL_EXTENDS_II(32,16, 
                                            vlTOPp->filter_control__DOT__filter_0__DOT__sample
                                            [0xaU]));
        }
    } else {
        vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__10__KET____DOT__tapk__DOT__product = 0U;
    }
    vlTOPp->filter_control__DOT__filter_0__DOT__result[0xaU] 
        = vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__9__KET____DOT__tapk____pinNumber10;
    if (vlTOPp->i_reset) {
        if (vlTOPp->i_ce) {
            vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__9__KET____DOT__tapk__DOT__product 
                = VL_MULS_III(32,32,32, VL_EXTENDS_II(32,16, (IData)(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__9__KET____DOT__tapk__DOT__genblk2__DOT__tap)), 
                              VL_EXTENDS_II(32,16, 
                                            vlTOPp->filter_control__DOT__filter_0__DOT__sample
                                            [9U]));
        }
    } else {
        vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__9__KET____DOT__tapk__DOT__product = 0U;
    }
    vlTOPp->filter_control__DOT__filter_0__DOT__result[9U] 
        = vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__8__KET____DOT__tapk____pinNumber10;
    if (vlTOPp->i_reset) {
        if (vlTOPp->i_ce) {
            vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__8__KET____DOT__tapk__DOT__product 
                = VL_MULS_III(32,32,32, VL_EXTENDS_II(32,16, (IData)(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__8__KET____DOT__tapk__DOT__genblk2__DOT__tap)), 
                              VL_EXTENDS_II(32,16, 
                                            vlTOPp->filter_control__DOT__filter_0__DOT__sample
                                            [8U]));
        }
    } else {
        vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__8__KET____DOT__tapk__DOT__product = 0U;
    }
    vlTOPp->filter_control__DOT__filter_0__DOT__result[8U] 
        = vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__7__KET____DOT__tapk____pinNumber10;
    if (vlTOPp->i_reset) {
        if (vlTOPp->i_ce) {
            vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__7__KET____DOT__tapk__DOT__product 
                = VL_MULS_III(32,32,32, VL_EXTENDS_II(32,16, (IData)(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__7__KET____DOT__tapk__DOT__genblk2__DOT__tap)), 
                              VL_EXTENDS_II(32,16, 
                                            vlTOPp->filter_control__DOT__filter_0__DOT__sample
                                            [7U]));
        }
    } else {
        vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__7__KET____DOT__tapk__DOT__product = 0U;
    }
    vlTOPp->filter_control__DOT__filter_0__DOT__result[7U] 
        = vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__6__KET____DOT__tapk____pinNumber10;
    if (vlTOPp->i_reset) {
        if (vlTOPp->i_ce) {
            vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__6__KET____DOT__tapk__DOT__product 
                = VL_MULS_III(32,32,32, VL_EXTENDS_II(32,16, (IData)(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__6__KET____DOT__tapk__DOT__genblk2__DOT__tap)), 
                              VL_EXTENDS_II(32,16, 
                                            vlTOPp->filter_control__DOT__filter_0__DOT__sample
                                            [6U]));
        }
    } else {
        vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__6__KET____DOT__tapk__DOT__product = 0U;
    }
    vlTOPp->filter_control__DOT__filter_0__DOT__result[6U] 
        = vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__5__KET____DOT__tapk____pinNumber10;
    if (vlTOPp->i_reset) {
        if (vlTOPp->i_ce) {
            vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__5__KET____DOT__tapk__DOT__product 
                = VL_MULS_III(32,32,32, VL_EXTENDS_II(32,16, (IData)(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__5__KET____DOT__tapk__DOT__genblk2__DOT__tap)), 
                              VL_EXTENDS_II(32,16, 
                                            vlTOPp->filter_control__DOT__filter_0__DOT__sample
                                            [5U]));
        }
    } else {
        vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__5__KET____DOT__tapk__DOT__product = 0U;
    }
    vlTOPp->filter_control__DOT__filter_0__DOT__result[5U] 
        = vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__4__KET____DOT__tapk____pinNumber10;
    if (vlTOPp->i_reset) {
        if (vlTOPp->i_ce) {
            vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__4__KET____DOT__tapk__DOT__product 
                = VL_MULS_III(32,32,32, VL_EXTENDS_II(32,16, (IData)(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__4__KET____DOT__tapk__DOT__genblk2__DOT__tap)), 
                              VL_EXTENDS_II(32,16, 
                                            vlTOPp->filter_control__DOT__filter_0__DOT__sample
                                            [4U]));
        }
    } else {
        vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__4__KET____DOT__tapk__DOT__product = 0U;
    }
    vlTOPp->filter_control__DOT__filter_0__DOT__result[4U] 
        = vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__3__KET____DOT__tapk____pinNumber10;
    if (vlTOPp->i_reset) {
        if (vlTOPp->i_ce) {
            vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__3__KET____DOT__tapk__DOT__product 
                = VL_MULS_III(32,32,32, VL_EXTENDS_II(32,16, (IData)(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__3__KET____DOT__tapk__DOT__genblk2__DOT__tap)), 
                              VL_EXTENDS_II(32,16, 
                                            vlTOPp->filter_control__DOT__filter_0__DOT__sample
                                            [3U]));
        }
    } else {
        vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__3__KET____DOT__tapk__DOT__product = 0U;
    }
    vlTOPp->filter_control__DOT__filter_0__DOT__result[3U] 
        = vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__2__KET____DOT__tapk____pinNumber10;
    if (vlTOPp->i_reset) {
        if (vlTOPp->i_ce) {
            vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__2__KET____DOT__tapk__DOT__product 
                = VL_MULS_III(32,32,32, VL_EXTENDS_II(32,16, (IData)(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__2__KET____DOT__tapk__DOT__genblk2__DOT__tap)), 
                              VL_EXTENDS_II(32,16, 
                                            vlTOPp->filter_control__DOT__filter_0__DOT__sample
                                            [2U]));
        }
    } else {
        vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__2__KET____DOT__tapk__DOT__product = 0U;
    }
    vlTOPp->filter_control__DOT__filter_0__DOT__result[2U] 
        = vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__1__KET____DOT__tapk____pinNumber10;
    if (vlTOPp->i_reset) {
        if (vlTOPp->i_ce) {
            vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__1__KET____DOT__tapk__DOT__product 
                = VL_MULS_III(32,32,32, VL_EXTENDS_II(32,16, (IData)(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__1__KET____DOT__tapk__DOT__genblk2__DOT__tap)), 
                              VL_EXTENDS_II(32,16, 
                                            vlTOPp->filter_control__DOT__filter_0__DOT__sample
                                            [1U]));
        }
    } else {
        vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__1__KET____DOT__tapk__DOT__product = 0U;
    }
    vlTOPp->filter_control__DOT__filter_0__DOT__result[1U] 
        = vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__0__KET____DOT__tapk____pinNumber10;
    if (vlTOPp->i_reset) {
        if (vlTOPp->i_ce) {
            vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__0__KET____DOT__tapk__DOT__product 
                = VL_MULS_III(32,32,32, VL_EXTENDS_II(32,16, (IData)(vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__0__KET____DOT__tapk__DOT__genblk2__DOT__tap)), 
                              VL_EXTENDS_II(32,16, 
                                            vlTOPp->filter_control__DOT__filter_0__DOT__sample
                                            [0U]));
        }
    } else {
        vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__0__KET____DOT__tapk__DOT__product = 0U;
    }
    vlTOPp->o_result = vlTOPp->filter_control__DOT__filter_0__DOT__result
        [0x10U];
    vlTOPp->filter_control__DOT__filter_0__DOT__sample[1U] 
        = vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__0__KET____DOT__tapk____pinNumber8;
    vlTOPp->filter_control__DOT__filter_0__DOT__sample[2U] 
        = vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__1__KET____DOT__tapk____pinNumber8;
    vlTOPp->filter_control__DOT__filter_0__DOT__sample[3U] 
        = vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__2__KET____DOT__tapk____pinNumber8;
    vlTOPp->filter_control__DOT__filter_0__DOT__sample[4U] 
        = vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__3__KET____DOT__tapk____pinNumber8;
    vlTOPp->filter_control__DOT__filter_0__DOT__sample[5U] 
        = vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__4__KET____DOT__tapk____pinNumber8;
    vlTOPp->filter_control__DOT__filter_0__DOT__sample[6U] 
        = vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__5__KET____DOT__tapk____pinNumber8;
    vlTOPp->filter_control__DOT__filter_0__DOT__sample[7U] 
        = vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__6__KET____DOT__tapk____pinNumber8;
    vlTOPp->filter_control__DOT__filter_0__DOT__sample[8U] 
        = vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__7__KET____DOT__tapk____pinNumber8;
    vlTOPp->filter_control__DOT__filter_0__DOT__sample[9U] 
        = vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__8__KET____DOT__tapk____pinNumber8;
    vlTOPp->filter_control__DOT__filter_0__DOT__sample[0xaU] 
        = vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__9__KET____DOT__tapk____pinNumber8;
    vlTOPp->filter_control__DOT__filter_0__DOT__sample[0xbU] 
        = vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__10__KET____DOT__tapk____pinNumber8;
    vlTOPp->filter_control__DOT__filter_0__DOT__sample[0xcU] 
        = vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__11__KET____DOT__tapk____pinNumber8;
    vlTOPp->filter_control__DOT__filter_0__DOT__sample[0xdU] 
        = vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__12__KET____DOT__tapk____pinNumber8;
    vlTOPp->filter_control__DOT__filter_0__DOT__sample[0xeU] 
        = vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__13__KET____DOT__tapk____pinNumber8;
    vlTOPp->filter_control__DOT__filter_0__DOT__sample[0xfU] 
        = vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__14__KET____DOT__tapk____pinNumber8;
    vlTOPp->filter_control__DOT__filter_0__DOT__sample[0x10U] 
        = vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__15__KET____DOT__tapk____pinNumber8;
    if (vlTOPp->filter_control__DOT__i_tap_wr) {
        vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__15__KET____DOT__tapk__DOT__genblk2__DOT__tap 
            = vlTOPp->filter_control__DOT__filter_0__DOT__tap
            [0U];
    }
    if (vlTOPp->filter_control__DOT__i_tap_wr) {
        vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__14__KET____DOT__tapk__DOT__genblk2__DOT__tap 
            = vlTOPp->filter_control__DOT__filter_0__DOT__tap
            [1U];
    }
    if (vlTOPp->filter_control__DOT__i_tap_wr) {
        vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__13__KET____DOT__tapk__DOT__genblk2__DOT__tap 
            = vlTOPp->filter_control__DOT__filter_0__DOT__tap
            [2U];
    }
    if (vlTOPp->filter_control__DOT__i_tap_wr) {
        vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__12__KET____DOT__tapk__DOT__genblk2__DOT__tap 
            = vlTOPp->filter_control__DOT__filter_0__DOT__tap
            [3U];
    }
    if (vlTOPp->filter_control__DOT__i_tap_wr) {
        vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__11__KET____DOT__tapk__DOT__genblk2__DOT__tap 
            = vlTOPp->filter_control__DOT__filter_0__DOT__tap
            [4U];
    }
    if (vlTOPp->filter_control__DOT__i_tap_wr) {
        vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__10__KET____DOT__tapk__DOT__genblk2__DOT__tap 
            = vlTOPp->filter_control__DOT__filter_0__DOT__tap
            [5U];
    }
    if (vlTOPp->filter_control__DOT__i_tap_wr) {
        vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__9__KET____DOT__tapk__DOT__genblk2__DOT__tap 
            = vlTOPp->filter_control__DOT__filter_0__DOT__tap
            [6U];
    }
    if (vlTOPp->filter_control__DOT__i_tap_wr) {
        vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__8__KET____DOT__tapk__DOT__genblk2__DOT__tap 
            = vlTOPp->filter_control__DOT__filter_0__DOT__tap
            [7U];
    }
    if (vlTOPp->filter_control__DOT__i_tap_wr) {
        vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__7__KET____DOT__tapk__DOT__genblk2__DOT__tap 
            = vlTOPp->filter_control__DOT__filter_0__DOT__tap
            [8U];
    }
    if (vlTOPp->filter_control__DOT__i_tap_wr) {
        vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__6__KET____DOT__tapk__DOT__genblk2__DOT__tap 
            = vlTOPp->filter_control__DOT__filter_0__DOT__tap
            [9U];
    }
    if (vlTOPp->filter_control__DOT__i_tap_wr) {
        vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__5__KET____DOT__tapk__DOT__genblk2__DOT__tap 
            = vlTOPp->filter_control__DOT__filter_0__DOT__tap
            [0xaU];
    }
    if (vlTOPp->filter_control__DOT__i_tap_wr) {
        vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__4__KET____DOT__tapk__DOT__genblk2__DOT__tap 
            = vlTOPp->filter_control__DOT__filter_0__DOT__tap
            [0xbU];
    }
    if (vlTOPp->filter_control__DOT__i_tap_wr) {
        vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__3__KET____DOT__tapk__DOT__genblk2__DOT__tap 
            = vlTOPp->filter_control__DOT__filter_0__DOT__tap
            [0xcU];
    }
    if (vlTOPp->filter_control__DOT__i_tap_wr) {
        vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__2__KET____DOT__tapk__DOT__genblk2__DOT__tap 
            = vlTOPp->filter_control__DOT__filter_0__DOT__tap
            [0xdU];
    }
    if (vlTOPp->filter_control__DOT__i_tap_wr) {
        vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__1__KET____DOT__tapk__DOT__genblk2__DOT__tap 
            = vlTOPp->filter_control__DOT__filter_0__DOT__tap
            [0xeU];
    }
    if (vlTOPp->filter_control__DOT__i_tap_wr) {
        vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__0__KET____DOT__tapk__DOT__genblk2__DOT__tap 
            = vlTOPp->filter_control__DOT__filter_0__DOT__tap
            [0xfU];
    }
    vlTOPp->filter_control__DOT__filter_0__DOT__tapout[0xfU] 
        = vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__15__KET____DOT__tapk__DOT__genblk2__DOT__tap;
    vlTOPp->filter_control__DOT__filter_0__DOT__tapout[0xeU] 
        = vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__14__KET____DOT__tapk__DOT__genblk2__DOT__tap;
    vlTOPp->filter_control__DOT__filter_0__DOT__tapout[0xdU] 
        = vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__13__KET____DOT__tapk__DOT__genblk2__DOT__tap;
    vlTOPp->filter_control__DOT__filter_0__DOT__tapout[0xcU] 
        = vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__12__KET____DOT__tapk__DOT__genblk2__DOT__tap;
    vlTOPp->filter_control__DOT__filter_0__DOT__tapout[0xbU] 
        = vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__11__KET____DOT__tapk__DOT__genblk2__DOT__tap;
    vlTOPp->filter_control__DOT__filter_0__DOT__tapout[0xaU] 
        = vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__10__KET____DOT__tapk__DOT__genblk2__DOT__tap;
    vlTOPp->filter_control__DOT__filter_0__DOT__tapout[9U] 
        = vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__9__KET____DOT__tapk__DOT__genblk2__DOT__tap;
    vlTOPp->filter_control__DOT__filter_0__DOT__tapout[8U] 
        = vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__8__KET____DOT__tapk__DOT__genblk2__DOT__tap;
    vlTOPp->filter_control__DOT__filter_0__DOT__tapout[7U] 
        = vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__7__KET____DOT__tapk__DOT__genblk2__DOT__tap;
    vlTOPp->filter_control__DOT__filter_0__DOT__tapout[6U] 
        = vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__6__KET____DOT__tapk__DOT__genblk2__DOT__tap;
    vlTOPp->filter_control__DOT__filter_0__DOT__tapout[5U] 
        = vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__5__KET____DOT__tapk__DOT__genblk2__DOT__tap;
    vlTOPp->filter_control__DOT__filter_0__DOT__tapout[4U] 
        = vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__4__KET____DOT__tapk__DOT__genblk2__DOT__tap;
    vlTOPp->filter_control__DOT__filter_0__DOT__tapout[3U] 
        = vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__3__KET____DOT__tapk__DOT__genblk2__DOT__tap;
    vlTOPp->filter_control__DOT__filter_0__DOT__tapout[2U] 
        = vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__2__KET____DOT__tapk__DOT__genblk2__DOT__tap;
    vlTOPp->filter_control__DOT__filter_0__DOT__tapout[1U] 
        = vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__1__KET____DOT__tapk__DOT__genblk2__DOT__tap;
    vlTOPp->filter_control__DOT__filter_0__DOT__tapout[0U] 
        = vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__0__KET____DOT__tapk__DOT__genblk2__DOT__tap;
    vlTOPp->filter_control__DOT__filter_0__DOT__tap[0xfU] 
        = vlTOPp->filter_control__DOT__filter_0__DOT__tapout
        [1U];
    vlTOPp->filter_control__DOT__filter_0__DOT__tap[0xeU] 
        = vlTOPp->filter_control__DOT__filter_0__DOT__tapout
        [2U];
    vlTOPp->filter_control__DOT__filter_0__DOT__tap[0xdU] 
        = vlTOPp->filter_control__DOT__filter_0__DOT__tapout
        [3U];
    vlTOPp->filter_control__DOT__filter_0__DOT__tap[0xcU] 
        = vlTOPp->filter_control__DOT__filter_0__DOT__tapout
        [4U];
    vlTOPp->filter_control__DOT__filter_0__DOT__tap[0xbU] 
        = vlTOPp->filter_control__DOT__filter_0__DOT__tapout
        [5U];
    vlTOPp->filter_control__DOT__filter_0__DOT__tap[0xaU] 
        = vlTOPp->filter_control__DOT__filter_0__DOT__tapout
        [6U];
    vlTOPp->filter_control__DOT__filter_0__DOT__tap[9U] 
        = vlTOPp->filter_control__DOT__filter_0__DOT__tapout
        [7U];
    vlTOPp->filter_control__DOT__filter_0__DOT__tap[8U] 
        = vlTOPp->filter_control__DOT__filter_0__DOT__tapout
        [8U];
    vlTOPp->filter_control__DOT__filter_0__DOT__tap[7U] 
        = vlTOPp->filter_control__DOT__filter_0__DOT__tapout
        [9U];
    vlTOPp->filter_control__DOT__filter_0__DOT__tap[6U] 
        = vlTOPp->filter_control__DOT__filter_0__DOT__tapout
        [0xaU];
    vlTOPp->filter_control__DOT__filter_0__DOT__tap[5U] 
        = vlTOPp->filter_control__DOT__filter_0__DOT__tapout
        [0xbU];
    vlTOPp->filter_control__DOT__filter_0__DOT__tap[4U] 
        = vlTOPp->filter_control__DOT__filter_0__DOT__tapout
        [0xcU];
    vlTOPp->filter_control__DOT__filter_0__DOT__tap[3U] 
        = vlTOPp->filter_control__DOT__filter_0__DOT__tapout
        [0xdU];
    vlTOPp->filter_control__DOT__filter_0__DOT__tap[2U] 
        = vlTOPp->filter_control__DOT__filter_0__DOT__tapout
        [0xeU];
    vlTOPp->filter_control__DOT__filter_0__DOT__tap[1U] 
        = vlTOPp->filter_control__DOT__filter_0__DOT__tapout
        [0xfU];
    vlTOPp->filter_control__DOT__filter_0__DOT__tap[0U] 
        = vlTOPp->filter_control__DOT__filter_0__DOT__tapout
        [0x10U];
}

void Vfilter_control::_settle__TOP__3(Vfilter_control__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfilter_control::_settle__TOP__3\n"); );
    Vfilter_control* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*255:0*/ __Vtemp1[8];
    // Body
    vlTOPp->filter_control__DOT__filter_0__DOT__result[0U] = VL_ULL(0);
    vlTOPp->filter_control__DOT__filter_0__DOT__sample[0U] 
        = vlTOPp->i_sample;
    vlTOPp->__Vtableidx1 = (((IData)(vlTOPp->i_start) 
                             << 5U) | (IData)(vlTOPp->filter_control__DOT__state));
    vlTOPp->filter_control__DOT__i_idx = vlTOPp->__Vtable1_filter_control__DOT__i_idx
        [vlTOPp->__Vtableidx1];
    vlTOPp->filter_control__DOT__next_state = vlTOPp->__Vtable1_filter_control__DOT__next_state
        [vlTOPp->__Vtableidx1];
    vlTOPp->filter_control__DOT__i_tap_wr = vlTOPp->__Vtable1_filter_control__DOT__i_tap_wr
        [vlTOPp->__Vtableidx1];
    vlTOPp->filter_control__DOT__filter_0__DOT__sample[1U] 
        = vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__0__KET____DOT__tapk____pinNumber8;
    vlTOPp->filter_control__DOT__filter_0__DOT__sample[2U] 
        = vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__1__KET____DOT__tapk____pinNumber8;
    vlTOPp->filter_control__DOT__filter_0__DOT__sample[3U] 
        = vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__2__KET____DOT__tapk____pinNumber8;
    vlTOPp->filter_control__DOT__filter_0__DOT__sample[4U] 
        = vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__3__KET____DOT__tapk____pinNumber8;
    vlTOPp->filter_control__DOT__filter_0__DOT__sample[5U] 
        = vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__4__KET____DOT__tapk____pinNumber8;
    vlTOPp->filter_control__DOT__filter_0__DOT__sample[6U] 
        = vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__5__KET____DOT__tapk____pinNumber8;
    vlTOPp->filter_control__DOT__filter_0__DOT__sample[7U] 
        = vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__6__KET____DOT__tapk____pinNumber8;
    vlTOPp->filter_control__DOT__filter_0__DOT__sample[8U] 
        = vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__7__KET____DOT__tapk____pinNumber8;
    vlTOPp->filter_control__DOT__filter_0__DOT__sample[9U] 
        = vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__8__KET____DOT__tapk____pinNumber8;
    vlTOPp->filter_control__DOT__filter_0__DOT__sample[0xaU] 
        = vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__9__KET____DOT__tapk____pinNumber8;
    vlTOPp->filter_control__DOT__filter_0__DOT__sample[0xbU] 
        = vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__10__KET____DOT__tapk____pinNumber8;
    vlTOPp->filter_control__DOT__filter_0__DOT__sample[0xcU] 
        = vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__11__KET____DOT__tapk____pinNumber8;
    vlTOPp->filter_control__DOT__filter_0__DOT__sample[0xdU] 
        = vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__12__KET____DOT__tapk____pinNumber8;
    vlTOPp->filter_control__DOT__filter_0__DOT__sample[0xeU] 
        = vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__13__KET____DOT__tapk____pinNumber8;
    vlTOPp->filter_control__DOT__filter_0__DOT__sample[0xfU] 
        = vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__14__KET____DOT__tapk____pinNumber8;
    vlTOPp->filter_control__DOT__filter_0__DOT__sample[0x10U] 
        = vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__15__KET____DOT__tapk____pinNumber8;
    vlTOPp->filter_control__DOT__filter_0__DOT__result[1U] 
        = vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__0__KET____DOT__tapk____pinNumber10;
    vlTOPp->filter_control__DOT__filter_0__DOT__result[2U] 
        = vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__1__KET____DOT__tapk____pinNumber10;
    vlTOPp->filter_control__DOT__filter_0__DOT__result[3U] 
        = vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__2__KET____DOT__tapk____pinNumber10;
    vlTOPp->filter_control__DOT__filter_0__DOT__result[4U] 
        = vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__3__KET____DOT__tapk____pinNumber10;
    vlTOPp->filter_control__DOT__filter_0__DOT__result[5U] 
        = vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__4__KET____DOT__tapk____pinNumber10;
    vlTOPp->filter_control__DOT__filter_0__DOT__result[6U] 
        = vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__5__KET____DOT__tapk____pinNumber10;
    vlTOPp->filter_control__DOT__filter_0__DOT__result[7U] 
        = vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__6__KET____DOT__tapk____pinNumber10;
    vlTOPp->filter_control__DOT__filter_0__DOT__result[8U] 
        = vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__7__KET____DOT__tapk____pinNumber10;
    vlTOPp->filter_control__DOT__filter_0__DOT__result[9U] 
        = vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__8__KET____DOT__tapk____pinNumber10;
    vlTOPp->filter_control__DOT__filter_0__DOT__result[0xaU] 
        = vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__9__KET____DOT__tapk____pinNumber10;
    vlTOPp->filter_control__DOT__filter_0__DOT__result[0xbU] 
        = vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__10__KET____DOT__tapk____pinNumber10;
    vlTOPp->filter_control__DOT__filter_0__DOT__result[0xcU] 
        = vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__11__KET____DOT__tapk____pinNumber10;
    vlTOPp->filter_control__DOT__filter_0__DOT__result[0xdU] 
        = vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__12__KET____DOT__tapk____pinNumber10;
    vlTOPp->filter_control__DOT__filter_0__DOT__result[0xeU] 
        = vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__13__KET____DOT__tapk____pinNumber10;
    vlTOPp->filter_control__DOT__filter_0__DOT__result[0xfU] 
        = vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__14__KET____DOT__tapk____pinNumber10;
    vlTOPp->filter_control__DOT__filter_0__DOT__result[0x10U] 
        = vlTOPp->filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__15__KET____DOT__tapk____pinNumber10;
    vlTOPp->filter_control__DOT__filter_0__DOT__tapout[0U] 
        = vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__0__KET____DOT__tapk__DOT__genblk2__DOT__tap;
    vlTOPp->filter_control__DOT__filter_0__DOT__tapout[1U] 
        = vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__1__KET____DOT__tapk__DOT__genblk2__DOT__tap;
    vlTOPp->filter_control__DOT__filter_0__DOT__tapout[2U] 
        = vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__2__KET____DOT__tapk__DOT__genblk2__DOT__tap;
    vlTOPp->filter_control__DOT__filter_0__DOT__tapout[3U] 
        = vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__3__KET____DOT__tapk__DOT__genblk2__DOT__tap;
    vlTOPp->filter_control__DOT__filter_0__DOT__tapout[4U] 
        = vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__4__KET____DOT__tapk__DOT__genblk2__DOT__tap;
    vlTOPp->filter_control__DOT__filter_0__DOT__tapout[5U] 
        = vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__5__KET____DOT__tapk__DOT__genblk2__DOT__tap;
    vlTOPp->filter_control__DOT__filter_0__DOT__tapout[6U] 
        = vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__6__KET____DOT__tapk__DOT__genblk2__DOT__tap;
    vlTOPp->filter_control__DOT__filter_0__DOT__tapout[7U] 
        = vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__7__KET____DOT__tapk__DOT__genblk2__DOT__tap;
    vlTOPp->filter_control__DOT__filter_0__DOT__tapout[8U] 
        = vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__8__KET____DOT__tapk__DOT__genblk2__DOT__tap;
    vlTOPp->filter_control__DOT__filter_0__DOT__tapout[9U] 
        = vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__9__KET____DOT__tapk__DOT__genblk2__DOT__tap;
    vlTOPp->filter_control__DOT__filter_0__DOT__tapout[0xaU] 
        = vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__10__KET____DOT__tapk__DOT__genblk2__DOT__tap;
    vlTOPp->filter_control__DOT__filter_0__DOT__tapout[0xbU] 
        = vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__11__KET____DOT__tapk__DOT__genblk2__DOT__tap;
    vlTOPp->filter_control__DOT__filter_0__DOT__tapout[0xcU] 
        = vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__12__KET____DOT__tapk__DOT__genblk2__DOT__tap;
    vlTOPp->filter_control__DOT__filter_0__DOT__tapout[0xdU] 
        = vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__13__KET____DOT__tapk__DOT__genblk2__DOT__tap;
    vlTOPp->filter_control__DOT__filter_0__DOT__tapout[0xeU] 
        = vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__14__KET____DOT__tapk__DOT__genblk2__DOT__tap;
    vlTOPp->filter_control__DOT__filter_0__DOT__tapout[0xfU] 
        = vlTOPp->filter_control__DOT__filter_0__DOT__FILTER__BRA__15__KET____DOT__tapk__DOT__genblk2__DOT__tap;
    __Vtemp1[0U] = 0xbd90565U;
    __Vtemp1[1U] = 0xff270b0bU;
    __Vtemp1[2U] = 0xfb52f3a7U;
    __Vtemp1[3U] = 0x3384182eU;
    __Vtemp1[4U] = 0x182e3384U;
    __Vtemp1[5U] = 0xf3a7fb52U;
    __Vtemp1[6U] = 0xb0bff27U;
    __Vtemp1[7U] = 0x5650bd9U;
    vlTOPp->filter_control__DOT__filter_0__DOT__tap[0U] 
        = (0xffffU & (((0U == (0x1fU & ((IData)(vlTOPp->filter_control__DOT__i_idx) 
                                        << 4U))) ? 0U
                        : (__Vtemp1[((IData)(1U) + 
                                     (7U & ((IData)(vlTOPp->filter_control__DOT__i_idx) 
                                            >> 1U)))] 
                           << ((IData)(0x20U) - (0x1fU 
                                                 & ((IData)(vlTOPp->filter_control__DOT__i_idx) 
                                                    << 4U))))) 
                      | (__Vtemp1[(7U & ((IData)(vlTOPp->filter_control__DOT__i_idx) 
                                         >> 1U))] >> 
                         (0x1fU & ((IData)(vlTOPp->filter_control__DOT__i_idx) 
                                   << 4U)))));
    vlTOPp->o_result = vlTOPp->filter_control__DOT__filter_0__DOT__result
        [0x10U];
    vlTOPp->filter_control__DOT__filter_0__DOT__tap[0xfU] 
        = vlTOPp->filter_control__DOT__filter_0__DOT__tapout
        [1U];
    vlTOPp->filter_control__DOT__filter_0__DOT__tap[0xeU] 
        = vlTOPp->filter_control__DOT__filter_0__DOT__tapout
        [2U];
    vlTOPp->filter_control__DOT__filter_0__DOT__tap[0xdU] 
        = vlTOPp->filter_control__DOT__filter_0__DOT__tapout
        [3U];
    vlTOPp->filter_control__DOT__filter_0__DOT__tap[0xcU] 
        = vlTOPp->filter_control__DOT__filter_0__DOT__tapout
        [4U];
    vlTOPp->filter_control__DOT__filter_0__DOT__tap[0xbU] 
        = vlTOPp->filter_control__DOT__filter_0__DOT__tapout
        [5U];
    vlTOPp->filter_control__DOT__filter_0__DOT__tap[0xaU] 
        = vlTOPp->filter_control__DOT__filter_0__DOT__tapout
        [6U];
    vlTOPp->filter_control__DOT__filter_0__DOT__tap[9U] 
        = vlTOPp->filter_control__DOT__filter_0__DOT__tapout
        [7U];
    vlTOPp->filter_control__DOT__filter_0__DOT__tap[8U] 
        = vlTOPp->filter_control__DOT__filter_0__DOT__tapout
        [8U];
    vlTOPp->filter_control__DOT__filter_0__DOT__tap[7U] 
        = vlTOPp->filter_control__DOT__filter_0__DOT__tapout
        [9U];
    vlTOPp->filter_control__DOT__filter_0__DOT__tap[6U] 
        = vlTOPp->filter_control__DOT__filter_0__DOT__tapout
        [0xaU];
    vlTOPp->filter_control__DOT__filter_0__DOT__tap[5U] 
        = vlTOPp->filter_control__DOT__filter_0__DOT__tapout
        [0xbU];
    vlTOPp->filter_control__DOT__filter_0__DOT__tap[4U] 
        = vlTOPp->filter_control__DOT__filter_0__DOT__tapout
        [0xcU];
    vlTOPp->filter_control__DOT__filter_0__DOT__tap[3U] 
        = vlTOPp->filter_control__DOT__filter_0__DOT__tapout
        [0xdU];
    vlTOPp->filter_control__DOT__filter_0__DOT__tap[2U] 
        = vlTOPp->filter_control__DOT__filter_0__DOT__tapout
        [0xeU];
    vlTOPp->filter_control__DOT__filter_0__DOT__tap[1U] 
        = vlTOPp->filter_control__DOT__filter_0__DOT__tapout
        [0xfU];
    vlTOPp->filter_control__DOT__filter_0__DOT__tap[0U] 
        = vlTOPp->filter_control__DOT__filter_0__DOT__tapout
        [0x10U];
}

VL_INLINE_OPT void Vfilter_control::_combo__TOP__4(Vfilter_control__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfilter_control::_combo__TOP__4\n"); );
    Vfilter_control* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*255:0*/ __Vtemp2[8];
    // Body
    vlTOPp->filter_control__DOT__filter_0__DOT__sample[0U] 
        = vlTOPp->i_sample;
    vlTOPp->__Vtableidx1 = (((IData)(vlTOPp->i_start) 
                             << 5U) | (IData)(vlTOPp->filter_control__DOT__state));
    vlTOPp->filter_control__DOT__i_idx = vlTOPp->__Vtable1_filter_control__DOT__i_idx
        [vlTOPp->__Vtableidx1];
    vlTOPp->filter_control__DOT__next_state = vlTOPp->__Vtable1_filter_control__DOT__next_state
        [vlTOPp->__Vtableidx1];
    vlTOPp->filter_control__DOT__i_tap_wr = vlTOPp->__Vtable1_filter_control__DOT__i_tap_wr
        [vlTOPp->__Vtableidx1];
    __Vtemp2[0U] = 0xbd90565U;
    __Vtemp2[1U] = 0xff270b0bU;
    __Vtemp2[2U] = 0xfb52f3a7U;
    __Vtemp2[3U] = 0x3384182eU;
    __Vtemp2[4U] = 0x182e3384U;
    __Vtemp2[5U] = 0xf3a7fb52U;
    __Vtemp2[6U] = 0xb0bff27U;
    __Vtemp2[7U] = 0x5650bd9U;
    vlTOPp->filter_control__DOT__filter_0__DOT__tap[0U] 
        = (0xffffU & (((0U == (0x1fU & ((IData)(vlTOPp->filter_control__DOT__i_idx) 
                                        << 4U))) ? 0U
                        : (__Vtemp2[((IData)(1U) + 
                                     (7U & ((IData)(vlTOPp->filter_control__DOT__i_idx) 
                                            >> 1U)))] 
                           << ((IData)(0x20U) - (0x1fU 
                                                 & ((IData)(vlTOPp->filter_control__DOT__i_idx) 
                                                    << 4U))))) 
                      | (__Vtemp2[(7U & ((IData)(vlTOPp->filter_control__DOT__i_idx) 
                                         >> 1U))] >> 
                         (0x1fU & ((IData)(vlTOPp->filter_control__DOT__i_idx) 
                                   << 4U)))));
}

void Vfilter_control::_eval(Vfilter_control__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfilter_control::_eval\n"); );
    Vfilter_control* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void Vfilter_control::_eval_initial(Vfilter_control__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfilter_control::_eval_initial\n"); );
    Vfilter_control* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
    vlTOPp->__Vclklast__TOP__i_clk = vlTOPp->i_clk;
}

void Vfilter_control::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfilter_control::final\n"); );
    // Variables
    Vfilter_control__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vfilter_control* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vfilter_control::_eval_settle(Vfilter_control__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfilter_control::_eval_settle\n"); );
    Vfilter_control* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__3(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

VL_INLINE_OPT QData Vfilter_control::_change_request(Vfilter_control__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfilter_control::_change_request\n"); );
    Vfilter_control* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vfilter_control::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfilter_control::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((i_clk & 0xfeU))) {
        Verilated::overWidthError("i_clk");}
    if (VL_UNLIKELY((i_reset & 0xfeU))) {
        Verilated::overWidthError("i_reset");}
    if (VL_UNLIKELY((i_ce & 0xfeU))) {
        Verilated::overWidthError("i_ce");}
    if (VL_UNLIKELY((i_start & 0xfeU))) {
        Verilated::overWidthError("i_start");}
}
#endif  // VL_DEBUG

void Vfilter_control::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfilter_control::_ctor_var_reset\n"); );
    // Body
    i_clk = VL_RAND_RESET_I(1);
    i_reset = VL_RAND_RESET_I(1);
    i_ce = VL_RAND_RESET_I(1);
    i_start = VL_RAND_RESET_I(1);
    i_sample = VL_RAND_RESET_I(16);
    o_result = VL_RAND_RESET_Q(39);
    filter_control__DOT__state = VL_RAND_RESET_I(5);
    filter_control__DOT__next_state = VL_RAND_RESET_I(5);
    filter_control__DOT__i_idx = VL_RAND_RESET_I(5);
    filter_control__DOT__i_tap_wr = VL_RAND_RESET_I(1);
    filter_control__DOT__coeff_0__DOT__o_mem_ready = VL_RAND_RESET_I(1);
    filter_control__DOT__coeff_0__DOT__AVL_ADDRESS = VL_RAND_RESET_I(16);
    filter_control__DOT__coeff_0__DOT__AVL_DATA = VL_RAND_RESET_I(16);
    filter_control__DOT__coeff_0__DOT__AVL_WRITE = VL_RAND_RESET_I(1);
    filter_control__DOT__coeff_0__DOT__AVL_READ = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<17; ++__Vi0) {
            filter_control__DOT__filter_0__DOT__tap[__Vi0] = VL_RAND_RESET_I(16);
    }}
    { int __Vi0=0; for (; __Vi0<17; ++__Vi0) {
            filter_control__DOT__filter_0__DOT__tapout[__Vi0] = VL_RAND_RESET_I(16);
    }}
    { int __Vi0=0; for (; __Vi0<17; ++__Vi0) {
            filter_control__DOT__filter_0__DOT__sample[__Vi0] = VL_RAND_RESET_I(16);
    }}
    { int __Vi0=0; for (; __Vi0<17; ++__Vi0) {
            filter_control__DOT__filter_0__DOT__result[__Vi0] = VL_RAND_RESET_Q(39);
    }}
    filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__0__KET____DOT__tapk____pinNumber10 = VL_RAND_RESET_Q(39);
    filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__0__KET____DOT__tapk____pinNumber8 = VL_RAND_RESET_I(16);
    filter_control__DOT__filter_0__DOT__FILTER__BRA__0__KET____DOT__unused_tap = VL_RAND_RESET_I(16);
    filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__1__KET____DOT__tapk____pinNumber10 = VL_RAND_RESET_Q(39);
    filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__1__KET____DOT__tapk____pinNumber8 = VL_RAND_RESET_I(16);
    filter_control__DOT__filter_0__DOT__FILTER__BRA__1__KET____DOT__unused_tap = VL_RAND_RESET_I(16);
    filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__2__KET____DOT__tapk____pinNumber10 = VL_RAND_RESET_Q(39);
    filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__2__KET____DOT__tapk____pinNumber8 = VL_RAND_RESET_I(16);
    filter_control__DOT__filter_0__DOT__FILTER__BRA__2__KET____DOT__unused_tap = VL_RAND_RESET_I(16);
    filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__3__KET____DOT__tapk____pinNumber10 = VL_RAND_RESET_Q(39);
    filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__3__KET____DOT__tapk____pinNumber8 = VL_RAND_RESET_I(16);
    filter_control__DOT__filter_0__DOT__FILTER__BRA__3__KET____DOT__unused_tap = VL_RAND_RESET_I(16);
    filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__4__KET____DOT__tapk____pinNumber10 = VL_RAND_RESET_Q(39);
    filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__4__KET____DOT__tapk____pinNumber8 = VL_RAND_RESET_I(16);
    filter_control__DOT__filter_0__DOT__FILTER__BRA__4__KET____DOT__unused_tap = VL_RAND_RESET_I(16);
    filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__5__KET____DOT__tapk____pinNumber10 = VL_RAND_RESET_Q(39);
    filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__5__KET____DOT__tapk____pinNumber8 = VL_RAND_RESET_I(16);
    filter_control__DOT__filter_0__DOT__FILTER__BRA__5__KET____DOT__unused_tap = VL_RAND_RESET_I(16);
    filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__6__KET____DOT__tapk____pinNumber10 = VL_RAND_RESET_Q(39);
    filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__6__KET____DOT__tapk____pinNumber8 = VL_RAND_RESET_I(16);
    filter_control__DOT__filter_0__DOT__FILTER__BRA__6__KET____DOT__unused_tap = VL_RAND_RESET_I(16);
    filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__7__KET____DOT__tapk____pinNumber10 = VL_RAND_RESET_Q(39);
    filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__7__KET____DOT__tapk____pinNumber8 = VL_RAND_RESET_I(16);
    filter_control__DOT__filter_0__DOT__FILTER__BRA__7__KET____DOT__unused_tap = VL_RAND_RESET_I(16);
    filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__8__KET____DOT__tapk____pinNumber10 = VL_RAND_RESET_Q(39);
    filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__8__KET____DOT__tapk____pinNumber8 = VL_RAND_RESET_I(16);
    filter_control__DOT__filter_0__DOT__FILTER__BRA__8__KET____DOT__unused_tap = VL_RAND_RESET_I(16);
    filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__9__KET____DOT__tapk____pinNumber10 = VL_RAND_RESET_Q(39);
    filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__9__KET____DOT__tapk____pinNumber8 = VL_RAND_RESET_I(16);
    filter_control__DOT__filter_0__DOT__FILTER__BRA__9__KET____DOT__unused_tap = VL_RAND_RESET_I(16);
    filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__10__KET____DOT__tapk____pinNumber10 = VL_RAND_RESET_Q(39);
    filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__10__KET____DOT__tapk____pinNumber8 = VL_RAND_RESET_I(16);
    filter_control__DOT__filter_0__DOT__FILTER__BRA__10__KET____DOT__unused_tap = VL_RAND_RESET_I(16);
    filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__11__KET____DOT__tapk____pinNumber10 = VL_RAND_RESET_Q(39);
    filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__11__KET____DOT__tapk____pinNumber8 = VL_RAND_RESET_I(16);
    filter_control__DOT__filter_0__DOT__FILTER__BRA__11__KET____DOT__unused_tap = VL_RAND_RESET_I(16);
    filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__12__KET____DOT__tapk____pinNumber10 = VL_RAND_RESET_Q(39);
    filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__12__KET____DOT__tapk____pinNumber8 = VL_RAND_RESET_I(16);
    filter_control__DOT__filter_0__DOT__FILTER__BRA__12__KET____DOT__unused_tap = VL_RAND_RESET_I(16);
    filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__13__KET____DOT__tapk____pinNumber10 = VL_RAND_RESET_Q(39);
    filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__13__KET____DOT__tapk____pinNumber8 = VL_RAND_RESET_I(16);
    filter_control__DOT__filter_0__DOT__FILTER__BRA__13__KET____DOT__unused_tap = VL_RAND_RESET_I(16);
    filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__14__KET____DOT__tapk____pinNumber10 = VL_RAND_RESET_Q(39);
    filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__14__KET____DOT__tapk____pinNumber8 = VL_RAND_RESET_I(16);
    filter_control__DOT__filter_0__DOT__FILTER__BRA__14__KET____DOT__unused_tap = VL_RAND_RESET_I(16);
    filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__15__KET____DOT__tapk____pinNumber10 = VL_RAND_RESET_Q(39);
    filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__15__KET____DOT__tapk____pinNumber8 = VL_RAND_RESET_I(16);
    filter_control__DOT__filter_0__DOT__FILTER__BRA__15__KET____DOT__unused_tap = VL_RAND_RESET_I(16);
    filter_control__DOT__filter_0__DOT__FILTER__BRA__0__KET____DOT__tapk__DOT__delayed_sample = VL_RAND_RESET_I(16);
    filter_control__DOT__filter_0__DOT__FILTER__BRA__0__KET____DOT__tapk__DOT__product = VL_RAND_RESET_I(32);
    filter_control__DOT__filter_0__DOT__FILTER__BRA__0__KET____DOT__tapk__DOT__genblk2__DOT__tap = VL_RAND_RESET_I(16);
    filter_control__DOT__filter_0__DOT__FILTER__BRA__1__KET____DOT__tapk__DOT__delayed_sample = VL_RAND_RESET_I(16);
    filter_control__DOT__filter_0__DOT__FILTER__BRA__1__KET____DOT__tapk__DOT__product = VL_RAND_RESET_I(32);
    filter_control__DOT__filter_0__DOT__FILTER__BRA__1__KET____DOT__tapk__DOT__genblk2__DOT__tap = VL_RAND_RESET_I(16);
    filter_control__DOT__filter_0__DOT__FILTER__BRA__2__KET____DOT__tapk__DOT__delayed_sample = VL_RAND_RESET_I(16);
    filter_control__DOT__filter_0__DOT__FILTER__BRA__2__KET____DOT__tapk__DOT__product = VL_RAND_RESET_I(32);
    filter_control__DOT__filter_0__DOT__FILTER__BRA__2__KET____DOT__tapk__DOT__genblk2__DOT__tap = VL_RAND_RESET_I(16);
    filter_control__DOT__filter_0__DOT__FILTER__BRA__3__KET____DOT__tapk__DOT__delayed_sample = VL_RAND_RESET_I(16);
    filter_control__DOT__filter_0__DOT__FILTER__BRA__3__KET____DOT__tapk__DOT__product = VL_RAND_RESET_I(32);
    filter_control__DOT__filter_0__DOT__FILTER__BRA__3__KET____DOT__tapk__DOT__genblk2__DOT__tap = VL_RAND_RESET_I(16);
    filter_control__DOT__filter_0__DOT__FILTER__BRA__4__KET____DOT__tapk__DOT__delayed_sample = VL_RAND_RESET_I(16);
    filter_control__DOT__filter_0__DOT__FILTER__BRA__4__KET____DOT__tapk__DOT__product = VL_RAND_RESET_I(32);
    filter_control__DOT__filter_0__DOT__FILTER__BRA__4__KET____DOT__tapk__DOT__genblk2__DOT__tap = VL_RAND_RESET_I(16);
    filter_control__DOT__filter_0__DOT__FILTER__BRA__5__KET____DOT__tapk__DOT__delayed_sample = VL_RAND_RESET_I(16);
    filter_control__DOT__filter_0__DOT__FILTER__BRA__5__KET____DOT__tapk__DOT__product = VL_RAND_RESET_I(32);
    filter_control__DOT__filter_0__DOT__FILTER__BRA__5__KET____DOT__tapk__DOT__genblk2__DOT__tap = VL_RAND_RESET_I(16);
    filter_control__DOT__filter_0__DOT__FILTER__BRA__6__KET____DOT__tapk__DOT__delayed_sample = VL_RAND_RESET_I(16);
    filter_control__DOT__filter_0__DOT__FILTER__BRA__6__KET____DOT__tapk__DOT__product = VL_RAND_RESET_I(32);
    filter_control__DOT__filter_0__DOT__FILTER__BRA__6__KET____DOT__tapk__DOT__genblk2__DOT__tap = VL_RAND_RESET_I(16);
    filter_control__DOT__filter_0__DOT__FILTER__BRA__7__KET____DOT__tapk__DOT__delayed_sample = VL_RAND_RESET_I(16);
    filter_control__DOT__filter_0__DOT__FILTER__BRA__7__KET____DOT__tapk__DOT__product = VL_RAND_RESET_I(32);
    filter_control__DOT__filter_0__DOT__FILTER__BRA__7__KET____DOT__tapk__DOT__genblk2__DOT__tap = VL_RAND_RESET_I(16);
    filter_control__DOT__filter_0__DOT__FILTER__BRA__8__KET____DOT__tapk__DOT__delayed_sample = VL_RAND_RESET_I(16);
    filter_control__DOT__filter_0__DOT__FILTER__BRA__8__KET____DOT__tapk__DOT__product = VL_RAND_RESET_I(32);
    filter_control__DOT__filter_0__DOT__FILTER__BRA__8__KET____DOT__tapk__DOT__genblk2__DOT__tap = VL_RAND_RESET_I(16);
    filter_control__DOT__filter_0__DOT__FILTER__BRA__9__KET____DOT__tapk__DOT__delayed_sample = VL_RAND_RESET_I(16);
    filter_control__DOT__filter_0__DOT__FILTER__BRA__9__KET____DOT__tapk__DOT__product = VL_RAND_RESET_I(32);
    filter_control__DOT__filter_0__DOT__FILTER__BRA__9__KET____DOT__tapk__DOT__genblk2__DOT__tap = VL_RAND_RESET_I(16);
    filter_control__DOT__filter_0__DOT__FILTER__BRA__10__KET____DOT__tapk__DOT__delayed_sample = VL_RAND_RESET_I(16);
    filter_control__DOT__filter_0__DOT__FILTER__BRA__10__KET____DOT__tapk__DOT__product = VL_RAND_RESET_I(32);
    filter_control__DOT__filter_0__DOT__FILTER__BRA__10__KET____DOT__tapk__DOT__genblk2__DOT__tap = VL_RAND_RESET_I(16);
    filter_control__DOT__filter_0__DOT__FILTER__BRA__11__KET____DOT__tapk__DOT__delayed_sample = VL_RAND_RESET_I(16);
    filter_control__DOT__filter_0__DOT__FILTER__BRA__11__KET____DOT__tapk__DOT__product = VL_RAND_RESET_I(32);
    filter_control__DOT__filter_0__DOT__FILTER__BRA__11__KET____DOT__tapk__DOT__genblk2__DOT__tap = VL_RAND_RESET_I(16);
    filter_control__DOT__filter_0__DOT__FILTER__BRA__12__KET____DOT__tapk__DOT__delayed_sample = VL_RAND_RESET_I(16);
    filter_control__DOT__filter_0__DOT__FILTER__BRA__12__KET____DOT__tapk__DOT__product = VL_RAND_RESET_I(32);
    filter_control__DOT__filter_0__DOT__FILTER__BRA__12__KET____DOT__tapk__DOT__genblk2__DOT__tap = VL_RAND_RESET_I(16);
    filter_control__DOT__filter_0__DOT__FILTER__BRA__13__KET____DOT__tapk__DOT__delayed_sample = VL_RAND_RESET_I(16);
    filter_control__DOT__filter_0__DOT__FILTER__BRA__13__KET____DOT__tapk__DOT__product = VL_RAND_RESET_I(32);
    filter_control__DOT__filter_0__DOT__FILTER__BRA__13__KET____DOT__tapk__DOT__genblk2__DOT__tap = VL_RAND_RESET_I(16);
    filter_control__DOT__filter_0__DOT__FILTER__BRA__14__KET____DOT__tapk__DOT__delayed_sample = VL_RAND_RESET_I(16);
    filter_control__DOT__filter_0__DOT__FILTER__BRA__14__KET____DOT__tapk__DOT__product = VL_RAND_RESET_I(32);
    filter_control__DOT__filter_0__DOT__FILTER__BRA__14__KET____DOT__tapk__DOT__genblk2__DOT__tap = VL_RAND_RESET_I(16);
    filter_control__DOT__filter_0__DOT__FILTER__BRA__15__KET____DOT__tapk__DOT__delayed_sample = VL_RAND_RESET_I(16);
    filter_control__DOT__filter_0__DOT__FILTER__BRA__15__KET____DOT__tapk__DOT__product = VL_RAND_RESET_I(32);
    filter_control__DOT__filter_0__DOT__FILTER__BRA__15__KET____DOT__tapk__DOT__genblk2__DOT__tap = VL_RAND_RESET_I(16);
    __Vtableidx1 = 0;
    __Vtable1_filter_control__DOT__i_idx[0] = 0U;
    __Vtable1_filter_control__DOT__i_idx[1] = 0U;
    __Vtable1_filter_control__DOT__i_idx[2] = 1U;
    __Vtable1_filter_control__DOT__i_idx[3] = 2U;
    __Vtable1_filter_control__DOT__i_idx[4] = 3U;
    __Vtable1_filter_control__DOT__i_idx[5] = 4U;
    __Vtable1_filter_control__DOT__i_idx[6] = 5U;
    __Vtable1_filter_control__DOT__i_idx[7] = 6U;
    __Vtable1_filter_control__DOT__i_idx[8] = 7U;
    __Vtable1_filter_control__DOT__i_idx[9] = 8U;
    __Vtable1_filter_control__DOT__i_idx[10] = 9U;
    __Vtable1_filter_control__DOT__i_idx[11] = 0xaU;
    __Vtable1_filter_control__DOT__i_idx[12] = 0xbU;
    __Vtable1_filter_control__DOT__i_idx[13] = 0xcU;
    __Vtable1_filter_control__DOT__i_idx[14] = 0xdU;
    __Vtable1_filter_control__DOT__i_idx[15] = 0xeU;
    __Vtable1_filter_control__DOT__i_idx[16] = 0xfU;
    __Vtable1_filter_control__DOT__i_idx[17] = 0x10U;
    __Vtable1_filter_control__DOT__i_idx[18] = 0x11U;
    __Vtable1_filter_control__DOT__i_idx[19] = 0x12U;
    __Vtable1_filter_control__DOT__i_idx[20] = 0x13U;
    __Vtable1_filter_control__DOT__i_idx[21] = 0x14U;
    __Vtable1_filter_control__DOT__i_idx[22] = 0x15U;
    __Vtable1_filter_control__DOT__i_idx[23] = 0x16U;
    __Vtable1_filter_control__DOT__i_idx[24] = 0x17U;
    __Vtable1_filter_control__DOT__i_idx[25] = 0x18U;
    __Vtable1_filter_control__DOT__i_idx[26] = 0x19U;
    __Vtable1_filter_control__DOT__i_idx[27] = 0x1aU;
    __Vtable1_filter_control__DOT__i_idx[28] = 0x1bU;
    __Vtable1_filter_control__DOT__i_idx[29] = 0x1cU;
    __Vtable1_filter_control__DOT__i_idx[30] = 0x1dU;
    __Vtable1_filter_control__DOT__i_idx[31] = 0x1eU;
    __Vtable1_filter_control__DOT__i_idx[32] = 0U;
    __Vtable1_filter_control__DOT__i_idx[33] = 0U;
    __Vtable1_filter_control__DOT__i_idx[34] = 1U;
    __Vtable1_filter_control__DOT__i_idx[35] = 2U;
    __Vtable1_filter_control__DOT__i_idx[36] = 3U;
    __Vtable1_filter_control__DOT__i_idx[37] = 4U;
    __Vtable1_filter_control__DOT__i_idx[38] = 5U;
    __Vtable1_filter_control__DOT__i_idx[39] = 6U;
    __Vtable1_filter_control__DOT__i_idx[40] = 7U;
    __Vtable1_filter_control__DOT__i_idx[41] = 8U;
    __Vtable1_filter_control__DOT__i_idx[42] = 9U;
    __Vtable1_filter_control__DOT__i_idx[43] = 0xaU;
    __Vtable1_filter_control__DOT__i_idx[44] = 0xbU;
    __Vtable1_filter_control__DOT__i_idx[45] = 0xcU;
    __Vtable1_filter_control__DOT__i_idx[46] = 0xdU;
    __Vtable1_filter_control__DOT__i_idx[47] = 0xeU;
    __Vtable1_filter_control__DOT__i_idx[48] = 0xfU;
    __Vtable1_filter_control__DOT__i_idx[49] = 0x10U;
    __Vtable1_filter_control__DOT__i_idx[50] = 0x11U;
    __Vtable1_filter_control__DOT__i_idx[51] = 0x12U;
    __Vtable1_filter_control__DOT__i_idx[52] = 0x13U;
    __Vtable1_filter_control__DOT__i_idx[53] = 0x14U;
    __Vtable1_filter_control__DOT__i_idx[54] = 0x15U;
    __Vtable1_filter_control__DOT__i_idx[55] = 0x16U;
    __Vtable1_filter_control__DOT__i_idx[56] = 0x17U;
    __Vtable1_filter_control__DOT__i_idx[57] = 0x18U;
    __Vtable1_filter_control__DOT__i_idx[58] = 0x19U;
    __Vtable1_filter_control__DOT__i_idx[59] = 0x1aU;
    __Vtable1_filter_control__DOT__i_idx[60] = 0x1bU;
    __Vtable1_filter_control__DOT__i_idx[61] = 0x1cU;
    __Vtable1_filter_control__DOT__i_idx[62] = 0x1dU;
    __Vtable1_filter_control__DOT__i_idx[63] = 0x1eU;
    __Vtable1_filter_control__DOT__next_state[0] = 1U;
    __Vtable1_filter_control__DOT__next_state[1] = 2U;
    __Vtable1_filter_control__DOT__next_state[2] = 3U;
    __Vtable1_filter_control__DOT__next_state[3] = 4U;
    __Vtable1_filter_control__DOT__next_state[4] = 5U;
    __Vtable1_filter_control__DOT__next_state[5] = 6U;
    __Vtable1_filter_control__DOT__next_state[6] = 7U;
    __Vtable1_filter_control__DOT__next_state[7] = 8U;
    __Vtable1_filter_control__DOT__next_state[8] = 9U;
    __Vtable1_filter_control__DOT__next_state[9] = 0xaU;
    __Vtable1_filter_control__DOT__next_state[10] = 0xbU;
    __Vtable1_filter_control__DOT__next_state[11] = 0xcU;
    __Vtable1_filter_control__DOT__next_state[12] = 0xdU;
    __Vtable1_filter_control__DOT__next_state[13] = 0xeU;
    __Vtable1_filter_control__DOT__next_state[14] = 0xfU;
    __Vtable1_filter_control__DOT__next_state[15] = 0x10U;
    __Vtable1_filter_control__DOT__next_state[16] = 0x10U;
    __Vtable1_filter_control__DOT__next_state[17] = 0x12U;
    __Vtable1_filter_control__DOT__next_state[18] = 0x13U;
    __Vtable1_filter_control__DOT__next_state[19] = 0x14U;
    __Vtable1_filter_control__DOT__next_state[20] = 0x15U;
    __Vtable1_filter_control__DOT__next_state[21] = 0x16U;
    __Vtable1_filter_control__DOT__next_state[22] = 0x17U;
    __Vtable1_filter_control__DOT__next_state[23] = 0x18U;
    __Vtable1_filter_control__DOT__next_state[24] = 0x19U;
    __Vtable1_filter_control__DOT__next_state[25] = 0x1aU;
    __Vtable1_filter_control__DOT__next_state[26] = 0x1bU;
    __Vtable1_filter_control__DOT__next_state[27] = 0x1cU;
    __Vtable1_filter_control__DOT__next_state[28] = 0x1dU;
    __Vtable1_filter_control__DOT__next_state[29] = 0x1eU;
    __Vtable1_filter_control__DOT__next_state[30] = 0x1fU;
    __Vtable1_filter_control__DOT__next_state[31] = 0U;
    __Vtable1_filter_control__DOT__next_state[32] = 0U;
    __Vtable1_filter_control__DOT__next_state[33] = 2U;
    __Vtable1_filter_control__DOT__next_state[34] = 3U;
    __Vtable1_filter_control__DOT__next_state[35] = 4U;
    __Vtable1_filter_control__DOT__next_state[36] = 5U;
    __Vtable1_filter_control__DOT__next_state[37] = 6U;
    __Vtable1_filter_control__DOT__next_state[38] = 7U;
    __Vtable1_filter_control__DOT__next_state[39] = 8U;
    __Vtable1_filter_control__DOT__next_state[40] = 9U;
    __Vtable1_filter_control__DOT__next_state[41] = 0xaU;
    __Vtable1_filter_control__DOT__next_state[42] = 0xbU;
    __Vtable1_filter_control__DOT__next_state[43] = 0xcU;
    __Vtable1_filter_control__DOT__next_state[44] = 0xdU;
    __Vtable1_filter_control__DOT__next_state[45] = 0xeU;
    __Vtable1_filter_control__DOT__next_state[46] = 0xfU;
    __Vtable1_filter_control__DOT__next_state[47] = 0x10U;
    __Vtable1_filter_control__DOT__next_state[48] = 0U;
    __Vtable1_filter_control__DOT__next_state[49] = 0x12U;
    __Vtable1_filter_control__DOT__next_state[50] = 0x13U;
    __Vtable1_filter_control__DOT__next_state[51] = 0x14U;
    __Vtable1_filter_control__DOT__next_state[52] = 0x15U;
    __Vtable1_filter_control__DOT__next_state[53] = 0x16U;
    __Vtable1_filter_control__DOT__next_state[54] = 0x17U;
    __Vtable1_filter_control__DOT__next_state[55] = 0x18U;
    __Vtable1_filter_control__DOT__next_state[56] = 0x19U;
    __Vtable1_filter_control__DOT__next_state[57] = 0x1aU;
    __Vtable1_filter_control__DOT__next_state[58] = 0x1bU;
    __Vtable1_filter_control__DOT__next_state[59] = 0x1cU;
    __Vtable1_filter_control__DOT__next_state[60] = 0x1dU;
    __Vtable1_filter_control__DOT__next_state[61] = 0x1eU;
    __Vtable1_filter_control__DOT__next_state[62] = 0x1fU;
    __Vtable1_filter_control__DOT__next_state[63] = 0U;
    __Vtable1_filter_control__DOT__i_tap_wr[0] = 0U;
    __Vtable1_filter_control__DOT__i_tap_wr[1] = 1U;
    __Vtable1_filter_control__DOT__i_tap_wr[2] = 1U;
    __Vtable1_filter_control__DOT__i_tap_wr[3] = 1U;
    __Vtable1_filter_control__DOT__i_tap_wr[4] = 1U;
    __Vtable1_filter_control__DOT__i_tap_wr[5] = 1U;
    __Vtable1_filter_control__DOT__i_tap_wr[6] = 1U;
    __Vtable1_filter_control__DOT__i_tap_wr[7] = 1U;
    __Vtable1_filter_control__DOT__i_tap_wr[8] = 1U;
    __Vtable1_filter_control__DOT__i_tap_wr[9] = 1U;
    __Vtable1_filter_control__DOT__i_tap_wr[10] = 1U;
    __Vtable1_filter_control__DOT__i_tap_wr[11] = 1U;
    __Vtable1_filter_control__DOT__i_tap_wr[12] = 1U;
    __Vtable1_filter_control__DOT__i_tap_wr[13] = 1U;
    __Vtable1_filter_control__DOT__i_tap_wr[14] = 1U;
    __Vtable1_filter_control__DOT__i_tap_wr[15] = 1U;
    __Vtable1_filter_control__DOT__i_tap_wr[16] = 0U;
    __Vtable1_filter_control__DOT__i_tap_wr[17] = 1U;
    __Vtable1_filter_control__DOT__i_tap_wr[18] = 1U;
    __Vtable1_filter_control__DOT__i_tap_wr[19] = 1U;
    __Vtable1_filter_control__DOT__i_tap_wr[20] = 1U;
    __Vtable1_filter_control__DOT__i_tap_wr[21] = 1U;
    __Vtable1_filter_control__DOT__i_tap_wr[22] = 1U;
    __Vtable1_filter_control__DOT__i_tap_wr[23] = 1U;
    __Vtable1_filter_control__DOT__i_tap_wr[24] = 1U;
    __Vtable1_filter_control__DOT__i_tap_wr[25] = 1U;
    __Vtable1_filter_control__DOT__i_tap_wr[26] = 1U;
    __Vtable1_filter_control__DOT__i_tap_wr[27] = 1U;
    __Vtable1_filter_control__DOT__i_tap_wr[28] = 1U;
    __Vtable1_filter_control__DOT__i_tap_wr[29] = 1U;
    __Vtable1_filter_control__DOT__i_tap_wr[30] = 1U;
    __Vtable1_filter_control__DOT__i_tap_wr[31] = 1U;
    __Vtable1_filter_control__DOT__i_tap_wr[32] = 0U;
    __Vtable1_filter_control__DOT__i_tap_wr[33] = 1U;
    __Vtable1_filter_control__DOT__i_tap_wr[34] = 1U;
    __Vtable1_filter_control__DOT__i_tap_wr[35] = 1U;
    __Vtable1_filter_control__DOT__i_tap_wr[36] = 1U;
    __Vtable1_filter_control__DOT__i_tap_wr[37] = 1U;
    __Vtable1_filter_control__DOT__i_tap_wr[38] = 1U;
    __Vtable1_filter_control__DOT__i_tap_wr[39] = 1U;
    __Vtable1_filter_control__DOT__i_tap_wr[40] = 1U;
    __Vtable1_filter_control__DOT__i_tap_wr[41] = 1U;
    __Vtable1_filter_control__DOT__i_tap_wr[42] = 1U;
    __Vtable1_filter_control__DOT__i_tap_wr[43] = 1U;
    __Vtable1_filter_control__DOT__i_tap_wr[44] = 1U;
    __Vtable1_filter_control__DOT__i_tap_wr[45] = 1U;
    __Vtable1_filter_control__DOT__i_tap_wr[46] = 1U;
    __Vtable1_filter_control__DOT__i_tap_wr[47] = 1U;
    __Vtable1_filter_control__DOT__i_tap_wr[48] = 0U;
    __Vtable1_filter_control__DOT__i_tap_wr[49] = 1U;
    __Vtable1_filter_control__DOT__i_tap_wr[50] = 1U;
    __Vtable1_filter_control__DOT__i_tap_wr[51] = 1U;
    __Vtable1_filter_control__DOT__i_tap_wr[52] = 1U;
    __Vtable1_filter_control__DOT__i_tap_wr[53] = 1U;
    __Vtable1_filter_control__DOT__i_tap_wr[54] = 1U;
    __Vtable1_filter_control__DOT__i_tap_wr[55] = 1U;
    __Vtable1_filter_control__DOT__i_tap_wr[56] = 1U;
    __Vtable1_filter_control__DOT__i_tap_wr[57] = 1U;
    __Vtable1_filter_control__DOT__i_tap_wr[58] = 1U;
    __Vtable1_filter_control__DOT__i_tap_wr[59] = 1U;
    __Vtable1_filter_control__DOT__i_tap_wr[60] = 1U;
    __Vtable1_filter_control__DOT__i_tap_wr[61] = 1U;
    __Vtable1_filter_control__DOT__i_tap_wr[62] = 1U;
    __Vtable1_filter_control__DOT__i_tap_wr[63] = 1U;
    __Vm_traceActivity = 0;
}
