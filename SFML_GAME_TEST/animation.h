#include <SFML/Graphics.hpp>
#include <ctime>
#include <list>
#include <cmath>
//#include "restart.h"

#ifndef ANIMATION_H
#define ANIMATION_H
    using namespace sf;
    class Animation {
    public:
        float Frame, speed;
        Sprite sprite;
        std::vector<IntRect> frames;

        Animation();
        Animation(Texture& t, int x, int y, double w, int h, int count, float Speed);
        void update();
        bool isEnd();

    };

#endif 

