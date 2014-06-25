

/* this file was generated by volk_gnsssdr template utils, do not edit! */

/*
 * Copyright 2011-2012 Free Software Foundation, Inc.
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

#ifndef INCLUDED_VOLK_RUNTIME
#define INCLUDED_VOLK_RUNTIME

#include <volk_gnsssdr/volk_gnsssdr_typedefs.h>
#include <volk_gnsssdr/volk_gnsssdr_config_fixed.h>
#include <volk_gnsssdr/volk_gnsssdr_common.h>
#include <volk_gnsssdr/volk_gnsssdr_complex.h>
#include <volk_gnsssdr/volk_gnsssdr_malloc.h>

#include <stdlib.h>
#include <stdbool.h>

__VOLK_DECL_BEGIN

typedef struct volk_gnsssdr_func_desc
{
    const char **impl_names;
    const int *impl_deps;
    const bool *impl_alignment;
    const size_t n_impls;
} volk_gnsssdr_func_desc_t;

//! Prints a list of machines available
VOLK_API void volk_gnsssdr_list_machines(void);

//! Returns the name of the machine this instance will use
VOLK_API const char* volk_gnsssdr_get_machine(void);

//! Get the machine alignment in bytes
VOLK_API size_t volk_gnsssdr_get_alignment(void);

/*!
 * The VOLK_OR_PTR macro is a convenience macro
 * for checking the alignment of a set of pointers.
 * Example usage:
 * volk_gnsssdr_is_aligned(VOLK_OR_PTR((VOLK_OR_PTR(p0, p1), p2)))
 */
#define VOLK_OR_PTR(ptr0, ptr1) \
    (const void *)(((intptr_t)(ptr0)) | ((intptr_t)(ptr1)))

/*!
 * Is the pointer on a machine alignment boundary?
 *
 * Note: for performance reasons, this function
 * is not usable until another volk_gnsssdr API call is made
 * which will perform certain initialization tasks.
 *
 * \param ptr the pointer to some memory buffer
 * \return 1 for alignment boundary, else 0
 */
VOLK_API bool volk_gnsssdr_is_aligned(const void *ptr);


//! A function pointer to the dispatcher implementation
extern VOLK_API p_32f_accumulator_s32f volk_gnsssdr_32f_accumulator_s32f;

//! A function pointer to the fastest aligned implementation
extern VOLK_API p_32f_accumulator_s32f volk_gnsssdr_32f_accumulator_s32f_a;

//! A function pointer to the fastest unaligned implementation
extern VOLK_API p_32f_accumulator_s32f volk_gnsssdr_32f_accumulator_s32f_u;

//! Call into a specific implementation given by name
extern VOLK_API void volk_gnsssdr_32f_accumulator_s32f_manual(float*  result, const float*  inputBuffer, unsigned int  num_points, const char* impl_name);

//! Get description paramaters for this kernel
extern VOLK_API volk_gnsssdr_func_desc_t volk_gnsssdr_32f_accumulator_s32f_get_func_desc(void);

//! A function pointer to the dispatcher implementation
extern VOLK_API p_32f_index_max_16u volk_gnsssdr_32f_index_max_16u;

//! A function pointer to the fastest aligned implementation
extern VOLK_API p_32f_index_max_16u volk_gnsssdr_32f_index_max_16u_a;

//! A function pointer to the fastest unaligned implementation
extern VOLK_API p_32f_index_max_16u volk_gnsssdr_32f_index_max_16u_u;

//! Call into a specific implementation given by name
extern VOLK_API void volk_gnsssdr_32f_index_max_16u_manual(unsigned int*  target, const float*  src0, unsigned int  num_points, const char* impl_name);

//! Get description paramaters for this kernel
extern VOLK_API volk_gnsssdr_func_desc_t volk_gnsssdr_32f_index_max_16u_get_func_desc(void);

//! A function pointer to the dispatcher implementation
extern VOLK_API p_32f_x2_add_32f volk_gnsssdr_32f_x2_add_32f;

//! A function pointer to the fastest aligned implementation
extern VOLK_API p_32f_x2_add_32f volk_gnsssdr_32f_x2_add_32f_a;

//! A function pointer to the fastest unaligned implementation
extern VOLK_API p_32f_x2_add_32f volk_gnsssdr_32f_x2_add_32f_u;

//! Call into a specific implementation given by name
extern VOLK_API void volk_gnsssdr_32f_x2_add_32f_manual(float*  cVector, const float*  aVector, const float*  bVector, unsigned int  num_points, const char* impl_name);

//! Get description paramaters for this kernel
extern VOLK_API volk_gnsssdr_func_desc_t volk_gnsssdr_32f_x2_add_32f_get_func_desc(void);

//! A function pointer to the dispatcher implementation
extern VOLK_API p_32fc_conjugate_32fc volk_gnsssdr_32fc_conjugate_32fc;

//! A function pointer to the fastest aligned implementation
extern VOLK_API p_32fc_conjugate_32fc volk_gnsssdr_32fc_conjugate_32fc_a;

//! A function pointer to the fastest unaligned implementation
extern VOLK_API p_32fc_conjugate_32fc volk_gnsssdr_32fc_conjugate_32fc_u;

//! Call into a specific implementation given by name
extern VOLK_API void volk_gnsssdr_32fc_conjugate_32fc_manual(lv_32fc_t*  cVector, const lv_32fc_t*  aVector, unsigned int  num_points, const char* impl_name);

//! Get description paramaters for this kernel
extern VOLK_API volk_gnsssdr_func_desc_t volk_gnsssdr_32fc_conjugate_32fc_get_func_desc(void);

//! A function pointer to the dispatcher implementation
extern VOLK_API p_32fc_magnitude_squared_32f volk_gnsssdr_32fc_magnitude_squared_32f;

//! A function pointer to the fastest aligned implementation
extern VOLK_API p_32fc_magnitude_squared_32f volk_gnsssdr_32fc_magnitude_squared_32f_a;

//! A function pointer to the fastest unaligned implementation
extern VOLK_API p_32fc_magnitude_squared_32f volk_gnsssdr_32fc_magnitude_squared_32f_u;

//! Call into a specific implementation given by name
extern VOLK_API void volk_gnsssdr_32fc_magnitude_squared_32f_manual(float*  magnitudeVector, const lv_32fc_t*  complexVector, unsigned int  num_points, const char* impl_name);

//! Get description paramaters for this kernel
extern VOLK_API volk_gnsssdr_func_desc_t volk_gnsssdr_32fc_magnitude_squared_32f_get_func_desc(void);

//! A function pointer to the dispatcher implementation
extern VOLK_API p_32fc_s32fc_multiply_32fc volk_gnsssdr_32fc_s32fc_multiply_32fc;

//! A function pointer to the fastest aligned implementation
extern VOLK_API p_32fc_s32fc_multiply_32fc volk_gnsssdr_32fc_s32fc_multiply_32fc_a;

//! A function pointer to the fastest unaligned implementation
extern VOLK_API p_32fc_s32fc_multiply_32fc volk_gnsssdr_32fc_s32fc_multiply_32fc_u;

//! Call into a specific implementation given by name
extern VOLK_API void volk_gnsssdr_32fc_s32fc_multiply_32fc_manual(lv_32fc_t*  cVector, const lv_32fc_t*  aVector, const lv_32fc_t  scalar, unsigned int  num_points, const char* impl_name);

//! Get description paramaters for this kernel
extern VOLK_API volk_gnsssdr_func_desc_t volk_gnsssdr_32fc_s32fc_multiply_32fc_get_func_desc(void);

//! A function pointer to the dispatcher implementation
extern VOLK_API p_32fc_x2_dot_prod_32fc volk_gnsssdr_32fc_x2_dot_prod_32fc;

//! A function pointer to the fastest aligned implementation
extern VOLK_API p_32fc_x2_dot_prod_32fc volk_gnsssdr_32fc_x2_dot_prod_32fc_a;

//! A function pointer to the fastest unaligned implementation
extern VOLK_API p_32fc_x2_dot_prod_32fc volk_gnsssdr_32fc_x2_dot_prod_32fc_u;

//! Call into a specific implementation given by name
extern VOLK_API void volk_gnsssdr_32fc_x2_dot_prod_32fc_manual(lv_32fc_t*  result, const lv_32fc_t*  input, const lv_32fc_t*  taps, unsigned int  num_points, const char* impl_name);

//! Get description paramaters for this kernel
extern VOLK_API volk_gnsssdr_func_desc_t volk_gnsssdr_32fc_x2_dot_prod_32fc_get_func_desc(void);

//! A function pointer to the dispatcher implementation
extern VOLK_API p_32fc_x2_multiply_32fc volk_gnsssdr_32fc_x2_multiply_32fc;

//! A function pointer to the fastest aligned implementation
extern VOLK_API p_32fc_x2_multiply_32fc volk_gnsssdr_32fc_x2_multiply_32fc_a;

//! A function pointer to the fastest unaligned implementation
extern VOLK_API p_32fc_x2_multiply_32fc volk_gnsssdr_32fc_x2_multiply_32fc_u;

//! Call into a specific implementation given by name
extern VOLK_API void volk_gnsssdr_32fc_x2_multiply_32fc_manual(lv_32fc_t*  cVector, const lv_32fc_t*  aVector, const lv_32fc_t*  bVector, unsigned int  num_points, const char* impl_name);

//! Get description paramaters for this kernel
extern VOLK_API volk_gnsssdr_func_desc_t volk_gnsssdr_32fc_x2_multiply_32fc_get_func_desc(void);

__VOLK_DECL_END

#endif /*INCLUDED_VOLK_RUNTIME*/