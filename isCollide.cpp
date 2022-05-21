#include "isCollide.h"

bool isCollide(Entity* a, Entity* b)
{
	return (b->x - a->x) * (b->x - a->x) +
		(b->y - a->y) * (b->y - a->y) <
		(a->R + b->R) * (a->R + b->R);
}