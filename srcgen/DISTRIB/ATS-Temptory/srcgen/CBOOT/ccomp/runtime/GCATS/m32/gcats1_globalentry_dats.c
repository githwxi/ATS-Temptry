/*
**
** The C code is generated by ATS/Anairiats
** The compilation time is: 2013-9-3:  2h:41m
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
#include "prelude/CATS/bool.cats"
#include "prelude/CATS/char.cats"
#include "prelude/CATS/byte.cats"
#include "prelude/CATS/float.cats"
#include "prelude/CATS/integer.cats"
#include "prelude/CATS/integer_ptr.cats"
#include "prelude/CATS/integer_fixed.cats"
#include "prelude/CATS/sizetype.cats"
#include "prelude/CATS/pointer.cats"
#include "prelude/CATS/reference.cats"
#include "prelude/CATS/string.cats"
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
typedef struct {
ats_ptr_type atslab_0 ;
ats_int_type atslab_1 ;
ats_ptr_type atslab_2 ;
} gcats1_globalentry_anairiats_sum_0 ;

/* external typedefs */
/* external dynamic constructor declarations */
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e10_2ccomp_2runtime_2GCATS1_2gcats1_globalentry_2edats__GLOBALENTRYLSTcons_0) ;
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e10_2ccomp_2runtime_2GCATS1_2gcats1_globalentry_2edats__GLOBALENTRYLSTnil_1) ;

/* external dynamic constant declarations */
ATSextern_fun(ats_int_type, atspre_isub) (ats_int_type, ats_int_type) ;
ATSextern_fun(ats_bool_type, atspre_igt) (ats_int_type, ats_int_type) ;
ATSextern_fun(ats_bool_type, atspre_igte) (ats_int_type, ats_int_type) ;
ATSextern_fun(ats_void_type, globalentry_insert) (ats_ptr_type, ats_int_type, ats_ptr_type, ats_int_type) ;
ATSextern_fun(ats_void_type, globalentrylst_insert) (ats_ref_type, ats_ptr_type, ats_int_type) ;
ATSextern_fun(ats_void_type, ATS_2d0_2e2_2e10_2ccomp_2runtime_2GCATS1_2gcats1_globalentry_2edats__globalentrylst_extend_insert) (ats_ref_type, ats_ptr_type, ats_int_type) ;
ATSextern_fun(ats_ptr_type, entrypage_alloc) () ;
ATSextern_fun(ats_void_type, gc_mark_entrypage) (ats_ptr_type, ats_int_type) ;
ATSextern_fun(ats_void_type, gc_mark_globalentrylst) (ats_ptr_type) ;

/* external dynamic terminating constant declarations */
#ifdef _ATS_PROOFCHECK
extern
ats_void_type ATS_2d0_2e2_2e10_2ccomp_2runtime_2GCATS1_2gcats1_globalentry_2edats____leak_prfck () ;
#endif /* _ATS_PROOFCHECK */

/* assuming abstract types */
/* sum constructor declarations */
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e10_2ccomp_2runtime_2GCATS1_2gcats1_globalentry_2edats__GLOBALENTRYLSTcons_0) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e10_2ccomp_2runtime_2GCATS1_2gcats1_globalentry_2edats__GLOBALENTRYLSTnil_1) ;

/* exn constructor declarations */
/* global dynamic (non-functional) constant declarations */
/* internal function declarations */

/* partial value template declarations */
/* static temporary variable declarations */
/* external value variable declarations */

/* function implementations */

/*
// /home/hwxi/research/Anairiats/ccomp/runtime/GCATS1/gcats1_globalentry.dats: 2733(line=83, offs=33) -- 3549(line=106, offs=4)
*/
ATSglobaldec()
ats_void_type
globalentrylst_insert (ats_ref_type arg0, ats_ptr_type arg1, ats_int_type arg2) {
/* local vardec */
// ATSlocal_void (tmp0) ;
ATSlocal (ats_bool_type, tmp1) ;
ATSlocal (ats_ptr_type, tmp2) ;
ATSlocal (ats_ptr_type, tmp3) ;
ATSlocal (ats_int_type, tmp4) ;
ATSlocal (ats_bool_type, tmp5) ;
// ATSlocal_void (tmp6) ;
ATSlocal (ats_int_type, tmp7) ;

__ats_lab_globalentrylst_insert:
#line 86 "gcats1_globalentry.dats"
do {
/* branch: __ats_lab_0 */
#line 87 "gcats1_globalentry.dats"
__ats_lab_0_0:
#line 87 "gcats1_globalentry.dats"
__ats_lab_0_1:
#line 87 "gcats1_globalentry.dats"
tmp1 = atspre_igt (arg2, 0) ;
#line 87 "gcats1_globalentry.dats"
if (!tmp1) { goto __ats_lab_3_1 ; }
#line 87 "gcats1_globalentry.dats"
do {
/* branch: __ats_lab_1 */
#line 88 "gcats1_globalentry.dats"
__ats_lab_1_0:
#line 88 "gcats1_globalentry.dats"
if (ats_ptrget_mac(ats_ptr_type, arg0) == (ats_sum_ptr_type)0) { goto __ats_lab_2_0 ; }
#line 88 "gcats1_globalentry.dats"
__ats_lab_1_1:
#line 88 "gcats1_globalentry.dats"
tmp2 = ats_caselptrlab_mac(gcats1_globalentry_anairiats_sum_0, ats_ptrget_mac(ats_ptr_type, arg0), atslab_0) ;
#line 88 "gcats1_globalentry.dats"
tmp3 = &ats_caselptrlab_mac(gcats1_globalentry_anairiats_sum_0, ats_ptrget_mac(ats_ptr_type, arg0), atslab_1) ;
#line 89 "gcats1_globalentry.dats"
tmp4 = ats_ptrget_mac(ats_int_type, tmp3) ;
#line 91 "gcats1_globalentry.dats"
tmp5 = atspre_igte (tmp4, 0) ;
#line 91 "gcats1_globalentry.dats"
if (tmp5) {
#line 92 "gcats1_globalentry.dats"
/* tmp6 = */ globalentry_insert (tmp2, tmp4, arg1, arg2) ;
#line 94 "gcats1_globalentry.dats"
tmp7 = atspre_isub (tmp4, 1) ;
#line 94 "gcats1_globalentry.dats"
ats_ptrget_mac(ats_int_type, tmp3) = tmp7 ;
} else {
#line 96 "gcats1_globalentry.dats"
/* tmp0 = */ ATS_2d0_2e2_2e10_2ccomp_2runtime_2GCATS1_2gcats1_globalentry_2edats__globalentrylst_extend_insert (arg0, arg1, arg2) ;
} /* end of [if] */
break ;

/* branch: __ats_lab_2 */
#line 99 "gcats1_globalentry.dats"
__ats_lab_2_0:
#line 99 "gcats1_globalentry.dats"
// if (ats_ptrget_mac(ats_ptr_type, arg0) != (ats_sum_ptr_type)0) { ats_deadcode_failure_handle () ; }
#line 99 "gcats1_globalentry.dats"
__ats_lab_2_1:
#line 100 "gcats1_globalentry.dats"
/* tmp0 = */ ATS_2d0_2e2_2e10_2ccomp_2runtime_2GCATS1_2gcats1_globalentry_2edats__globalentrylst_extend_insert (arg0, arg1, arg2) ;
break ;
} while (0) ;
break ;

/* branch: __ats_lab_3 */
#line 103 "gcats1_globalentry.dats"
__ats_lab_3_0:
#line 103 "gcats1_globalentry.dats"
__ats_lab_3_1:
break ;
} while (0) ;
return /* (tmp0) */ ;
} /* end of [globalentrylst_insert] */

/*
// /home/hwxi/research/Anairiats/ccomp/runtime/GCATS1/gcats1_globalentry.dats: 3624(line=108, offs=40) -- 4159(line=123, offs=4)
*/
ATSglobaldec()
ats_void_type
ATS_2d0_2e2_2e10_2ccomp_2runtime_2GCATS1_2gcats1_globalentry_2edats__globalentrylst_extend_insert (ats_ref_type arg0, ats_ptr_type arg1, ats_int_type arg2) {
/* local vardec */
// ATSlocal_void (tmp8) ;
ATSlocal (ats_ptr_type, tmp9) ;
ATSlocal (ats_ptr_type, tmp10) ;
ATSlocal (ats_int_type, tmp11) ;
// ATSlocal_void (tmp12) ;
ATSlocal (ats_ptr_type, tmp13) ;
ATSlocal (ats_int_type, tmp14) ;

__ats_lab_ATS_2d0_2e2_2e10_2ccomp_2runtime_2GCATS1_2gcats1_globalentry_2edats__globalentrylst_extend_insert:
#line 115 "gcats1_globalentry.dats"
tmp9 = entrypage_alloc () ;
#line 115 "gcats1_globalentry.dats"
tmp10 = ats_selsin_mac(tmp9, atslab_1) ;
#line 119 "gcats1_globalentry.dats"
tmp11 = atspre_isub (64, 1) ;
#line 120 "gcats1_globalentry.dats"
/* tmp12 = */ globalentry_insert (tmp10, tmp11, arg1, arg2) ;
#line 122 "gcats1_globalentry.dats"
tmp14 = atspre_isub (tmp11, 1) ;
#line 122 "gcats1_globalentry.dats"
tmp13 = ATS_MALLOC(sizeof(gcats1_globalentry_anairiats_sum_0)) ;
ats_selptrset_mac(gcats1_globalentry_anairiats_sum_0, tmp13, atslab_0, tmp10) ;
ats_selptrset_mac(gcats1_globalentry_anairiats_sum_0, tmp13, atslab_1, tmp14) ;
ats_selptrset_mac(gcats1_globalentry_anairiats_sum_0, tmp13, atslab_2, ats_ptrget_mac(ats_ptr_type, arg0)) ;
#line 122 "gcats1_globalentry.dats"
ats_ptrget_mac(ats_ptr_type, arg0) = tmp13 ;
return /* (tmp8) */ ;
} /* end of [ATS_2d0_2e2_2e10_2ccomp_2runtime_2GCATS1_2gcats1_globalentry_2edats__globalentrylst_extend_insert] */

/*
// /home/hwxi/research/Anairiats/ccomp/runtime/GCATS1/gcats1_globalentry.dats: 4527(line=135, offs=34) -- 4863(line=146, offs=4)
*/
ATSglobaldec()
ats_void_type
gc_mark_globalentrylst (ats_ptr_type arg0) {
/* local vardec */
// ATSlocal_void (tmp15) ;
ATSlocal (ats_ptr_type, tmp16) ;
ATSlocal (ats_int_type, tmp17) ;
ATSlocal (ats_ptr_type, tmp18) ;
// ATSlocal_void (tmp19) ;
ATSlocal (ats_ptr_type, tmp20) ;

__ats_lab_gc_mark_globalentrylst:
#line 136 "gcats1_globalentry.dats"
do {
/* branch: __ats_lab_4 */
#line 137 "gcats1_globalentry.dats"
__ats_lab_4_0:
#line 137 "gcats1_globalentry.dats"
if (arg0 == (ats_sum_ptr_type)0) { goto __ats_lab_5_0 ; }
#line 137 "gcats1_globalentry.dats"
__ats_lab_4_1:
#line 137 "gcats1_globalentry.dats"
tmp16 = ats_caselptrlab_mac(gcats1_globalentry_anairiats_sum_0, arg0, atslab_0) ;
#line 137 "gcats1_globalentry.dats"
tmp17 = ats_caselptrlab_mac(gcats1_globalentry_anairiats_sum_0, arg0, atslab_1) ;
#line 137 "gcats1_globalentry.dats"
tmp18 = &ats_caselptrlab_mac(gcats1_globalentry_anairiats_sum_0, arg0, atslab_2) ;
#line 138 "gcats1_globalentry.dats"
/* tmp19 = */ gc_mark_entrypage (tmp16, tmp17) ;
#line 139 "gcats1_globalentry.dats"
tmp20 = ats_ptrget_mac(ats_ptr_type, tmp18) ;
#line 139 "gcats1_globalentry.dats"
arg0 = tmp20 ;
#line 139 "gcats1_globalentry.dats"
goto __ats_lab_gc_mark_globalentrylst ; // tail call
break ;

/* branch: __ats_lab_5 */
#line 143 "gcats1_globalentry.dats"
__ats_lab_5_0:
#line 143 "gcats1_globalentry.dats"
// if (arg0 != (ats_sum_ptr_type)0) { ats_deadcode_failure_handle () ; }
#line 143 "gcats1_globalentry.dats"
__ats_lab_5_1:
break ;
} while (0) ;
return /* (tmp15) */ ;
} /* end of [gc_mark_globalentrylst] */

/* static load function */

extern ats_void_type ATS_2d0_2e2_2e10_2ccomp_2runtime_2GCATS1_2gcats1_2esats__staload (void) ;

ats_void_type
ATS_2d0_2e2_2e10_2ccomp_2runtime_2GCATS1_2gcats1_globalentry_2edats__staload () {
static int ATS_2d0_2e2_2e10_2ccomp_2runtime_2GCATS1_2gcats1_globalentry_2edats__staload_flag = 0 ;
if (ATS_2d0_2e2_2e10_2ccomp_2runtime_2GCATS1_2gcats1_globalentry_2edats__staload_flag) return ;
ATS_2d0_2e2_2e10_2ccomp_2runtime_2GCATS1_2gcats1_globalentry_2edats__staload_flag = 1 ;

ATS_2d0_2e2_2e10_2ccomp_2runtime_2GCATS1_2gcats1_2esats__staload () ;

// ATS_2d0_2e2_2e10_2ccomp_2runtime_2GCATS1_2gcats1_globalentry_2edats__GLOBALENTRYLSTcons_0.tag = 0 ;
ATS_2d0_2e2_2e10_2ccomp_2runtime_2GCATS1_2gcats1_globalentry_2edats__GLOBALENTRYLSTnil_1.tag = 1 ;
return ;
} /* staload function */

/* dynamic load function */

// dynload flag declaration
extern ats_int_type ATS_2d0_2e2_2e10_2ccomp_2runtime_2GCATS1_2gcats1_globalentry_2edats__dynload_flag ;

ats_void_type
ATS_2d0_2e2_2e10_2ccomp_2runtime_2GCATS1_2gcats1_globalentry_2edats__dynload () {
ATS_2d0_2e2_2e10_2ccomp_2runtime_2GCATS1_2gcats1_globalentry_2edats__dynload_flag = 1 ;
ATS_2d0_2e2_2e10_2ccomp_2runtime_2GCATS1_2gcats1_globalentry_2edats__staload () ;

#ifdef _ATS_PROOFCHECK
ATS_2d0_2e2_2e10_2ccomp_2runtime_2GCATS1_2gcats1_globalentry_2edats____leak_prfck () ;
#endif /* _ATS_PROOFCHECK */

/* marking static variables for GC */

/* marking external values for GC */

/* code for dynamic loading */
return ;
} /* end of [dynload function] */

/* external codes at mid */
/* external codes at bot */
#line 150 "gcats1_globalentry.dats"


ats_ptr_type entrypage_alloc () {
  void* p ;
  p = malloc (GLOBALENTRYPAGESIZE * sizeof(freeitmptrsz_t)) ;
/*
  fprintf (stderr, "entrypage_alloc: p = %p\n", p) ;
*/
  if (!p) {
    fprintf (stderr, "GC Fatal Error: [gc_globalentry.dats]") ;
    fprintf (stderr, ": [entrypage_alloc]: [malloc] failed.\n") ;
    exit (1) ;
  } // end of [if]

  return p ;
} /* end of [entrypage_alloc] */

/* ****** ****** */

ats_void_type globalentry_insert
  (ats_ptr_type p0, ats_int_type u, ats_ptr_type p, ats_int_type wsz) {
  freeitmptrsz_t *p0_u ;
  p0_u = (freeitmptrsz_t*)p0 + u ;
  p0_u->atslab_ptr = p ; p0_u->atslab_size = wsz ;
  return ;
} /* globalentry_insert */

/* ****** ****** */

extern ats_void_type gc_mark_ptr (ats_ptr_type) ;

ats_void_type gc_mark_entrypage
  (ats_ptr_type p0, ats_int_type u/*used if higher*/) {
  
  int i, j ; freeitmptrsz_t *p0_i ; freeitmlst *p_j ; int wsz ;

  i = u + 1 ; p0_i = (freeitmptrsz_t*)p0 + i ;
/*
  fprintf (stderr, "gc_mark_entrypage: enter\n") ;
*/
  while (i < GLOBALENTRYPAGESIZE) { // termination: obvious
    p_j = (freeitmlst*)(p0_i->atslab_ptr) ; wsz = p0_i->atslab_size ;
/*
    fprintf (stderr, "gc_mark_entrypage: p_j = %p(%i)\n", p_j, p_j) ;
*/
    for (j = 0; j < wsz; j += 1, p_j += 1) { gc_mark_ptr (*p_j) ; }
    i += 1 ; p0_i += 1 ;
  } // end of [while]
/*
  fprintf (stderr, "gc_mark_entrypage: leave\n") ;
*/
  return ;
} /* end of [gc_mark_entrypage] */



/* ****** ****** */

/* end of [gcats1_globalentry_dats.c] */
