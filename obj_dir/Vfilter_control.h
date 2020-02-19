// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VFILTER_CONTROL_H_
#define _VFILTER_CONTROL_H_  // guard

#include "verilated.h"

class Vfilter_control__Syms;
class Vfilter_control_VerilatedVcd;


//----------

VL_MODULE(Vfilter_control) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(i_clk,0,0);
    VL_IN8(i_reset,0,0);
    VL_IN8(i_ce,0,0);
    VL_IN8(i_start,0,0);
    VL_IN16(i_sample,15,0);
    VL_OUT64(o_result,38,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*4:0*/ filter_control__DOT__state;
        CData/*4:0*/ filter_control__DOT__next_state;
        CData/*4:0*/ filter_control__DOT__i_idx;
        CData/*0:0*/ filter_control__DOT__i_tap_wr;
        SData/*15:0*/ filter_control__DOT__filter_0__DOT__FILTER__BRA__0__KET____DOT__unused_tap;
        SData/*15:0*/ filter_control__DOT__filter_0__DOT__FILTER__BRA__1__KET____DOT__unused_tap;
        SData/*15:0*/ filter_control__DOT__filter_0__DOT__FILTER__BRA__2__KET____DOT__unused_tap;
        SData/*15:0*/ filter_control__DOT__filter_0__DOT__FILTER__BRA__3__KET____DOT__unused_tap;
        SData/*15:0*/ filter_control__DOT__filter_0__DOT__FILTER__BRA__4__KET____DOT__unused_tap;
        SData/*15:0*/ filter_control__DOT__filter_0__DOT__FILTER__BRA__5__KET____DOT__unused_tap;
        SData/*15:0*/ filter_control__DOT__filter_0__DOT__FILTER__BRA__6__KET____DOT__unused_tap;
        SData/*15:0*/ filter_control__DOT__filter_0__DOT__FILTER__BRA__7__KET____DOT__unused_tap;
        SData/*15:0*/ filter_control__DOT__filter_0__DOT__FILTER__BRA__8__KET____DOT__unused_tap;
        SData/*15:0*/ filter_control__DOT__filter_0__DOT__FILTER__BRA__9__KET____DOT__unused_tap;
        SData/*15:0*/ filter_control__DOT__filter_0__DOT__FILTER__BRA__10__KET____DOT__unused_tap;
        SData/*15:0*/ filter_control__DOT__filter_0__DOT__FILTER__BRA__11__KET____DOT__unused_tap;
        SData/*15:0*/ filter_control__DOT__filter_0__DOT__FILTER__BRA__12__KET____DOT__unused_tap;
        SData/*15:0*/ filter_control__DOT__filter_0__DOT__FILTER__BRA__13__KET____DOT__unused_tap;
        SData/*15:0*/ filter_control__DOT__filter_0__DOT__FILTER__BRA__14__KET____DOT__unused_tap;
        SData/*15:0*/ filter_control__DOT__filter_0__DOT__FILTER__BRA__15__KET____DOT__unused_tap;
        SData/*15:0*/ filter_control__DOT__filter_0__DOT__FILTER__BRA__0__KET____DOT__tapk__DOT__delayed_sample;
        SData/*15:0*/ filter_control__DOT__filter_0__DOT__FILTER__BRA__0__KET____DOT__tapk__DOT__genblk2__DOT__tap;
        SData/*15:0*/ filter_control__DOT__filter_0__DOT__FILTER__BRA__1__KET____DOT__tapk__DOT__delayed_sample;
        SData/*15:0*/ filter_control__DOT__filter_0__DOT__FILTER__BRA__1__KET____DOT__tapk__DOT__genblk2__DOT__tap;
        SData/*15:0*/ filter_control__DOT__filter_0__DOT__FILTER__BRA__2__KET____DOT__tapk__DOT__delayed_sample;
        SData/*15:0*/ filter_control__DOT__filter_0__DOT__FILTER__BRA__2__KET____DOT__tapk__DOT__genblk2__DOT__tap;
        SData/*15:0*/ filter_control__DOT__filter_0__DOT__FILTER__BRA__3__KET____DOT__tapk__DOT__delayed_sample;
        SData/*15:0*/ filter_control__DOT__filter_0__DOT__FILTER__BRA__3__KET____DOT__tapk__DOT__genblk2__DOT__tap;
        SData/*15:0*/ filter_control__DOT__filter_0__DOT__FILTER__BRA__4__KET____DOT__tapk__DOT__delayed_sample;
        SData/*15:0*/ filter_control__DOT__filter_0__DOT__FILTER__BRA__4__KET____DOT__tapk__DOT__genblk2__DOT__tap;
        SData/*15:0*/ filter_control__DOT__filter_0__DOT__FILTER__BRA__5__KET____DOT__tapk__DOT__delayed_sample;
        SData/*15:0*/ filter_control__DOT__filter_0__DOT__FILTER__BRA__5__KET____DOT__tapk__DOT__genblk2__DOT__tap;
        SData/*15:0*/ filter_control__DOT__filter_0__DOT__FILTER__BRA__6__KET____DOT__tapk__DOT__delayed_sample;
        SData/*15:0*/ filter_control__DOT__filter_0__DOT__FILTER__BRA__6__KET____DOT__tapk__DOT__genblk2__DOT__tap;
        SData/*15:0*/ filter_control__DOT__filter_0__DOT__FILTER__BRA__7__KET____DOT__tapk__DOT__delayed_sample;
        SData/*15:0*/ filter_control__DOT__filter_0__DOT__FILTER__BRA__7__KET____DOT__tapk__DOT__genblk2__DOT__tap;
        SData/*15:0*/ filter_control__DOT__filter_0__DOT__FILTER__BRA__8__KET____DOT__tapk__DOT__delayed_sample;
        SData/*15:0*/ filter_control__DOT__filter_0__DOT__FILTER__BRA__8__KET____DOT__tapk__DOT__genblk2__DOT__tap;
        SData/*15:0*/ filter_control__DOT__filter_0__DOT__FILTER__BRA__9__KET____DOT__tapk__DOT__delayed_sample;
        SData/*15:0*/ filter_control__DOT__filter_0__DOT__FILTER__BRA__9__KET____DOT__tapk__DOT__genblk2__DOT__tap;
        SData/*15:0*/ filter_control__DOT__filter_0__DOT__FILTER__BRA__10__KET____DOT__tapk__DOT__delayed_sample;
        SData/*15:0*/ filter_control__DOT__filter_0__DOT__FILTER__BRA__10__KET____DOT__tapk__DOT__genblk2__DOT__tap;
        SData/*15:0*/ filter_control__DOT__filter_0__DOT__FILTER__BRA__11__KET____DOT__tapk__DOT__delayed_sample;
        SData/*15:0*/ filter_control__DOT__filter_0__DOT__FILTER__BRA__11__KET____DOT__tapk__DOT__genblk2__DOT__tap;
        SData/*15:0*/ filter_control__DOT__filter_0__DOT__FILTER__BRA__12__KET____DOT__tapk__DOT__delayed_sample;
        SData/*15:0*/ filter_control__DOT__filter_0__DOT__FILTER__BRA__12__KET____DOT__tapk__DOT__genblk2__DOT__tap;
        SData/*15:0*/ filter_control__DOT__filter_0__DOT__FILTER__BRA__13__KET____DOT__tapk__DOT__delayed_sample;
        SData/*15:0*/ filter_control__DOT__filter_0__DOT__FILTER__BRA__13__KET____DOT__tapk__DOT__genblk2__DOT__tap;
        SData/*15:0*/ filter_control__DOT__filter_0__DOT__FILTER__BRA__14__KET____DOT__tapk__DOT__delayed_sample;
        SData/*15:0*/ filter_control__DOT__filter_0__DOT__FILTER__BRA__14__KET____DOT__tapk__DOT__genblk2__DOT__tap;
        SData/*15:0*/ filter_control__DOT__filter_0__DOT__FILTER__BRA__15__KET____DOT__tapk__DOT__delayed_sample;
        SData/*15:0*/ filter_control__DOT__filter_0__DOT__FILTER__BRA__15__KET____DOT__tapk__DOT__genblk2__DOT__tap;
        IData/*31:0*/ filter_control__DOT__filter_0__DOT__FILTER__BRA__0__KET____DOT__tapk__DOT__product;
        IData/*31:0*/ filter_control__DOT__filter_0__DOT__FILTER__BRA__1__KET____DOT__tapk__DOT__product;
        IData/*31:0*/ filter_control__DOT__filter_0__DOT__FILTER__BRA__2__KET____DOT__tapk__DOT__product;
        IData/*31:0*/ filter_control__DOT__filter_0__DOT__FILTER__BRA__3__KET____DOT__tapk__DOT__product;
        IData/*31:0*/ filter_control__DOT__filter_0__DOT__FILTER__BRA__4__KET____DOT__tapk__DOT__product;
        IData/*31:0*/ filter_control__DOT__filter_0__DOT__FILTER__BRA__5__KET____DOT__tapk__DOT__product;
        IData/*31:0*/ filter_control__DOT__filter_0__DOT__FILTER__BRA__6__KET____DOT__tapk__DOT__product;
        IData/*31:0*/ filter_control__DOT__filter_0__DOT__FILTER__BRA__7__KET____DOT__tapk__DOT__product;
        IData/*31:0*/ filter_control__DOT__filter_0__DOT__FILTER__BRA__8__KET____DOT__tapk__DOT__product;
        IData/*31:0*/ filter_control__DOT__filter_0__DOT__FILTER__BRA__9__KET____DOT__tapk__DOT__product;
        IData/*31:0*/ filter_control__DOT__filter_0__DOT__FILTER__BRA__10__KET____DOT__tapk__DOT__product;
        IData/*31:0*/ filter_control__DOT__filter_0__DOT__FILTER__BRA__11__KET____DOT__tapk__DOT__product;
    };
    struct {
        IData/*31:0*/ filter_control__DOT__filter_0__DOT__FILTER__BRA__12__KET____DOT__tapk__DOT__product;
        IData/*31:0*/ filter_control__DOT__filter_0__DOT__FILTER__BRA__13__KET____DOT__tapk__DOT__product;
        IData/*31:0*/ filter_control__DOT__filter_0__DOT__FILTER__BRA__14__KET____DOT__tapk__DOT__product;
        IData/*31:0*/ filter_control__DOT__filter_0__DOT__FILTER__BRA__15__KET____DOT__tapk__DOT__product;
        SData/*15:0*/ filter_control__DOT__filter_0__DOT__tap[17];
        SData/*15:0*/ filter_control__DOT__filter_0__DOT__tapout[17];
        SData/*15:0*/ filter_control__DOT__filter_0__DOT__sample[17];
        QData/*38:0*/ filter_control__DOT__filter_0__DOT__result[17];
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*5:0*/ __Vtableidx1;
    CData/*0:0*/ __Vclklast__TOP__i_clk;
    SData/*15:0*/ filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__0__KET____DOT__tapk____pinNumber8;
    SData/*15:0*/ filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__1__KET____DOT__tapk____pinNumber8;
    SData/*15:0*/ filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__2__KET____DOT__tapk____pinNumber8;
    SData/*15:0*/ filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__3__KET____DOT__tapk____pinNumber8;
    SData/*15:0*/ filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__4__KET____DOT__tapk____pinNumber8;
    SData/*15:0*/ filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__5__KET____DOT__tapk____pinNumber8;
    SData/*15:0*/ filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__6__KET____DOT__tapk____pinNumber8;
    SData/*15:0*/ filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__7__KET____DOT__tapk____pinNumber8;
    SData/*15:0*/ filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__8__KET____DOT__tapk____pinNumber8;
    SData/*15:0*/ filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__9__KET____DOT__tapk____pinNumber8;
    SData/*15:0*/ filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__10__KET____DOT__tapk____pinNumber8;
    SData/*15:0*/ filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__11__KET____DOT__tapk____pinNumber8;
    SData/*15:0*/ filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__12__KET____DOT__tapk____pinNumber8;
    SData/*15:0*/ filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__13__KET____DOT__tapk____pinNumber8;
    SData/*15:0*/ filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__14__KET____DOT__tapk____pinNumber8;
    SData/*15:0*/ filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__15__KET____DOT__tapk____pinNumber8;
    IData/*31:0*/ __Vm_traceActivity;
    QData/*38:0*/ filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__0__KET____DOT__tapk____pinNumber10;
    QData/*38:0*/ filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__1__KET____DOT__tapk____pinNumber10;
    QData/*38:0*/ filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__2__KET____DOT__tapk____pinNumber10;
    QData/*38:0*/ filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__3__KET____DOT__tapk____pinNumber10;
    QData/*38:0*/ filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__4__KET____DOT__tapk____pinNumber10;
    QData/*38:0*/ filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__5__KET____DOT__tapk____pinNumber10;
    QData/*38:0*/ filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__6__KET____DOT__tapk____pinNumber10;
    QData/*38:0*/ filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__7__KET____DOT__tapk____pinNumber10;
    QData/*38:0*/ filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__8__KET____DOT__tapk____pinNumber10;
    QData/*38:0*/ filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__9__KET____DOT__tapk____pinNumber10;
    QData/*38:0*/ filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__10__KET____DOT__tapk____pinNumber10;
    QData/*38:0*/ filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__11__KET____DOT__tapk____pinNumber10;
    QData/*38:0*/ filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__12__KET____DOT__tapk____pinNumber10;
    QData/*38:0*/ filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__13__KET____DOT__tapk____pinNumber10;
    QData/*38:0*/ filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__14__KET____DOT__tapk____pinNumber10;
    QData/*38:0*/ filter_control__DOT__filter_0__DOT____Vcellout__FILTER__BRA__15__KET____DOT__tapk____pinNumber10;
    static CData/*4:0*/ __Vtable1_filter_control__DOT__i_idx[64];
    static CData/*4:0*/ __Vtable1_filter_control__DOT__next_state[64];
    static CData/*0:0*/ __Vtable1_filter_control__DOT__i_tap_wr[64];
    
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
    static void _combo__TOP__4(Vfilter_control__Syms* __restrict vlSymsp);
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
    static void _sequent__TOP__2(Vfilter_control__Syms* __restrict vlSymsp);
    static void _settle__TOP__3(Vfilter_control__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceChgThis(Vfilter_control__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(Vfilter_control__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(Vfilter_control__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(Vfilter_control__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__5(Vfilter_control__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__6(Vfilter_control__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(Vfilter_control__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__1(Vfilter_control__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis(Vfilter_control__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__1(Vfilter_control__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
