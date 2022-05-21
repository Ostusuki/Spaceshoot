#include "player.h"


player::player() {
	name = "player";
}

void player::update()
{
	if (thrust)
	{
		dx += cos(angle * 0.017453f) * 0.2;
		dy += sin(angle * 0.017453f) * 0.2;
	}
	else
	{
		dx *= 0.99;
		dy *= 0.99;
	}

	int maxSpeed = 15;
	float speed = sqrt(dx * dx + dy * dy);
	if (speed > maxSpeed)
	{
		dx *= maxSpeed / speed;
		dy *= maxSpeed / speed;
	}

	x += dx;
	y += dy;

	if (x > 1200 - 25) x = 1200 - 25; if (x < 25) x = 25;
	if (y > 800 - 25) y = 800 - 25; if (y < 25) y = 25;
}



