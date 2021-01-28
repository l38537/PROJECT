#pragma once
class Character {
public:
	int armor;
	int hp;
	int attackSpeed;
	int damage;
	int mana;

	void setArmor(int);
	void setHp(int);
	void setAttackSpeed(int);
	void setDamage(int);
	void setMana(int);

	int getArmor();
	int getHp();
	int getAttackSpeed();
	int getDamage();
	int getMana();

	Character();
		void show();
};