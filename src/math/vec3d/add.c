#include <mfmath.h>

t_vec3d	vec3d_add(t_vec3d a, t_vec3d b)
{
	return ((t_vec3d){.x = a.x + b.x, .y = a.y + b.y, .z = a.z + b.z});
}
