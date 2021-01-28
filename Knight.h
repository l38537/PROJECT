#pragma once
#include "Character.h"
class Knight :public Character {
private:
	int seriesAttacks;
public:
	void setSeriesAttacks(int);
	int getSeriesAttacks();

	Knight();
	void show();
};
