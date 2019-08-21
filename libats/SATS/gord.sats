(***********************************************************************)
(*                                                                     *)
(*                         Applied Type System                         *)
(*                                                                     *)
(***********************************************************************)

(*
** ATS/Xanadu - Unleashing the Potential of Types!
** Copyright (C) 2019 Hongwei Xi, ATS Trustful Software, Inc.
** All rights reserved
**
** ATS is free software;  you can  redistribute it and/or modify it under
** the terms of  the GNU GENERAL PUBLIC LICENSE (GPL) as published by the
** Free Software Foundation; either version 3, or (at  your  option)  any
** later version.
**
** ATS is distributed in the hope that it will be useful, but WITHOUT ANY
** WARRANTY; without  even  the  implied  warranty  of MERCHANTABILITY or
** FITNESS FOR A PARTICULAR PURPOSE.  See the  GNU General Public License
** for more details.
**
** You  should  have  received  a  copy of the GNU General Public License
** along  with  ATS;  see the  file COPYING.  If not, please write to the
** Free Software Foundation,  51 Franklin Street, Fifth Floor, Boston, MA
** 02110-1301, USA.
*)

(* ****** ****** *)
//
// Author: Hongwei Xi
// Start Time: February, 2019
// Authoremail: gmhwxiATgmailDOTcom
//
(* ****** ****** *)

(* ****** ****** *)
//
// For ordering
//
(* ****** ****** *)

fun
{a:tflt}
g_eq(a, a): bool
fun
{a:tflt}
g_neq(a, a): bool

(* ****** ****** *)

fun
{a:tflt}
g_lt(a, a): bool
fun
{a:tflt}
g_gt(a, a): bool
fun
{a:tflt}
g_lte(a, a): bool
fun
{a:tflt}
g_gte(a, a): bool

(* ****** ****** *)

fun
{a:tflt}
g_cmp(a, a): sint

(* ****** ****** *)
//
fun
{a:tflt}
g_eqz(x: a): bool
fun
{a:tflt}
g_ltz(x: a): bool
fun
{a:tflt}
g_gtz(x: a): bool
//
fun
{a:tflt}
g_ltez(x: a): bool
fun
{a:tflt}
g_gtez(x: a): bool
fun
{a:tflt}
g_neqz(x: a): bool
//
(* ****** ****** *)

fun
{a:tflt}
g_max(x: a, y: a): a
fun
{a:tflt}
g_min(x: a, y: a): a

(* ****** ****** *)

(* end of [gord.sats] *)
