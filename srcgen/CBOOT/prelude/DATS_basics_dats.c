/*
**
** The C code is generated by ATS/Anairiats
** The compilation time is: 2018-3-12: 21h:16m
**
*/

/* include some .h files */
#ifndef _ATS_HEADER_NONE
#include "ats_config.h"
#include "ats_basics.h"
#include "ats_types.h"
#include "ats_exception.h"
#include "ats_memory.h"
#endif /* _ATS_HEADER_NONE */

/* include some .cats files */
#ifndef _ATS_PRELUDE_NONE
#include "prelude/CATS/basics.cats"
#include "prelude/CATS/integer.cats"
#include "prelude/CATS/sizetype.cats"
#include "prelude/CATS/integer_ptr.cats"
#include "prelude/CATS/integer_fixed.cats"
#include "prelude/CATS/pointer.cats"
#include "prelude/CATS/bool.cats"
#include "prelude/CATS/char.cats"
#include "prelude/CATS/byte.cats"
#include "prelude/CATS/float.cats"
#include "prelude/CATS/string.cats"
#include "prelude/CATS/reference.cats"
#include "prelude/CATS/lazy.cats"
#include "prelude/CATS/lazy_vt.cats"
#include "prelude/CATS/printf.cats"
#include "prelude/CATS/list.cats"
#include "prelude/CATS/option.cats"
#include "prelude/CATS/array.cats"
#include "prelude/CATS/matrix.cats"
#endif /* _ATS_PRELUDE_NONE */
/* prologues from statically loaded files */
/* external codes at top */

//
// HX: for the purpose of debugging
//
ats_int_type
ats_crash_int ()
{
  volatile int *p = 0 ; return *(p) ;
} // end of [ats_crash_int]
//


/*
** HX: various functions for exits
*/

ats_void_type // external
ats_exit
  (ats_int_type status) { exit(status) ; return ; }
// end of [ats_exit]

ats_void_type // external
ats_exit_errmsg (
  ats_int_type status
, ats_ptr_type errmsg
) {
  fprintf(stderr, "%s", (char*)errmsg) ; exit(status) ;
  return ; // deadcode
} /* end of [ats_exit_errmsg] */



/*
** HX: various functions for asserts
*/

#ifndef EXIT_SUCCESS
#define	EXIT_SUCCESS 0
#endif
#ifndef EXIT_FAILURE
#define EXIT_FAILURE 1
#endif

ats_void_type
atspre_assertfalse () {
//
extern void ats_crash() ;
//
  fprintf(stderr, "[assertfalse] executed\n") ;
  ats_crash() ; // HX: this is likely to cause a core dump!
  return ;
} // end of [atspre_asertfasle]

ats_void_type
atspre_assert (
  ats_bool_type assertion
) {
  if (!assertion) {
    fprintf (stderr, "exit(ATS): [assert] failed\n") ;
    exit(EXIT_FAILURE) ;
  } // end of [if]
  return ;
} /* end of [atspre_assert] */

ats_void_type
atspre_assert_errmsg (
  ats_bool_type assertion, ats_ptr_type errmsg
) {
  if (!assertion) {
    fprintf (stderr, "exit(ATS): [assert] failed: %s\n", (char*)errmsg) ;
    exit(EXIT_FAILURE) ;
  } // end of [if]
  return ;
} /* end of [atspre_assert_errmsg] */


/* type definitions */
/* external typedefs */
/* external dynamic constructor declarations */
/* external dynamic constant declarations */
ATSextern_fun(ats_int_type, ats_crash_int) () ;

/* external dynamic terminating constant declarations */
#ifdef _ATS_PROOFCHECK
extern
ats_void_type ATS_2d0_2e2_2e12_2prelude_2basics_dyn_2esats__false_elim_prfck () ;
extern
ats_void_type ATS_2d0_2e2_2e12_2prelude_2basics_dyn_2esats__verify_constraint_prfck () ;
extern
ats_void_type ATS_2d0_2e2_2e12_2prelude_2basics_dyn_2esats__file_mode_lte_r_r_prfck () ;
extern
ats_void_type ATS_2d0_2e2_2e12_2prelude_2basics_dyn_2esats__file_mode_lte_w_w_prfck () ;
extern
ats_void_type ATS_2d0_2e2_2e12_2prelude_2basics_dyn_2esats__file_mode_lte_rw_rw_prfck () ;
extern
ats_void_type ATS_2d0_2e2_2e12_2prelude_2basics_dyn_2esats__option_v_unsome_prfck () ;
extern
ats_void_type ATS_2d0_2e2_2e12_2prelude_2basics_dyn_2esats__option_v_unnone_prfck () ;
extern
ats_void_type ATS_2d0_2e2_2e12_2prelude_2basics_dyn_2esats__unit_v_elim_prfck () ;
#endif /* _ATS_PROOFCHECK */

/* assuming abstract types */
/* sum constructor declarations */
/* exn constructor declarations */
/* global dynamic (non-functional) constant declarations */
/* internal function declarations */

/* partial value template declarations */
/* static temporary variable declarations */
/* external value variable declarations */

/* function implementations */

#ifdef _ATS_PROOFCHECK
/*
// /home/hwxi/Research/ATS-Anairiats/prelude/DATS/basics.dats: 1553(line=40, offs=1) -- 1599(line=41, offs=37)
*/
ATSglobaldec()
ats_void_type
ATS_2d0_2e2_2e12_2prelude_2basics_dyn_2esats__false_elim_prfck () {
/* local vardec */
// ATSlocal_void (tmp0) ;

ats_proofcheck_beg_mac(ATS_2d0_2e2_2e12_2prelude_2basics_dyn_2esats__false_elim) ;
ats_proofcheck_end_mac(ATS_2d0_2e2_2e12_2prelude_2basics_dyn_2esats__false_elim) ;
return /* (tmp0) */ ;
} /* end of [ATS_2d0_2e2_2e12_2prelude_2basics_dyn_2esats__false_elim_prfck] */
#endif /* _ATS_PROOFCHECK */

#ifdef _ATS_PROOFCHECK
/*
// /home/hwxi/Research/ATS-Anairiats/prelude/DATS/basics.dats: 1758(line=48, offs=1) -- 1793(line=48, offs=36)
*/
ATSglobaldec()
ats_void_type
ATS_2d0_2e2_2e12_2prelude_2basics_dyn_2esats__verify_constraint_prfck () {
/* local vardec */
// ATSlocal_void (tmp1) ;

ats_proofcheck_beg_mac(ATS_2d0_2e2_2e12_2prelude_2basics_dyn_2esats__verify_constraint) ;
ats_proofcheck_end_mac(ATS_2d0_2e2_2e12_2prelude_2basics_dyn_2esats__verify_constraint) ;
return /* (tmp1) */ ;
} /* end of [ATS_2d0_2e2_2e12_2prelude_2basics_dyn_2esats__verify_constraint_prfck] */
#endif /* _ATS_PROOFCHECK */

#ifdef _ATS_PROOFCHECK
/*
// /home/hwxi/Research/ATS-Anairiats/prelude/DATS/basics.dats: 1921(line=56, offs=1) -- 1976(line=56, offs=56)
*/
ATSglobaldec()
ats_void_type
ATS_2d0_2e2_2e12_2prelude_2basics_dyn_2esats__file_mode_lte_r_r_prfck () {
/* local vardec */
// ATSlocal_void (tmp2) ;

ats_proofcheck_beg_mac(ATS_2d0_2e2_2e12_2prelude_2basics_dyn_2esats__file_mode_lte_r_r) ;
ats_proofcheck_end_mac(ATS_2d0_2e2_2e12_2prelude_2basics_dyn_2esats__file_mode_lte_r_r) ;
return /* (tmp2) */ ;
} /* end of [ATS_2d0_2e2_2e12_2prelude_2basics_dyn_2esats__file_mode_lte_r_r_prfck] */
#endif /* _ATS_PROOFCHECK */

#ifdef _ATS_PROOFCHECK
/*
// /home/hwxi/Research/ATS-Anairiats/prelude/DATS/basics.dats: 1977(line=57, offs=1) -- 2032(line=57, offs=56)
*/
ATSglobaldec()
ats_void_type
ATS_2d0_2e2_2e12_2prelude_2basics_dyn_2esats__file_mode_lte_w_w_prfck () {
/* local vardec */
// ATSlocal_void (tmp3) ;

ats_proofcheck_beg_mac(ATS_2d0_2e2_2e12_2prelude_2basics_dyn_2esats__file_mode_lte_w_w) ;
ats_proofcheck_end_mac(ATS_2d0_2e2_2e12_2prelude_2basics_dyn_2esats__file_mode_lte_w_w) ;
return /* (tmp3) */ ;
} /* end of [ATS_2d0_2e2_2e12_2prelude_2basics_dyn_2esats__file_mode_lte_w_w_prfck] */
#endif /* _ATS_PROOFCHECK */

#ifdef _ATS_PROOFCHECK
/*
// /home/hwxi/Research/ATS-Anairiats/prelude/DATS/basics.dats: 2033(line=58, offs=1) -- 2091(line=58, offs=59)
*/
ATSglobaldec()
ats_void_type
ATS_2d0_2e2_2e12_2prelude_2basics_dyn_2esats__file_mode_lte_rw_rw_prfck () {
/* local vardec */
// ATSlocal_void (tmp4) ;

ats_proofcheck_beg_mac(ATS_2d0_2e2_2e12_2prelude_2basics_dyn_2esats__file_mode_lte_rw_rw) ;
ats_proofcheck_end_mac(ATS_2d0_2e2_2e12_2prelude_2basics_dyn_2esats__file_mode_lte_rw_rw) ;
return /* (tmp4) */ ;
} /* end of [ATS_2d0_2e2_2e12_2prelude_2basics_dyn_2esats__file_mode_lte_rw_rw_prfck] */
#endif /* _ATS_PROOFCHECK */

#ifdef _ATS_PROOFCHECK
/*
// /home/hwxi/Research/ATS-Anairiats/prelude/DATS/basics.dats: 2116(line=62, offs=1) -- 2201(line=63, offs=50)
*/
ATSglobaldec()
ats_void_type
ATS_2d0_2e2_2e12_2prelude_2basics_dyn_2esats__option_v_unnone_prfck () {
/* local vardec */
// ATSlocal_void (tmp5) ;

ats_proofcheck_beg_mac(ATS_2d0_2e2_2e12_2prelude_2basics_dyn_2esats__option_v_unnone) ;
ats_proofcheck_end_mac(ATS_2d0_2e2_2e12_2prelude_2basics_dyn_2esats__option_v_unnone) ;
return /* (tmp5) */ ;
} /* end of [ATS_2d0_2e2_2e12_2prelude_2basics_dyn_2esats__option_v_unnone_prfck] */
#endif /* _ATS_PROOFCHECK */

#ifdef _ATS_PROOFCHECK
/*
// /home/hwxi/Research/ATS-Anairiats/prelude/DATS/basics.dats: 2202(line=64, offs=1) -- 2277(line=64, offs=76)
*/
ATSglobaldec()
ats_void_type
ATS_2d0_2e2_2e12_2prelude_2basics_dyn_2esats__option_v_unsome_prfck () {
/* local vardec */
// ATSlocal_void (tmp6) ;

ats_proofcheck_beg_mac(ATS_2d0_2e2_2e12_2prelude_2basics_dyn_2esats__option_v_unsome) ;
ats_proofcheck_end_mac(ATS_2d0_2e2_2e12_2prelude_2basics_dyn_2esats__option_v_unsome) ;
return /* (tmp6) */ ;
} /* end of [ATS_2d0_2e2_2e12_2prelude_2basics_dyn_2esats__option_v_unsome_prfck] */
#endif /* _ATS_PROOFCHECK */

#ifdef _ATS_PROOFCHECK
/*
// /home/hwxi/Research/ATS-Anairiats/prelude/DATS/basics.dats: 2300(line=68, offs=1) -- 2372(line=68, offs=73)
*/
ATSglobaldec()
ats_void_type
ATS_2d0_2e2_2e12_2prelude_2basics_dyn_2esats__unit_v_elim_prfck () {
/* local vardec */
// ATSlocal_void (tmp7) ;

ats_proofcheck_beg_mac(ATS_2d0_2e2_2e12_2prelude_2basics_dyn_2esats__unit_v_elim) ;
ats_proofcheck_end_mac(ATS_2d0_2e2_2e12_2prelude_2basics_dyn_2esats__unit_v_elim) ;
return /* (tmp7) */ ;
} /* end of [ATS_2d0_2e2_2e12_2prelude_2basics_dyn_2esats__unit_v_elim_prfck] */
#endif /* _ATS_PROOFCHECK */

/*
// /home/hwxi/Research/ATS-Anairiats/prelude/DATS/basics.dats: 2578(line=85, offs=7) -- 2734(line=93, offs=2)
*/
ATSglobaldec()
ats_void_type
ats_crash () {
/* local vardec */
// ATSlocal_void (tmp8) ;
ATSlocal (ats_int_type, tmp9) ;

__ats_lab_ats_crash:
tmp9 = ats_crash_int () ;
/* tmp8 = */ ats_exit (tmp9) ;
return /* (tmp8) */ ;
} /* end of [ats_crash] */

/* static load function */

ats_void_type
ATS_2d0_2e2_2e12_2prelude_2DATS_2basics_2edats__staload () {
static int ATS_2d0_2e2_2e12_2prelude_2DATS_2basics_2edats__staload_flag = 0 ;
if (ATS_2d0_2e2_2e12_2prelude_2DATS_2basics_2edats__staload_flag) return ;
ATS_2d0_2e2_2e12_2prelude_2DATS_2basics_2edats__staload_flag = 1 ;

return ;
} /* staload function */

/* dynamic load function */

// dynload flag declaration
// extern ats_int_type ATS_2d0_2e2_2e12_2prelude_2DATS_2basics_2edats__dynload_flag ;

ats_void_type
ATS_2d0_2e2_2e12_2prelude_2DATS_2basics_2edats__dynload () {
// ATS_2d0_2e2_2e12_2prelude_2DATS_2basics_2edats__dynload_flag = 1 ;
ATS_2d0_2e2_2e12_2prelude_2DATS_2basics_2edats__staload () ;

#ifdef _ATS_PROOFCHECK
ATS_2d0_2e2_2e12_2prelude_2basics_dyn_2esats__false_elim_prfck () ;
ATS_2d0_2e2_2e12_2prelude_2basics_dyn_2esats__verify_constraint_prfck () ;
ATS_2d0_2e2_2e12_2prelude_2basics_dyn_2esats__file_mode_lte_r_r_prfck () ;
ATS_2d0_2e2_2e12_2prelude_2basics_dyn_2esats__file_mode_lte_w_w_prfck () ;
ATS_2d0_2e2_2e12_2prelude_2basics_dyn_2esats__file_mode_lte_rw_rw_prfck () ;
ATS_2d0_2e2_2e12_2prelude_2basics_dyn_2esats__option_v_unsome_prfck () ;
ATS_2d0_2e2_2e12_2prelude_2basics_dyn_2esats__option_v_unnone_prfck () ;
ATS_2d0_2e2_2e12_2prelude_2basics_dyn_2esats__unit_v_elim_prfck () ;
#endif /* _ATS_PROOFCHECK */

/* marking static variables for GC */

/* marking external values for GC */

/* code for dynamic loading */
return ;
} /* end of [dynload function] */

/* external codes at mid */
/* external codes at bot */

/* ****** ****** */

/* end of [DATS_basics_dats.c] */