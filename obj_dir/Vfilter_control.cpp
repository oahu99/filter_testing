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
    vlTOPp->filter_control__DOT__fir_0__DOT__o_ce = 0U;
    vlTOPp->filter_control__DOT__out = VL_ULL(0);
    VL_READMEM_N(true, 16, 103, 0, std::string("taps.dat")
                 , vlTOPp->filter_control__DOT__i_taps_arr_0
                 , 0, ~VL_ULL(0));
    vlTOPp->filter_control__DOT__fir_0__DOT__genblk2__DOT__tapwidx = 0U;
    vlTOPp->filter_control__DOT__fir_0__DOT__dwidx = 0U;
    vlTOPp->filter_control__DOT__fir_0__DOT__pre_acc_ce = 0U;
    vlTOPp->filter_control__DOT__fir_0__DOT__p_ce = 0U;
    vlTOPp->filter_control__DOT__fir_0__DOT__product = 0U;
    vlTOPp->filter_control__DOT__fir_0__DOT__r_acc = VL_ULL(0);
    vlTOPp->filter_control__DOT__fir_0__DOT__tap = 0U;
    vlTOPp->filter_control__DOT__fir_0__DOT__data = 0U;
    vlTOPp->filter_control__DOT__fir_0__DOT__d_ce = 0U;
    vlTOPp->filter_control__DOT__fir_0__DOT__didx = 0U;
    vlTOPp->filter_control__DOT__fir_0__DOT__tidx = 0U;
    vlTOPp->filter_control__DOT__fir_0__DOT__m_ce = 0U;
}

VL_INLINE_OPT void Vfilter_control::_sequent__TOP__2(Vfilter_control__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfilter_control::_sequent__TOP__2\n"); );
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
    SData/*15:0*/ __Vdlyvval__filter_control__DOT__fir_0__DOT__tapmem__v0;
    SData/*15:0*/ __Vdlyvval__filter_control__DOT__fir_0__DOT__dmem__v0;
    QData/*38:0*/ __Vdly__filter_control__DOT__fir_0__DOT__r_acc;
    // Body
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
    __Vdly__filter_control__DOT__fir_0__DOT__r_acc 
        = vlTOPp->filter_control__DOT__fir_0__DOT__r_acc;
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
            = vlTOPp->i_sample;
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
                                                < ((IData)(0x67U) 
                                                   - (IData)(vlTOPp->filter_control__DOT__fir_0__DOT__tidx)))))));
    if (vlTOPp->filter_control__DOT__i_tap_wr) {
        __Vdlyvval__filter_control__DOT__fir_0__DOT__tapmem__v0 
            = ((0x66U >= (0x7fU & (IData)(vlTOPp->filter_control__DOT__state)))
                ? vlTOPp->filter_control__DOT__i_taps_arr_0
               [(0x7fU & (IData)(vlTOPp->filter_control__DOT__state))]
                : 0U);
        __Vdlyvset__filter_control__DOT__fir_0__DOT__tapmem__v0 = 1U;
        __Vdlyvdim0__filter_control__DOT__fir_0__DOT__tapmem__v0 
            = vlTOPp->filter_control__DOT__fir_0__DOT__genblk2__DOT__tapwidx;
    }
    vlTOPp->filter_control__DOT__fir_0__DOT__o_ce = 
        ((IData)(vlTOPp->filter_control__DOT__fir_0__DOT__p_ce) 
         & (IData)(vlTOPp->i_reset));
    if (vlTOPp->filter_control__DOT__fir_0__DOT__p_ce) {
        vlTOPp->filter_control__DOT__out = vlTOPp->filter_control__DOT__fir_0__DOT__r_acc;
    }
    if (vlTOPp->filter_control__DOT__fir_0__DOT__p_ce) {
        __Vdly__filter_control__DOT__fir_0__DOT__r_acc 
            = (((QData)((IData)((0x7fU & VL_NEGATE_I((IData)(
                                                             (1U 
                                                              & (vlTOPp->filter_control__DOT__fir_0__DOT__product 
                                                                 >> 0x1fU))))))) 
                << 0x20U) | (QData)((IData)(vlTOPp->filter_control__DOT__fir_0__DOT__product)));
    } else {
        if ((4U & (IData)(vlTOPp->filter_control__DOT__fir_0__DOT__pre_acc_ce))) {
            __Vdly__filter_control__DOT__fir_0__DOT__r_acc 
                = (VL_ULL(0x7fffffffff) & (vlTOPp->filter_control__DOT__fir_0__DOT__r_acc 
                                           + (((QData)((IData)(
                                                               (0x7fU 
                                                                & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (vlTOPp->filter_control__DOT__fir_0__DOT__product 
                                                                                >> 0x1fU))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->filter_control__DOT__fir_0__DOT__product)))));
        }
    }
    vlTOPp->filter_control__DOT__fir_0__DOT__dwidx 
        = __Vdly__filter_control__DOT__fir_0__DOT__dwidx;
    vlTOPp->filter_control__DOT__fir_0__DOT__genblk2__DOT__tapwidx 
        = __Vdly__filter_control__DOT__fir_0__DOT__genblk2__DOT__tapwidx;
    vlTOPp->filter_control__DOT__fir_0__DOT__r_acc 
        = __Vdly__filter_control__DOT__fir_0__DOT__r_acc;
    vlTOPp->filter_control__DOT__fir_0__DOT__pre_acc_ce 
        = __Vdly__filter_control__DOT__fir_0__DOT__pre_acc_ce;
    vlTOPp->filter_control__DOT__state = ((IData)(vlTOPp->i_reset)
                                           ? (IData)(vlTOPp->filter_control__DOT__next_state)
                                           : 0U);
    vlTOPp->o_result = (0xffffU & (IData)(vlTOPp->filter_control__DOT__out));
    vlTOPp->filter_control__DOT__fir_0__DOT__product 
        = VL_MULS_III(32,32,32, VL_EXTENDS_II(32,16, (IData)(vlTOPp->filter_control__DOT__fir_0__DOT__tap)), 
                      VL_EXTENDS_II(32,16, (IData)(vlTOPp->filter_control__DOT__fir_0__DOT__data)));
    vlTOPp->filter_control__DOT__fir_0__DOT__p_ce = 
        ((IData)(vlTOPp->filter_control__DOT__fir_0__DOT__d_ce) 
         & (IData)(vlTOPp->i_reset));
    vlTOPp->filter_control__DOT__i_tap_wr = ((0U != (IData)(vlTOPp->filter_control__DOT__state)) 
                                             & (0x67U 
                                                != (IData)(vlTOPp->filter_control__DOT__state)));
    vlTOPp->filter_control__DOT__fir_0__DOT__data = 
        vlTOPp->filter_control__DOT__fir_0__DOT__dmem
        [vlTOPp->filter_control__DOT__fir_0__DOT__didx];
    vlTOPp->filter_control__DOT__fir_0__DOT__tap = 
        vlTOPp->filter_control__DOT__fir_0__DOT__tapmem
        [vlTOPp->filter_control__DOT__fir_0__DOT__tidx];
    vlTOPp->filter_control__DOT__fir_0__DOT__d_ce = 
        ((IData)(vlTOPp->filter_control__DOT__fir_0__DOT__m_ce) 
         & (IData)(vlTOPp->i_reset));
    if (__Vdlyvset__filter_control__DOT__fir_0__DOT__dmem__v0) {
        vlTOPp->filter_control__DOT__fir_0__DOT__dmem[__Vdlyvdim0__filter_control__DOT__fir_0__DOT__dmem__v0] 
            = __Vdlyvval__filter_control__DOT__fir_0__DOT__dmem__v0;
    }
    vlTOPp->filter_control__DOT__fir_0__DOT__didx = __Vdly__filter_control__DOT__fir_0__DOT__didx;
    if (__Vdlyvset__filter_control__DOT__fir_0__DOT__tapmem__v0) {
        vlTOPp->filter_control__DOT__fir_0__DOT__tapmem[__Vdlyvdim0__filter_control__DOT__fir_0__DOT__tapmem__v0] 
            = __Vdlyvval__filter_control__DOT__fir_0__DOT__tapmem__v0;
    }
    vlTOPp->filter_control__DOT__fir_0__DOT__tidx = __Vdly__filter_control__DOT__fir_0__DOT__tidx;
    vlTOPp->filter_control__DOT__fir_0__DOT__m_ce = 
        ((IData)(vlTOPp->i_ce) & (IData)(vlTOPp->i_reset));
}

void Vfilter_control::_settle__TOP__3(Vfilter_control__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfilter_control::_settle__TOP__3\n"); );
    Vfilter_control* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->filter_control__DOT__i_tap_wr = ((0U != (IData)(vlTOPp->filter_control__DOT__state)) 
                                             & (0x67U 
                                                != (IData)(vlTOPp->filter_control__DOT__state)));
    vlTOPp->filter_control__DOT__next_state = (0x1ffU 
                                               & ((0U 
                                                   == (IData)(vlTOPp->filter_control__DOT__state))
                                                   ? 
                                                  ((IData)(vlTOPp->i_start)
                                                    ? 0U
                                                    : 1U)
                                                   : 
                                                  ((0x67U 
                                                    == (IData)(vlTOPp->filter_control__DOT__state))
                                                    ? 
                                                   ((IData)(vlTOPp->i_start)
                                                     ? 0U
                                                     : 0x67U)
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlTOPp->filter_control__DOT__state)))));
    vlTOPp->o_result = (0xffffU & (IData)(vlTOPp->filter_control__DOT__out));
}

VL_INLINE_OPT void Vfilter_control::_combo__TOP__4(Vfilter_control__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfilter_control::_combo__TOP__4\n"); );
    Vfilter_control* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->filter_control__DOT__next_state = (0x1ffU 
                                               & ((0U 
                                                   == (IData)(vlTOPp->filter_control__DOT__state))
                                                   ? 
                                                  ((IData)(vlTOPp->i_start)
                                                    ? 0U
                                                    : 1U)
                                                   : 
                                                  ((0x67U 
                                                    == (IData)(vlTOPp->filter_control__DOT__state))
                                                    ? 
                                                   ((IData)(vlTOPp->i_start)
                                                     ? 0U
                                                     : 0x67U)
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlTOPp->filter_control__DOT__state)))));
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
    o_result = VL_RAND_RESET_I(16);
    filter_control__DOT__state = VL_RAND_RESET_I(9);
    filter_control__DOT__next_state = VL_RAND_RESET_I(9);
    filter_control__DOT__i_tap_wr = VL_RAND_RESET_I(1);
    filter_control__DOT__i_tap = VL_RAND_RESET_I(16);
    filter_control__DOT__out = VL_RAND_RESET_Q(39);
    { int __Vi0=0; for (; __Vi0<103; ++__Vi0) {
            filter_control__DOT__i_taps_arr_0[__Vi0] = VL_RAND_RESET_I(16);
    }}
    filter_control__DOT__fir_0__DOT__o_ce = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<128; ++__Vi0) {
            filter_control__DOT__fir_0__DOT__tapmem[__Vi0] = VL_RAND_RESET_I(16);
    }}
    filter_control__DOT__fir_0__DOT__tap = VL_RAND_RESET_I(16);
    filter_control__DOT__fir_0__DOT__dwidx = VL_RAND_RESET_I(7);
    filter_control__DOT__fir_0__DOT__didx = VL_RAND_RESET_I(7);
    filter_control__DOT__fir_0__DOT__tidx = VL_RAND_RESET_I(7);
    { int __Vi0=0; for (; __Vi0<128; ++__Vi0) {
            filter_control__DOT__fir_0__DOT__dmem[__Vi0] = VL_RAND_RESET_I(16);
    }}
    filter_control__DOT__fir_0__DOT__data = VL_RAND_RESET_I(16);
    filter_control__DOT__fir_0__DOT__d_ce = VL_RAND_RESET_I(1);
    filter_control__DOT__fir_0__DOT__p_ce = VL_RAND_RESET_I(1);
    filter_control__DOT__fir_0__DOT__m_ce = VL_RAND_RESET_I(1);
    filter_control__DOT__fir_0__DOT__product = VL_RAND_RESET_I(32);
    filter_control__DOT__fir_0__DOT__r_acc = VL_RAND_RESET_Q(39);
    filter_control__DOT__fir_0__DOT__pre_acc_ce = VL_RAND_RESET_I(3);
    filter_control__DOT__fir_0__DOT__genblk2__DOT__tapwidx = VL_RAND_RESET_I(7);
    __Vm_traceActivity = 0;
}
