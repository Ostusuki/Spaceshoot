#include "bullet.h"


bullet::bullet()
{
	name = "bullet";
}

void  bullet::update()
{
	dx = cos(angle * 0.017453) * 6;
	dy = sin(angle * 0.017453) * 6;
	x += dx;
	y += dy;

	if (x > 1200 || x<0 || y>800 || y < 0) life = 0;
}
