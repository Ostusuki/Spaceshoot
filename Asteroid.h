#pragma once
#include "entity.h"
#ifndef ASTEROID_H
#define ASTEROID_H


class asteroid:public Entity
{
public:
	asteroid();
	void update();
};
#endif

