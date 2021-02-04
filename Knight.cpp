#include <iostream>
#include "Knight.h"
using namespace std;

void Knight::setSeriesAttacks(int fSeriesAttacks) { seriesAttacks = fSeriesAttacks; }
int Knight::getSeriesAttacks() { return seriesAttacks; }

Knight::Knight() {
	armor = 5;
	hp = 500;
	damage = 50;
	mana = 100;
	seriesAttacks = 100;
}
void Knight::show() {
	cout << "Knight:\n";
	Character::show();
	cout << "Series Attacks(damage" << seriesAttacks << ')' << "(-100mana)" << endl << endl;
}