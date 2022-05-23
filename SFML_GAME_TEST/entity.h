#pragma once
#include "animation.h"
#ifndef ENTITY_H
#define ENTITY_H

class Entity {
public:
    float x, y, dx = 0, dy = 0, R, angle;
    int life;
    std::string name;
    Animation anim;

    Entity();

    void settings(Animation& a, int X, int Y, float Angle = 0, int radius = 1);

    virtual void update() {};

    void draw(RenderWindow& app);

    virtual ~Entity() {};
};

#endif // ENTITY_H