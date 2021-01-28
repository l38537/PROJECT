#pragma once
#include "Character.h"
using namespace std;
class Paladin :public Character {
private:
	int upArmor;
public:
	void setUpArmor(int);
	int getUpArmor();

	Paladin();
	void show();
};