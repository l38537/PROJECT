#pragma once
#include "Character.h"
class Mage :public Character {
private:
	int fireball;
	int heal;
public:
	void setFireBall(int);
	void setHeal(int);

	int getHeal();
	int getFireBall();
	Mage();
	void show();
};