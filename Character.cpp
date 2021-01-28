#include <iostream>
#include "Character.h"
using namespace std;

void Character::setArmor(int fArmor) { armor = fArmor; }
void Character::setHp(int fHp) { hp = fHp; }
void Character::setAttackSpeed(int fAttackSpeed) { attackSpeed = fAttackSpeed; }
void Character::setDamage(int fDamage) { damage = fDamage; }
void Character::setMana(int fMana) { mana = fMana; }

int Character::getArmor() { return armor; }
int Character::getHp() { return hp; }
int Character::getAttackSpeed() { return attackSpeed; }
int Character::getDamage() { return damage; }
int Character::getMana() { return mana; }

Character::Character() {
		armor = 0;
		hp = 0;
		attackSpeed = 0;
		damage = 0;
		mana = 0;
	}
	void Character::show() {
		cout << "Armor " << armor << endl << "Hp " << hp << endl << "Attack speed " << attackSpeed <<
			endl << "Damage " << damage << endl;
	}

