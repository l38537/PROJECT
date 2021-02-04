#include <iostream>
#include "Paladin.h"
using namespace std;

void Paladin::setUpArmor(int farmorup) { upArmor = farmorup; }
int Paladin::getUpArmor() { return upArmor; }

Paladin::Paladin() {
	armor = 7;
	hp = 500;
	damage = 50;
	mana = 300;
	upArmor = 4;
}
void Paladin::show() {
	cout << "Paladin:\n";
	Character::show();
	cout << "Spell UpArmor(+4Armor" << "(-300mana)" << endl << endl;
}