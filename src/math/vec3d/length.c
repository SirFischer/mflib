#include <mfmath.h>

double	vec3d_length(t_vec3d v)
{
	return (sqrt(v.x * v.x + v.y * v.y + v.z * v.z));
}
