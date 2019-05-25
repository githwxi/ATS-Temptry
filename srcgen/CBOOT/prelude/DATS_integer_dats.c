/*
**
** The C code is generated by ATS/Anairiats
** The compilation time is: 2019-5-25:  5h: 5m
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
/* type definitions */
/* external typedefs */
/* external dynamic constructor declarations */
/* external dynamic constant declarations */
ATSextern_fun(ats_int_type, atspre_isub) (ats_int_type, ats_int_type) ;
ATSextern_fun(ats_int_type, atspre_imul2) (ats_int_type, ats_int_type) ;
ATSextern_fun(ats_int_type, atspre_ndiv2) (ats_int_type, ats_int_type) ;

/* external dynamic terminating constant declarations */
#ifdef _ATS_PROOFCHECK
extern
ats_void_type ATS_2d0_2e2_2e12_2prelude_2SATS_2arith_2esats__mul_isfun_prfck () ;
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

/* static load function */

// extern ats_void_type ATS_2d0_2e2_2e12_2prelude_2SATS_2integer_2esats__staload (void) ;

ats_void_type
ATS_2d0_2e2_2e12_2prelude_2DATS_2integer_2edats__staload () {
static int ATS_2d0_2e2_2e12_2prelude_2DATS_2integer_2edats__staload_flag = 0 ;
if (ATS_2d0_2e2_2e12_2prelude_2DATS_2integer_2edats__staload_flag) return ;
ATS_2d0_2e2_2e12_2prelude_2DATS_2integer_2edats__staload_flag = 1 ;

// ATS_2d0_2e2_2e12_2prelude_2SATS_2integer_2esats__staload () ;

return ;
} /* staload function */

/* dynamic load function */

// dynload flag declaration
// extern ats_int_type ATS_2d0_2e2_2e12_2prelude_2DATS_2integer_2edats__dynload_flag ;

ats_void_type
ATS_2d0_2e2_2e12_2prelude_2DATS_2integer_2edats__dynload () {
// ATS_2d0_2e2_2e12_2prelude_2DATS_2integer_2edats__dynload_flag = 1 ;
ATS_2d0_2e2_2e12_2prelude_2DATS_2integer_2edats__staload () ;

#ifdef _ATS_PROOFCHECK
ATS_2d0_2e2_2e12_2prelude_2SATS_2arith_2esats__mul_isfun_prfck () ;
#endif /* _ATS_PROOFCHECK */

/* marking static variables for GC */

/* marking external values for GC */

/* code for dynamic loading */
return ;
} /* end of [dynload function] */

/* external codes at mid */
/* external codes at bot */


// stringization

ats_ptr_type
atspre_tostrptr_llint
  (ats_llint_type i0) {
  ats_llint_type i, i1 ; int n ; char *res ;
//
  i1 = (i0 >= 0 ? i0 : -i0) ;
  for (i = i1, n = 0; i > 0; i = i / 10) n += 1 ;
  if (i0 < 0) n += 1 ; if (i0 == 0) n = 1;
  res = ATS_MALLOC(n+1) ; res = res + n ; *res = '\000' ;
  for (i = i1, n = 0; i > 0; i = i / 10) {
    *--res = ('0' + i % 10) ;
  } // end of [for]
  if (i0 < 0) *--res = '-' ; if (i0 == 0) *--res = '0' ;
//
  return res ;
} // end of [atspre_tostrptr_llint]

/* ****** ****** */

ats_ptr_type
atspre_tostrptr_ullint
  (ats_ullint_type i0) {
  ats_ullint_type i; int n ; char *res ;
//
  for (i = i0, n = 0; i > 0; i = i / 10) n += 1 ;
  if (i0 == 0) n = 1 ;
  res = ATS_MALLOC(n+1) ; res = res + n; *res = '\000' ;
  for (i = i0, n = 0; i > 0; i = i / 10) {
    *--res = ('0' + i % 10) ;
  } // end of [for]
  if (i0 == 0) *--res = '0' ;
//
  return res ;
} // end of [atspre_tostrptr_ullint]



/* ****** ****** */

/* end of [DATS_integer_dats.c] */
