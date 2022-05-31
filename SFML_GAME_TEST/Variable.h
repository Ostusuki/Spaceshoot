#pragma once
#include "isCollide.h"


//Image
Texture t1, t2, t3, t4, t5, t6, t7, t8, t9, t10, t11, t12, t13;

//Animation
Animation sExplosion(t3, 0, 0, 256, 256, 48, 0.5);
Animation sRock(t4, 0, 0, 64, 64, 16, 0.2);
Animation sRock_small(t6, 0, 0, 64, 64, 16, 0.2);
Animation sBullet(t5, 0, 0, 32, 64, 16, 0.8);
Animation sPlayer(t1, 40, 40, 40, 45, 1, 0);
Animation sPlayer_down(t1, 80, 40, 40, 45, 1, 0);
Animation sPlayer_up(t1, 0, 40, 40, 45, 1, 0);
Animation sExplosion_ship(t7, 0, 0, 192, 192, 64, 0.5);

//Sound
sf::SoundBuffer buffer, choose, explosition;
sf::Sound bullet_sound, choose_sound, explosition_sound;

//Player
player* p = new player();

//Entity
std::list<Entity*> entities;

//Font
sf::Font f, font_space, arial;

//Text
sf::Text mytext, scores_text, top1, top2, top3, top4, top5;


void top() {
	//Top1
	top1.setFont(arial);
	top1.setCharacterSize(40);
	top1.setFillColor(sf::Color::Yellow);
	std::stringstream ss1;
	ss1 << scorerank[1];
	top1.setPosition(530, 200);
	top1.setString(ss1.str().c_str());

	//Top2
	top2.setFont(arial);
	top2.setCharacterSize(40);
	top2.setFillColor(sf::Color::Yellow);
	std::stringstream ss2;
	ss2 << scorerank[2];
	top2.setPosition(530, 280);
	top2.setString(ss2.str().c_str());

	//Top3
	top3.setFont(arial);
	top3.setCharacterSize(40);
	top3.setFillColor(sf::Color::Yellow);
	std::stringstream ss3;
	ss3 << scorerank[3];
	top3.setPosition(530, 360);
	top3.setString(ss3.str().c_str());

	//Top4
	top4.setFont(arial);
	top4.setCharacterSize(40);
	top4.setFillColor(sf::Color::Yellow);
	std::stringstream ss4;
	ss4 << scorerank[4];
	top4.setPosition(530, 430);
	top4.setString(ss4.str().c_str());

	//Top5
	top5.setFont(arial);
	top5.setCharacterSize(40);
	top5.setFillColor(sf::Color::Yellow);
	std::stringstream ss5;
	ss5 << scorerank[5];
	top5.setPosition(530, 500);
	top5.setString(ss5.str().c_str());

	return;
}

void explosion() {
	for (auto a : entities)
		for (auto b : entities)
		{
			if (a->name == "asteroid" && b->name == "bullet")
				if (isCollide(a, b))
				{
					score += 100;
					a->life = false;
					b->life = false;

					Entity* e = new Entity();
					e->settings(sExplosion, a->x, a->y);
					e->name = "explosion";
					entities.push_back(e);


					for (int i = 0; i < 3; i++)
					{
						if (a->R == 15) continue;
						Entity* e = new asteroid();
						e->settings(sRock_small, a->x, a->y, rand() % 360, 15);
						entities.push_back(e);
					}

				}
			if (a->name == "player" && b->name == "asteroid")
				if (isCollide(a, b))
				{
					explosition_sound.setVolume(10000);
					explosition_sound.play();
					b->life = false;

					Entity* e = new Entity();
					e->settings(sExplosion_ship, a->x, a->y);
					e->name = "explosion";
					entities.push_back(e);

					p->settings(sPlayer, 30, 300, 0, 20);
					p->dx = 0; p->dy = 0;
					life--;
				}
		}

	for (auto e : entities)
		if (e->name == "explosion")
			if (e->anim.isEnd()) e->life = 0;

	if (rand() % 150 == 0)
	{
		for (int i = 0; i < 5; i++)
		{
			asteroid* a = new asteroid();
			a->settings(sRock, rand() % 100 + 1100, rand() % 800, rand() % 90 + 225, 25);
			entities.push_back(a);
		}
	}

}