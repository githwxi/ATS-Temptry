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
#line 39 "gcats1_manops.dats"

#include <stddef.h> // for [offsetof]
extern void *malloc (size_t bsz) ; // see [stdlib.h]
extern void *calloc (size_t n, size_t tsz) ; // see [stdlib.h]
extern void free (void*) ; // see [stdlib.h]
extern void *realloc (void *ptr, size_t bsz) ; // see [stdlib.h]
#line 71 "gcats1_manops.dats"


static inline
ats_void_type gc_mark_the_manmemlst_aux
  (ats_ptr_type p0, ats_int_type sz) {
  int i ; freeitmlst *p_i ;

  p_i = (freeitmlst*)p0 ;
  for (i = 0; i < sz; i += 1, p_i += 1) gc_mark_ptr (*p_i) ;

  return ;
}


/* type definitions */
/* external typedefs */
/* external dynamic constructor declarations */
/* external dynamic constant declarations */
ATSextern_fun(ats_int_type, atspre_iadd) (ats_int_type, ats_int_type) ;
ATSextern_fun(ats_ptr_type, the_manmemlst_get) () ;
ATSextern_fun(ats_bool_type, manmemlst_is_cons) (ats_ptr_type) ;
ATSextern_fun(ats_int_type, manmemlst_itemwsz_get) (ats_ptr_type) ;
ATSextern_fun(ats_ptr_type, manmemlst_next_get) (ats_ptr_type) ;
ATSextern_fun(ats_ptr_type, manmemlst_data_get) (ats_ptr_type) ;
ATSextern_fun(ats_void_type, gc_mark_the_manmemlst_aux) (ats_ptr_type, ats_int_type) ;

/* external dynamic terminating constant declarations */
#ifdef _ATS_PROOFCHECK
#endif /* _ATS_PROOFCHECK */

/* assuming abstract types */
/* sum constructor declarations */
/* exn constructor declarations */
/* global dynamic (non-functional) constant declarations */
/* internal function declarations */
static
ats_int_type gcats1_manops_aux_1 (ats_ptr_type arg0, ats_int_type arg1) ;
static
ats_void_type gcats1_manops_auxlst_3 (ats_ptr_type arg0) ;

/* partial value template declarations */
/* static temporary variable declarations */
/* external value variable declarations */

/* function implementations */

/*
// /home/hwxi/research/Anairiats/ccomp/runtime/GCATS1/gcats1_manops.dats: 1994(line=62, offs=7) -- 2124(line=63, offs=75)
*/
ATSstaticdec()
ats_int_type
gcats1_manops_aux_1 (ats_ptr_type arg0, ats_int_type arg1) {
/* local vardec */
ATSlocal (ats_int_type, tmp1) ;
ATSlocal (ats_bool_type, tmp2) ;
ATSlocal (ats_ptr_type, tmp3) ;
ATSlocal (ats_int_type, tmp4) ;

__ats_lab_gcats1_manops_aux_1:
#line 63 "gcats1_manops.dats"
tmp2 = manmemlst_is_cons (arg0) ;
#line 63 "gcats1_manops.dats"
if (tmp2) {
#line 63 "gcats1_manops.dats"
tmp3 = manmemlst_next_get (arg0) ;
#line 63 "gcats1_manops.dats"
tmp4 = atspre_iadd (arg1, 1) ;
#line 63 "gcats1_manops.dats"
arg0 = tmp3 ;
#line 63 "gcats1_manops.dats"
arg1 = tmp4 ;
#line 63 "gcats1_manops.dats"
goto __ats_lab_gcats1_manops_aux_1 ; // tail call
} else {
#line 63 "gcats1_manops.dats"
tmp1 = arg1 ;
} /* end of [if] */
return (tmp1) ;
} /* end of [gcats1_manops_aux_1] */

/*
// /home/hwxi/research/Anairiats/ccomp/runtime/GCATS1/gcats1_manops.dats: 1976(line=61, offs=28) -- 2164(line=67, offs=4)
*/
ATSglobaldec()
ats_int_type
manmemlst_length (ats_ptr_type arg0) {
/* local vardec */
ATSlocal (ats_int_type, tmp0) ;

__ats_lab_manmemlst_length:
#line 66 "gcats1_manops.dats"
tmp0 = gcats1_manops_aux_1 (arg0, 0) ;
return (tmp0) ;
} /* end of [manmemlst_length] */

/*
// /home/hwxi/research/Anairiats/ccomp/runtime/GCATS1/gcats1_manops.dats: 2496(line=87, offs=7) -- 2838(line=97, offs=8)
*/
ATSstaticdec()
ats_void_type
gcats1_manops_auxlst_3 (ats_ptr_type arg0) {
/* local vardec */
// ATSlocal_void (tmp6) ;
ATSlocal (ats_bool_type, tmp7) ;
// ATSlocal_void (tmp8) ;
ATSlocal (ats_ptr_type, tmp9) ;
ATSlocal (ats_int_type, tmp10) ;
ATSlocal (ats_ptr_type, tmp11) ;

__ats_lab_gcats1_manops_auxlst_3:
#line 88 "gcats1_manops.dats"
tmp7 = manmemlst_is_cons (arg0) ;
#line 88 "gcats1_manops.dats"
if (tmp7) {
#line 90 "gcats1_manops.dats"
tmp9 = manmemlst_data_get (arg0) ;
#line 90 "gcats1_manops.dats"
tmp10 = manmemlst_itemwsz_get (arg0) ;
#line 89 "gcats1_manops.dats"
/* tmp8 = */ gc_mark_the_manmemlst_aux (tmp9, tmp10) ;
#line 96 "gcats1_manops.dats"
tmp11 = manmemlst_next_get (arg0) ;
#line 96 "gcats1_manops.dats"
arg0 = tmp11 ;
#line 96 "gcats1_manops.dats"
goto __ats_lab_gcats1_manops_auxlst_3 ; // tail call
} else {
/* empty */
} /* end of [if] */
return /* (tmp6) */ ;
} /* end of [gcats1_manops_auxlst_3] */

/*
// /home/hwxi/research/Anairiats/ccomp/runtime/GCATS1/gcats1_manops.dats: 2481(line=86, offs=33) -- 2896(line=100, offs=4)
*/
ATSglobaldec()
ats_void_type
gc_mark_the_manmemlst () {
/* local vardec */
// ATSlocal_void (tmp5) ;
ATSlocal (ats_ptr_type, tmp12) ;

__ats_lab_gc_mark_the_manmemlst:
#line 99 "gcats1_manops.dats"
tmp12 = the_manmemlst_get () ;
#line 99 "gcats1_manops.dats"
/* tmp5 = */ gcats1_manops_auxlst_3 (tmp12) ;
return /* (tmp5) */ ;
} /* end of [gc_mark_the_manmemlst] */

/* static load function */

extern ats_void_type ATS_2d0_2e2_2e10_2ccomp_2runtime_2GCATS1_2gcats1_2esats__staload (void) ;

ats_void_type
ATS_2d0_2e2_2e10_2ccomp_2runtime_2GCATS1_2gcats1_manops_2edats__staload () {
static int ATS_2d0_2e2_2e10_2ccomp_2runtime_2GCATS1_2gcats1_manops_2edats__staload_flag = 0 ;
if (ATS_2d0_2e2_2e10_2ccomp_2runtime_2GCATS1_2gcats1_manops_2edats__staload_flag) return ;
ATS_2d0_2e2_2e10_2ccomp_2runtime_2GCATS1_2gcats1_manops_2edats__staload_flag = 1 ;

ATS_2d0_2e2_2e10_2ccomp_2runtime_2GCATS1_2gcats1_2esats__staload () ;

return ;
} /* staload function */

/* dynamic load function */

// dynload flag declaration
extern ats_int_type ATS_2d0_2e2_2e10_2ccomp_2runtime_2GCATS1_2gcats1_manops_2edats__dynload_flag ;

ats_void_type
ATS_2d0_2e2_2e10_2ccomp_2runtime_2GCATS1_2gcats1_manops_2edats__dynload () {
ATS_2d0_2e2_2e10_2ccomp_2runtime_2GCATS1_2gcats1_manops_2edats__dynload_flag = 1 ;
ATS_2d0_2e2_2e10_2ccomp_2runtime_2GCATS1_2gcats1_manops_2edats__staload () ;

#ifdef _ATS_PROOFCHECK
#endif /* _ATS_PROOFCHECK */

/* marking static variables for GC */

/* marking external values for GC */

/* code for dynamic loading */
return ;
} /* end of [dynload function] */

/* external codes at mid */
/* external codes at bot */
#line 104 "gcats1_manops.dats"


extern manmemlst the_manmemlst ;

#ifdef _ATS_MULTITHREAD
extern pthread_mutex_t the_manmemlst_lock ;
#endif

ats_ptr_type gc_man_malloc_bsz (ats_int_type bsz) {
  manmemlst mms ;

  mms = (manmemlst)malloc(sizeof(manmem) + bsz) ;

  if (!mms) {
    fprintf (stderr, "[gc_man_malloc_bsz]: [malloc] failed.\n") ;
    exit (1) ;
  } // end of [if]

  mms->itemwsz = bsz >> NBYTE_PER_WORD_LOG ;
  mms->prev = (manmemlst)0 ;

#ifdef _ATS_MULTITHREAD
  pthread_mutex_lock (&the_manmemlst_lock) ;
#endif

 if (the_manmemlst) { the_manmemlst->prev = mms ; }
 mms->next = the_manmemlst ; the_manmemlst = mms ;

#ifdef _ATS_MULTITHREAD
  pthread_mutex_unlock (&the_manmemlst_lock) ;
#endif

 return (mms->data) ;

} /* end of [gc_man_malloc_bsz] */

//

ats_ptr_type gc_man_calloc_bsz
  (ats_int_type n, ats_int_type bsz) {
  int nbsz = n * bsz ;
  ats_ptr_type _data = gc_man_malloc_bsz (nbsz) ;
  memset (_data, 0, nbsz) ;
  return (_data) ;
} /* end of [gc_man_calloc_bsz] */

//

ats_void_type gc_man_free (ats_ptr_type ptr) {
  manmemlst mms, mms_prev, mms_next ;

  mms = (manmemlst)((byte*)ptr - offsetof(manmem, data)) ;
  mms_prev = mms->prev ; mms_next = mms->next ;

#ifdef _ATS_MULTITHREAD
  pthread_mutex_lock (&the_manmemlst_lock) ;
#endif

  if (mms_next) {
    mms_next->prev = mms_prev ;
  } /* end of [if] */

  if (mms_prev) {
    mms_prev->next = mms_next ;
  } else {
    the_manmemlst = mms_next ;
  } /* end of [if] */

#ifdef _ATS_MULTITHREAD
  pthread_mutex_unlock (&the_manmemlst_lock) ;
#endif

  free (mms) ; return ;
} /* end of [gc_man_free] */

//

ats_ptr_type gc_man_realloc_bsz
  (ats_ptr_type ptr, ats_int_type bsz) {
//
  manmemlst mms, mms_prev, mms_next ;
//
  if (!ptr) return gc_man_malloc_bsz (bsz) ;
//
  mms = (manmemlst)((byte*)ptr - offsetof(manmem, data)) ;
  mms_prev = mms->prev ; mms_next = mms->next ;
  mms = (manmemlst)realloc(mms, sizeof(manmem) + bsz) ;
//
  if (!mms) {
    fprintf (stderr, "[gc_man_realloc_bsz]: [realloc] failed.\n") ;
    exit (1) ;
  } // end of [if]
//
  mms->itemwsz = bsz >> NBYTE_PER_WORD_LOG ;
//
#ifdef _ATS_MULTITHREAD
  pthread_mutex_lock (&the_manmemlst_lock) ;
#endif
//
  if (mms_next) {
    mms_next->prev = mms ;
  } /* end of [if] */
//
  if (mms_prev) {
    mms_prev->next = mms ;
  } else {
    the_manmemlst = mms ;
  } /* end of [if] */
//
#ifdef _ATS_MULTITHREAD
  pthread_mutex_unlock (&the_manmemlst_lock) ;
#endif
//
  return (mms->data) ;
//
} /* end of [gc_man_realloc_bsz] */



/* ****** ****** */

/* end of [gcats1_manops_dats.c] */
