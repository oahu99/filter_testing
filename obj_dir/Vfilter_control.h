// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VFILTER_CONTROL_H_
#define _VFILTER_CONTROL_H_  // guard

#include "verilated.h"

//==========

class Vfilter_control__Syms;
class Vfilter_control_VerilatedVcd;


//----------

VL_MODULE(Vfilter_control) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(i_clk,0,0);
    VL_IN8(i2s_sck,0,0);
    VL_IN8(i_reset,0,0);
    VL_IN8(i_start,0,0);
    VL_IN8(i2s_ws,0,0);
    VL_IN8(i2s_sda,0,0);
    VL_OUT8(i_ce,0,0);
    VL_OUT64(o_result,38,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*0:0*/ filter_control__DOT__i_tap_wr;
    CData/*0:0*/ filter_control__DOT__i2s_wsp;
    CData/*0:0*/ filter_control__DOT__i_ce_flag_1;
    CData/*0:0*/ filter_control__DOT__i_ce_flag_2;
    CData/*0:0*/ filter_control__DOT__filter_0__DOT__o_ce;
    CData/*6:0*/ filter_control__DOT__filter_0__DOT__dwidx;
    CData/*6:0*/ filter_control__DOT__filter_0__DOT__didx;
    CData/*6:0*/ filter_control__DOT__filter_0__DOT__tidx;
    CData/*0:0*/ filter_control__DOT__filter_0__DOT__d_ce;
    CData/*0:0*/ filter_control__DOT__filter_0__DOT__p_ce;
    CData/*0:0*/ filter_control__DOT__filter_0__DOT__m_ce;
    CData/*2:0*/ filter_control__DOT__filter_0__DOT__pre_acc_ce;
    CData/*6:0*/ filter_control__DOT__filter_0__DOT__genblk2__DOT__tapwidx;
    CData/*0:0*/ filter_control__DOT__i2s_m0__DOT__wsd;
    CData/*0:0*/ filter_control__DOT__i2s_m0__DOT__wsdd;
    CData/*4:0*/ filter_control__DOT__i2s_m0__DOT__counter;
    SData/*15:0*/ filter_control__DOT__state;
    SData/*15:0*/ filter_control__DOT__next_state;
    SData/*15:0*/ filter_control__DOT__i_tap;
    SData/*15:0*/ filter_control__DOT__left_channel;
    SData/*15:0*/ filter_control__DOT__right_channel;
    SData/*15:0*/ filter_control__DOT__filter_0__DOT__tap;
    SData/*15:0*/ filter_control__DOT__filter_0__DOT__data;
    SData/*15:0*/ filter_control__DOT__i2s_m0__DOT__shift;
    IData/*31:0*/ filter_control__DOT__filter_0__DOT__product;
    QData/*38:0*/ filter_control__DOT__filter_0__DOT__r_acc;
    SData/*15:0*/ filter_control__DOT__filter_0__DOT__tapmem[128];
    SData/*15:0*/ filter_control__DOT__filter_0__DOT__dmem[128];
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vdly__filter_control__DOT__i_ce_flag_1;
    CData/*0:0*/ __Vclklast__TOP__i2s_sck;
    CData/*0:0*/ __Vclklast__TOP__i_clk;
    IData/*31:0*/ __Vm_traceActivity;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vfilter_control__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vfilter_control);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vfilter_control(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vfilter_control();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vfilter_control__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vfilter_control__Syms* symsp, bool first);
  private:
    static QData _change_request(Vfilter_control__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__8(Vfilter_control__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vfilter_control__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Vfilter_control__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vfilter_control__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__1(Vfilter_control__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__10(Vfilter_control__Syms* __restrict vlSymsp);
    static void _sequent__TOP__11(Vfilter_control__Syms* __restrict vlSymsp);
    static void _sequent__TOP__2(Vfilter_control__Syms* __restrict vlSymsp);
    static void _sequent__TOP__3(Vfilter_control__Syms* __restrict vlSymsp);
    static void _sequent__TOP__4(Vfilter_control__Syms* __restrict vlSymsp);
    static void _sequent__TOP__5(Vfilter_control__Syms* __restrict vlSymsp);
    static void _sequent__TOP__7(Vfilter_control__Syms* __restrict vlSymsp);
    static void _sequent__TOP__9(Vfilter_control__Syms* __restrict vlSymsp);
    static void _settle__TOP__6(Vfilter_control__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceChgThis(Vfilter_control__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__10(Vfilter_control__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__11(Vfilter_control__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(Vfilter_control__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(Vfilter_control__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(Vfilter_control__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__5(Vfilter_control__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__6(Vfilter_control__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__7(Vfilter_control__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__8(Vfilter_control__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__9(Vfilter_control__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(Vfilter_control__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__1(Vfilter_control__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis(Vfilter_control__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__1(Vfilter_control__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
