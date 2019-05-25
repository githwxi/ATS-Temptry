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
ATSextern_fun(ats_bool_type, atspre_lt_int_int) (ats_int_type, ats_int_type) ;
ATSextern_fun(ats_bool_type, atspre_gt_int_int) (ats_int_type, ats_int_type) ;
ATSextern_fun(ats_int_type, atspre_iadd) (ats_int_type, ats_int_type) ;
ATSextern_fun(ats_int_type, atspre_isub) (ats_int_type, ats_int_type) ;
ATSextern_fun(ats_bool_type, atspre_ilte) (ats_int_type, ats_int_type) ;
ATSextern_fun(ats_bool_type, atspre_igte) (ats_int_type, ats_int_type) ;
ATSextern_fun(ats_int_type, atspre_imax) (ats_int_type, ats_int_type) ;
ATSextern_fun(ats_size_type, atspre_size_of_int1) (ats_int_type) ;
ATSextern_fun(ats_size_type, atspre_add_size_size) (ats_size_type, ats_size_type) ;

/* external dynamic terminating constant declarations */
#ifdef _ATS_PROOFCHECK
#endif /* _ATS_PROOFCHECK */

/* assuming abstract types */
int ATS_2d0_2e2_2e12_2libats_2SATS_2funmap_avltree_2esats__sasp__map_t0ype_t0ype_type = 0 ;

/* sum constructor declarations */
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2libats_2DATS_2funmap_avltree_2edats__B_0) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2libats_2DATS_2funmap_avltree_2edats__E_1) ;

/* exn constructor declarations */
/* global dynamic (non-functional) constant declarations */
/* internal function declarations */
/* partial value template declarations */
/* static temporary variable declarations */
/* external value variable declarations */

/* function implementations */

/* static load function */

// extern ats_void_type ATS_2d0_2e2_2e12_2libats_2SATS_2funmap_avltree_2esats__staload (void) ;

ats_void_type
ATS_2d0_2e2_2e12_2libats_2DATS_2funmap_avltree_2edats__staload () {
static int ATS_2d0_2e2_2e12_2libats_2DATS_2funmap_avltree_2edats__staload_flag = 0 ;
if (ATS_2d0_2e2_2e12_2libats_2DATS_2funmap_avltree_2edats__staload_flag) return ;
ATS_2d0_2e2_2e12_2libats_2DATS_2funmap_avltree_2edats__staload_flag = 1 ;

// ATS_2d0_2e2_2e12_2libats_2SATS_2funmap_avltree_2esats__staload () ;

// ATS_2d0_2e2_2e12_2libats_2DATS_2funmap_avltree_2edats__B_0.tag = 0 ;
ATS_2d0_2e2_2e12_2libats_2DATS_2funmap_avltree_2edats__E_1.tag = 1 ;
return ;
} /* staload function */

/* dynamic load function */

// dynload flag declaration
// extern ats_int_type ATS_2d0_2e2_2e12_2libats_2DATS_2funmap_avltree_2edats__dynload_flag ;

ats_void_type
ATS_2d0_2e2_2e12_2libats_2DATS_2funmap_avltree_2edats__dynload () {
// ATS_2d0_2e2_2e12_2libats_2DATS_2funmap_avltree_2edats__dynload_flag = 1 ;
ATS_2d0_2e2_2e12_2libats_2DATS_2funmap_avltree_2edats__staload () ;

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

/* end of [DATS_funmap_avltree_dats.c] */
