#pragma once
class Character {
public:
	int armor;
	int hp;
	int damage;
	int mana;

	void setArmor(int);
	void setHp(int);
	void setDamage(int);
	void setMana(int);

	int getArmor();
	int getHp();
	int getDamage();
	int getMana();

	Character();
		void show();
};