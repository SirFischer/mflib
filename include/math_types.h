/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   math_types.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfischer <mfischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/31 00:10:46 by mfischer          #+#    #+#             */
/*   Updated: 2019/09/22 20:32:26 by mfischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATH_TYPES_H
# define MATH_TYPES_H

typedef union u_vec2f	t_vec2f;
struct					s_vec2f
{
	float				x;
	float				y;
};
union					u_vec2f
{
	struct s_vec2f		n;
	float				a[2];
};

typedef union u_vec3f	t_vec3f;
struct					s_vec3f
{
	float				x;
	float				y;
	float				z;
};
struct					s_vec3f_vec2fc
{
	t_vec2f				vec2f;
	float				z;
};
union					u_vec3f
{
	struct s_vec3f			n;
	float					a[3];
	struct s_vec3f_vec2fc	c2;
};

typedef union u_vec4f	t_vec4f;
struct					s_vec4f
{
	float				x;
	float				y;
	float				z;
	float				w;
};
struct					s_vec4f_vec2fc
{
	t_vec2f				vec2f;
	float				z;
	float				w;
};
struct					s_vec4f_vec3fc
{
	t_vec3f				vec3f;
	float				w;
};
union					u_vec4f
{
	struct s_vec4f			n;
	float					a[4];
	struct s_vec4f_vec2fc	c2;
	struct s_vec4f_vec3fc	c3;
};

typedef union u_vec2d	t_vec2d;
struct					s_vec2d
{
	double				x;
	double				y;
};
union					u_vec2d
{
	struct s_vec2d		n;
	double				a[2];
};

typedef union u_vec3d	t_vec3d;
struct					s_vec3d
{
	double				x;
	double				y;
	double				z;
};
struct					s_vec3d_vec2dc
{
	t_vec2d				vec2d;
	double				z;
};
union					u_vec3d
{
	struct s_vec3d			n;
	double					a[3];
	struct s_vec3d_vec2dc	c2;
};

typedef union u_vec4d	t_vec4d;
struct					s_vec4d
{
	double				x;
	double				y;
	double				z;
	double				w;
};
struct					s_vec4d_vec2dc
{
	t_vec2d				vec2d;
	double				z;
	double				w;
};
struct					s_vec4d_vec3dc
{
	t_vec3d				vec3d;
	double				w;
};
union					u_vec4d
{
	struct s_vec4d			n;
	double					a[4];
	struct s_vec4d_vec2dc	c2;
	struct s_vec4d_vec3dc	c3;
};

typedef union u_vec2i	t_vec2i;
struct					s_vec2i
{
	int					x;
	int					y;
};
union					u_vec2i
{
	struct s_vec2i		n;
	int					a[2];
};

typedef union u_vec3i	t_vec3i;
struct					s_vec3i
{
	int					x;
	int					y;
	int					z;
};
struct					s_vec3i_vec2ic
{
	t_vec2i				vec2i;
	int					z;
};
union					u_vec3i
{
	struct s_vec3i			n;
	int						a[3];
	struct s_vec3i_vec2ic	c2;
};

typedef union u_vec4i	t_vec4i;
struct					s_vec4i
{
	int					x;
	int					y;
	int					z;
	int					w;
};
struct					s_vec4i_vec2ic
{
	t_vec2i				vec2i;
	int					z;
	int					w;
};
struct					s_vec4i_vec3ic
{
	t_vec3i				vec3i;
	int					w;
};
union					u_vec4i
{
	struct s_vec4i			n;
	int						a[4];
	struct s_vec4i_vec2ic	c2;
	struct s_vec4i_vec3ic	c3;
};

typedef struct			s_rect_i
{
	int					x;
	int					y;
	int					w;
	int					h;
}						t_rect_i;

typedef union			u_mat4d
{
	double				a[4][4];
	t_vec4d				v[4];
}						t_mat4d;

typedef union			u_mat3d
{
	double				a[3][3];
	t_vec3d				v[3];
}						t_mat3d;

typedef union			u_mat2d
{
	double				a[2][2];
	t_vec2d				v[2];
}						t_mat2d;

typedef union			u_mat4f
{
	float				a[4][4];
	t_vec4f				v[4];
}						t_mat4f;

typedef union			u_mat3f
{
	float				a[3][3];
	t_vec3f				v[3];
}						t_mat3f;

typedef union			u_mat2f
{
	float				a[2][2];
	t_vec2f				v[2];
}						t_mat2f;

typedef struct			s_mat4f_s
{
	float				a[16];
}						t_mat4f_t;

typedef struct			s_mat3f_s
{
	float				a[9];
}						t_mat3f_t;

typedef struct			s_mat2f_s
{
	float				a[4];
}						t_mat2f_t;

#endif
