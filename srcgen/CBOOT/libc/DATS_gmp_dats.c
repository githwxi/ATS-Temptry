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

#include "libc/CATS/gmp.cats"
/* external codes at top */
/* type definitions */
/* external typedefs */
/* external dynamic constructor declarations */
/* external dynamic constant declarations */
ATSextern_fun(ats_ptr_type, atspre_stdout_get) () ;
ATSextern_fun(ats_void_type, atspre_stdout_view_set) () ;
ATSextern_fun(ats_ptr_type, atspre_stderr_get) () ;
ATSextern_fun(ats_void_type, atspre_stderr_view_set) () ;
ATSextern_fun(ats_ptr_type, atslib_mpz_get_str) (ats_int_type, ats_ref_type) ;
ATSextern_fun(ats_void_type, atslib_mpz_mul2_ulint) (ats_ref_type, ats_ulint_type) ;
ATSextern_fun(ats_void_type, atslib_mpz_pow2_ui) (ats_ref_type, ats_ulint_type) ;
ATSextern_fun(ats_void_type, atslib_fprint_mpz) (ats_ref_type, ats_ref_type) ;
ATSextern_fun(ats_void_type, atslib_fprint_mpq) (ats_ref_type, ats_ref_type) ;

/* external dynamic terminating constant declarations */
#ifdef _ATS_PROOFCHECK
extern
ats_void_type ATS_2d0_2e2_2e12_2prelude_2basics_dyn_2esats__file_mode_lte_w_w_prfck () ;
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

/*
// /home/xaos/rpmbuild/etc/ats-lang-anairiats-0.2.12/libc/DATS/gmp.dats: 2289(line=74, offs=21) -- 2321(line=74, offs=53)
*/
ATSglobaldec()
ats_void_type
ATS_2d0_2e2_2e12_2libc_2SATS_2gmp_2esats__print_mpz (ats_ref_type arg0) {
/* local vardec */
// ATSlocal_void (tmp0) ;
ATSlocal (ats_ptr_type, tmp1) ;
ATSlocal (ats_ptr_type, tmp2) ;
// ATSlocal_void (tmp3) ;

__ats_lab_ATS_2d0_2e2_2e12_2libc_2SATS_2gmp_2esats__print_mpz:
tmp1 = atspre_stdout_get () ;
tmp2 = ats_selsin_mac(tmp1, atslab_1) ;
/* tmp3 = */ atslib_fprint_mpz (tmp2, arg0) ;
/* tmp0 = */ atspre_stdout_view_set () ;
return /* (tmp0) */ ;
} /* end of [ATS_2d0_2e2_2e12_2libc_2SATS_2gmp_2esats__print_mpz] */

/*
// /home/xaos/rpmbuild/etc/ats-lang-anairiats-0.2.12/libc/DATS/gmp.dats: 2342(line=75, offs=21) -- 2374(line=75, offs=53)
*/
ATSglobaldec()
ats_void_type
ATS_2d0_2e2_2e12_2libc_2SATS_2gmp_2esats__prerr_mpz (ats_ref_type arg0) {
/* local vardec */
// ATSlocal_void (tmp4) ;
ATSlocal (ats_ptr_type, tmp5) ;
ATSlocal (ats_ptr_type, tmp6) ;
// ATSlocal_void (tmp7) ;

__ats_lab_ATS_2d0_2e2_2e12_2libc_2SATS_2gmp_2esats__prerr_mpz:
tmp5 = atspre_stderr_get () ;
tmp6 = ats_selsin_mac(tmp5, atslab_1) ;
/* tmp7 = */ atslib_fprint_mpz (tmp6, arg0) ;
/* tmp4 = */ atspre_stderr_view_set () ;
return /* (tmp4) */ ;
} /* end of [ATS_2d0_2e2_2e12_2libc_2SATS_2gmp_2esats__prerr_mpz] */

/*
// /home/xaos/rpmbuild/etc/ats-lang-anairiats-0.2.12/libc/DATS/gmp.dats: 2399(line=77, offs=24) -- 2424(line=77, offs=49)
*/
ATSglobaldec()
ats_ptr_type
ATS_2d0_2e2_2e12_2libc_2SATS_2gmp_2esats__tostrptr_mpz (ats_ref_type arg0) {
/* local vardec */
ATSlocal (ats_ptr_type, tmp8) ;

__ats_lab_ATS_2d0_2e2_2e12_2libc_2SATS_2gmp_2esats__tostrptr_mpz:
tmp8 = atslib_mpz_get_str (10, arg0) ;
return (tmp8) ;
} /* end of [ATS_2d0_2e2_2e12_2libc_2SATS_2gmp_2esats__tostrptr_mpz] */

/*
// /home/xaos/rpmbuild/etc/ats-lang-anairiats-0.2.12/libc/DATS/gmp.dats: 2448(line=78, offs=24) -- 2519(line=80, offs=4)
*/
ATSglobaldec()
ats_ptr_type
ATS_2d0_2e2_2e12_2libc_2SATS_2gmp_2esats__tostring_mpz (ats_ref_type arg0) {
/* local vardec */
ATSlocal (ats_ptr_type, tmp9) ;
ATSlocal (ats_ptr_type, tmp10) ;

__ats_lab_ATS_2d0_2e2_2e12_2libc_2SATS_2gmp_2esats__tostring_mpz:
tmp10 = atslib_mpz_get_str (10, arg0) ;
tmp9 = ats_castfn_mac(ats_ptr_type, tmp10) ;
return (tmp9) ;
} /* end of [ATS_2d0_2e2_2e12_2libc_2SATS_2gmp_2esats__tostring_mpz] */

/*
// /home/xaos/rpmbuild/etc/ats-lang-anairiats-0.2.12/libc/DATS/gmp.dats: 2587(line=85, offs=11) -- 2880(line=95, offs=4)
*/
ATSglobaldec()
ats_void_type
ATS_2d0_2e2_2e12_2libc_2SATS_2gmp_2esats__mpq_incby (ats_ref_type arg0, ats_ulint_type arg1, ats_ulint_type arg2) {
/* local vardec */
// ATSlocal_void (tmp11) ;
ATSlocal (ats_ptr_type, tmp12) ;
ATSlocal (ats_ptr_type, tmp13) ;
ATSlocal (ats_ptr_type, tmp14) ;
ATSlocal (ats_ptr_type, tmp15) ;
// ATSlocal_void (tmp16) ;
// ATSlocal_void (tmp17) ;
// ATSlocal_void (tmp18) ;

__ats_lab_ATS_2d0_2e2_2e12_2libc_2SATS_2gmp_2esats__mpq_incby:
tmp12 = atslib_mpq_numref (arg0) ;
tmp13 = ats_selsin_mac(tmp12, atslab_2) ;
tmp14 = atslib_mpq_denref (arg0) ;
tmp15 = ats_selsin_mac(tmp14, atslab_2) ;
/* tmp16 = */ atslib_mpz_mul2_ulint (tmp13, arg2) ;
/* tmp17 = */ atslib_mpz_addmul3_ulint (tmp13, tmp15, arg1) ;
/* tmp18 = */ atslib_mpz_mul2_ulint (tmp15, arg2) ;
/* tmp11 = */ atslib_mpq_canonicalize (arg0) ;
return /* (tmp11) */ ;
} /* end of [ATS_2d0_2e2_2e12_2libc_2SATS_2gmp_2esats__mpq_incby] */

/*
// /home/xaos/rpmbuild/etc/ats-lang-anairiats-0.2.12/libc/DATS/gmp.dats: 2924(line=98, offs=11) -- 3217(line=108, offs=4)
*/
ATSglobaldec()
ats_void_type
ATS_2d0_2e2_2e12_2libc_2SATS_2gmp_2esats__mpq_decby (ats_ref_type arg0, ats_ulint_type arg1, ats_ulint_type arg2) {
/* local vardec */
// ATSlocal_void (tmp19) ;
ATSlocal (ats_ptr_type, tmp20) ;
ATSlocal (ats_ptr_type, tmp21) ;
ATSlocal (ats_ptr_type, tmp22) ;
ATSlocal (ats_ptr_type, tmp23) ;
// ATSlocal_void (tmp24) ;
// ATSlocal_void (tmp25) ;
// ATSlocal_void (tmp26) ;

__ats_lab_ATS_2d0_2e2_2e12_2libc_2SATS_2gmp_2esats__mpq_decby:
tmp20 = atslib_mpq_numref (arg0) ;
tmp21 = ats_selsin_mac(tmp20, atslab_2) ;
tmp22 = atslib_mpq_denref (arg0) ;
tmp23 = ats_selsin_mac(tmp22, atslab_2) ;
/* tmp24 = */ atslib_mpz_mul2_ulint (tmp21, arg2) ;
/* tmp25 = */ atslib_mpz_submul3_ulint (tmp21, tmp23, arg1) ;
/* tmp26 = */ atslib_mpz_mul2_ulint (tmp23, arg2) ;
/* tmp19 = */ atslib_mpq_canonicalize (arg0) ;
return /* (tmp19) */ ;
} /* end of [ATS_2d0_2e2_2e12_2libc_2SATS_2gmp_2esats__mpq_decby] */

/*
// /home/xaos/rpmbuild/etc/ats-lang-anairiats-0.2.12/libc/DATS/gmp.dats: 3284(line=113, offs=13) -- 3754(line=129, offs=4)
*/
ATSglobaldec()
ats_void_type
ATS_2d0_2e2_2e12_2libc_2SATS_2gmp_2esats__mpq_pow3_ui (ats_ref_type arg0, ats_ref_type arg1, ats_ulint_type arg2) {
/* local vardec */
// ATSlocal_void (tmp27) ;
ATSlocal (ats_ptr_type, tmp28) ;
ATSlocal (ats_ptr_type, tmp29) ;
ATSlocal (ats_ptr_type, tmp30) ;
ATSlocal (ats_ptr_type, tmp31) ;
// ATSlocal_void (tmp32) ;
ATSlocal (ats_ptr_type, tmp33) ;
ATSlocal (ats_ptr_type, tmp34) ;
ATSlocal (ats_ptr_type, tmp35) ;
ATSlocal (ats_ptr_type, tmp36) ;

__ats_lab_ATS_2d0_2e2_2e12_2libc_2SATS_2gmp_2esats__mpq_pow3_ui:
tmp28 = atslib_mpq_numref (arg0) ;
tmp29 = ats_selsin_mac(tmp28, atslab_2) ;
tmp30 = atslib_mpq_numref (arg1) ;
tmp31 = ats_selsin_mac(tmp30, atslab_2) ;
/* tmp32 = */ atslib_mpz_pow3_ui (tmp29, tmp31, arg2) ;
tmp33 = atslib_mpq_denref (arg0) ;
tmp34 = ats_selsin_mac(tmp33, atslab_2) ;
tmp35 = atslib_mpq_denref (arg1) ;
tmp36 = ats_selsin_mac(tmp35, atslab_2) ;
/* tmp27 = */ atslib_mpz_pow3_ui (tmp34, tmp36, arg2) ;
return /* (tmp27) */ ;
} /* end of [ATS_2d0_2e2_2e12_2libc_2SATS_2gmp_2esats__mpq_pow3_ui] */

/*
// /home/xaos/rpmbuild/etc/ats-lang-anairiats-0.2.12/libc/DATS/gmp.dats: 3802(line=131, offs=23) -- 4077(line=143, offs=4)
*/
ATSglobaldec()
ats_void_type
ATS_2d0_2e2_2e12_2libc_2SATS_2gmp_2esats__mpq_pow2_ui (ats_ref_type arg0, ats_ulint_type arg1) {
/* local vardec */
// ATSlocal_void (tmp37) ;
ATSlocal (ats_ptr_type, tmp38) ;
ATSlocal (ats_ptr_type, tmp39) ;
// ATSlocal_void (tmp40) ;
ATSlocal (ats_ptr_type, tmp41) ;
ATSlocal (ats_ptr_type, tmp42) ;

__ats_lab_ATS_2d0_2e2_2e12_2libc_2SATS_2gmp_2esats__mpq_pow2_ui:
tmp38 = atslib_mpq_numref (arg0) ;
tmp39 = ats_selsin_mac(tmp38, atslab_2) ;
/* tmp40 = */ atslib_mpz_pow2_ui (tmp39, arg1) ;
tmp41 = atslib_mpq_denref (arg0) ;
tmp42 = ats_selsin_mac(tmp41, atslab_2) ;
/* tmp37 = */ atslib_mpz_pow2_ui (tmp42, arg1) ;
return /* (tmp37) */ ;
} /* end of [ATS_2d0_2e2_2e12_2libc_2SATS_2gmp_2esats__mpq_pow2_ui] */

/*
// /home/xaos/rpmbuild/etc/ats-lang-anairiats-0.2.12/libc/DATS/gmp.dats: 4784(line=177, offs=21) -- 4816(line=177, offs=53)
*/
ATSglobaldec()
ats_void_type
ATS_2d0_2e2_2e12_2libc_2SATS_2gmp_2esats__print_mpq (ats_ref_type arg0) {
/* local vardec */
// ATSlocal_void (tmp43) ;
ATSlocal (ats_ptr_type, tmp44) ;
ATSlocal (ats_ptr_type, tmp45) ;
// ATSlocal_void (tmp46) ;

__ats_lab_ATS_2d0_2e2_2e12_2libc_2SATS_2gmp_2esats__print_mpq:
tmp44 = atspre_stdout_get () ;
tmp45 = ats_selsin_mac(tmp44, atslab_1) ;
/* tmp46 = */ atslib_fprint_mpq (tmp45, arg0) ;
/* tmp43 = */ atspre_stdout_view_set () ;
return /* (tmp43) */ ;
} /* end of [ATS_2d0_2e2_2e12_2libc_2SATS_2gmp_2esats__print_mpq] */

/*
// /home/xaos/rpmbuild/etc/ats-lang-anairiats-0.2.12/libc/DATS/gmp.dats: 4837(line=178, offs=21) -- 4869(line=178, offs=53)
*/
ATSglobaldec()
ats_void_type
ATS_2d0_2e2_2e12_2libc_2SATS_2gmp_2esats__prerr_mpq (ats_ref_type arg0) {
/* local vardec */
// ATSlocal_void (tmp47) ;
ATSlocal (ats_ptr_type, tmp48) ;
ATSlocal (ats_ptr_type, tmp49) ;
// ATSlocal_void (tmp50) ;

__ats_lab_ATS_2d0_2e2_2e12_2libc_2SATS_2gmp_2esats__prerr_mpq:
tmp48 = atspre_stderr_get () ;
tmp49 = ats_selsin_mac(tmp48, atslab_1) ;
/* tmp50 = */ atslib_fprint_mpq (tmp49, arg0) ;
/* tmp47 = */ atspre_stderr_view_set () ;
return /* (tmp47) */ ;
} /* end of [ATS_2d0_2e2_2e12_2libc_2SATS_2gmp_2esats__prerr_mpq] */

/* static load function */

extern ats_void_type ATS_2d0_2e2_2e12_2libc_2SATS_2gmp_2esats__staload (void) ;

ats_void_type
ATS_2d0_2e2_2e12_2libc_2DATS_2gmp_2edats__staload () {
static int ATS_2d0_2e2_2e12_2libc_2DATS_2gmp_2edats__staload_flag = 0 ;
if (ATS_2d0_2e2_2e12_2libc_2DATS_2gmp_2edats__staload_flag) return ;
ATS_2d0_2e2_2e12_2libc_2DATS_2gmp_2edats__staload_flag = 1 ;

ATS_2d0_2e2_2e12_2libc_2SATS_2gmp_2esats__staload () ;

return ;
} /* staload function */

/* dynamic load function */

// dynload flag declaration
// extern ats_int_type ATS_2d0_2e2_2e12_2libc_2DATS_2gmp_2edats__dynload_flag ;

ats_void_type
ATS_2d0_2e2_2e12_2libc_2DATS_2gmp_2edats__dynload () {
// ATS_2d0_2e2_2e12_2libc_2DATS_2gmp_2edats__dynload_flag = 1 ;
ATS_2d0_2e2_2e12_2libc_2DATS_2gmp_2edats__staload () ;

#ifdef _ATS_PROOFCHECK
ATS_2d0_2e2_2e12_2prelude_2basics_dyn_2esats__file_mode_lte_w_w_prfck () ;
#endif /* _ATS_PROOFCHECK */

/* marking static variables for GC */

/* marking external values for GC */

/* code for dynamic loading */
return ;
} /* end of [dynload function] */

/* external codes at mid */


ats_void_type
atslib_mpz_inp_str_exn (
  ats_mpz_ptr_type x
, ats_ptr_type file
, ats_int_type base
) {
  size_t n = mpz_inp_str(x, (FILE*)file, base) ;
  if (n == 0) {
    ats_exit_errmsg (1, "exit(ATS): [mpz_inp_str] failed.\n") ;
  } // end of [if]
  return ;
} // end of [atslib_mpz_inp_str_exn]

ats_void_type
atslib_mpz_out_str_exn (
  ats_ptr_type file
, ats_int_type base
, const ats_mpz_ptr_type x
) {
  size_t n = mpz_out_str((FILE*)file, base, (mpz_ptr)x) ;
  if (n == 0) {
    ats_exit_errmsg (1, "exit(ATS): [mpz_out_str] failed.\n") ;
  } // end of [if]
  return ;
} // end of [atslib_mpz_out_str_exn]



ats_void_type
atslib_mpq_inp_str_exn (
  ats_mpq_ptr_type x
, ats_ptr_type file
, ats_int_type base
) {
  size_t n = mpq_inp_str(x, (FILE*)file, base) ;
  if (n == 0) {
    ats_exit_errmsg (1, "exit(ATS): [mpq_inp_str] failed.\n") ;
  } // end of [if]
  return ;
} // end of [atslib_mpq_inp_str_exn]

ats_void_type
atslib_mpq_out_str_exn (
  ats_ptr_type file
, ats_int_type base
, const ats_mpq_ptr_type x
) {
  size_t n = mpq_out_str((FILE*)file, base, (mpq_ptr)x) ;
  if (n == 0) {
    ats_exit_errmsg (1, "exit(ATS): [mpq_out_str] failed.\n") ;
  } // end of [if]
  return ;
} // end of [atslib_mpq_out_str_exn]



ats_void_type
atslib_mpf_inp_str_exn (
  ats_mpf_ptr_type x
, ats_ptr_type file
, ats_int_type base
) {
  size_t n = mpf_inp_str(x, (FILE*)file, base) ;
  if (n == 0) {
    ats_exit_errmsg (1, "exit(ATS): [mpf_inp_str] failed.\n") ;
  } // end of [if]
  return ;
} // end of [atslib_mpf_inp_str_exn]

ats_void_type
atslib_mpf_out_str_exn (
  ats_ptr_type file
, ats_int_type base
, ats_size_type ndigit
, const ats_mpf_ptr_type x
) {
  size_t n = mpf_out_str((FILE*)file, base, ndigit, (mpf_ptr)x) ;
  if (n == 0) {
    ats_exit_errmsg (1, "exit(ATS): [mpf_out_str] failed.\n") ;
  } // end of [if]
  return ;
} // end of [atslib_mpf_out_str_exn]


/* external codes at bot */

/* ****** ****** */

/* end of [DATS_gmp_dats.c] */
