#include <iostream>
#include "Mage.h"
using namespace std;

void Mage::setHeal(int fheal) { heal = fheal; }
void Mage::setFireBall(int fFireball) { fireball = fFireball; }

int Mage::getHeal() { return heal; }
int Mage::getFireBall() { return fireball; }

Mage::Mage() {
	armor = 2;
	hp = 300;
	attackSpeed = 2;
	damage = 25;
	mana = 600;
	fireball = 150;
	heal = 100;
}
void Mage::show() {
	Character::show();
	cout << "Spell heal(heal hp " << heal << ')' << "(-200mana)" << endl << "Spell fireball(damage " << fireball << ')' << "(-200mana)" << endl << endl;
}
