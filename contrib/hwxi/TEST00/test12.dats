(* ****** ****** *)
//
// HX-2019-05-13:
// For ATS-Temptory
//
(* ****** ****** *)
//
#include
"share/HATS\
/temptory_staload_cs320.hats"
//
(* ****** ****** *)

implement main0() = ()

(* ****** ****** *)
//
(*
val cs =
FILEref_streamize_char(the_stdin())
val () =
(
stream_vt_foreach0(cs)
) where
{
implement
stream_vt_foreach0$work<char>(c0) = print(c0)
}
*)
//
(*
val ls =
FILEref_streamize_line(the_stdin())
val () =
(
stream_vt_iforeach0(ls)
) where
{
implement
stream_vt_iforeach0$work<string>(i0, l0) = println!("line#", i0, ": ", l0)
}
*)
//
val ws =
FILEref_streamize_word(the_stdin())
val () =
(
stream_vt_iforeach0(ws)
) where
{
implement
stream_vt_iforeach0$work<string>(i0, w0) = println!("word#", i0, ": ", w0)
}
//
(* ****** ****** *)

(* end of [test12.dats] *)
