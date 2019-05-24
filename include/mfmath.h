/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mfmath.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfischer <mfischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 22:23:16 by mfischer          #+#    #+#             */
/*   Updated: 2019/05/18 16:18:36 by mfischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MYMATH_H
# define MYMATH_H

#include <math.h>
#include <math_types.h>

typedef struct	s_intrect
{
	int			x;
	int			y;
	int			w;
	int			h;
}				t_intrect;

/*
** t_vec3d operations
*/

t_vec3d			vec3d_cross(t_vec3d a, t_vec3d b);
double			vec3d_dot(t_vec3d a, t_vec3d b);
t_vec3d			vec3d_normalize(t_vec3d v);
t_vec3d			vec3d_sub(t_vec3d a, t_vec3d b);

/*
** MATRIX OPERATIONS
*/

void			mat4_init(double mat[4][4]);
void			mat3_init(double mat[3][3]);
void			mat2_init(double mat[2][2]);

void			mat4_clear(double mat[4][4]);
void			mat3_clear(double mat[3][3]);
void			mat2_clear(double mat[2][2]);

void			mat4_copy(double dest[4][4], double src[4][4]);
void			mat3_copy(double dest[3][3], double src[3][3]);

void			mat4_translate(double mat[4][4], double x, double y, double z);
void			mat3_translate(double mat[3][3], double x, double y);

void			mat4_scale(double mat[4][4], double x, double y, double z);
void			mat3_scale(double mat[3][3], double x, double y);

void			mat4_rotate_yaw(double mat[4][4], double angle);
void			mat4_rotate_pitch(double mat[4][4], double angle);
void			mat4_rotate_roll(double mat[4][4], double angle);

void			mat3_rotate(double mat[3][3], double angle);

/*
** MATRIX & MATRIX OPERATIONS
*/

void			mat4mat4_multiply(	double mat1[4][4],
									double mat2[4][4], double res[4][4]);
void			mat3mat3_multiply(	double mat1[3][3],
									double mat2[3][3], double res[3][3]);
void			mat2mat2_multiply(	double mat1[2][2],
									double mat2[2][2], double res[2][2]);

/*
** VECTOR OPERATIONS
*/

void			vec4_init(double vec[4]);
void			vec3_init(double vec[3]);
void			vec2_init(double vec[2]);

void			vec4_clear(double vec[4]);
void			vec3_clear(double vec[3]);
void			vec2_clear(double vec[2]);

double			vec4_magnitude(double vector[4]);
double			vec3_magnitude(double vector[3]);
double			vec2_magnitude(double vector[2]);

void			vec4_normalize(double vector[4], double result[4]);
void			vec3_normalize(double vector[3], double result[3]);
void			vec2_normalize(double vector[2], double result[2]);

void			vec4_normalize_s(double vector[4]);
void			vec3_normalize_s(double vector[3]);
void			vec2_normalize_s(double vector[2]);

double			vec4_dot(double vec[4], double vec2[4]);
double			vec3_dot(double vec[3], double vec2[3]);
double			vec2_dot(double vec[2], double vec2[2]);

void			vec4_copy(double dest[4], double src[4]);
void			vec3_copy(double dest[3], double src[3]);
void			vec2_copy(double dest[2], double src[2]);

void			vec4scalar_multiply(double vec[4], double scalar, double res[4]);
void			vec3scalar_multiply(double vec[3], double scalar, double res[3]);
void			vec2scalar_multiply(double vec[2], double scalar, double res[2]);

void			vec4scalar_add(double vec[4], double scalar, double res[4]);
void			vec3scalar_add(double vec[3], double scalar, double res[3]);
void			vec2scalar_add(double vec[2], double scalar, double res[2]);

void	vec4scalar_divide(double vec[4], double scalar, double res[4]);
void	vec3scalar_divide(double vec[3], double scalar, double res[3]);
void	vec2scalar_divide(double vec[2], double scalar, double res[2]);

/*
** VECTOR & VECTOR OPERATIONS
*/

void			vec4vec4_substract(double minuend[4], double subtrahend[4], double difference[4]);
void			vec3vec3_substract(double minuend[3], double subtrahend[3], double difference[3]);
void			vec2vec2_substract(double minuend[2], double subtrahend[2], double difference[2]);

void			vec4vec4_add(double addend[4], double augend[4], double summand[4]);
void			vec3vec3_add(double addend[3], double augend[3], double summand[3]);
void			vec2vec2_add(double addend[2], double augend[2], double summand[2]);

void			vec4vec4_divide(double dividend[4], double divisor[4], double quotient[4]);
void			vec3vec3_divide(double dividend[3], double divisor[3], double quotient[3]);
void			vec2vec2_divide(double dividend[2], double divisor[2], double quotient[2]);

void			vec3vec3_crossproduct(double v1[3], double v2[3], double result[3]);

void			vec3vec4_convert(double vec[3], double res[4]);

/*
** MATRIX & VECTOR OPERATIONS
*/

void			mat4vec4_multiply(double mat[4][4], double vec[4], double res[4]);
void			mat3vec3_multiply(double mat[3][3], double vec[3], double res[3]);
void			mat2vec2_multiply(double mat[2][2], double vec[2], double res[2]);

#endif
