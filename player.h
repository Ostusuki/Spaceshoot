#pragma once
#include "bullet.h";
#ifndef PLAYER_H
#define PLAYER_H
class player : public Entity
{
public:
	bool thrust;

	player();
	void update();
};


#endif

