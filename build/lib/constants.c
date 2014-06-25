/* -*- c++ -*- */
/*
 * Copyright 2013 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * GNU Radio is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 *
 * GNU Radio is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with GNU Radio; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */

#if HAVE_CONFIG_H
#include <config.h>
#endif

#include <volk_gnsssdr/constants.h>

char*
volk_gnsssdr_prefix()
{
  return "/opt/volk";
}

char*
volk_gnsssdr_build_date()
{
  return "Wed, 25 Jun 2014 17:48:03";
}

char*
volk_gnsssdr_version()
{
  return "0.1";
}

char*
volk_gnsssdr_c_compiler()
{
  return "Apple LLVM version 5.1 (clang-503.0.40) (based on LLVM 3.4svn) \nTarget: x86_64-apple-darwin13.2.0 \nThread model: posix";
}    

char*
volk_gnsssdr_compiler_flags()
{
  return "/usr/bin/cc:::  \n/usr/bin/c++:::  \ngeneric_orc:::Clang:::-O3 -DNDEBUG   \nsse2_64_mmx_orc:::Clang:::-O3 -DNDEBUG  -m64 -mmmx -msse -msse2 \nsse3_64_orc:::Clang:::-O3 -DNDEBUG  -m64 -mmmx -msse -msse2 -msse3 \nssse3_64_orc:::Clang:::-O3 -DNDEBUG  -m64 -mmmx -msse -msse2 -msse3 -mssse3 \nsse4_a_64_orc:::Clang:::-O3 -DNDEBUG  -m64 -mmmx -msse -msse2 -msse3 -msse4a -mpopcnt \nsse4_1_64_orc:::Clang:::-O3 -DNDEBUG  -m64 -mmmx -msse -msse2 -msse3 -mssse3 -msse4.1 \nsse4_2_64_orc:::Clang:::-O3 -DNDEBUG  -m64 -mmmx -msse -msse2 -msse3 -mssse3 -msse4.1 -msse4.2 -mpopcnt \navx_64_mmx_orc:::Clang:::-O3 -DNDEBUG  -m64 -mmmx -msse -msse2 -msse3 -mssse3 -msse4.1 -msse4.2 -mpopcnt -mavx";
}    

char*
volk_gnsssdr_available_machines()
{
  return "generic_orc;sse2_64_mmx_orc;sse3_64_orc;ssse3_64_orc;sse4_a_64_orc;sse4_1_64_orc;sse4_2_64_orc;avx_64_mmx_orc";
}    
