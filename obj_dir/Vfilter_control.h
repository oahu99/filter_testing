// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VFILTER_CONTROL_H_
#define _VFILTER_CONTROL_H_  // guard

#include "verilated_heavy.h"

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
    VL_IN8(i_reset,0,0);
    VL_IN8(i_ce,0,0);
    VL_IN8(i_start,0,0);
    VL_IN16(i_sample,15,0);
    VL_OUT16(o_result,15,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*0:0*/ filter_control__DOT__i_tap_wr;
    CData/*0:0*/ filter_control__DOT__i_ce_local;
    CData/*7:0*/ filter_control__DOT__fixed_0__DOT__exponent;
    CData/*0:0*/ filter_control__DOT__fixed_0__DOT__sign;
    CData/*0:0*/ filter_control__DOT__fir_0__DOT__o_ce;
    CData/*6:0*/ filter_control__DOT__fir_0__DOT__dwidx;
    CData/*6:0*/ filter_control__DOT__fir_0__DOT__didx;
    CData/*6:0*/ filter_control__DOT__fir_0__DOT__tidx;
    CData/*0:0*/ filter_control__DOT__fir_0__DOT__d_ce;
    CData/*0:0*/ filter_control__DOT__fir_0__DOT__p_ce;
    CData/*0:0*/ filter_control__DOT__fir_0__DOT__m_ce;
    CData/*2:0*/ filter_control__DOT__fir_0__DOT__pre_acc_ce;
    CData/*0:0*/ filter_control__DOT__fir_0__DOT__add_sub0__DOT__operation_sub_addBar;
    CData/*7:0*/ filter_control__DOT__fir_0__DOT__add_sub0__DOT__exponent_diff;
    CData/*0:0*/ filter_control__DOT__fir_0__DOT__add_sub0__DOT__perform;
    CData/*4:0*/ filter_control__DOT__fir_0__DOT__add_sub0__DOT__pe__DOT__shift;
    CData/*0:0*/ filter_control__DOT__fir_0__DOT__m_0__DOT__Exception;
    CData/*0:0*/ filter_control__DOT__fir_0__DOT__m_0__DOT__sign;
    CData/*0:0*/ filter_control__DOT__fir_0__DOT__m_0__DOT__zero;
    SData/*15:0*/ filter_control__DOT__i_tap;
    SData/*15:0*/ filter_control__DOT__fixed_0__DOT__unsigned_fixed;
    SData/*8:0*/ filter_control__DOT__fir_0__DOT__m_0__DOT__exponent;
    SData/*8:0*/ filter_control__DOT__fir_0__DOT__m_0__DOT__sum_exponent;
    SData/*15:0*/ filter_control__DOT__convert_0__DOT__unsigned_int;
    IData/*31:0*/ filter_control__DOT__impulse;
    IData/*31:0*/ filter_control__DOT__out;
    IData/*31:0*/ filter_control__DOT__o_float;
    IData/*22:0*/ filter_control__DOT__fixed_0__DOT__mantissa;
    IData/*31:0*/ filter_control__DOT__fir_0__DOT__tap;
    IData/*31:0*/ filter_control__DOT__fir_0__DOT__data;
    IData/*31:0*/ filter_control__DOT__fir_0__DOT__product;
    IData/*31:0*/ filter_control__DOT__fir_0__DOT__r_acc;
    IData/*31:0*/ filter_control__DOT__fir_0__DOT__addition_result;
    IData/*31:0*/ filter_control__DOT__fir_0__DOT__add_sub0__DOT__operand_a;
    IData/*31:0*/ filter_control__DOT__fir_0__DOT__add_sub0__DOT__operand_b;
    IData/*23:0*/ filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_a;
    IData/*23:0*/ filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_b_add_sub;
    IData/*24:0*/ filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_add;
    IData/*30:0*/ filter_control__DOT__fir_0__DOT__add_sub0__DOT__add_sum;
    IData/*24:0*/ filter_control__DOT__fir_0__DOT__add_sub0__DOT__significand_sub;
    IData/*30:0*/ filter_control__DOT__fir_0__DOT__add_sub0__DOT__sub_diff;
    IData/*24:0*/ filter_control__DOT__fir_0__DOT__add_sub0__DOT__subtraction_diff;
    IData/*22:0*/ filter_control__DOT__fir_0__DOT__m_0__DOT__product_mantissa;
    QData/*63:0*/ filter_control__DOT__counter;
    QData/*47:0*/ filter_control__DOT__fir_0__DOT__m_0__DOT__product;
    QData/*47:0*/ filter_control__DOT__fir_0__DOT__m_0__DOT__product_normalised;
    IData/*31:0*/ filter_control__DOT__fir_0__DOT__tapmem[128];
    IData/*31:0*/ filter_control__DOT__fir_0__DOT__dmem[128];
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__i_clk;
    CData/*7:0*/ __Vchglast__TOP__filter_control__DOT__fixed_0__DOT__exponent;
    IData/*22:0*/ __Vchglast__TOP__filter_control__DOT__fixed_0__DOT__mantissa;
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

//----------


#endif  // guard
