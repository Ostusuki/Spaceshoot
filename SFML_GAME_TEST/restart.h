#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
#include <fstream>
#include <sstream>
#include <time.h>
#include <list>
using namespace sf;
const int W = 1200;
const int H = 800;

float DEGTORAD = 0.017453f;
int scorerank[6];

//Start
int turnback = 0, fakescore = 0;
int score = 0, buff = 0;
int life = 3;
int x_background = 0, sound_menu = 0, sound_play = 0;
bool menu_on = true, menu_score_on = false, menu_high_score_on = false;
int menu_start = 100;
Time choose_delaytime = sf::milliseconds(150), score_delaytime = milliseconds(1000);

void restart(bool start) {
	if (start) {
		score = 0;
		buff = 0;
		life = 3;
		x_background = 0, sound_menu = 0, sound_play = 0;
		menu_start = 100;
	}
}


