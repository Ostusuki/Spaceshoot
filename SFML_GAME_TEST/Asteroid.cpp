#include "Asteroid.h"

asteroid::asteroid()
{
	dx = rand() % 8 - 4;
	dy = rand() % 8 - 4;
	name = "asteroid";
}
void asteroid::update() {
	x += dx;
	y += dy;
	/* if (x > W) x = 0;  if (x < 0) x = W;
		 if (y > H) y = 0;  if (y < 0) y = H;*/
	if (x > 1200) /* x = 0 */life = false;
	if (x < 0) x = 1200;
	if (y > 800) y = 0;
	if (y < 0) y = 800;
}