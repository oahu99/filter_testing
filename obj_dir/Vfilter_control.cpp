// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfilter_control.h for the primary calling header

#include "Vfilter_control.h"
#include "Vfilter_control__Syms.h"

//==========

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

void Vfilter_control::_initial__TOP__1(Vfilter_control__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfilter_control::_initial__TOP__1\n"); );
    Vfilter_control* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    VL_READMEM_N(true, 16, 103, 0, std::string("taps.dat")
                 , vlTOPp->filter_control__DOT__i_taps_arr_0
                 , 0, ~VL_ULL(0));
    vlTOPp->filter_control__DOT__fir_0__DOT__o_ce = 0U;
    vlTOPp->filter_control__DOT__out = 0U;
    vlTOPp->filter_control__DOT__fir_0__DOT__tap = 0U;
    vlTOPp->filter_control__DOT__fir_0__DOT__data = 0U;
    vlTOPp->filter_control__DOT__fir_0__DOT__genblk2__DOT__tapwidx = 0U;
    vlTOPp->filter_control__DOT__fir_0__DOT__dwidx = 0U;
    vlTOPp->filter_control__DOT__fir_0__DOT__didx = 0U;
    vlTOPp->filter_control__DOT__fir_0__DOT__tidx = 0U;
    vlTOPp->filter_control__DOT__tap = 0x44480000U;
    vlTOPp->filter_control__DOT__fir_0__DOT__r_acc = 0U;
    vlTOPp->filter_control__DOT__fir_0__DOT__pre_acc_ce = 0U;
    vlTOPp->filter_control__DOT__fir_0__DOT__p_ce = 0U;
    vlTOPp->filter_control__DOT__fir_0__DOT__product = 0U;
    vlTOPp->filter_control__DOT__fir_0__DOT__d_ce = 0U;
    vlTOPp->filter_control__DOT__fir_0__DOT__m_ce = 0U;
}

VL_INLINE_OPT void Vfilter_control::_combo__TOP__2(Vfilter_control__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfilter_control::_combo__TOP__2\n"); );
    Vfilter_control* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->filter_control__DOT__fixed_0__DOT__sign 
        = (1U & ((IData)(vlTOPp->i_sample) >> 0xfU));
    vlTOPp->filter_control__DOT__fixed_0__DOT__unsigned_fixed 
        = (0xffffU & ((IData)(vlTOPp->filter_control__DOT__fixed_0__DOT__sign)
                       ? ((IData)(1U) + (~ (IData)(vlTOPp->i_sample)))
                       : (IData)(vlTOPp->i_sample)));
    vlTOPp->filter_control__DOT__o_float = (((IData)(vlTOPp->filter_control__DOT__fixed_0__DOT__sign) 
                                             << 0x1fU) 
                                            | (((IData)(vlTOPp->filter_control__DOT__fixed_0__DOT__exponent) 
                                                << 0x17U) 
                                               | vlTOPp->filter_control__DOT__fixed_0__DOT__mantissa));
    if ((0x4000U & (IData)(vlTOPp->filter_control__DOT__fixed_0__DOT__unsigned_fixed))) {
        vlTOPp->filter_control__DOT__fixed_0__DOT__exponent = 0x8dU;
        vlTOPp->filter_control__DOT__fixed_0__DOT__mantissa 
            = (0x7ffe00U & ((IData)(vlTOPp->filter_control__DOT__fixed_0__DOT__unsigned_fixed) 
                            << 9U));
    } else {
        if ((0x2000U & (IData)(vlTOPp->filter_control__DOT__fixed_0__DOT__unsigned_fixed))) {
            vlTOPp->filter_control__DOT__fixed_0__DOT__exponent = 0x8cU;
            vlTOPp->filter_control__DOT__fixed_0__DOT__mantissa 
                = (0x7ffc00U & ((IData)(vlTOPp->filter_control__DOT__fixed_0__DOT__unsigned_fixed) 
                                << 0xaU));
        } else {
            if ((0x1000U & (IData)(vlTOPp->filter_control__DOT__fixed_0__DOT__unsigned_fixed))) {
                vlTOPp->filter_control__DOT__fixed_0__DOT__exponent = 0x8bU;
                vlTOPp->filter_control__DOT__fixed_0__DOT__mantissa 
                    = (0x7ff800U & ((IData)(vlTOPp->filter_control__DOT__fixed_0__DOT__unsigned_fixed) 
                                    << 0xbU));
            } else {
                if ((0x800U & (IData)(vlTOPp->filter_control__DOT__fixed_0__DOT__unsigned_fixed))) {
                    vlTOPp->filter_control__DOT__fixed_0__DOT__exponent = 0x8aU;
                    vlTOPp->filter_control__DOT__fixed_0__DOT__mantissa 
                        = (0x7ff000U & ((IData)(vlTOPp->filter_control__DOT__fixed_0__DOT__unsigned_fixed) 
                                        << 0xcU));
                } else {
                    if ((0x400U & (IData)(vlTOPp->filter_control__DOT__fixed_0__DOT__unsigned_fixed))) {
                        vlTOPp->filter_control__DOT__fixed_0__DOT__exponent = 0x89U;
                        vlTOPp->filter_control__DOT__fixed_0__DOT__mantissa 
                            = (0x7fe000U & ((IData)(vlTOPp->filter_control__DOT__fixed_0__DOT__unsigned_fixed) 
                                            << 0xdU));
                    } else {
                        if ((0x200U & (IData)(vlTOPp->filter_control__DOT__fixed_0__DOT__unsigned_fixed))) {
                            vlTOPp->filter_control__DOT__fixed_0__DOT__exponent = 0x88U;
                            vlTOPp->filter_control__DOT__fixed_0__DOT__mantissa 
                                = (0x7fc000U & ((IData)(vlTOPp->filter_control__DOT__fixed_0__DOT__unsigned_fixed) 
                                                << 0xeU));
                        } else {
                            if ((0x100U & (IData)(vlTOPp->filter_control__DOT__fixed_0__DOT__unsigned_fixed))) {
                                vlTOPp->filter_control__DOT__fixed_0__DOT__exponent = 0x87U;
                                vlTOPp->filter_control__DOT__fixed_0__DOT__mantissa 
                                    = (0x7f8000U & 
                                       ((IData)(vlTOPp->filter_control__DOT__fixed_0__DOT__unsigned_fixed) 
                                        << 0xfU));
                            } else {
                                if ((0x80U & (IData)(vlTOPp->filter_control__DOT__fixed_0__DOT__unsigned_fixed))) {
                                    vlTOPp->filter_control__DOT__fixed_0__DOT__exponent = 0x86U;
                                    vlTOPp->filter_control__DOT__fixed_0__DOT__mantissa 
                                        = (0x7f0000U 
                                           & ((IData)(vlTOPp->filter_control__DOT__fixed_0__DOT__unsigned_fixed) 
                                              << 0x10U));
                                } else {
                                    if ((0x40U & (IData)(vlTOPp->filter_control__DOT__fixed_0__DOT__unsigned_fixed))) {
                                        vlTOPp->filter_control__DOT__fixed_0__DOT__exponent = 0x85U;
                                        vlTOPp->filter_control__DOT__fixed_0__DOT__mantissa 
                                            = (0x7e0000U 
                                               & ((IData)(vlTOPp->filter_control__DOT__fixed_0__DOT__unsigned_fixed) 
                                                  << 0x11U));
                                    } else {
                                        if ((0x20U 
                                             & (IData)(vlTOPp->filter_control__DOT__fixed_0__DOT__unsigned_fixed))) {
                                            vlTOPp->filter_control__DOT__fixed_0__DOT__exponent = 0x84U;
                                            vlTOPp->filter_control__DOT__fixed_0__DOT__mantissa 
                                                = (0x7c0000U 
                                                   & ((IData)(vlTOPp->filter_control__DOT__fixed_0__DOT__unsigned_fixed) 
                                                      << 0x12U));
                                        } else {
                                            if ((0x10U 
                                                 & (IData)(vlTOPp->filter_control__DOT__fixed_0__DOT__unsigned_fixed))) {
                                                vlTOPp->filter_control__DOT__fixed_0__DOT__exponent = 0x83U;
                                                vlTOPp->filter_control__DOT__fixed_0__DOT__mantissa 
                                                    = 
                                                    (0x780000U 
                                                     & ((IData)(vlTOPp->filter_control__DOT__fixed_0__DOT__unsigned_fixed) 
                                                        << 0x13U));
                                            } else {
                                                if (
                                                    (8U 
                                                     & (IData)(vlTOPp->filter_control__DOT__fixed_0__DOT__unsigned_fixed))) {
                                                    vlTOPp->filter_control__DOT__fixed_0__DOT__exponent = 0x82U;
                                                    vlTOPp->filter_control__DOT__fixed_0__DOT__mantissa 
                                                        = 
                                                        (0x700000U 
                                                         & ((IData)(vlTOPp->filter_control__DOT__fixed_0__DOT__unsigned_fixed) 
                                                            << 0x14U));
                                                } else {
                                                    if (
                                                        (4U 
                                                         & (IData)(vlTOPp->filter_control__DOT__fixed_0__DOT__unsigned_fixed))) {
                                                        vlTOPp->filter_control__DOT__fixed_0__DOT__exponent = 0x81U;
                                                        vlTOPp->filter_control__DOT__fixed_0__DOT__mantissa 
                                                            = 
                                                            (0x600000U 
                                                             & ((IData)(vlTOPp->filter_control__DOT__fixed_0__DOT__unsigned_fixed) 
                                                                << 0x15U));
                                                    } else {
                                                        if (
                                                            (2U 
                                                             & (IData)(vlTOPp->filter_control__DOT__fixed_0__DOT__unsigned_fixed))) {
                                                            vlTOPp->filter_control__DOT__fixed_0__DOT__exponent = 0x80U;
                                                            vlTOPp->filter_control__DOT__fixed_0__DOT__mantissa 
                                                                = 
                                                                (0x400000U 
                                                                 & ((IData)(vlTOPp->filter_control__DOT__fixed_0__DOT__unsigned_fixed) 
                                                                    << 0x16U));
                                                        } else {
                                                            if (
                                                                (1U 
                                                                 & (IData)(vlTOPp->filter_control__DOT__fixed_0__DOT__unsigned_fixed))) {
                                                                vlTOPp->filter_control__DOT__fixed_0__DOT__exponent = 0x7fU;
                                                                vlTOPp->filter_control__DOT__fixed_0__DOT__mantissa = 0U;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

void Vfilter_control::_settle__TOP__3(Vfilter_control__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfilter_control::_settle__TOP__3\n"); );
    Vfilter_control* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->filter_control__DOT__fixed_0__DOT__sign 
        = (1U & ((IData)(vlTOPp->i_sample) >> 0xfU));
    vlTOPp->filter_control__DOT__fixed_0__DOT__unsigned_fixed 
        = (0xffffU & ((IData)(vlTOPp->filter_control__DOT__fixed_0__DOT__sign)
                       ? ((IData)(1U) + (~ (IData)(vlTOPp->i_sample)))
                       : (IData)(vlTOPp->i_sample)));
    vlTOPp->filter_control__DOT__o_float = (((IData)(vlTOPp->filter_control__DOT__fixed_0__DOT__sign) 
                                             << 0x1fU) 
                                            | (((IData)(vlTOPp->filter_control__DOT__fixed_0__DOT__exponent) 
                                                << 0x17U) 
                                               | vlTOPp->filter_control__DOT__fixed_0__DOT__mantissa));
    if ((0x4000U & (IData)(vlTOPp->filter_control__DOT__fixed_0__DOT__unsigned_fixed))) {
        vlTOPp->filter_control__DOT__fixed_0__DOT__exponent = 0x8dU;
        vlTOPp->filter_control__DOT__fixed_0__DOT__mantissa 
            = (0x7ffe00U & ((IData)(vlTOPp->filter_control__DOT__fixed_0__DOT__unsigned_fixed) 
                            << 9U));
    } else {
        if ((0x2000U & (IData)(vlTOPp->filter_control__DOT__fixed_0__DOT__unsigned_fixed))) {
            vlTOPp->filter_control__DOT__fixed_0__DOT__exponent = 0x8cU;
            vlTOPp->filter_control__DOT__fixed_0__DOT__mantissa 
                = (0x7ffc00U & ((IData)(vlTOPp->filter_control__DOT__fixed_0__DOT__unsigned_fixed) 
                                << 0xaU));
        } else {
            if ((0x1000U & (IData)(vlTOPp->filter_control__DOT__fixed_0__DOT__unsigned_fixed))) {
                vlTOPp->filter_control__DOT__fixed_0__DOT__exponent = 0x8bU;
                vlTOPp->filter_control__DOT__fixed_0__DOT__mantissa 
                    = (0x7ff800U & ((IData)(vlTOPp->filter_control__DOT__fixed_0__DOT__unsigned_fixed) 
                                    << 0xbU));
            } else {
                if ((0x800U & (IData)(vlTOPp->filter_control__DOT__fixed_0__DOT__unsigned_fixed))) {
                    vlTOPp->filter_control__DOT__fixed_0__DOT__exponent = 0x8aU;
                    vlTOPp->filter_control__DOT__fixed_0__DOT__mantissa 
                        = (0x7ff000U & ((IData)(vlTOPp->filter_control__DOT__fixed_0__DOT__unsigned_fixed) 
                                        << 0xcU));
                } else {
                    if ((0x400U & (IData)(vlTOPp->filter_control__DOT__fixed_0__DOT__unsigned_fixed))) {
                        vlTOPp->filter_control__DOT__fixed_0__DOT__exponent = 0x89U;
                        vlTOPp->filter_control__DOT__fixed_0__DOT__mantissa 
                            = (0x7fe000U & ((IData)(vlTOPp->filter_control__DOT__fixed_0__DOT__unsigned_fixed) 
                                            << 0xdU));
                    } else {
                        if ((0x200U & (IData)(vlTOPp->filter_control__DOT__fixed_0__DOT__unsigned_fixed))) {
                            vlTOPp->filter_control__DOT__fixed_0__DOT__exponent = 0x88U;
                            vlTOPp->filter_control__DOT__fixed_0__DOT__mantissa 
                                = (0x7fc000U & ((IData)(vlTOPp->filter_control__DOT__fixed_0__DOT__unsigned_fixed) 
                                                << 0xeU));
                        } else {
                            if ((0x100U & (IData)(vlTOPp->filter_control__DOT__fixed_0__DOT__unsigned_fixed))) {
                                vlTOPp->filter_control__DOT__fixed_0__DOT__exponent = 0x87U;
                                vlTOPp->filter_control__DOT__fixed_0__DOT__mantissa 
                                    = (0x7f8000U & 
                                       ((IData)(vlTOPp->filter_control__DOT__fixed_0__DOT__unsigned_fixed) 
                                        << 0xfU));
                            } else {
                                if ((0x80U & (IData)(vlTOPp->filter_control__DOT__fixed_0__DOT__unsigned_fixed))) {
                                    vlTOPp->filter_control__DOT__fixed_0__DOT__exponent = 0x86U;
                                    vlTOPp->filter_control__DOT__fixed_0__DOT__mantissa 
                                        = (0x7f0000U 
                                           & ((IData)(vlTOPp->filter_control__DOT__fixed_0__DOT__unsigned_fixed) 
                                              << 0x10U));
                                } else {
                                    if ((0x40U & (IData)(vlTOPp->filter_control__DOT__fixed_0__DOT__unsigned_fixed))) {
                                        vlTOPp->filter_control__DOT__fixed_0__DOT__exponent = 0x85U;
                                        vlTOPp->filter_control__DOT__fixed_0__DOT__mantissa 
                                            = (0x7e0000U 
                                               & ((IData)(vlTOPp->filter_control__DOT__fixed_0__DOT__unsigned_fixed) 
                                                  << 0x11U));
                                    } else {
                                        if ((0x20U 
                                             & (IData)(vlTOPp->filter_control__DOT__fixed_0__DOT__unsigned_fixed))) {
                                            vlTOPp->filter_control__DOT__fixed_0__DOT__exponent = 0x84U;
                                            vlTOPp->filter_control__DOT__fixed_0__DOT__mantissa 
                                                = (0x7c0000U 
                                                   & ((IData)(vlTOPp->filter_control__DOT__fixed_0__DOT__unsigned_fixed) 
                                                      << 0x12U));
                                        } else {
                                            if ((0x10U 
                                                 & (IData)(vlTOPp->filter_control__DOT__fixed_0__DOT__unsigned_fixed))) {
                                                vlTOPp->filter_control__DOT__fixed_0__DOT__exponent = 0x83U;
                                                vlTOPp->filter_control__DOT__fixed_0__DOT__mantissa 
                                                    = 
                                                    (0x780000U 
                                                     & ((IData)(vlTOPp->filter_control__DOT__fixed_0__DOT__unsigned_fixed) 
                                                        << 0x13U));
                                            } else {
                                                if (
                                                    (8U 
                                                     & (IData)(vlTOPp->filter_control__DOT__fixed_0__DOT__unsigned_fixed))) {
                                                    vlTOPp->filter_control__DOT__fixed_0__DOT__exponent = 0x82U;
                                                    vlTOPp->filter_control__DOT__fixed_0__DOT__mantissa 
                                                        = 
                                                        (0x700000U 
                                                         & ((IData)(vlTOPp->filter_control__DOT__fixed_0__DOT__unsigned_fixed) 
                                                            << 0x14U));
                                                } else {
                                                    if (
                                                        (4U 
                                                         & (IData)(vlTOPp->filter_control__DOT__fixed_0__DOT__unsigned_fixed))) {
                                                        vlTOPp->filter_control__DOT__fixed_0__DOT__exponent = 0x81U;
                                                        vlTOPp->filter_control__DOT__fixed_0__DOT__mantissa 
                                                            = 
                                                            (0x600000U 
                                                             & ((IData)(vlTOPp->filter_control__DOT__fixed_0__DOT__unsigned_fixed) 
                                                                << 0x15U));
                                                    } else {
                                                        if (
                                                            (2U 
                                                             & (IData)(vlTOPp->filter_control__DOT__fixed_0__DOT__unsigned_fixed))) {
                                                            vlTOPp->filter_control__DOT__fixed_0__DOT__exponent = 0x80U;
                                                            vlTOPp->filter_control__DOT__fixed_0__DOT__mantissa 
                                                                = 
                                                                (0x400000U 
                                                                 & ((IData)(vlTOPp->filter_control__DOT__fixed_0__DOT__unsigned_fixed) 
                                                                    << 0x16U));
                                                        } else {
                                                            if (
                                                                (1U 
                                                                 & (IData)(vlTOPp->filter_control__DOT__fixed_0__DOT__unsigned_fixed))) {
                                                                vlTOPp->filter_control__DOT__fixed_0__DOT__exponent = 0x7fU;
                                                                vlTOPp->filter_control__DOT__fixed_0__DOT__mantissa = 0U;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->filter_control__DOT__i_tap_wr = ((0U != (IData)(vlTOPp->filter_control__DOT__state)) 
                                             & (0x80U 
                                                != (IData)(vlTOPp->filter_control__DOT__state)));
    vlTOPp->filter_control__DOT__next_state = (0xffffU 
                                               & ((0U 
                                                   == (IData)(vlTOPp->filter_control__DOT__state))
                                                   ? 
                                                  ((IData)(vlTOPp->i_start)
                                                    ? 0U
                                                    : 1U)
                                                   : 
                                                  ((0x80U 
                                                    == (IData)(vlTOPp->filter_control__DOT__state))
                                                    ? 
                                                   ((IData)(vlTOPp->i_start)
                                                     ? 0U
                                                     : 0x80U)
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlTOPp->filter_control__DOT__state)))));
    if ((0x7fU == (0xffU & (vlTOPp->filter_control__DOT__out 
                            >> 0x17U)))) {
        vlTOPp->filter_control__DOT__convert_0__DOT__Integer_Value = 0U;
    } else {
        if ((0x80U == (0xffU & (vlTOPp->filter_control__DOT__out 
                                >> 0x17U)))) {
            vlTOPp->filter_control__DOT__convert_0__DOT__Integer_Value 
                = (0x400000U & vlTOPp->filter_control__DOT__out);
        } else {
            if ((0x81U == (0xffU & (vlTOPp->filter_control__DOT__out 
                                    >> 0x17U)))) {
                vlTOPp->filter_control__DOT__convert_0__DOT__Integer_Value 
                    = (0x600000U & vlTOPp->filter_control__DOT__out);
            } else {
                if ((0x82U == (0xffU & (vlTOPp->filter_control__DOT__out 
                                        >> 0x17U)))) {
                    vlTOPp->filter_control__DOT__convert_0__DOT__Integer_Value 
                        = (0x700000U & vlTOPp->filter_control__DOT__out);
                } else {
                    if ((0x83U == (0xffU & (vlTOPp->filter_control__DOT__out 
                                            >> 0x17U)))) {
                        vlTOPp->filter_control__DOT__convert_0__DOT__Integer_Value 
                            = (0x780000U & vlTOPp->filter_control__DOT__out);
                    } else {
                        if ((0x84U == (0xffU & (vlTOPp->filter_control__DOT__out 
                                                >> 0x17U)))) {
                            vlTOPp->filter_control__DOT__convert_0__DOT__Integer_Value 
                                = (0x7c0000U & vlTOPp->filter_control__DOT__out);
                        } else {
                            if ((0x85U == (0xffU & 
                                           (vlTOPp->filter_control__DOT__out 
                                            >> 0x17U)))) {
                                vlTOPp->filter_control__DOT__convert_0__DOT__Integer_Value 
                                    = (0x7e0000U & vlTOPp->filter_control__DOT__out);
                            } else {
                                if ((0x86U == (0xffU 
                                               & (vlTOPp->filter_control__DOT__out 
                                                  >> 0x17U)))) {
                                    vlTOPp->filter_control__DOT__convert_0__DOT__Integer_Value 
                                        = (0x7f0000U 
                                           & vlTOPp->filter_control__DOT__out);
                                } else {
                                    if ((0x87U == (0xffU 
                                                   & (vlTOPp->filter_control__DOT__out 
                                                      >> 0x17U)))) {
                                        vlTOPp->filter_control__DOT__convert_0__DOT__Integer_Value 
                                            = (0x7f8000U 
                                               & vlTOPp->filter_control__DOT__out);
                                    } else {
                                        if ((0x88U 
                                             == (0xffU 
                                                 & (vlTOPp->filter_control__DOT__out 
                                                    >> 0x17U)))) {
                                            vlTOPp->filter_control__DOT__convert_0__DOT__Integer_Value 
                                                = (0x7fc000U 
                                                   & vlTOPp->filter_control__DOT__out);
                                        } else {
                                            if ((0x89U 
                                                 == 
                                                 (0xffU 
                                                  & (vlTOPp->filter_control__DOT__out 
                                                     >> 0x17U)))) {
                                                vlTOPp->filter_control__DOT__convert_0__DOT__Integer_Value 
                                                    = 
                                                    (0x7fe000U 
                                                     & vlTOPp->filter_control__DOT__out);
                                            } else {
                                                if (
                                                    (0x8aU 
                                                     == 
                                                     (0xffU 
                                                      & (vlTOPp->filter_control__DOT__out 
                                                         >> 0x17U)))) {
                                                    vlTOPp->filter_control__DOT__convert_0__DOT__Integer_Value 
                                                        = 
                                                        (0x7ff000U 
                                                         & vlTOPp->filter_control__DOT__out);
                                                } else {
                                                    if (
                                                        (0x8bU 
                                                         == 
                                                         (0xffU 
                                                          & (vlTOPp->filter_control__DOT__out 
                                                             >> 0x17U)))) {
                                                        vlTOPp->filter_control__DOT__convert_0__DOT__Integer_Value 
                                                            = 
                                                            (0x7ff800U 
                                                             & vlTOPp->filter_control__DOT__out);
                                                    } else {
                                                        if (
                                                            (0x8cU 
                                                             == 
                                                             (0xffU 
                                                              & (vlTOPp->filter_control__DOT__out 
                                                                 >> 0x17U)))) {
                                                            vlTOPp->filter_control__DOT__convert_0__DOT__Integer_Value 
                                                                = 
                                                                (0x7ffc00U 
                                                                 & vlTOPp->filter_control__DOT__out);
                                                        } else {
                                                            if (
                                                                (0x8dU 
                                                                 == 
                                                                 (0xffU 
                                                                  & (vlTOPp->filter_control__DOT__out 
                                                                     >> 0x17U)))) {
                                                                vlTOPp->filter_control__DOT__convert_0__DOT__Integer_Value 
                                                                    = 
                                                                    (0x7ffe00U 
                                                                     & vlTOPp->filter_control__DOT__out);
                                                            } else {
                                                                if (
                                                                    (0x8eU 
                                                                     == 
                                                                     (0xffU 
                                                                      & (vlTOPp->filter_control__DOT__out 
                                                                         >> 0x17U)))) {
                                                                    vlTOPp->filter_control__DOT__convert_0__DOT__Integer_Value 
                                                                        = 
                                                                        (0x7fff00U 
                                                                         & vlTOPp->filter_control__DOT__out);
                                                                } else {
                                                                    if (
                                                                        (0x8fU 
                                                                         == 
                                                                         (0xffU 
                                                                          & (vlTOPp->filter_control__DOT__out 
                                                                             >> 0x17U)))) {
                                                                        vlTOPp->filter_control__DOT__convert_0__DOT__Integer_Value 
                                                                            = 
                                                                            (0x7fff80U 
                                                                             & vlTOPp->filter_control__DOT__out);
                                                                    } else {
                                                                        if (
                                                                            (0x90U 
                                                                             == 
                                                                             (0xffU 
                                                                              & (vlTOPp->filter_control__DOT__out 
                                                                                >> 0x17U)))) {
                                                                            vlTOPp->filter_control__DOT__convert_0__DOT__Integer_Value 
                                                                                = 
                                                                                (0x7fffc0U 
                                                                                & vlTOPp->filter_control__DOT__out);
                                                                        } else {
                                                                            if (
                                                                                (0x91U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (vlTOPp->filter_control__DOT__out 
                                                                                >> 0x17U)))) {
                                                                                vlTOPp->filter_control__DOT__convert_0__DOT__Integer_Value 
                                                                                = 
                                                                                (0x7fffe0U 
                                                                                & vlTOPp->filter_control__DOT__out);
                                                                            } else {
                                                                                if (
                                                                                (0x92U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (vlTOPp->filter_control__DOT__out 
                                                                                >> 0x17U)))) {
                                                                                vlTOPp->filter_control__DOT__convert_0__DOT__Integer_Value 
                                                                                = 
                                                                                (0x7ffff0U 
                                                                                & vlTOPp->filter_control__DOT__out);
                                                                                } else {
                                                                                if (
                                                                                (0x93U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (vlTOPp->filter_control__DOT__out 
                                                                                >> 0x17U)))) {
                                                                                vlTOPp->filter_control__DOT__convert_0__DOT__Integer_Value 
                                                                                = 
                                                                                (0x7ffff8U 
                                                                                & vlTOPp->filter_control__DOT__out);
                                                                                } else {
                                                                                if (
                                                                                (0x94U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (vlTOPp->filter_control__DOT__out 
                                                                                >> 0x17U)))) {
                                                                                vlTOPp->filter_control__DOT__convert_0__DOT__Integer_Value 
                                                                                = 
                                                                                (0x7ffffcU 
                                                                                & vlTOPp->filter_control__DOT__out);
                                                                                } else {
                                                                                if (
                                                                                (0x95U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (vlTOPp->filter_control__DOT__out 
                                                                                >> 0x17U)))) {
                                                                                vlTOPp->filter_control__DOT__convert_0__DOT__Integer_Value 
                                                                                = 
                                                                                (0x7ffffeU 
                                                                                & vlTOPp->filter_control__DOT__out);
                                                                                } else {
                                                                                if (
                                                                                (0x96U 
                                                                                <= 
                                                                                (0xffU 
                                                                                & (vlTOPp->filter_control__DOT__out 
                                                                                >> 0x17U)))) {
                                                                                vlTOPp->filter_control__DOT__convert_0__DOT__Integer_Value 
                                                                                = 
                                                                                (0x7fffffU 
                                                                                & vlTOPp->filter_control__DOT__out);
                                                                                } else {
                                                                                if (
                                                                                (0x7eU 
                                                                                >= 
                                                                                (0xffU 
                                                                                & (vlTOPp->filter_control__DOT__out 
                                                                                >> 0x17U)))) {
                                                                                vlTOPp->filter_control__DOT__convert_0__DOT__Integer_Value = 0U;
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__sum_exponent 
        = (0x1ffU & ((0xffU & (vlTOPp->filter_control__DOT__fir_0__DOT__tap 
                               >> 0x17U)) + (0xffU 
                                             & (vlTOPp->filter_control__DOT__fir_0__DOT__data 
                                                >> 0x17U))));
    vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__product 
        = (VL_ULL(0xffffffffffff) & ((QData)((IData)(
                                                     ((0U 
                                                       != 
                                                       (0xffU 
                                                        & (vlTOPp->filter_control__DOT__fir_0__DOT__tap 
                                                           >> 0x17U)))
                                                       ? 
                                                      (0x800000U 
                                                       | (0x7fffffU 
                                                          & vlTOPp->filter_control__DOT__fir_0__DOT__tap))
                                                       : 
                                                      (0x7fffffU 
                                                       & vlTOPp->filter_control__DOT__fir_0__DOT__tap)))) 
                                     * (QData)((IData)(
                                                       ((0U 
                                                         != 
                                                         (0xffU 
                                                          & (vlTOPp->filter_control__DOT__fir_0__DOT__data 
                                                             >> 0x17U)))
                                                         ? 
                                                        (0x800000U 
                                                         | (0x7fffffU 
                                                            & vlTOPp->filter_control__DOT__fir_0__DOT__data))
                                                         : 
                                                        (0x7fffffU 
                                                         & vlTOPp->filter_control__DOT__fir_0__DOT__data))))));
    vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__sign 
        = (1U & ((vlTOPp->filter_control__DOT__fir_0__DOT__tap 
                  ^ vlTOPp->filter_control__DOT__fir_0__DOT__data) 
                 >> 0x1fU));
    vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__Exception 
        = ((0xffU == (0xffU & (vlTOPp->filter_control__DOT__fir_0__DOT__tap 
                               >> 0x17U))) | (0xffU 
                                              == (0xffU 
                                                  & (vlTOPp->filter_control__DOT__fir_0__DOT__data 
                                                     >> 0x17U))));
    vlTOPp->filter_control__DOT__add_0__DOT__operand_b 
        = ((0x3f800000U > (0x7fffffffU & vlTOPp->filter_control__DOT__tap))
            ? (IData)((VL_ULL(0x3f80000000000000) | (QData)((IData)(vlTOPp->filter_control__DOT__tap))))
            : 0x3f800000U);
    vlTOPp->filter_control__DOT__add_0__DOT__operand_a 
        = ((0x3f800000U > (0x7fffffffU & vlTOPp->filter_control__DOT__tap))
            ? (IData)(((VL_ULL(0x3f80000000000000) 
                        | (QData)((IData)(vlTOPp->filter_control__DOT__tap))) 
                       >> 0x20U)) : (IData)((QData)((IData)(vlTOPp->filter_control__DOT__tap))));
    vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__operand_b 
        = (((0x7fffffffU & vlTOPp->filter_control__DOT__fir_0__DOT__r_acc) 
            < (0x7fffffffU & vlTOPp->filter_control__DOT__fir_0__DOT__product))
            ? (IData)((((QData)((IData)(vlTOPp->filter_control__DOT__fir_0__DOT__product)) 
                        << 0x20U) | (QData)((IData)(vlTOPp->filter_control__DOT__fir_0__DOT__r_acc))))
            : vlTOPp->filter_control__DOT__fir_0__DOT__product);
    vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__operand_a 
        = (((0x7fffffffU & vlTOPp->filter_control__DOT__fir_0__DOT__r_acc) 
            < (0x7fffffffU & vlTOPp->filter_control__DOT__fir_0__DOT__product))
            ? (IData)(((((QData)((IData)(vlTOPp->filter_control__DOT__fir_0__DOT__product)) 
                         << 0x20U) | (QData)((IData)(vlTOPp->filter_control__DOT__fir_0__DOT__r_acc))) 
                       >> 0x20U)) : (IData)((QData)((IData)(vlTOPp->filter_control__DOT__fir_0__DOT__r_acc))));
    vlTOPp->o_result = (0xffffU & ((0x1ffffU & (IData)(
                                                       ((QData)((IData)(
                                                                        ((0xff800000U 
                                                                          & vlTOPp->filter_control__DOT__out) 
                                                                         | (0x7fffffU 
                                                                            & (vlTOPp->filter_control__DOT__convert_0__DOT__Integer_Value 
                                                                               >> 1U))))) 
                                                        >> 0xfU))) 
                                   - (IData)(0xf00U)));
    vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__product_normalised 
        = (VL_ULL(0xffffffffffff) & ((1U & (IData)(
                                                   (vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__product 
                                                    >> 0x2fU)))
                                      ? vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__product
                                      : (vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__product 
                                         << 1U)));
    vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__exponent 
        = (0x1ffU & (((IData)(vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__sum_exponent) 
                      - (IData)(0x7fU)) + (1U & (IData)(
                                                        (vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__product 
                                                         >> 0x2fU)))));
    vlTOPp->filter_control__DOT__add_0__DOT__significand_a 
        = ((0U != (0xffU & (vlTOPp->filter_control__DOT__add_0__DOT__operand_a 
                            >> 0x17U))) ? (0x800000U 
                                           | (0x7fffffU 
                                              & vlTOPp->filter_control__DOT__add_0__DOT__operand_a))
            : (0x7fffffU & vlTOPp->filter_control__DOT__add_0__DOT__operand_a));
    vlTOPp->filter_control__DOT__add_0__DOT__operation_sub_addBar 
        = (1U & (~ ((vlTOPp->filter_control__DOT__add_0__DOT__operand_a 
                     ^ vlTOPp->filter_control__DOT__add_0__DOT__operand_b) 
                    >> 0x1fU)));
    vlTOPp->filter_control__DOT__add_0__DOT__exponent_diff 
        = (0xffU & ((vlTOPp->filter_control__DOT__add_0__DOT__operand_a 
                     >> 0x17U) - (vlTOPp->filter_control__DOT__add_0__DOT__operand_b 
                                  >> 0x17U)));
    vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_a 
        = ((0U != (0xffU & (vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__operand_a 
                            >> 0x17U))) ? (0x800000U 
                                           | (0x7fffffU 
                                              & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__operand_a))
            : (0x7fffffU & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__operand_a));
    vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__operation_sub_addBar 
        = (1U & (~ ((vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__operand_a 
                     ^ vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__operand_b) 
                    >> 0x1fU)));
    vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__exponent_diff 
        = (0xffU & ((vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__operand_a 
                     >> 0x17U) - (vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__operand_b 
                                  >> 0x17U)));
    vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__product_mantissa 
        = (0x7fffffU & ((IData)((vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__product_normalised 
                                 >> 0x18U)) + (1U & 
                                               ((IData)(
                                                        (vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__product_normalised 
                                                         >> 0x17U)) 
                                                & (0U 
                                                   != 
                                                   (0x7fffffU 
                                                    & (IData)(vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__product_normalised)))))));
    vlTOPp->filter_control__DOT__add_0__DOT__significand_b_add_sub 
        = ((0x17U >= (IData)(vlTOPp->filter_control__DOT__add_0__DOT__exponent_diff))
            ? (0xffffffU & (((0U != (0xffU & (vlTOPp->filter_control__DOT__add_0__DOT__operand_b 
                                              >> 0x17U)))
                              ? (0x800000U | (0x7fffffU 
                                              & vlTOPp->filter_control__DOT__add_0__DOT__operand_b))
                              : (0x7fffffU & vlTOPp->filter_control__DOT__add_0__DOT__operand_b)) 
                            >> (IData)(vlTOPp->filter_control__DOT__add_0__DOT__exponent_diff)))
            : 0U);
    vlTOPp->filter_control__DOT__add_0__DOT__perform 
        = ((0xffU & (vlTOPp->filter_control__DOT__add_0__DOT__operand_a 
                     >> 0x17U)) == (0xffU & ((vlTOPp->filter_control__DOT__add_0__DOT__operand_b 
                                              >> 0x17U) 
                                             + (IData)(vlTOPp->filter_control__DOT__add_0__DOT__exponent_diff))));
    vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_b_add_sub 
        = ((0x17U >= (IData)(vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__exponent_diff))
            ? (0xffffffU & (((0U != (0xffU & (vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__operand_b 
                                              >> 0x17U)))
                              ? (0x800000U | (0x7fffffU 
                                              & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__operand_b))
                              : (0x7fffffU & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__operand_b)) 
                            >> (IData)(vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__exponent_diff)))
            : 0U);
    vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__perform 
        = ((0xffU & (vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__operand_a 
                     >> 0x17U)) == (0xffU & ((vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__operand_b 
                                              >> 0x17U) 
                                             + (IData)(vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__exponent_diff))));
    vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__zero 
        = ((~ (IData)(vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__Exception)) 
           & ((0U == vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__product_mantissa) 
              & (0U == (IData)(vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__sum_exponent))));
    vlTOPp->filter_control__DOT__add_0__DOT__significand_add 
        = (((IData)(vlTOPp->filter_control__DOT__add_0__DOT__perform) 
            & (IData)(vlTOPp->filter_control__DOT__add_0__DOT__operation_sub_addBar))
            ? (0x1ffffffU & (vlTOPp->filter_control__DOT__add_0__DOT__significand_a 
                             + vlTOPp->filter_control__DOT__add_0__DOT__significand_b_add_sub))
            : 0U);
    vlTOPp->filter_control__DOT__add_0__DOT__significand_sub 
        = ((IData)(vlTOPp->filter_control__DOT__add_0__DOT__perform)
            ? (0x1ffffffU & (vlTOPp->filter_control__DOT__add_0__DOT__significand_a 
                             + (((IData)(vlTOPp->filter_control__DOT__add_0__DOT__perform) 
                                 & (~ (IData)(vlTOPp->filter_control__DOT__add_0__DOT__operation_sub_addBar)))
                                 ? (0xffffffU & ((IData)(1U) 
                                                 + 
                                                 (~ vlTOPp->filter_control__DOT__add_0__DOT__significand_b_add_sub)))
                                 : 0U))) : 0U);
    vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_add 
        = (((IData)(vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__perform) 
            & (IData)(vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__operation_sub_addBar))
            ? (0x1ffffffU & (vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_a 
                             + vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_b_add_sub))
            : 0U);
    vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub 
        = ((IData)(vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__perform)
            ? (0x1ffffffU & (vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_a 
                             + (((IData)(vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__perform) 
                                 & (~ (IData)(vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__operation_sub_addBar)))
                                 ? (0xffffffU & ((IData)(1U) 
                                                 + 
                                                 (~ vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_b_add_sub)))
                                 : 0U))) : 0U);
    vlTOPp->filter_control__DOT__add_0__DOT__add_sum 
        = ((0x7f800000U & vlTOPp->filter_control__DOT__add_0__DOT__add_sum) 
           | (0x7fffffU & ((0x1000000U & vlTOPp->filter_control__DOT__add_0__DOT__significand_add)
                            ? (vlTOPp->filter_control__DOT__add_0__DOT__significand_add 
                               >> 1U) : vlTOPp->filter_control__DOT__add_0__DOT__significand_add)));
    vlTOPp->filter_control__DOT__add_0__DOT__add_sum 
        = ((0x7fffffU & vlTOPp->filter_control__DOT__add_0__DOT__add_sum) 
           | (0x7f800000U & (((0x1000000U & vlTOPp->filter_control__DOT__add_0__DOT__significand_add)
                               ? ((IData)(1U) + (vlTOPp->filter_control__DOT__add_0__DOT__operand_a 
                                                 >> 0x17U))
                               : (vlTOPp->filter_control__DOT__add_0__DOT__operand_a 
                                  >> 0x17U)) << 0x17U)));
    vlTOPp->filter_control__DOT__add_0__DOT__pe__DOT__shift 
        = (((((((((0x1800000U == (0x1800000U & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub)) 
                  | (0x1400000U == (0x1c00000U & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))) 
                 | (0x1200000U == (0x1e00000U & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))) 
                | (0x1100000U == (0x1f00000U & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))) 
               | (0x1080000U == (0x1f80000U & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))) 
              | (0x1040000U == (0x1fc0000U & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))) 
             | (0x1020000U == (0x1fe0000U & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))) 
            | (0x1010000U == (0x1ff0000U & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub)))
            ? ((0x1800000U == (0x1800000U & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))
                ? 0U : ((0x1400000U == (0x1c00000U 
                                        & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))
                         ? 1U : ((0x1200000U == (0x1e00000U 
                                                 & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))
                                  ? 2U : ((0x1100000U 
                                           == (0x1f00000U 
                                               & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))
                                           ? 3U : (
                                                   (0x1080000U 
                                                    == 
                                                    (0x1f80000U 
                                                     & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))
                                                    ? 4U
                                                    : 
                                                   ((0x1040000U 
                                                     == 
                                                     (0x1fc0000U 
                                                      & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))
                                                     ? 5U
                                                     : 
                                                    ((0x1020000U 
                                                      == 
                                                      (0x1fe0000U 
                                                       & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))
                                                      ? 6U
                                                      : 7U)))))))
            : (((((((((0x1008000U == (0x1ff8000U & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub)) 
                      | (0x1004000U == (0x1ffc000U 
                                        & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))) 
                     | (0x1002000U == (0x1ffe000U & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))) 
                    | (0x1001000U == (0x1fff000U & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))) 
                   | (0x1000800U == (0x1fff800U & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))) 
                  | (0x1000400U == (0x1fffc00U & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))) 
                 | (0x1000200U == (0x1fffe00U & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))) 
                | (0x1000100U == (0x1ffff00U & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub)))
                ? ((0x1008000U == (0x1ff8000U & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))
                    ? 8U : ((0x1004000U == (0x1ffc000U 
                                            & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))
                             ? 9U : ((0x1002000U == 
                                      (0x1ffe000U & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))
                                      ? 0xaU : ((0x1001000U 
                                                 == 
                                                 (0x1fff000U 
                                                  & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))
                                                 ? 0xbU
                                                 : 
                                                ((0x1000800U 
                                                  == 
                                                  (0x1fff800U 
                                                   & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))
                                                  ? 0xcU
                                                  : 
                                                 ((0x1000400U 
                                                   == 
                                                   (0x1fffc00U 
                                                    & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))
                                                   ? 0xdU
                                                   : 
                                                  ((0x1000200U 
                                                    == 
                                                    (0x1fffe00U 
                                                     & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))
                                                    ? 0xeU
                                                    : 0xfU)))))))
                : (((((((((0x1000080U == (0x1ffff80U 
                                          & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub)) 
                          | (0x1000040U == (0x1ffffc0U 
                                            & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))) 
                         | (0x1000020U == (0x1ffffe0U 
                                           & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))) 
                        | (0x1000010U == (0x1fffff0U 
                                          & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))) 
                       | (0x1000008U == (0x1fffff8U 
                                         & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))) 
                      | (0x1000004U == (0x1fffffcU 
                                        & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))) 
                     | (0x1000002U == (0x1fffffeU & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))) 
                    | (0x1000001U == vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))
                    ? ((0x1000080U == (0x1ffff80U & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))
                        ? 0x10U : ((0x1000040U == (0x1ffffc0U 
                                                   & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))
                                    ? 0x11U : ((0x1000020U 
                                                == 
                                                (0x1ffffe0U 
                                                 & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))
                                                ? 0x12U
                                                : (
                                                   (0x1000010U 
                                                    == 
                                                    (0x1fffff0U 
                                                     & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))
                                                    ? 0x13U
                                                    : 
                                                   ((0x1000008U 
                                                     == 
                                                     (0x1fffff8U 
                                                      & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))
                                                     ? 0x14U
                                                     : 
                                                    ((0x1000004U 
                                                      == 
                                                      (0x1fffffcU 
                                                       & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))
                                                      ? 0x15U
                                                      : 
                                                     ((0x1000002U 
                                                       == 
                                                       (0x1fffffeU 
                                                        & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))
                                                       ? 0x16U
                                                       : 0x17U)))))))
                    : ((0x1000000U == vlTOPp->filter_control__DOT__add_0__DOT__significand_sub)
                        ? 0x18U : 0U))));
    vlTOPp->filter_control__DOT__add_0__DOT__subtraction_diff 
        = (0x1ffffffU & (((((((((0x1800000U == (0x1800000U 
                                                & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub)) 
                                | (0x1400000U == (0x1c00000U 
                                                  & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))) 
                               | (0x1200000U == (0x1e00000U 
                                                 & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))) 
                              | (0x1100000U == (0x1f00000U 
                                                & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))) 
                             | (0x1080000U == (0x1f80000U 
                                               & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))) 
                            | (0x1040000U == (0x1fc0000U 
                                              & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))) 
                           | (0x1020000U == (0x1fe0000U 
                                             & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))) 
                          | (0x1010000U == (0x1ff0000U 
                                            & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub)))
                          ? ((0x1800000U == (0x1800000U 
                                             & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))
                              ? vlTOPp->filter_control__DOT__add_0__DOT__significand_sub
                              : ((0x1400000U == (0x1c00000U 
                                                 & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))
                                  ? (vlTOPp->filter_control__DOT__add_0__DOT__significand_sub 
                                     << 1U) : ((0x1200000U 
                                                == 
                                                (0x1e00000U 
                                                 & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))
                                                ? (vlTOPp->filter_control__DOT__add_0__DOT__significand_sub 
                                                   << 2U)
                                                : (
                                                   (0x1100000U 
                                                    == 
                                                    (0x1f00000U 
                                                     & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))
                                                    ? 
                                                   (vlTOPp->filter_control__DOT__add_0__DOT__significand_sub 
                                                    << 3U)
                                                    : 
                                                   ((0x1080000U 
                                                     == 
                                                     (0x1f80000U 
                                                      & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))
                                                     ? 
                                                    (vlTOPp->filter_control__DOT__add_0__DOT__significand_sub 
                                                     << 4U)
                                                     : 
                                                    ((0x1040000U 
                                                      == 
                                                      (0x1fc0000U 
                                                       & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))
                                                      ? 
                                                     (vlTOPp->filter_control__DOT__add_0__DOT__significand_sub 
                                                      << 5U)
                                                      : 
                                                     ((0x1020000U 
                                                       == 
                                                       (0x1fe0000U 
                                                        & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))
                                                       ? 
                                                      (vlTOPp->filter_control__DOT__add_0__DOT__significand_sub 
                                                       << 6U)
                                                       : 
                                                      (vlTOPp->filter_control__DOT__add_0__DOT__significand_sub 
                                                       << 7U))))))))
                          : (((((((((0x1008000U == 
                                     (0x1ff8000U & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub)) 
                                    | (0x1004000U == 
                                       (0x1ffc000U 
                                        & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))) 
                                   | (0x1002000U == 
                                      (0x1ffe000U & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))) 
                                  | (0x1001000U == 
                                     (0x1fff000U & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))) 
                                 | (0x1000800U == (0x1fff800U 
                                                   & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))) 
                                | (0x1000400U == (0x1fffc00U 
                                                  & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))) 
                               | (0x1000200U == (0x1fffe00U 
                                                 & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))) 
                              | (0x1000100U == (0x1ffff00U 
                                                & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub)))
                              ? ((0x1008000U == (0x1ff8000U 
                                                 & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))
                                  ? (vlTOPp->filter_control__DOT__add_0__DOT__significand_sub 
                                     << 8U) : ((0x1004000U 
                                                == 
                                                (0x1ffc000U 
                                                 & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))
                                                ? (vlTOPp->filter_control__DOT__add_0__DOT__significand_sub 
                                                   << 9U)
                                                : (
                                                   (0x1002000U 
                                                    == 
                                                    (0x1ffe000U 
                                                     & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))
                                                    ? 
                                                   (vlTOPp->filter_control__DOT__add_0__DOT__significand_sub 
                                                    << 0xaU)
                                                    : 
                                                   ((0x1001000U 
                                                     == 
                                                     (0x1fff000U 
                                                      & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))
                                                     ? 
                                                    (vlTOPp->filter_control__DOT__add_0__DOT__significand_sub 
                                                     << 0xbU)
                                                     : 
                                                    ((0x1000800U 
                                                      == 
                                                      (0x1fff800U 
                                                       & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))
                                                      ? 
                                                     (vlTOPp->filter_control__DOT__add_0__DOT__significand_sub 
                                                      << 0xcU)
                                                      : 
                                                     ((0x1000400U 
                                                       == 
                                                       (0x1fffc00U 
                                                        & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))
                                                       ? 
                                                      (vlTOPp->filter_control__DOT__add_0__DOT__significand_sub 
                                                       << 0xdU)
                                                       : 
                                                      ((0x1000200U 
                                                        == 
                                                        (0x1fffe00U 
                                                         & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))
                                                        ? 
                                                       (vlTOPp->filter_control__DOT__add_0__DOT__significand_sub 
                                                        << 0xeU)
                                                        : 
                                                       (vlTOPp->filter_control__DOT__add_0__DOT__significand_sub 
                                                        << 0xfU))))))))
                              : (((((((((0x1000080U 
                                         == (0x1ffff80U 
                                             & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub)) 
                                        | (0x1000040U 
                                           == (0x1ffffc0U 
                                               & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))) 
                                       | (0x1000020U 
                                          == (0x1ffffe0U 
                                              & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))) 
                                      | (0x1000010U 
                                         == (0x1fffff0U 
                                             & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))) 
                                     | (0x1000008U 
                                        == (0x1fffff8U 
                                            & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))) 
                                    | (0x1000004U == 
                                       (0x1fffffcU 
                                        & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))) 
                                   | (0x1000002U == 
                                      (0x1fffffeU & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))) 
                                  | (0x1000001U == vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))
                                  ? ((0x1000080U == 
                                      (0x1ffff80U & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))
                                      ? (vlTOPp->filter_control__DOT__add_0__DOT__significand_sub 
                                         << 0x10U) : 
                                     ((0x1000040U == 
                                       (0x1ffffc0U 
                                        & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))
                                       ? (vlTOPp->filter_control__DOT__add_0__DOT__significand_sub 
                                          << 0x11U)
                                       : ((0x1000020U 
                                           == (0x1ffffe0U 
                                               & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))
                                           ? (vlTOPp->filter_control__DOT__add_0__DOT__significand_sub 
                                              << 0x12U)
                                           : ((0x1000010U 
                                               == (0x1fffff0U 
                                                   & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))
                                               ? (vlTOPp->filter_control__DOT__add_0__DOT__significand_sub 
                                                  << 0x13U)
                                               : ((0x1000008U 
                                                   == 
                                                   (0x1fffff8U 
                                                    & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))
                                                   ? 
                                                  (vlTOPp->filter_control__DOT__add_0__DOT__significand_sub 
                                                   << 0x14U)
                                                   : 
                                                  ((0x1000004U 
                                                    == 
                                                    (0x1fffffcU 
                                                     & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))
                                                    ? 
                                                   (vlTOPp->filter_control__DOT__add_0__DOT__significand_sub 
                                                    << 0x15U)
                                                    : 
                                                   ((0x1000002U 
                                                     == 
                                                     (0x1fffffeU 
                                                      & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))
                                                     ? 
                                                    (vlTOPp->filter_control__DOT__add_0__DOT__significand_sub 
                                                     << 0x16U)
                                                     : 
                                                    (vlTOPp->filter_control__DOT__add_0__DOT__significand_sub 
                                                     << 0x17U))))))))
                                  : ((0x1000000U == vlTOPp->filter_control__DOT__add_0__DOT__significand_sub)
                                      ? (vlTOPp->filter_control__DOT__add_0__DOT__significand_sub 
                                         << 0x18U) : 
                                     ((IData)(1U) + 
                                      (~ vlTOPp->filter_control__DOT__add_0__DOT__significand_sub)))))));
    vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__add_sum 
        = ((0x7f800000U & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__add_sum) 
           | (0x7fffffU & ((0x1000000U & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_add)
                            ? (vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_add 
                               >> 1U) : vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_add)));
    vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__add_sum 
        = ((0x7fffffU & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__add_sum) 
           | (0x7f800000U & (((0x1000000U & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_add)
                               ? ((IData)(1U) + (vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__operand_a 
                                                 >> 0x17U))
                               : (vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__operand_a 
                                  >> 0x17U)) << 0x17U)));
    vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__pe__DOT__shift 
        = (((((((((0x1800000U == (0x1800000U & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub)) 
                  | (0x1400000U == (0x1c00000U & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))) 
                 | (0x1200000U == (0x1e00000U & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))) 
                | (0x1100000U == (0x1f00000U & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))) 
               | (0x1080000U == (0x1f80000U & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))) 
              | (0x1040000U == (0x1fc0000U & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))) 
             | (0x1020000U == (0x1fe0000U & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))) 
            | (0x1010000U == (0x1ff0000U & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub)))
            ? ((0x1800000U == (0x1800000U & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))
                ? 0U : ((0x1400000U == (0x1c00000U 
                                        & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))
                         ? 1U : ((0x1200000U == (0x1e00000U 
                                                 & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))
                                  ? 2U : ((0x1100000U 
                                           == (0x1f00000U 
                                               & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))
                                           ? 3U : (
                                                   (0x1080000U 
                                                    == 
                                                    (0x1f80000U 
                                                     & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))
                                                    ? 4U
                                                    : 
                                                   ((0x1040000U 
                                                     == 
                                                     (0x1fc0000U 
                                                      & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))
                                                     ? 5U
                                                     : 
                                                    ((0x1020000U 
                                                      == 
                                                      (0x1fe0000U 
                                                       & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))
                                                      ? 6U
                                                      : 7U)))))))
            : (((((((((0x1008000U == (0x1ff8000U & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub)) 
                      | (0x1004000U == (0x1ffc000U 
                                        & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))) 
                     | (0x1002000U == (0x1ffe000U & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))) 
                    | (0x1001000U == (0x1fff000U & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))) 
                   | (0x1000800U == (0x1fff800U & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))) 
                  | (0x1000400U == (0x1fffc00U & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))) 
                 | (0x1000200U == (0x1fffe00U & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))) 
                | (0x1000100U == (0x1ffff00U & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub)))
                ? ((0x1008000U == (0x1ff8000U & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))
                    ? 8U : ((0x1004000U == (0x1ffc000U 
                                            & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))
                             ? 9U : ((0x1002000U == 
                                      (0x1ffe000U & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))
                                      ? 0xaU : ((0x1001000U 
                                                 == 
                                                 (0x1fff000U 
                                                  & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))
                                                 ? 0xbU
                                                 : 
                                                ((0x1000800U 
                                                  == 
                                                  (0x1fff800U 
                                                   & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))
                                                  ? 0xcU
                                                  : 
                                                 ((0x1000400U 
                                                   == 
                                                   (0x1fffc00U 
                                                    & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))
                                                   ? 0xdU
                                                   : 
                                                  ((0x1000200U 
                                                    == 
                                                    (0x1fffe00U 
                                                     & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))
                                                    ? 0xeU
                                                    : 0xfU)))))))
                : (((((((((0x1000080U == (0x1ffff80U 
                                          & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub)) 
                          | (0x1000040U == (0x1ffffc0U 
                                            & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))) 
                         | (0x1000020U == (0x1ffffe0U 
                                           & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))) 
                        | (0x1000010U == (0x1fffff0U 
                                          & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))) 
                       | (0x1000008U == (0x1fffff8U 
                                         & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))) 
                      | (0x1000004U == (0x1fffffcU 
                                        & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))) 
                     | (0x1000002U == (0x1fffffeU & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))) 
                    | (0x1000001U == vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))
                    ? ((0x1000080U == (0x1ffff80U & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))
                        ? 0x10U : ((0x1000040U == (0x1ffffc0U 
                                                   & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))
                                    ? 0x11U : ((0x1000020U 
                                                == 
                                                (0x1ffffe0U 
                                                 & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))
                                                ? 0x12U
                                                : (
                                                   (0x1000010U 
                                                    == 
                                                    (0x1fffff0U 
                                                     & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))
                                                    ? 0x13U
                                                    : 
                                                   ((0x1000008U 
                                                     == 
                                                     (0x1fffff8U 
                                                      & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))
                                                     ? 0x14U
                                                     : 
                                                    ((0x1000004U 
                                                      == 
                                                      (0x1fffffcU 
                                                       & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))
                                                      ? 0x15U
                                                      : 
                                                     ((0x1000002U 
                                                       == 
                                                       (0x1fffffeU 
                                                        & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))
                                                       ? 0x16U
                                                       : 0x17U)))))))
                    : ((0x1000000U == vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub)
                        ? 0x18U : 0U))));
    vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__subtraction_diff 
        = (0x1ffffffU & (((((((((0x1800000U == (0x1800000U 
                                                & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub)) 
                                | (0x1400000U == (0x1c00000U 
                                                  & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))) 
                               | (0x1200000U == (0x1e00000U 
                                                 & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))) 
                              | (0x1100000U == (0x1f00000U 
                                                & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))) 
                             | (0x1080000U == (0x1f80000U 
                                               & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))) 
                            | (0x1040000U == (0x1fc0000U 
                                              & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))) 
                           | (0x1020000U == (0x1fe0000U 
                                             & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))) 
                          | (0x1010000U == (0x1ff0000U 
                                            & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub)))
                          ? ((0x1800000U == (0x1800000U 
                                             & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))
                              ? vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub
                              : ((0x1400000U == (0x1c00000U 
                                                 & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))
                                  ? (vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub 
                                     << 1U) : ((0x1200000U 
                                                == 
                                                (0x1e00000U 
                                                 & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))
                                                ? (vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub 
                                                   << 2U)
                                                : (
                                                   (0x1100000U 
                                                    == 
                                                    (0x1f00000U 
                                                     & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))
                                                    ? 
                                                   (vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub 
                                                    << 3U)
                                                    : 
                                                   ((0x1080000U 
                                                     == 
                                                     (0x1f80000U 
                                                      & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))
                                                     ? 
                                                    (vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub 
                                                     << 4U)
                                                     : 
                                                    ((0x1040000U 
                                                      == 
                                                      (0x1fc0000U 
                                                       & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))
                                                      ? 
                                                     (vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub 
                                                      << 5U)
                                                      : 
                                                     ((0x1020000U 
                                                       == 
                                                       (0x1fe0000U 
                                                        & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))
                                                       ? 
                                                      (vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub 
                                                       << 6U)
                                                       : 
                                                      (vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub 
                                                       << 7U))))))))
                          : (((((((((0x1008000U == 
                                     (0x1ff8000U & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub)) 
                                    | (0x1004000U == 
                                       (0x1ffc000U 
                                        & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))) 
                                   | (0x1002000U == 
                                      (0x1ffe000U & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))) 
                                  | (0x1001000U == 
                                     (0x1fff000U & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))) 
                                 | (0x1000800U == (0x1fff800U 
                                                   & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))) 
                                | (0x1000400U == (0x1fffc00U 
                                                  & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))) 
                               | (0x1000200U == (0x1fffe00U 
                                                 & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))) 
                              | (0x1000100U == (0x1ffff00U 
                                                & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub)))
                              ? ((0x1008000U == (0x1ff8000U 
                                                 & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))
                                  ? (vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub 
                                     << 8U) : ((0x1004000U 
                                                == 
                                                (0x1ffc000U 
                                                 & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))
                                                ? (vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub 
                                                   << 9U)
                                                : (
                                                   (0x1002000U 
                                                    == 
                                                    (0x1ffe000U 
                                                     & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))
                                                    ? 
                                                   (vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub 
                                                    << 0xaU)
                                                    : 
                                                   ((0x1001000U 
                                                     == 
                                                     (0x1fff000U 
                                                      & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))
                                                     ? 
                                                    (vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub 
                                                     << 0xbU)
                                                     : 
                                                    ((0x1000800U 
                                                      == 
                                                      (0x1fff800U 
                                                       & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))
                                                      ? 
                                                     (vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub 
                                                      << 0xcU)
                                                      : 
                                                     ((0x1000400U 
                                                       == 
                                                       (0x1fffc00U 
                                                        & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))
                                                       ? 
                                                      (vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub 
                                                       << 0xdU)
                                                       : 
                                                      ((0x1000200U 
                                                        == 
                                                        (0x1fffe00U 
                                                         & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))
                                                        ? 
                                                       (vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub 
                                                        << 0xeU)
                                                        : 
                                                       (vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub 
                                                        << 0xfU))))))))
                              : (((((((((0x1000080U 
                                         == (0x1ffff80U 
                                             & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub)) 
                                        | (0x1000040U 
                                           == (0x1ffffc0U 
                                               & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))) 
                                       | (0x1000020U 
                                          == (0x1ffffe0U 
                                              & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))) 
                                      | (0x1000010U 
                                         == (0x1fffff0U 
                                             & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))) 
                                     | (0x1000008U 
                                        == (0x1fffff8U 
                                            & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))) 
                                    | (0x1000004U == 
                                       (0x1fffffcU 
                                        & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))) 
                                   | (0x1000002U == 
                                      (0x1fffffeU & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))) 
                                  | (0x1000001U == vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))
                                  ? ((0x1000080U == 
                                      (0x1ffff80U & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))
                                      ? (vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub 
                                         << 0x10U) : 
                                     ((0x1000040U == 
                                       (0x1ffffc0U 
                                        & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))
                                       ? (vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub 
                                          << 0x11U)
                                       : ((0x1000020U 
                                           == (0x1ffffe0U 
                                               & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))
                                           ? (vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub 
                                              << 0x12U)
                                           : ((0x1000010U 
                                               == (0x1fffff0U 
                                                   & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))
                                               ? (vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub 
                                                  << 0x13U)
                                               : ((0x1000008U 
                                                   == 
                                                   (0x1fffff8U 
                                                    & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))
                                                   ? 
                                                  (vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub 
                                                   << 0x14U)
                                                   : 
                                                  ((0x1000004U 
                                                    == 
                                                    (0x1fffffcU 
                                                     & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))
                                                    ? 
                                                   (vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub 
                                                    << 0x15U)
                                                    : 
                                                   ((0x1000002U 
                                                     == 
                                                     (0x1fffffeU 
                                                      & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))
                                                     ? 
                                                    (vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub 
                                                     << 0x16U)
                                                     : 
                                                    (vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub 
                                                     << 0x17U))))))))
                                  : ((0x1000000U == vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub)
                                      ? (vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub 
                                         << 0x18U) : 
                                     ((IData)(1U) + 
                                      (~ vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub)))))));
    vlTOPp->filter_control__DOT__add_0__DOT__sub_diff 
        = ((0x7f800000U & (((vlTOPp->filter_control__DOT__add_0__DOT__operand_a 
                             >> 0x17U) - (IData)(vlTOPp->filter_control__DOT__add_0__DOT__pe__DOT__shift)) 
                           << 0x17U)) | (0x7fffffU 
                                         & vlTOPp->filter_control__DOT__add_0__DOT__subtraction_diff));
    vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__sub_diff 
        = ((0x7f800000U & (((vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__operand_a 
                             >> 0x17U) - (IData)(vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__pe__DOT__shift)) 
                           << 0x17U)) | (0x7fffffU 
                                         & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__subtraction_diff));
}

VL_INLINE_OPT void Vfilter_control::_sequent__TOP__4(Vfilter_control__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfilter_control::_sequent__TOP__4\n"); );
    Vfilter_control* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vdly__filter_control__DOT__fir_0__DOT__genblk2__DOT__tapwidx;
    CData/*6:0*/ __Vdlyvdim0__filter_control__DOT__fir_0__DOT__tapmem__v0;
    CData/*0:0*/ __Vdlyvset__filter_control__DOT__fir_0__DOT__tapmem__v0;
    CData/*6:0*/ __Vdly__filter_control__DOT__fir_0__DOT__dwidx;
    CData/*6:0*/ __Vdlyvdim0__filter_control__DOT__fir_0__DOT__dmem__v0;
    CData/*0:0*/ __Vdlyvset__filter_control__DOT__fir_0__DOT__dmem__v0;
    CData/*2:0*/ __Vdly__filter_control__DOT__fir_0__DOT__pre_acc_ce;
    CData/*6:0*/ __Vdly__filter_control__DOT__fir_0__DOT__didx;
    CData/*6:0*/ __Vdly__filter_control__DOT__fir_0__DOT__tidx;
    SData/*15:0*/ __Vdly__filter_control__DOT__counter;
    IData/*31:0*/ __Vdlyvval__filter_control__DOT__fir_0__DOT__tapmem__v0;
    IData/*31:0*/ __Vdlyvval__filter_control__DOT__fir_0__DOT__dmem__v0;
    // Body
    __Vdly__filter_control__DOT__counter = vlTOPp->filter_control__DOT__counter;
    __Vdly__filter_control__DOT__fir_0__DOT__tidx = vlTOPp->filter_control__DOT__fir_0__DOT__tidx;
    __Vdly__filter_control__DOT__fir_0__DOT__dwidx 
        = vlTOPp->filter_control__DOT__fir_0__DOT__dwidx;
    __Vdly__filter_control__DOT__fir_0__DOT__didx = vlTOPp->filter_control__DOT__fir_0__DOT__didx;
    __Vdly__filter_control__DOT__fir_0__DOT__genblk2__DOT__tapwidx 
        = vlTOPp->filter_control__DOT__fir_0__DOT__genblk2__DOT__tapwidx;
    __Vdlyvset__filter_control__DOT__fir_0__DOT__dmem__v0 = 0U;
    __Vdly__filter_control__DOT__fir_0__DOT__pre_acc_ce 
        = vlTOPp->filter_control__DOT__fir_0__DOT__pre_acc_ce;
    __Vdlyvset__filter_control__DOT__fir_0__DOT__tapmem__v0 = 0U;
    __Vdly__filter_control__DOT__fir_0__DOT__tidx = 
        ((IData)(vlTOPp->i_ce) ? 0U : (0x7fU & ((IData)(1U) 
                                                + (IData)(vlTOPp->filter_control__DOT__fir_0__DOT__tidx))));
    if (vlTOPp->i_ce) {
        __Vdly__filter_control__DOT__fir_0__DOT__dwidx 
            = (0x7fU & ((IData)(1U) + (IData)(vlTOPp->filter_control__DOT__fir_0__DOT__dwidx)));
    }
    __Vdly__filter_control__DOT__fir_0__DOT__didx = 
        (0x7fU & ((IData)(vlTOPp->i_ce) ? (IData)(vlTOPp->filter_control__DOT__fir_0__DOT__dwidx)
                   : ((IData)(vlTOPp->filter_control__DOT__fir_0__DOT__didx) 
                      - (IData)(1U))));
    if (vlTOPp->i_reset) {
        if (vlTOPp->filter_control__DOT__i_tap_wr) {
            __Vdly__filter_control__DOT__fir_0__DOT__genblk2__DOT__tapwidx 
                = (0x7fU & ((IData)(1U) + (IData)(vlTOPp->filter_control__DOT__fir_0__DOT__genblk2__DOT__tapwidx)));
        }
    } else {
        __Vdly__filter_control__DOT__fir_0__DOT__genblk2__DOT__tapwidx = 0U;
    }
    if (vlTOPp->i_ce) {
        __Vdlyvval__filter_control__DOT__fir_0__DOT__dmem__v0 
            = vlTOPp->filter_control__DOT__impulse;
        __Vdlyvset__filter_control__DOT__fir_0__DOT__dmem__v0 = 1U;
        __Vdlyvdim0__filter_control__DOT__fir_0__DOT__dmem__v0 
            = vlTOPp->filter_control__DOT__fir_0__DOT__dwidx;
    }
    __Vdly__filter_control__DOT__fir_0__DOT__pre_acc_ce 
        = ((1U & (IData)(__Vdly__filter_control__DOT__fir_0__DOT__pre_acc_ce)) 
           | (((IData)(vlTOPp->i_reset) ? (3U & (IData)(vlTOPp->filter_control__DOT__fir_0__DOT__pre_acc_ce))
                : 0U) << 1U));
    __Vdly__filter_control__DOT__fir_0__DOT__pre_acc_ce 
        = ((6U & (IData)(__Vdly__filter_control__DOT__fir_0__DOT__pre_acc_ce)) 
           | ((IData)(vlTOPp->i_reset) & ((IData)(vlTOPp->i_ce) 
                                          | ((IData)(vlTOPp->filter_control__DOT__fir_0__DOT__pre_acc_ce) 
                                             & (1U 
                                                < ((IData)(0x7fU) 
                                                   - (IData)(vlTOPp->filter_control__DOT__fir_0__DOT__tidx)))))));
    vlTOPp->filter_control__DOT__fir_0__DOT__o_ce = 
        ((IData)(vlTOPp->filter_control__DOT__fir_0__DOT__p_ce) 
         & (IData)(vlTOPp->i_reset));
    vlTOPp->filter_control__DOT__fir_0__DOT__data = 
        vlTOPp->filter_control__DOT__fir_0__DOT__dmem
        [vlTOPp->filter_control__DOT__fir_0__DOT__didx];
    vlTOPp->filter_control__DOT__fir_0__DOT__tap = 
        vlTOPp->filter_control__DOT__fir_0__DOT__tapmem
        [vlTOPp->filter_control__DOT__fir_0__DOT__tidx];
    if (vlTOPp->filter_control__DOT__i_tap_wr) {
        __Vdlyvval__filter_control__DOT__fir_0__DOT__tapmem__v0 
            = vlTOPp->filter_control__DOT__tap;
        __Vdlyvset__filter_control__DOT__fir_0__DOT__tapmem__v0 = 1U;
        __Vdlyvdim0__filter_control__DOT__fir_0__DOT__tapmem__v0 
            = vlTOPp->filter_control__DOT__fir_0__DOT__genblk2__DOT__tapwidx;
    }
    if (vlTOPp->filter_control__DOT__fir_0__DOT__p_ce) {
        vlTOPp->filter_control__DOT__out = vlTOPp->filter_control__DOT__fir_0__DOT__r_acc;
    }
    vlTOPp->filter_control__DOT__fir_0__DOT__dwidx 
        = __Vdly__filter_control__DOT__fir_0__DOT__dwidx;
    if (__Vdlyvset__filter_control__DOT__fir_0__DOT__dmem__v0) {
        vlTOPp->filter_control__DOT__fir_0__DOT__dmem[__Vdlyvdim0__filter_control__DOT__fir_0__DOT__dmem__v0] 
            = __Vdlyvval__filter_control__DOT__fir_0__DOT__dmem__v0;
    }
    vlTOPp->filter_control__DOT__fir_0__DOT__didx = __Vdly__filter_control__DOT__fir_0__DOT__didx;
    vlTOPp->filter_control__DOT__fir_0__DOT__tidx = __Vdly__filter_control__DOT__fir_0__DOT__tidx;
    if (__Vdlyvset__filter_control__DOT__fir_0__DOT__tapmem__v0) {
        vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[__Vdlyvdim0__filter_control__DOT__fir_0__DOT__tapmem__v0] 
            = __Vdlyvval__filter_control__DOT__fir_0__DOT__tapmem__v0;
    }
    vlTOPp->filter_control__DOT__fir_0__DOT__genblk2__DOT__tapwidx 
        = __Vdly__filter_control__DOT__fir_0__DOT__genblk2__DOT__tapwidx;
    __Vdly__filter_control__DOT__counter = ((0xc8U 
                                             == (IData)(vlTOPp->filter_control__DOT__counter))
                                             ? 0U : 
                                            (0xffffU 
                                             & ((IData)(1U) 
                                                + (IData)(vlTOPp->filter_control__DOT__counter))));
    vlTOPp->filter_control__DOT__impulse = ((0xc8U 
                                             == (IData)(vlTOPp->filter_control__DOT__counter))
                                             ? 0x3f800000U
                                             : 0U);
    vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__sum_exponent 
        = (0x1ffU & ((0xffU & (vlTOPp->filter_control__DOT__fir_0__DOT__tap 
                               >> 0x17U)) + (0xffU 
                                             & (vlTOPp->filter_control__DOT__fir_0__DOT__data 
                                                >> 0x17U))));
    vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__product 
        = (VL_ULL(0xffffffffffff) & ((QData)((IData)(
                                                     ((0U 
                                                       != 
                                                       (0xffU 
                                                        & (vlTOPp->filter_control__DOT__fir_0__DOT__tap 
                                                           >> 0x17U)))
                                                       ? 
                                                      (0x800000U 
                                                       | (0x7fffffU 
                                                          & vlTOPp->filter_control__DOT__fir_0__DOT__tap))
                                                       : 
                                                      (0x7fffffU 
                                                       & vlTOPp->filter_control__DOT__fir_0__DOT__tap)))) 
                                     * (QData)((IData)(
                                                       ((0U 
                                                         != 
                                                         (0xffU 
                                                          & (vlTOPp->filter_control__DOT__fir_0__DOT__data 
                                                             >> 0x17U)))
                                                         ? 
                                                        (0x800000U 
                                                         | (0x7fffffU 
                                                            & vlTOPp->filter_control__DOT__fir_0__DOT__data))
                                                         : 
                                                        (0x7fffffU 
                                                         & vlTOPp->filter_control__DOT__fir_0__DOT__data))))));
    if (((0U < (IData)(vlTOPp->filter_control__DOT__state)) 
         & (0x80U > (IData)(vlTOPp->filter_control__DOT__state)))) {
        vlTOPp->filter_control__DOT__tap = (((0xffU 
                                              == (0xffU 
                                                  & (vlTOPp->filter_control__DOT__add_0__DOT__operand_a 
                                                     >> 0x17U))) 
                                             | (0xffU 
                                                == 
                                                (0xffU 
                                                 & (vlTOPp->filter_control__DOT__add_0__DOT__operand_b 
                                                    >> 0x17U))))
                                             ? 0U : 
                                            ((IData)(vlTOPp->filter_control__DOT__add_0__DOT__operation_sub_addBar)
                                              ? ((0x80000000U 
                                                  & vlTOPp->filter_control__DOT__add_0__DOT__operand_a) 
                                                 | vlTOPp->filter_control__DOT__add_0__DOT__add_sum)
                                              : ((0x80000000U 
                                                  & vlTOPp->filter_control__DOT__add_0__DOT__operand_a) 
                                                 | vlTOPp->filter_control__DOT__add_0__DOT__sub_diff)));
    }
    if ((0x7fU == (0xffU & (vlTOPp->filter_control__DOT__out 
                            >> 0x17U)))) {
        vlTOPp->filter_control__DOT__convert_0__DOT__Integer_Value = 0U;
    } else {
        if ((0x80U == (0xffU & (vlTOPp->filter_control__DOT__out 
                                >> 0x17U)))) {
            vlTOPp->filter_control__DOT__convert_0__DOT__Integer_Value 
                = (0x400000U & vlTOPp->filter_control__DOT__out);
        } else {
            if ((0x81U == (0xffU & (vlTOPp->filter_control__DOT__out 
                                    >> 0x17U)))) {
                vlTOPp->filter_control__DOT__convert_0__DOT__Integer_Value 
                    = (0x600000U & vlTOPp->filter_control__DOT__out);
            } else {
                if ((0x82U == (0xffU & (vlTOPp->filter_control__DOT__out 
                                        >> 0x17U)))) {
                    vlTOPp->filter_control__DOT__convert_0__DOT__Integer_Value 
                        = (0x700000U & vlTOPp->filter_control__DOT__out);
                } else {
                    if ((0x83U == (0xffU & (vlTOPp->filter_control__DOT__out 
                                            >> 0x17U)))) {
                        vlTOPp->filter_control__DOT__convert_0__DOT__Integer_Value 
                            = (0x780000U & vlTOPp->filter_control__DOT__out);
                    } else {
                        if ((0x84U == (0xffU & (vlTOPp->filter_control__DOT__out 
                                                >> 0x17U)))) {
                            vlTOPp->filter_control__DOT__convert_0__DOT__Integer_Value 
                                = (0x7c0000U & vlTOPp->filter_control__DOT__out);
                        } else {
                            if ((0x85U == (0xffU & 
                                           (vlTOPp->filter_control__DOT__out 
                                            >> 0x17U)))) {
                                vlTOPp->filter_control__DOT__convert_0__DOT__Integer_Value 
                                    = (0x7e0000U & vlTOPp->filter_control__DOT__out);
                            } else {
                                if ((0x86U == (0xffU 
                                               & (vlTOPp->filter_control__DOT__out 
                                                  >> 0x17U)))) {
                                    vlTOPp->filter_control__DOT__convert_0__DOT__Integer_Value 
                                        = (0x7f0000U 
                                           & vlTOPp->filter_control__DOT__out);
                                } else {
                                    if ((0x87U == (0xffU 
                                                   & (vlTOPp->filter_control__DOT__out 
                                                      >> 0x17U)))) {
                                        vlTOPp->filter_control__DOT__convert_0__DOT__Integer_Value 
                                            = (0x7f8000U 
                                               & vlTOPp->filter_control__DOT__out);
                                    } else {
                                        if ((0x88U 
                                             == (0xffU 
                                                 & (vlTOPp->filter_control__DOT__out 
                                                    >> 0x17U)))) {
                                            vlTOPp->filter_control__DOT__convert_0__DOT__Integer_Value 
                                                = (0x7fc000U 
                                                   & vlTOPp->filter_control__DOT__out);
                                        } else {
                                            if ((0x89U 
                                                 == 
                                                 (0xffU 
                                                  & (vlTOPp->filter_control__DOT__out 
                                                     >> 0x17U)))) {
                                                vlTOPp->filter_control__DOT__convert_0__DOT__Integer_Value 
                                                    = 
                                                    (0x7fe000U 
                                                     & vlTOPp->filter_control__DOT__out);
                                            } else {
                                                if (
                                                    (0x8aU 
                                                     == 
                                                     (0xffU 
                                                      & (vlTOPp->filter_control__DOT__out 
                                                         >> 0x17U)))) {
                                                    vlTOPp->filter_control__DOT__convert_0__DOT__Integer_Value 
                                                        = 
                                                        (0x7ff000U 
                                                         & vlTOPp->filter_control__DOT__out);
                                                } else {
                                                    if (
                                                        (0x8bU 
                                                         == 
                                                         (0xffU 
                                                          & (vlTOPp->filter_control__DOT__out 
                                                             >> 0x17U)))) {
                                                        vlTOPp->filter_control__DOT__convert_0__DOT__Integer_Value 
                                                            = 
                                                            (0x7ff800U 
                                                             & vlTOPp->filter_control__DOT__out);
                                                    } else {
                                                        if (
                                                            (0x8cU 
                                                             == 
                                                             (0xffU 
                                                              & (vlTOPp->filter_control__DOT__out 
                                                                 >> 0x17U)))) {
                                                            vlTOPp->filter_control__DOT__convert_0__DOT__Integer_Value 
                                                                = 
                                                                (0x7ffc00U 
                                                                 & vlTOPp->filter_control__DOT__out);
                                                        } else {
                                                            if (
                                                                (0x8dU 
                                                                 == 
                                                                 (0xffU 
                                                                  & (vlTOPp->filter_control__DOT__out 
                                                                     >> 0x17U)))) {
                                                                vlTOPp->filter_control__DOT__convert_0__DOT__Integer_Value 
                                                                    = 
                                                                    (0x7ffe00U 
                                                                     & vlTOPp->filter_control__DOT__out);
                                                            } else {
                                                                if (
                                                                    (0x8eU 
                                                                     == 
                                                                     (0xffU 
                                                                      & (vlTOPp->filter_control__DOT__out 
                                                                         >> 0x17U)))) {
                                                                    vlTOPp->filter_control__DOT__convert_0__DOT__Integer_Value 
                                                                        = 
                                                                        (0x7fff00U 
                                                                         & vlTOPp->filter_control__DOT__out);
                                                                } else {
                                                                    if (
                                                                        (0x8fU 
                                                                         == 
                                                                         (0xffU 
                                                                          & (vlTOPp->filter_control__DOT__out 
                                                                             >> 0x17U)))) {
                                                                        vlTOPp->filter_control__DOT__convert_0__DOT__Integer_Value 
                                                                            = 
                                                                            (0x7fff80U 
                                                                             & vlTOPp->filter_control__DOT__out);
                                                                    } else {
                                                                        if (
                                                                            (0x90U 
                                                                             == 
                                                                             (0xffU 
                                                                              & (vlTOPp->filter_control__DOT__out 
                                                                                >> 0x17U)))) {
                                                                            vlTOPp->filter_control__DOT__convert_0__DOT__Integer_Value 
                                                                                = 
                                                                                (0x7fffc0U 
                                                                                & vlTOPp->filter_control__DOT__out);
                                                                        } else {
                                                                            if (
                                                                                (0x91U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (vlTOPp->filter_control__DOT__out 
                                                                                >> 0x17U)))) {
                                                                                vlTOPp->filter_control__DOT__convert_0__DOT__Integer_Value 
                                                                                = 
                                                                                (0x7fffe0U 
                                                                                & vlTOPp->filter_control__DOT__out);
                                                                            } else {
                                                                                if (
                                                                                (0x92U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (vlTOPp->filter_control__DOT__out 
                                                                                >> 0x17U)))) {
                                                                                vlTOPp->filter_control__DOT__convert_0__DOT__Integer_Value 
                                                                                = 
                                                                                (0x7ffff0U 
                                                                                & vlTOPp->filter_control__DOT__out);
                                                                                } else {
                                                                                if (
                                                                                (0x93U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (vlTOPp->filter_control__DOT__out 
                                                                                >> 0x17U)))) {
                                                                                vlTOPp->filter_control__DOT__convert_0__DOT__Integer_Value 
                                                                                = 
                                                                                (0x7ffff8U 
                                                                                & vlTOPp->filter_control__DOT__out);
                                                                                } else {
                                                                                if (
                                                                                (0x94U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (vlTOPp->filter_control__DOT__out 
                                                                                >> 0x17U)))) {
                                                                                vlTOPp->filter_control__DOT__convert_0__DOT__Integer_Value 
                                                                                = 
                                                                                (0x7ffffcU 
                                                                                & vlTOPp->filter_control__DOT__out);
                                                                                } else {
                                                                                if (
                                                                                (0x95U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (vlTOPp->filter_control__DOT__out 
                                                                                >> 0x17U)))) {
                                                                                vlTOPp->filter_control__DOT__convert_0__DOT__Integer_Value 
                                                                                = 
                                                                                (0x7ffffeU 
                                                                                & vlTOPp->filter_control__DOT__out);
                                                                                } else {
                                                                                if (
                                                                                (0x96U 
                                                                                <= 
                                                                                (0xffU 
                                                                                & (vlTOPp->filter_control__DOT__out 
                                                                                >> 0x17U)))) {
                                                                                vlTOPp->filter_control__DOT__convert_0__DOT__Integer_Value 
                                                                                = 
                                                                                (0x7fffffU 
                                                                                & vlTOPp->filter_control__DOT__out);
                                                                                } else {
                                                                                if (
                                                                                (0x7eU 
                                                                                >= 
                                                                                (0xffU 
                                                                                & (vlTOPp->filter_control__DOT__out 
                                                                                >> 0x17U)))) {
                                                                                vlTOPp->filter_control__DOT__convert_0__DOT__Integer_Value = 0U;
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->filter_control__DOT__fir_0__DOT__p_ce) {
        vlTOPp->filter_control__DOT__fir_0__DOT__r_acc 
            = vlTOPp->filter_control__DOT__fir_0__DOT__product;
    } else {
        if ((4U & (IData)(vlTOPp->filter_control__DOT__fir_0__DOT__pre_acc_ce))) {
            vlTOPp->filter_control__DOT__fir_0__DOT__r_acc 
                = (((0xffU == (0xffU & (vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__operand_a 
                                        >> 0x17U))) 
                    | (0xffU == (0xffU & (vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__operand_b 
                                          >> 0x17U))))
                    ? 0U : ((IData)(vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__operation_sub_addBar)
                             ? ((0x80000000U & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__operand_a) 
                                | vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__add_sum)
                             : ((0x80000000U & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__operand_a) 
                                | vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__sub_diff)));
        }
    }
    vlTOPp->filter_control__DOT__counter = __Vdly__filter_control__DOT__counter;
    vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__product_normalised 
        = (VL_ULL(0xffffffffffff) & ((1U & (IData)(
                                                   (vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__product 
                                                    >> 0x2fU)))
                                      ? vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__product
                                      : (vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__product 
                                         << 1U)));
    vlTOPp->o_result = (0xffffU & ((0x1ffffU & (IData)(
                                                       ((QData)((IData)(
                                                                        ((0xff800000U 
                                                                          & vlTOPp->filter_control__DOT__out) 
                                                                         | (0x7fffffU 
                                                                            & (vlTOPp->filter_control__DOT__convert_0__DOT__Integer_Value 
                                                                               >> 1U))))) 
                                                        >> 0xfU))) 
                                   - (IData)(0xf00U)));
    vlTOPp->filter_control__DOT__fir_0__DOT__pre_acc_ce 
        = __Vdly__filter_control__DOT__fir_0__DOT__pre_acc_ce;
    vlTOPp->filter_control__DOT__state = ((IData)(vlTOPp->i_reset)
                                           ? (IData)(vlTOPp->filter_control__DOT__next_state)
                                           : 0U);
    vlTOPp->filter_control__DOT__add_0__DOT__operand_b 
        = ((0x3f800000U > (0x7fffffffU & vlTOPp->filter_control__DOT__tap))
            ? (IData)((VL_ULL(0x3f80000000000000) | (QData)((IData)(vlTOPp->filter_control__DOT__tap))))
            : 0x3f800000U);
    vlTOPp->filter_control__DOT__add_0__DOT__operand_a 
        = ((0x3f800000U > (0x7fffffffU & vlTOPp->filter_control__DOT__tap))
            ? (IData)(((VL_ULL(0x3f80000000000000) 
                        | (QData)((IData)(vlTOPp->filter_control__DOT__tap))) 
                       >> 0x20U)) : (IData)((QData)((IData)(vlTOPp->filter_control__DOT__tap))));
    vlTOPp->filter_control__DOT__fir_0__DOT__p_ce = 
        ((IData)(vlTOPp->filter_control__DOT__fir_0__DOT__d_ce) 
         & (IData)(vlTOPp->i_reset));
    vlTOPp->filter_control__DOT__fir_0__DOT__product 
        = ((IData)(vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__Exception)
            ? 0U : ((IData)(vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__zero)
                     ? ((IData)(vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__sign) 
                        << 0x1fU) : ((1U & ((((IData)(vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__exponent) 
                                              >> 8U) 
                                             & (~ ((IData)(vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__exponent) 
                                                   >> 7U))) 
                                            & (~ (IData)(vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__zero))))
                                      ? (0x7f800000U 
                                         | ((IData)(vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__sign) 
                                            << 0x1fU))
                                      : ((1U & ((((IData)(vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__exponent) 
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
                                                | vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__product_mantissa))))));
    vlTOPp->filter_control__DOT__add_0__DOT__significand_a 
        = ((0U != (0xffU & (vlTOPp->filter_control__DOT__add_0__DOT__operand_a 
                            >> 0x17U))) ? (0x800000U 
                                           | (0x7fffffU 
                                              & vlTOPp->filter_control__DOT__add_0__DOT__operand_a))
            : (0x7fffffU & vlTOPp->filter_control__DOT__add_0__DOT__operand_a));
    vlTOPp->filter_control__DOT__add_0__DOT__operation_sub_addBar 
        = (1U & (~ ((vlTOPp->filter_control__DOT__add_0__DOT__operand_a 
                     ^ vlTOPp->filter_control__DOT__add_0__DOT__operand_b) 
                    >> 0x1fU)));
    vlTOPp->filter_control__DOT__add_0__DOT__exponent_diff 
        = (0xffU & ((vlTOPp->filter_control__DOT__add_0__DOT__operand_a 
                     >> 0x17U) - (vlTOPp->filter_control__DOT__add_0__DOT__operand_b 
                                  >> 0x17U)));
    vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__sign 
        = (1U & ((vlTOPp->filter_control__DOT__fir_0__DOT__tap 
                  ^ vlTOPp->filter_control__DOT__fir_0__DOT__data) 
                 >> 0x1fU));
    vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__exponent 
        = (0x1ffU & (((IData)(vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__sum_exponent) 
                      - (IData)(0x7fU)) + (1U & (IData)(
                                                        (vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__product 
                                                         >> 0x2fU)))));
    vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__product_mantissa 
        = (0x7fffffU & ((IData)((vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__product_normalised 
                                 >> 0x18U)) + (1U & 
                                               ((IData)(
                                                        (vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__product_normalised 
                                                         >> 0x17U)) 
                                                & (0U 
                                                   != 
                                                   (0x7fffffU 
                                                    & (IData)(vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__product_normalised)))))));
    vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__Exception 
        = ((0xffU == (0xffU & (vlTOPp->filter_control__DOT__fir_0__DOT__tap 
                               >> 0x17U))) | (0xffU 
                                              == (0xffU 
                                                  & (vlTOPp->filter_control__DOT__fir_0__DOT__data 
                                                     >> 0x17U))));
    vlTOPp->filter_control__DOT__i_tap_wr = ((0U != (IData)(vlTOPp->filter_control__DOT__state)) 
                                             & (0x80U 
                                                != (IData)(vlTOPp->filter_control__DOT__state)));
    vlTOPp->filter_control__DOT__add_0__DOT__significand_b_add_sub 
        = ((0x17U >= (IData)(vlTOPp->filter_control__DOT__add_0__DOT__exponent_diff))
            ? (0xffffffU & (((0U != (0xffU & (vlTOPp->filter_control__DOT__add_0__DOT__operand_b 
                                              >> 0x17U)))
                              ? (0x800000U | (0x7fffffU 
                                              & vlTOPp->filter_control__DOT__add_0__DOT__operand_b))
                              : (0x7fffffU & vlTOPp->filter_control__DOT__add_0__DOT__operand_b)) 
                            >> (IData)(vlTOPp->filter_control__DOT__add_0__DOT__exponent_diff)))
            : 0U);
    vlTOPp->filter_control__DOT__add_0__DOT__perform 
        = ((0xffU & (vlTOPp->filter_control__DOT__add_0__DOT__operand_a 
                     >> 0x17U)) == (0xffU & ((vlTOPp->filter_control__DOT__add_0__DOT__operand_b 
                                              >> 0x17U) 
                                             + (IData)(vlTOPp->filter_control__DOT__add_0__DOT__exponent_diff))));
    vlTOPp->filter_control__DOT__fir_0__DOT__d_ce = 
        ((IData)(vlTOPp->filter_control__DOT__fir_0__DOT__m_ce) 
         & (IData)(vlTOPp->i_reset));
    vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__zero 
        = ((~ (IData)(vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__Exception)) 
           & ((0U == vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__product_mantissa) 
              & (0U == (IData)(vlTOPp->filter_control__DOT__fir_0__DOT__m_0__DOT__sum_exponent))));
    vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__operand_b 
        = (((0x7fffffffU & vlTOPp->filter_control__DOT__fir_0__DOT__r_acc) 
            < (0x7fffffffU & vlTOPp->filter_control__DOT__fir_0__DOT__product))
            ? (IData)((((QData)((IData)(vlTOPp->filter_control__DOT__fir_0__DOT__product)) 
                        << 0x20U) | (QData)((IData)(vlTOPp->filter_control__DOT__fir_0__DOT__r_acc))))
            : vlTOPp->filter_control__DOT__fir_0__DOT__product);
    vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__operand_a 
        = (((0x7fffffffU & vlTOPp->filter_control__DOT__fir_0__DOT__r_acc) 
            < (0x7fffffffU & vlTOPp->filter_control__DOT__fir_0__DOT__product))
            ? (IData)(((((QData)((IData)(vlTOPp->filter_control__DOT__fir_0__DOT__product)) 
                         << 0x20U) | (QData)((IData)(vlTOPp->filter_control__DOT__fir_0__DOT__r_acc))) 
                       >> 0x20U)) : (IData)((QData)((IData)(vlTOPp->filter_control__DOT__fir_0__DOT__r_acc))));
    vlTOPp->filter_control__DOT__add_0__DOT__significand_add 
        = (((IData)(vlTOPp->filter_control__DOT__add_0__DOT__perform) 
            & (IData)(vlTOPp->filter_control__DOT__add_0__DOT__operation_sub_addBar))
            ? (0x1ffffffU & (vlTOPp->filter_control__DOT__add_0__DOT__significand_a 
                             + vlTOPp->filter_control__DOT__add_0__DOT__significand_b_add_sub))
            : 0U);
    vlTOPp->filter_control__DOT__add_0__DOT__significand_sub 
        = ((IData)(vlTOPp->filter_control__DOT__add_0__DOT__perform)
            ? (0x1ffffffU & (vlTOPp->filter_control__DOT__add_0__DOT__significand_a 
                             + (((IData)(vlTOPp->filter_control__DOT__add_0__DOT__perform) 
                                 & (~ (IData)(vlTOPp->filter_control__DOT__add_0__DOT__operation_sub_addBar)))
                                 ? (0xffffffU & ((IData)(1U) 
                                                 + 
                                                 (~ vlTOPp->filter_control__DOT__add_0__DOT__significand_b_add_sub)))
                                 : 0U))) : 0U);
    vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_a 
        = ((0U != (0xffU & (vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__operand_a 
                            >> 0x17U))) ? (0x800000U 
                                           | (0x7fffffU 
                                              & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__operand_a))
            : (0x7fffffU & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__operand_a));
    vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__operation_sub_addBar 
        = (1U & (~ ((vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__operand_a 
                     ^ vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__operand_b) 
                    >> 0x1fU)));
    vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__exponent_diff 
        = (0xffU & ((vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__operand_a 
                     >> 0x17U) - (vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__operand_b 
                                  >> 0x17U)));
    vlTOPp->filter_control__DOT__add_0__DOT__add_sum 
        = ((0x7f800000U & vlTOPp->filter_control__DOT__add_0__DOT__add_sum) 
           | (0x7fffffU & ((0x1000000U & vlTOPp->filter_control__DOT__add_0__DOT__significand_add)
                            ? (vlTOPp->filter_control__DOT__add_0__DOT__significand_add 
                               >> 1U) : vlTOPp->filter_control__DOT__add_0__DOT__significand_add)));
    vlTOPp->filter_control__DOT__add_0__DOT__add_sum 
        = ((0x7fffffU & vlTOPp->filter_control__DOT__add_0__DOT__add_sum) 
           | (0x7f800000U & (((0x1000000U & vlTOPp->filter_control__DOT__add_0__DOT__significand_add)
                               ? ((IData)(1U) + (vlTOPp->filter_control__DOT__add_0__DOT__operand_a 
                                                 >> 0x17U))
                               : (vlTOPp->filter_control__DOT__add_0__DOT__operand_a 
                                  >> 0x17U)) << 0x17U)));
    vlTOPp->filter_control__DOT__add_0__DOT__pe__DOT__shift 
        = (((((((((0x1800000U == (0x1800000U & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub)) 
                  | (0x1400000U == (0x1c00000U & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))) 
                 | (0x1200000U == (0x1e00000U & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))) 
                | (0x1100000U == (0x1f00000U & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))) 
               | (0x1080000U == (0x1f80000U & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))) 
              | (0x1040000U == (0x1fc0000U & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))) 
             | (0x1020000U == (0x1fe0000U & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))) 
            | (0x1010000U == (0x1ff0000U & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub)))
            ? ((0x1800000U == (0x1800000U & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))
                ? 0U : ((0x1400000U == (0x1c00000U 
                                        & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))
                         ? 1U : ((0x1200000U == (0x1e00000U 
                                                 & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))
                                  ? 2U : ((0x1100000U 
                                           == (0x1f00000U 
                                               & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))
                                           ? 3U : (
                                                   (0x1080000U 
                                                    == 
                                                    (0x1f80000U 
                                                     & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))
                                                    ? 4U
                                                    : 
                                                   ((0x1040000U 
                                                     == 
                                                     (0x1fc0000U 
                                                      & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))
                                                     ? 5U
                                                     : 
                                                    ((0x1020000U 
                                                      == 
                                                      (0x1fe0000U 
                                                       & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))
                                                      ? 6U
                                                      : 7U)))))))
            : (((((((((0x1008000U == (0x1ff8000U & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub)) 
                      | (0x1004000U == (0x1ffc000U 
                                        & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))) 
                     | (0x1002000U == (0x1ffe000U & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))) 
                    | (0x1001000U == (0x1fff000U & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))) 
                   | (0x1000800U == (0x1fff800U & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))) 
                  | (0x1000400U == (0x1fffc00U & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))) 
                 | (0x1000200U == (0x1fffe00U & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))) 
                | (0x1000100U == (0x1ffff00U & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub)))
                ? ((0x1008000U == (0x1ff8000U & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))
                    ? 8U : ((0x1004000U == (0x1ffc000U 
                                            & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))
                             ? 9U : ((0x1002000U == 
                                      (0x1ffe000U & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))
                                      ? 0xaU : ((0x1001000U 
                                                 == 
                                                 (0x1fff000U 
                                                  & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))
                                                 ? 0xbU
                                                 : 
                                                ((0x1000800U 
                                                  == 
                                                  (0x1fff800U 
                                                   & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))
                                                  ? 0xcU
                                                  : 
                                                 ((0x1000400U 
                                                   == 
                                                   (0x1fffc00U 
                                                    & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))
                                                   ? 0xdU
                                                   : 
                                                  ((0x1000200U 
                                                    == 
                                                    (0x1fffe00U 
                                                     & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))
                                                    ? 0xeU
                                                    : 0xfU)))))))
                : (((((((((0x1000080U == (0x1ffff80U 
                                          & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub)) 
                          | (0x1000040U == (0x1ffffc0U 
                                            & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))) 
                         | (0x1000020U == (0x1ffffe0U 
                                           & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))) 
                        | (0x1000010U == (0x1fffff0U 
                                          & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))) 
                       | (0x1000008U == (0x1fffff8U 
                                         & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))) 
                      | (0x1000004U == (0x1fffffcU 
                                        & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))) 
                     | (0x1000002U == (0x1fffffeU & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))) 
                    | (0x1000001U == vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))
                    ? ((0x1000080U == (0x1ffff80U & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))
                        ? 0x10U : ((0x1000040U == (0x1ffffc0U 
                                                   & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))
                                    ? 0x11U : ((0x1000020U 
                                                == 
                                                (0x1ffffe0U 
                                                 & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))
                                                ? 0x12U
                                                : (
                                                   (0x1000010U 
                                                    == 
                                                    (0x1fffff0U 
                                                     & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))
                                                    ? 0x13U
                                                    : 
                                                   ((0x1000008U 
                                                     == 
                                                     (0x1fffff8U 
                                                      & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))
                                                     ? 0x14U
                                                     : 
                                                    ((0x1000004U 
                                                      == 
                                                      (0x1fffffcU 
                                                       & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))
                                                      ? 0x15U
                                                      : 
                                                     ((0x1000002U 
                                                       == 
                                                       (0x1fffffeU 
                                                        & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))
                                                       ? 0x16U
                                                       : 0x17U)))))))
                    : ((0x1000000U == vlTOPp->filter_control__DOT__add_0__DOT__significand_sub)
                        ? 0x18U : 0U))));
    vlTOPp->filter_control__DOT__add_0__DOT__subtraction_diff 
        = (0x1ffffffU & (((((((((0x1800000U == (0x1800000U 
                                                & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub)) 
                                | (0x1400000U == (0x1c00000U 
                                                  & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))) 
                               | (0x1200000U == (0x1e00000U 
                                                 & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))) 
                              | (0x1100000U == (0x1f00000U 
                                                & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))) 
                             | (0x1080000U == (0x1f80000U 
                                               & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))) 
                            | (0x1040000U == (0x1fc0000U 
                                              & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))) 
                           | (0x1020000U == (0x1fe0000U 
                                             & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))) 
                          | (0x1010000U == (0x1ff0000U 
                                            & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub)))
                          ? ((0x1800000U == (0x1800000U 
                                             & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))
                              ? vlTOPp->filter_control__DOT__add_0__DOT__significand_sub
                              : ((0x1400000U == (0x1c00000U 
                                                 & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))
                                  ? (vlTOPp->filter_control__DOT__add_0__DOT__significand_sub 
                                     << 1U) : ((0x1200000U 
                                                == 
                                                (0x1e00000U 
                                                 & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))
                                                ? (vlTOPp->filter_control__DOT__add_0__DOT__significand_sub 
                                                   << 2U)
                                                : (
                                                   (0x1100000U 
                                                    == 
                                                    (0x1f00000U 
                                                     & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))
                                                    ? 
                                                   (vlTOPp->filter_control__DOT__add_0__DOT__significand_sub 
                                                    << 3U)
                                                    : 
                                                   ((0x1080000U 
                                                     == 
                                                     (0x1f80000U 
                                                      & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))
                                                     ? 
                                                    (vlTOPp->filter_control__DOT__add_0__DOT__significand_sub 
                                                     << 4U)
                                                     : 
                                                    ((0x1040000U 
                                                      == 
                                                      (0x1fc0000U 
                                                       & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))
                                                      ? 
                                                     (vlTOPp->filter_control__DOT__add_0__DOT__significand_sub 
                                                      << 5U)
                                                      : 
                                                     ((0x1020000U 
                                                       == 
                                                       (0x1fe0000U 
                                                        & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))
                                                       ? 
                                                      (vlTOPp->filter_control__DOT__add_0__DOT__significand_sub 
                                                       << 6U)
                                                       : 
                                                      (vlTOPp->filter_control__DOT__add_0__DOT__significand_sub 
                                                       << 7U))))))))
                          : (((((((((0x1008000U == 
                                     (0x1ff8000U & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub)) 
                                    | (0x1004000U == 
                                       (0x1ffc000U 
                                        & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))) 
                                   | (0x1002000U == 
                                      (0x1ffe000U & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))) 
                                  | (0x1001000U == 
                                     (0x1fff000U & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))) 
                                 | (0x1000800U == (0x1fff800U 
                                                   & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))) 
                                | (0x1000400U == (0x1fffc00U 
                                                  & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))) 
                               | (0x1000200U == (0x1fffe00U 
                                                 & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))) 
                              | (0x1000100U == (0x1ffff00U 
                                                & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub)))
                              ? ((0x1008000U == (0x1ff8000U 
                                                 & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))
                                  ? (vlTOPp->filter_control__DOT__add_0__DOT__significand_sub 
                                     << 8U) : ((0x1004000U 
                                                == 
                                                (0x1ffc000U 
                                                 & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))
                                                ? (vlTOPp->filter_control__DOT__add_0__DOT__significand_sub 
                                                   << 9U)
                                                : (
                                                   (0x1002000U 
                                                    == 
                                                    (0x1ffe000U 
                                                     & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))
                                                    ? 
                                                   (vlTOPp->filter_control__DOT__add_0__DOT__significand_sub 
                                                    << 0xaU)
                                                    : 
                                                   ((0x1001000U 
                                                     == 
                                                     (0x1fff000U 
                                                      & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))
                                                     ? 
                                                    (vlTOPp->filter_control__DOT__add_0__DOT__significand_sub 
                                                     << 0xbU)
                                                     : 
                                                    ((0x1000800U 
                                                      == 
                                                      (0x1fff800U 
                                                       & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))
                                                      ? 
                                                     (vlTOPp->filter_control__DOT__add_0__DOT__significand_sub 
                                                      << 0xcU)
                                                      : 
                                                     ((0x1000400U 
                                                       == 
                                                       (0x1fffc00U 
                                                        & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))
                                                       ? 
                                                      (vlTOPp->filter_control__DOT__add_0__DOT__significand_sub 
                                                       << 0xdU)
                                                       : 
                                                      ((0x1000200U 
                                                        == 
                                                        (0x1fffe00U 
                                                         & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))
                                                        ? 
                                                       (vlTOPp->filter_control__DOT__add_0__DOT__significand_sub 
                                                        << 0xeU)
                                                        : 
                                                       (vlTOPp->filter_control__DOT__add_0__DOT__significand_sub 
                                                        << 0xfU))))))))
                              : (((((((((0x1000080U 
                                         == (0x1ffff80U 
                                             & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub)) 
                                        | (0x1000040U 
                                           == (0x1ffffc0U 
                                               & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))) 
                                       | (0x1000020U 
                                          == (0x1ffffe0U 
                                              & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))) 
                                      | (0x1000010U 
                                         == (0x1fffff0U 
                                             & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))) 
                                     | (0x1000008U 
                                        == (0x1fffff8U 
                                            & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))) 
                                    | (0x1000004U == 
                                       (0x1fffffcU 
                                        & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))) 
                                   | (0x1000002U == 
                                      (0x1fffffeU & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))) 
                                  | (0x1000001U == vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))
                                  ? ((0x1000080U == 
                                      (0x1ffff80U & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))
                                      ? (vlTOPp->filter_control__DOT__add_0__DOT__significand_sub 
                                         << 0x10U) : 
                                     ((0x1000040U == 
                                       (0x1ffffc0U 
                                        & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))
                                       ? (vlTOPp->filter_control__DOT__add_0__DOT__significand_sub 
                                          << 0x11U)
                                       : ((0x1000020U 
                                           == (0x1ffffe0U 
                                               & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))
                                           ? (vlTOPp->filter_control__DOT__add_0__DOT__significand_sub 
                                              << 0x12U)
                                           : ((0x1000010U 
                                               == (0x1fffff0U 
                                                   & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))
                                               ? (vlTOPp->filter_control__DOT__add_0__DOT__significand_sub 
                                                  << 0x13U)
                                               : ((0x1000008U 
                                                   == 
                                                   (0x1fffff8U 
                                                    & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))
                                                   ? 
                                                  (vlTOPp->filter_control__DOT__add_0__DOT__significand_sub 
                                                   << 0x14U)
                                                   : 
                                                  ((0x1000004U 
                                                    == 
                                                    (0x1fffffcU 
                                                     & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))
                                                    ? 
                                                   (vlTOPp->filter_control__DOT__add_0__DOT__significand_sub 
                                                    << 0x15U)
                                                    : 
                                                   ((0x1000002U 
                                                     == 
                                                     (0x1fffffeU 
                                                      & vlTOPp->filter_control__DOT__add_0__DOT__significand_sub))
                                                     ? 
                                                    (vlTOPp->filter_control__DOT__add_0__DOT__significand_sub 
                                                     << 0x16U)
                                                     : 
                                                    (vlTOPp->filter_control__DOT__add_0__DOT__significand_sub 
                                                     << 0x17U))))))))
                                  : ((0x1000000U == vlTOPp->filter_control__DOT__add_0__DOT__significand_sub)
                                      ? (vlTOPp->filter_control__DOT__add_0__DOT__significand_sub 
                                         << 0x18U) : 
                                     ((IData)(1U) + 
                                      (~ vlTOPp->filter_control__DOT__add_0__DOT__significand_sub)))))));
    vlTOPp->filter_control__DOT__fir_0__DOT__m_ce = 
        ((IData)(vlTOPp->i_ce) & (IData)(vlTOPp->i_reset));
    vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_b_add_sub 
        = ((0x17U >= (IData)(vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__exponent_diff))
            ? (0xffffffU & (((0U != (0xffU & (vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__operand_b 
                                              >> 0x17U)))
                              ? (0x800000U | (0x7fffffU 
                                              & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__operand_b))
                              : (0x7fffffU & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__operand_b)) 
                            >> (IData)(vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__exponent_diff)))
            : 0U);
    vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__perform 
        = ((0xffU & (vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__operand_a 
                     >> 0x17U)) == (0xffU & ((vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__operand_b 
                                              >> 0x17U) 
                                             + (IData)(vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__exponent_diff))));
    vlTOPp->filter_control__DOT__add_0__DOT__sub_diff 
        = ((0x7f800000U & (((vlTOPp->filter_control__DOT__add_0__DOT__operand_a 
                             >> 0x17U) - (IData)(vlTOPp->filter_control__DOT__add_0__DOT__pe__DOT__shift)) 
                           << 0x17U)) | (0x7fffffU 
                                         & vlTOPp->filter_control__DOT__add_0__DOT__subtraction_diff));
    vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_add 
        = (((IData)(vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__perform) 
            & (IData)(vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__operation_sub_addBar))
            ? (0x1ffffffU & (vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_a 
                             + vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_b_add_sub))
            : 0U);
    vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub 
        = ((IData)(vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__perform)
            ? (0x1ffffffU & (vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_a 
                             + (((IData)(vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__perform) 
                                 & (~ (IData)(vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__operation_sub_addBar)))
                                 ? (0xffffffU & ((IData)(1U) 
                                                 + 
                                                 (~ vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_b_add_sub)))
                                 : 0U))) : 0U);
    vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__add_sum 
        = ((0x7f800000U & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__add_sum) 
           | (0x7fffffU & ((0x1000000U & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_add)
                            ? (vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_add 
                               >> 1U) : vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_add)));
    vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__add_sum 
        = ((0x7fffffU & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__add_sum) 
           | (0x7f800000U & (((0x1000000U & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_add)
                               ? ((IData)(1U) + (vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__operand_a 
                                                 >> 0x17U))
                               : (vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__operand_a 
                                  >> 0x17U)) << 0x17U)));
    vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__pe__DOT__shift 
        = (((((((((0x1800000U == (0x1800000U & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub)) 
                  | (0x1400000U == (0x1c00000U & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))) 
                 | (0x1200000U == (0x1e00000U & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))) 
                | (0x1100000U == (0x1f00000U & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))) 
               | (0x1080000U == (0x1f80000U & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))) 
              | (0x1040000U == (0x1fc0000U & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))) 
             | (0x1020000U == (0x1fe0000U & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))) 
            | (0x1010000U == (0x1ff0000U & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub)))
            ? ((0x1800000U == (0x1800000U & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))
                ? 0U : ((0x1400000U == (0x1c00000U 
                                        & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))
                         ? 1U : ((0x1200000U == (0x1e00000U 
                                                 & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))
                                  ? 2U : ((0x1100000U 
                                           == (0x1f00000U 
                                               & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))
                                           ? 3U : (
                                                   (0x1080000U 
                                                    == 
                                                    (0x1f80000U 
                                                     & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))
                                                    ? 4U
                                                    : 
                                                   ((0x1040000U 
                                                     == 
                                                     (0x1fc0000U 
                                                      & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))
                                                     ? 5U
                                                     : 
                                                    ((0x1020000U 
                                                      == 
                                                      (0x1fe0000U 
                                                       & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))
                                                      ? 6U
                                                      : 7U)))))))
            : (((((((((0x1008000U == (0x1ff8000U & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub)) 
                      | (0x1004000U == (0x1ffc000U 
                                        & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))) 
                     | (0x1002000U == (0x1ffe000U & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))) 
                    | (0x1001000U == (0x1fff000U & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))) 
                   | (0x1000800U == (0x1fff800U & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))) 
                  | (0x1000400U == (0x1fffc00U & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))) 
                 | (0x1000200U == (0x1fffe00U & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))) 
                | (0x1000100U == (0x1ffff00U & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub)))
                ? ((0x1008000U == (0x1ff8000U & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))
                    ? 8U : ((0x1004000U == (0x1ffc000U 
                                            & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))
                             ? 9U : ((0x1002000U == 
                                      (0x1ffe000U & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))
                                      ? 0xaU : ((0x1001000U 
                                                 == 
                                                 (0x1fff000U 
                                                  & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))
                                                 ? 0xbU
                                                 : 
                                                ((0x1000800U 
                                                  == 
                                                  (0x1fff800U 
                                                   & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))
                                                  ? 0xcU
                                                  : 
                                                 ((0x1000400U 
                                                   == 
                                                   (0x1fffc00U 
                                                    & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))
                                                   ? 0xdU
                                                   : 
                                                  ((0x1000200U 
                                                    == 
                                                    (0x1fffe00U 
                                                     & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))
                                                    ? 0xeU
                                                    : 0xfU)))))))
                : (((((((((0x1000080U == (0x1ffff80U 
                                          & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub)) 
                          | (0x1000040U == (0x1ffffc0U 
                                            & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))) 
                         | (0x1000020U == (0x1ffffe0U 
                                           & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))) 
                        | (0x1000010U == (0x1fffff0U 
                                          & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))) 
                       | (0x1000008U == (0x1fffff8U 
                                         & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))) 
                      | (0x1000004U == (0x1fffffcU 
                                        & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))) 
                     | (0x1000002U == (0x1fffffeU & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))) 
                    | (0x1000001U == vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))
                    ? ((0x1000080U == (0x1ffff80U & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))
                        ? 0x10U : ((0x1000040U == (0x1ffffc0U 
                                                   & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))
                                    ? 0x11U : ((0x1000020U 
                                                == 
                                                (0x1ffffe0U 
                                                 & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))
                                                ? 0x12U
                                                : (
                                                   (0x1000010U 
                                                    == 
                                                    (0x1fffff0U 
                                                     & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))
                                                    ? 0x13U
                                                    : 
                                                   ((0x1000008U 
                                                     == 
                                                     (0x1fffff8U 
                                                      & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))
                                                     ? 0x14U
                                                     : 
                                                    ((0x1000004U 
                                                      == 
                                                      (0x1fffffcU 
                                                       & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))
                                                      ? 0x15U
                                                      : 
                                                     ((0x1000002U 
                                                       == 
                                                       (0x1fffffeU 
                                                        & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))
                                                       ? 0x16U
                                                       : 0x17U)))))))
                    : ((0x1000000U == vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub)
                        ? 0x18U : 0U))));
    vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__subtraction_diff 
        = (0x1ffffffU & (((((((((0x1800000U == (0x1800000U 
                                                & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub)) 
                                | (0x1400000U == (0x1c00000U 
                                                  & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))) 
                               | (0x1200000U == (0x1e00000U 
                                                 & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))) 
                              | (0x1100000U == (0x1f00000U 
                                                & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))) 
                             | (0x1080000U == (0x1f80000U 
                                               & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))) 
                            | (0x1040000U == (0x1fc0000U 
                                              & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))) 
                           | (0x1020000U == (0x1fe0000U 
                                             & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))) 
                          | (0x1010000U == (0x1ff0000U 
                                            & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub)))
                          ? ((0x1800000U == (0x1800000U 
                                             & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))
                              ? vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub
                              : ((0x1400000U == (0x1c00000U 
                                                 & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))
                                  ? (vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub 
                                     << 1U) : ((0x1200000U 
                                                == 
                                                (0x1e00000U 
                                                 & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))
                                                ? (vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub 
                                                   << 2U)
                                                : (
                                                   (0x1100000U 
                                                    == 
                                                    (0x1f00000U 
                                                     & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))
                                                    ? 
                                                   (vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub 
                                                    << 3U)
                                                    : 
                                                   ((0x1080000U 
                                                     == 
                                                     (0x1f80000U 
                                                      & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))
                                                     ? 
                                                    (vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub 
                                                     << 4U)
                                                     : 
                                                    ((0x1040000U 
                                                      == 
                                                      (0x1fc0000U 
                                                       & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))
                                                      ? 
                                                     (vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub 
                                                      << 5U)
                                                      : 
                                                     ((0x1020000U 
                                                       == 
                                                       (0x1fe0000U 
                                                        & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))
                                                       ? 
                                                      (vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub 
                                                       << 6U)
                                                       : 
                                                      (vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub 
                                                       << 7U))))))))
                          : (((((((((0x1008000U == 
                                     (0x1ff8000U & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub)) 
                                    | (0x1004000U == 
                                       (0x1ffc000U 
                                        & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))) 
                                   | (0x1002000U == 
                                      (0x1ffe000U & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))) 
                                  | (0x1001000U == 
                                     (0x1fff000U & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))) 
                                 | (0x1000800U == (0x1fff800U 
                                                   & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))) 
                                | (0x1000400U == (0x1fffc00U 
                                                  & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))) 
                               | (0x1000200U == (0x1fffe00U 
                                                 & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))) 
                              | (0x1000100U == (0x1ffff00U 
                                                & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub)))
                              ? ((0x1008000U == (0x1ff8000U 
                                                 & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))
                                  ? (vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub 
                                     << 8U) : ((0x1004000U 
                                                == 
                                                (0x1ffc000U 
                                                 & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))
                                                ? (vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub 
                                                   << 9U)
                                                : (
                                                   (0x1002000U 
                                                    == 
                                                    (0x1ffe000U 
                                                     & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))
                                                    ? 
                                                   (vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub 
                                                    << 0xaU)
                                                    : 
                                                   ((0x1001000U 
                                                     == 
                                                     (0x1fff000U 
                                                      & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))
                                                     ? 
                                                    (vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub 
                                                     << 0xbU)
                                                     : 
                                                    ((0x1000800U 
                                                      == 
                                                      (0x1fff800U 
                                                       & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))
                                                      ? 
                                                     (vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub 
                                                      << 0xcU)
                                                      : 
                                                     ((0x1000400U 
                                                       == 
                                                       (0x1fffc00U 
                                                        & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))
                                                       ? 
                                                      (vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub 
                                                       << 0xdU)
                                                       : 
                                                      ((0x1000200U 
                                                        == 
                                                        (0x1fffe00U 
                                                         & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))
                                                        ? 
                                                       (vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub 
                                                        << 0xeU)
                                                        : 
                                                       (vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub 
                                                        << 0xfU))))))))
                              : (((((((((0x1000080U 
                                         == (0x1ffff80U 
                                             & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub)) 
                                        | (0x1000040U 
                                           == (0x1ffffc0U 
                                               & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))) 
                                       | (0x1000020U 
                                          == (0x1ffffe0U 
                                              & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))) 
                                      | (0x1000010U 
                                         == (0x1fffff0U 
                                             & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))) 
                                     | (0x1000008U 
                                        == (0x1fffff8U 
                                            & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))) 
                                    | (0x1000004U == 
                                       (0x1fffffcU 
                                        & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))) 
                                   | (0x1000002U == 
                                      (0x1fffffeU & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))) 
                                  | (0x1000001U == vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))
                                  ? ((0x1000080U == 
                                      (0x1ffff80U & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))
                                      ? (vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub 
                                         << 0x10U) : 
                                     ((0x1000040U == 
                                       (0x1ffffc0U 
                                        & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))
                                       ? (vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub 
                                          << 0x11U)
                                       : ((0x1000020U 
                                           == (0x1ffffe0U 
                                               & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))
                                           ? (vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub 
                                              << 0x12U)
                                           : ((0x1000010U 
                                               == (0x1fffff0U 
                                                   & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))
                                               ? (vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub 
                                                  << 0x13U)
                                               : ((0x1000008U 
                                                   == 
                                                   (0x1fffff8U 
                                                    & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))
                                                   ? 
                                                  (vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub 
                                                   << 0x14U)
                                                   : 
                                                  ((0x1000004U 
                                                    == 
                                                    (0x1fffffcU 
                                                     & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))
                                                    ? 
                                                   (vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub 
                                                    << 0x15U)
                                                    : 
                                                   ((0x1000002U 
                                                     == 
                                                     (0x1fffffeU 
                                                      & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub))
                                                     ? 
                                                    (vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub 
                                                     << 0x16U)
                                                     : 
                                                    (vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub 
                                                     << 0x17U))))))))
                                  : ((0x1000000U == vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub)
                                      ? (vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub 
                                         << 0x18U) : 
                                     ((IData)(1U) + 
                                      (~ vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub)))))));
    vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__sub_diff 
        = ((0x7f800000U & (((vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__operand_a 
                             >> 0x17U) - (IData)(vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__pe__DOT__shift)) 
                           << 0x17U)) | (0x7fffffU 
                                         & vlTOPp->filter_control__DOT__fir_0__DOT__add_sub0__DOT__subtraction_diff));
}

VL_INLINE_OPT void Vfilter_control::_combo__TOP__5(Vfilter_control__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfilter_control::_combo__TOP__5\n"); );
    Vfilter_control* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->filter_control__DOT__next_state = (0xffffU 
                                               & ((0U 
                                                   == (IData)(vlTOPp->filter_control__DOT__state))
                                                   ? 
                                                  ((IData)(vlTOPp->i_start)
                                                    ? 0U
                                                    : 1U)
                                                   : 
                                                  ((0x80U 
                                                    == (IData)(vlTOPp->filter_control__DOT__state))
                                                    ? 
                                                   ((IData)(vlTOPp->i_start)
                                                     ? 0U
                                                     : 0x80U)
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlTOPp->filter_control__DOT__state)))));
}

void Vfilter_control::_eval(Vfilter_control__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfilter_control::_eval\n"); );
    Vfilter_control* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__2(vlSymsp);
    vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    if (((IData)(vlTOPp->i_clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__i_clk)))) {
        vlTOPp->_sequent__TOP__4(vlSymsp);
        vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__5(vlSymsp);
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
    __req |= ((vlTOPp->filter_control__DOT__fixed_0__DOT__exponent ^ vlTOPp->__Vchglast__TOP__filter_control__DOT__fixed_0__DOT__exponent)
         | (vlTOPp->filter_control__DOT__fixed_0__DOT__mantissa ^ vlTOPp->__Vchglast__TOP__filter_control__DOT__fixed_0__DOT__mantissa));
    VL_DEBUG_IF( if(__req && ((vlTOPp->filter_control__DOT__fixed_0__DOT__exponent ^ vlTOPp->__Vchglast__TOP__filter_control__DOT__fixed_0__DOT__exponent))) VL_DBG_MSGF("        CHANGE: fixed_to_float.sv:10: filter_control.fixed_0.exponent\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->filter_control__DOT__fixed_0__DOT__mantissa ^ vlTOPp->__Vchglast__TOP__filter_control__DOT__fixed_0__DOT__mantissa))) VL_DBG_MSGF("        CHANGE: fixed_to_float.sv:16: filter_control.fixed_0.mantissa\n"); );
    // Final
    vlTOPp->__Vchglast__TOP__filter_control__DOT__fixed_0__DOT__exponent 
        = vlTOPp->filter_control__DOT__fixed_0__DOT__exponent;
    vlTOPp->__Vchglast__TOP__filter_control__DOT__fixed_0__DOT__mantissa 
        = vlTOPp->filter_control__DOT__fixed_0__DOT__mantissa;
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
    o_result = VL_RAND_RESET_I(16);
    filter_control__DOT__state = VL_RAND_RESET_I(16);
    filter_control__DOT__next_state = VL_RAND_RESET_I(16);
    filter_control__DOT__i_tap_wr = VL_RAND_RESET_I(1);
    filter_control__DOT__i_tap = VL_RAND_RESET_I(16);
    filter_control__DOT__out = VL_RAND_RESET_I(32);
    filter_control__DOT__impulse = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<103; ++__Vi0) {
            filter_control__DOT__i_taps_arr_0[__Vi0] = VL_RAND_RESET_I(16);
    }}
    filter_control__DOT__tap = VL_RAND_RESET_I(32);
    filter_control__DOT__counter = VL_RAND_RESET_I(16);
    filter_control__DOT__o_float = VL_RAND_RESET_I(32);
    filter_control__DOT__add_0__DOT__operation_sub_addBar = VL_RAND_RESET_I(1);
    filter_control__DOT__add_0__DOT__operand_a = VL_RAND_RESET_I(32);
    filter_control__DOT__add_0__DOT__operand_b = VL_RAND_RESET_I(32);
    filter_control__DOT__add_0__DOT__significand_a = VL_RAND_RESET_I(24);
    filter_control__DOT__add_0__DOT__exponent_diff = VL_RAND_RESET_I(8);
    filter_control__DOT__add_0__DOT__significand_b_add_sub = VL_RAND_RESET_I(24);
    filter_control__DOT__add_0__DOT__significand_add = VL_RAND_RESET_I(25);
    filter_control__DOT__add_0__DOT__add_sum = VL_RAND_RESET_I(31);
    filter_control__DOT__add_0__DOT__significand_sub = VL_RAND_RESET_I(25);
    filter_control__DOT__add_0__DOT__sub_diff = VL_RAND_RESET_I(31);
    filter_control__DOT__add_0__DOT__subtraction_diff = VL_RAND_RESET_I(25);
    filter_control__DOT__add_0__DOT__perform = VL_RAND_RESET_I(1);
    filter_control__DOT__add_0__DOT__pe__DOT__shift = VL_RAND_RESET_I(5);
    filter_control__DOT__fir_0__DOT__o_ce = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<128; ++__Vi0) {
            filter_control__DOT__fir_0__DOT__tapmem[__Vi0] = VL_RAND_RESET_I(32);
    }}
    filter_control__DOT__fir_0__DOT__tap = VL_RAND_RESET_I(32);
    filter_control__DOT__fir_0__DOT__dwidx = VL_RAND_RESET_I(7);
    filter_control__DOT__fir_0__DOT__didx = VL_RAND_RESET_I(7);
    filter_control__DOT__fir_0__DOT__tidx = VL_RAND_RESET_I(7);
    { int __Vi0=0; for (; __Vi0<128; ++__Vi0) {
            filter_control__DOT__fir_0__DOT__dmem[__Vi0] = VL_RAND_RESET_I(32);
    }}
    filter_control__DOT__fir_0__DOT__data = VL_RAND_RESET_I(32);
    filter_control__DOT__fir_0__DOT__d_ce = VL_RAND_RESET_I(1);
    filter_control__DOT__fir_0__DOT__p_ce = VL_RAND_RESET_I(1);
    filter_control__DOT__fir_0__DOT__m_ce = VL_RAND_RESET_I(1);
    filter_control__DOT__fir_0__DOT__product = VL_RAND_RESET_I(32);
    filter_control__DOT__fir_0__DOT__r_acc = VL_RAND_RESET_I(32);
    filter_control__DOT__fir_0__DOT__pre_acc_ce = VL_RAND_RESET_I(3);
    filter_control__DOT__fir_0__DOT__genblk2__DOT__tapwidx = VL_RAND_RESET_I(7);
    filter_control__DOT__fir_0__DOT__add_sub0__DOT__operation_sub_addBar = VL_RAND_RESET_I(1);
    filter_control__DOT__fir_0__DOT__add_sub0__DOT__operand_a = VL_RAND_RESET_I(32);
    filter_control__DOT__fir_0__DOT__add_sub0__DOT__operand_b = VL_RAND_RESET_I(32);
    filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_a = VL_RAND_RESET_I(24);
    filter_control__DOT__fir_0__DOT__add_sub0__DOT__exponent_diff = VL_RAND_RESET_I(8);
    filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_b_add_sub = VL_RAND_RESET_I(24);
    filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_add = VL_RAND_RESET_I(25);
    filter_control__DOT__fir_0__DOT__add_sub0__DOT__add_sum = VL_RAND_RESET_I(31);
    filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub = VL_RAND_RESET_I(25);
    filter_control__DOT__fir_0__DOT__add_sub0__DOT__sub_diff = VL_RAND_RESET_I(31);
    filter_control__DOT__fir_0__DOT__add_sub0__DOT__subtraction_diff = VL_RAND_RESET_I(25);
    filter_control__DOT__fir_0__DOT__add_sub0__DOT__perform = VL_RAND_RESET_I(1);
    filter_control__DOT__fir_0__DOT__add_sub0__DOT__pe__DOT__shift = VL_RAND_RESET_I(5);
    filter_control__DOT__fir_0__DOT__m_0__DOT__Exception = VL_RAND_RESET_I(1);
    filter_control__DOT__fir_0__DOT__m_0__DOT__sign = VL_RAND_RESET_I(1);
    filter_control__DOT__fir_0__DOT__m_0__DOT__zero = VL_RAND_RESET_I(1);
    filter_control__DOT__fir_0__DOT__m_0__DOT__exponent = VL_RAND_RESET_I(9);
    filter_control__DOT__fir_0__DOT__m_0__DOT__sum_exponent = VL_RAND_RESET_I(9);
    filter_control__DOT__fir_0__DOT__m_0__DOT__product_mantissa = VL_RAND_RESET_I(23);
    filter_control__DOT__fir_0__DOT__m_0__DOT__product = VL_RAND_RESET_Q(48);
    filter_control__DOT__fir_0__DOT__m_0__DOT__product_normalised = VL_RAND_RESET_Q(48);
    filter_control__DOT__convert_0__DOT__Integer_Value = VL_RAND_RESET_I(24);
    filter_control__DOT__fixed_0__DOT__state = VL_RAND_RESET_I(6);
    filter_control__DOT__fixed_0__DOT__next_state = VL_RAND_RESET_I(6);
    filter_control__DOT__fixed_0__DOT__exponent = VL_RAND_RESET_I(8);
    filter_control__DOT__fixed_0__DOT__sign = VL_RAND_RESET_I(1);
    filter_control__DOT__fixed_0__DOT__mantissa = VL_RAND_RESET_I(23);
    filter_control__DOT__fixed_0__DOT__unsigned_fixed = VL_RAND_RESET_I(16);
    __Vchglast__TOP__filter_control__DOT__fixed_0__DOT__exponent = VL_RAND_RESET_I(8);
    __Vchglast__TOP__filter_control__DOT__fixed_0__DOT__mantissa = VL_RAND_RESET_I(23);
    __Vm_traceActivity = 0;
}
