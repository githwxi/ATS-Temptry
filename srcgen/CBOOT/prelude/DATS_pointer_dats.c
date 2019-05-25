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
ATSextern_fun(ats_ptr_type, atspre_ptr_alloc_tsz) (ats_size_type) ;
ATSextern_fun(ats_void_type, atspre_ptr_zero_tsz) (ats_ref_type, ats_size_type) ;

/* external dynamic terminating constant declarations */
#ifdef _ATS_PROOFCHECK
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
// /home/xaos/rpmbuild/etc/ats-lang-anairiats-0.2.12/prelude/DATS/pointer.dats: 1720(line=52, offs=1) -- 1771(line=52, offs=52)
*/
ATSglobaldec()
ats_void_type
ATS_2d0_2e2_2e12_2prelude_2SATS_2pointer_2esats__ptr_is_gtez_prfck () {
/* local vardec */
// ATSlocal_void (tmp0) ;

ats_proofcheck_beg_mac(ATS_2d0_2e2_2e12_2prelude_2SATS_2pointer_2esats__ptr_is_gtez) ;
ats_proofcheck_end_mac(ATS_2d0_2e2_2e12_2prelude_2SATS_2pointer_2esats__ptr_is_gtez) ;
return /* (tmp0) */ ;
} /* end of [ATS_2d0_2e2_2e12_2prelude_2SATS_2pointer_2esats__ptr_is_gtez_prfck] */
#endif /* _ATS_PROOFCHECK */

/* static load function */

// extern ats_void_type ATS_2d0_2e2_2e12_2prelude_2SATS_2pointer_2esats__staload (void) ;

ats_void_type
ATS_2d0_2e2_2e12_2prelude_2DATS_2pointer_2edats__staload () {
static int ATS_2d0_2e2_2e12_2prelude_2DATS_2pointer_2edats__staload_flag = 0 ;
if (ATS_2d0_2e2_2e12_2prelude_2DATS_2pointer_2edats__staload_flag) return ;
ATS_2d0_2e2_2e12_2prelude_2DATS_2pointer_2edats__staload_flag = 1 ;

// ATS_2d0_2e2_2e12_2prelude_2SATS_2pointer_2esats__staload () ;

return ;
} /* staload function */

/* dynamic load function */

// dynload flag declaration
// extern ats_int_type ATS_2d0_2e2_2e12_2prelude_2DATS_2pointer_2edats__dynload_flag ;

ats_void_type
ATS_2d0_2e2_2e12_2prelude_2DATS_2pointer_2edats__dynload () {
// ATS_2d0_2e2_2e12_2prelude_2DATS_2pointer_2edats__dynload_flag = 1 ;
ATS_2d0_2e2_2e12_2prelude_2DATS_2pointer_2edats__staload () ;

#ifdef _ATS_PROOFCHECK
#endif /* _ATS_PROOFCHECK */

/* marking static variables for GC */

/* marking external values for GC */

/* code for dynamic loading */
return ;
} /* end of [dynload function] */

/* external codes at mid */
/* external codes at bot */

/* ****** ****** */

/* end of [DATS_pointer_dats.c] */
