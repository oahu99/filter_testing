// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VGENERICFIR_H_
#define _VGENERICFIR_H_  // guard

#include "verilated_heavy.h"

class Vgenericfir__Syms;
class Vgenericfir_VerilatedVcd;


//----------

VL_MODULE(Vgenericfir) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(i_clk,0,0);
    VL_IN8(i_reset,0,0);
    VL_IN8(i_tap_wr,0,0);
    VL_IN8(i_ce,0,0);
    VL_IN16(i_tap,15,0);
    VL_IN16(i_sample,15,0);
    VL_OUT64(o_result,38,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    SData/*15:0*/ genericfir__DOT__FILTER__BRA__0__KET____DOT__tapk__DOT__delayed_sample;
    SData/*15:0*/ genericfir__DOT__FILTER__BRA__1__KET____DOT__tapk__DOT__delayed_sample;
    SData/*15:0*/ genericfir__DOT__FILTER__BRA__2__KET____DOT__tapk__DOT__delayed_sample;
    SData/*15:0*/ genericfir__DOT__FILTER__BRA__3__KET____DOT__tapk__DOT__delayed_sample;
    SData/*15:0*/ genericfir__DOT__FILTER__BRA__4__KET____DOT__tapk__DOT__delayed_sample;
    SData/*15:0*/ genericfir__DOT__FILTER__BRA__5__KET____DOT__tapk__DOT__delayed_sample;
    SData/*15:0*/ genericfir__DOT__FILTER__BRA__6__KET____DOT__tapk__DOT__delayed_sample;
    SData/*15:0*/ genericfir__DOT__FILTER__BRA__7__KET____DOT__tapk__DOT__delayed_sample;
    SData/*15:0*/ genericfir__DOT__FILTER__BRA__8__KET____DOT__tapk__DOT__delayed_sample;
    SData/*15:0*/ genericfir__DOT__FILTER__BRA__9__KET____DOT__tapk__DOT__delayed_sample;
    SData/*15:0*/ genericfir__DOT__FILTER__BRA__10__KET____DOT__tapk__DOT__delayed_sample;
    SData/*15:0*/ genericfir__DOT__FILTER__BRA__11__KET____DOT__tapk__DOT__delayed_sample;
    SData/*15:0*/ genericfir__DOT__FILTER__BRA__12__KET____DOT__tapk__DOT__delayed_sample;
    SData/*15:0*/ genericfir__DOT__FILTER__BRA__13__KET____DOT__tapk__DOT__delayed_sample;
    SData/*15:0*/ genericfir__DOT__FILTER__BRA__14__KET____DOT__tapk__DOT__delayed_sample;
    SData/*15:0*/ genericfir__DOT__FILTER__BRA__15__KET____DOT__tapk__DOT__delayed_sample;
    IData/*31:0*/ genericfir__DOT__FILTER__BRA__0__KET____DOT__tapk__DOT__product;
    IData/*31:0*/ genericfir__DOT__FILTER__BRA__1__KET____DOT__tapk__DOT__product;
    IData/*31:0*/ genericfir__DOT__FILTER__BRA__2__KET____DOT__tapk__DOT__product;
    IData/*31:0*/ genericfir__DOT__FILTER__BRA__3__KET____DOT__tapk__DOT__product;
    IData/*31:0*/ genericfir__DOT__FILTER__BRA__4__KET____DOT__tapk__DOT__product;
    IData/*31:0*/ genericfir__DOT__FILTER__BRA__5__KET____DOT__tapk__DOT__product;
    IData/*31:0*/ genericfir__DOT__FILTER__BRA__6__KET____DOT__tapk__DOT__product;
    IData/*31:0*/ genericfir__DOT__FILTER__BRA__7__KET____DOT__tapk__DOT__product;
    IData/*31:0*/ genericfir__DOT__FILTER__BRA__8__KET____DOT__tapk__DOT__product;
    IData/*31:0*/ genericfir__DOT__FILTER__BRA__9__KET____DOT__tapk__DOT__product;
    IData/*31:0*/ genericfir__DOT__FILTER__BRA__10__KET____DOT__tapk__DOT__product;
    IData/*31:0*/ genericfir__DOT__FILTER__BRA__11__KET____DOT__tapk__DOT__product;
    IData/*31:0*/ genericfir__DOT__FILTER__BRA__12__KET____DOT__tapk__DOT__product;
    IData/*31:0*/ genericfir__DOT__FILTER__BRA__13__KET____DOT__tapk__DOT__product;
    IData/*31:0*/ genericfir__DOT__FILTER__BRA__14__KET____DOT__tapk__DOT__product;
    IData/*31:0*/ genericfir__DOT__FILTER__BRA__15__KET____DOT__tapk__DOT__product;
    SData/*15:0*/ genericfir__DOT__tap[17];
    SData/*15:0*/ genericfir__DOT__tapout[17];
    SData/*15:0*/ genericfir__DOT__sample[17];
    QData/*38:0*/ genericfir__DOT__result[17];
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__i_clk;
    SData/*15:0*/ genericfir__DOT____Vcellout__FILTER__BRA__0__KET____DOT__tapk____pinNumber8;
    SData/*15:0*/ genericfir__DOT____Vcellout__FILTER__BRA__1__KET____DOT__tapk____pinNumber8;
    SData/*15:0*/ genericfir__DOT____Vcellout__FILTER__BRA__2__KET____DOT__tapk____pinNumber8;
    SData/*15:0*/ genericfir__DOT____Vcellout__FILTER__BRA__3__KET____DOT__tapk____pinNumber8;
    SData/*15:0*/ genericfir__DOT____Vcellout__FILTER__BRA__4__KET____DOT__tapk____pinNumber8;
    SData/*15:0*/ genericfir__DOT____Vcellout__FILTER__BRA__5__KET____DOT__tapk____pinNumber8;
    SData/*15:0*/ genericfir__DOT____Vcellout__FILTER__BRA__6__KET____DOT__tapk____pinNumber8;
    SData/*15:0*/ genericfir__DOT____Vcellout__FILTER__BRA__7__KET____DOT__tapk____pinNumber8;
    SData/*15:0*/ genericfir__DOT____Vcellout__FILTER__BRA__8__KET____DOT__tapk____pinNumber8;
    SData/*15:0*/ genericfir__DOT____Vcellout__FILTER__BRA__9__KET____DOT__tapk____pinNumber8;
    SData/*15:0*/ genericfir__DOT____Vcellout__FILTER__BRA__10__KET____DOT__tapk____pinNumber8;
    SData/*15:0*/ genericfir__DOT____Vcellout__FILTER__BRA__11__KET____DOT__tapk____pinNumber8;
    SData/*15:0*/ genericfir__DOT____Vcellout__FILTER__BRA__12__KET____DOT__tapk____pinNumber8;
    SData/*15:0*/ genericfir__DOT____Vcellout__FILTER__BRA__13__KET____DOT__tapk____pinNumber8;
    SData/*15:0*/ genericfir__DOT____Vcellout__FILTER__BRA__14__KET____DOT__tapk____pinNumber8;
    SData/*15:0*/ genericfir__DOT____Vcellout__FILTER__BRA__15__KET____DOT__tapk____pinNumber8;
    IData/*31:0*/ __Vm_traceActivity;
    QData/*38:0*/ genericfir__DOT____Vcellout__FILTER__BRA__0__KET____DOT__tapk____pinNumber10;
    QData/*38:0*/ genericfir__DOT____Vcellout__FILTER__BRA__1__KET____DOT__tapk____pinNumber10;
    QData/*38:0*/ genericfir__DOT____Vcellout__FILTER__BRA__2__KET____DOT__tapk____pinNumber10;
    QData/*38:0*/ genericfir__DOT____Vcellout__FILTER__BRA__3__KET____DOT__tapk____pinNumber10;
    QData/*38:0*/ genericfir__DOT____Vcellout__FILTER__BRA__4__KET____DOT__tapk____pinNumber10;
    QData/*38:0*/ genericfir__DOT____Vcellout__FILTER__BRA__5__KET____DOT__tapk____pinNumber10;
    QData/*38:0*/ genericfir__DOT____Vcellout__FILTER__BRA__6__KET____DOT__tapk____pinNumber10;
    QData/*38:0*/ genericfir__DOT____Vcellout__FILTER__BRA__7__KET____DOT__tapk____pinNumber10;
    QData/*38:0*/ genericfir__DOT____Vcellout__FILTER__BRA__8__KET____DOT__tapk____pinNumber10;
    QData/*38:0*/ genericfir__DOT____Vcellout__FILTER__BRA__9__KET____DOT__tapk____pinNumber10;
    QData/*38:0*/ genericfir__DOT____Vcellout__FILTER__BRA__10__KET____DOT__tapk____pinNumber10;
    QData/*38:0*/ genericfir__DOT____Vcellout__FILTER__BRA__11__KET____DOT__tapk____pinNumber10;
    QData/*38:0*/ genericfir__DOT____Vcellout__FILTER__BRA__12__KET____DOT__tapk____pinNumber10;
    QData/*38:0*/ genericfir__DOT____Vcellout__FILTER__BRA__13__KET____DOT__tapk____pinNumber10;
    QData/*38:0*/ genericfir__DOT____Vcellout__FILTER__BRA__14__KET____DOT__tapk____pinNumber10;
    QData/*38:0*/ genericfir__DOT____Vcellout__FILTER__BRA__15__KET____DOT__tapk____pinNumber10;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vgenericfir__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vgenericfir);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vgenericfir(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vgenericfir();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vgenericfir__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vgenericfir__Syms* symsp, bool first);
  private:
    static QData _change_request(Vgenericfir__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__4(Vgenericfir__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vgenericfir__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Vgenericfir__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vgenericfir__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__1(Vgenericfir__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__2(Vgenericfir__Syms* __restrict vlSymsp);
    static void _settle__TOP__3(Vgenericfir__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceChgThis(Vgenericfir__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(Vgenericfir__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(Vgenericfir__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(Vgenericfir__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__5(Vgenericfir__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__6(Vgenericfir__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(Vgenericfir__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__1(Vgenericfir__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis(Vgenericfir__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__1(Vgenericfir__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
