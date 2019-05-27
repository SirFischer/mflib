#include <mfmath.h>

t_vec3d	vec3d_scalar_multiply(t_vec3d a, double s)
{
	return ((t_vec3d){.x = a.x * s, .y = a.y * s, .z = a.z * s});
}
