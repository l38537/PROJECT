#include <iostream>
#include <string>
#include <ctime>
#include <windows.h>
#include "Character.h"
#include "Knight.h"
#include "Mage.h"
#include "Paladin.h"
#include "Fight.h"
using namespace std;
void ChoosePersonAndFight() {
	string yperson;
	string eperson;
	string Sfight;
	Mage mage;
	Knight knight;
	Paladin paladin;
	cout << "Choose your class:\n\n" << "Characteristic ";
	mage.show();
	cout << "Characteristic ";
	paladin.show();
	cout << "Characteristic ";
	knight.show();
	cout << "Enter class name: ";
	cin >> yperson;
	if (yperson == "knight") {
		cout << "Your class:\n";
		knight.show();
	}
	else
		if (yperson == "paladin") {
			cout << "Your class:\n";
			paladin.show();
		}
		else
			if (yperson == "mage") {
				cout << "Your class:\n";
				mage.show();
			}
			else
				if (yperson != "paladin" || yperson != "knight" || yperson != "mage") {
					cout << "Class does not exist, try again:";
					cin >> yperson;
					if (yperson == "knight") {
						cout << "Your class:\n";
						knight.show();
					}
					else
						if (yperson == "paladin") {
							cout << "Your class:\n";
							paladin.show();
						}
						else
							if (yperson == "mage") {
								cout << "Your class:\n";
								mage.show();
							}
				}
			
	system("cls");

	///=====================
	if (yperson == "mage") {
		cout << "Select enemy class :\n\n" << "Characteristic ";
		paladin.show();
		cout << "Characteristic ";
		knight.show();
		cout << "Enter name enemy class: ";
		cin >> eperson;
		if (eperson == "knight") {
			cout << "Enemy class:\n";
			knight.show();
		}
		else
			if (eperson == "paladin") {
				cout << "Enemy class:\n";
				paladin.show();
			}
			else
					if (eperson != "paladin" || eperson != "knight") {
						cout << "Class does not exist, try again:";
						cin >> eperson;
						if (eperson == "knight") {
							cout << "Enemy class\n";
							knight.show();
						}
						else
							if (eperson == "paladin") {
								cout << "Enemy class\n";
								paladin.show();
							}
					}
	}
	else
		if (yperson == "knight") {
			cout << "Select enemy class :\n\n" << "Characteristic ";
			mage.show();
			cout << "Characteristic ";
			paladin.show();
			cout << "Enter name enemy class: ";
			cin >> eperson;
			if (eperson == "mage") {
				cout << "Enemy class:\n";
				mage.show();
			}
			else
				if (eperson == "paladin") {
					cout << "Enemy class:\n";
					paladin.show();
				}
				else
					if (eperson != "paladin" || eperson != "mage") {
						cout << "Class does not exist, try again:";
						cin >> eperson;
						if (eperson == "knight") {
							cout << "Enemy class\n";
							knight.show();
						}
						else
							if (eperson == "paladin") {
								cout << "Enemy class\n";
								paladin.show();
							}
					}
		}
		else
			if (yperson == "paladin") {
				cout << "Select enemy class :\n\n" << "Characteristic ";
				mage.show();
				cout << "Characteristic ";
				knight.show();
				cout << "Enter name enemy class: ";
				cin >> eperson;
				if (eperson == "mage") {
					cout << "Enemy class:\n";
					mage.show();
				}
				else
					if (eperson == "knight") {
						cout << "Enemy class:\n";
						knight.show();
					}
					else
						if (eperson != "knight" || eperson != "mage") {
							cout << "Class does not exist, try again:";
							cin >> eperson;
							if (eperson == "knight") {
								cout << "Enemy class\n";
								knight.show();
							}
							else
								if (eperson == "mage") {
									cout << "Enemy class\n";
									mage.show();
								}
						}
			}

	system("cls");
	YourCharacter(yperson);
	EnemyCharacter(eperson);
	//битва
	cout << "Start a fight?(enter yes or no)";
	cin >> Sfight;
	if (Sfight == "yes") {
		//против паладина
		if (yperson == "knight" && eperson == "paladin") {
			while (knight.getHp() >= 0 && paladin.getHp() >= 0) {
				//рыцарь ударил паладина
				cout << endl << "knight attack paladin: " << endl;
				char b;
				int mana = knight.getMana();
				int damageSA = knight.getSeriesAttacks();
				int damage = knight.getDamage();
				int armor = paladin.getArmor();
				int pdamageSA = damageSA - armor;
				int pdamage = damage - armor;
				int hp = paladin.getHp();
				cout << endl << "atack(input a) or Series of Attacks(-100mana)(input s)";
				cin >> b;
				if (b == 'a') {
					hp = hp - pdamage;

				}
				else
					if (mana >= 100) {
						if (b == 's') {
							hp = hp - pdamageSA;
							mana -= 100;
							knight.setMana(mana);
						}
					}
				paladin.setHp(hp);
				knight.show();
				cout << endl << endl;
				paladin.show();
				//паладин ударил рыцаря
				cout << "paladin attack knight: " << endl;
				damage = paladin.getDamage();
				armor = knight.getArmor();
				int armor2 = paladin.getArmor();
				mana = paladin.getMana();
				pdamage = damage - armor;
				hp = knight.getHp();
				Sleep(1000);
				srand(time(0));
				int m = rand() % 10;
				if (mana >= 300) {
					if (m > 4) {
						armor2 += 4;
						mana -= 300;
						paladin.setArmor(armor2);
						paladin.setMana(mana);
						cout << "Paladin increased armor by 4" << endl;
					}
					else hp = hp - pdamage;
				}
				else hp = hp - pdamage;
				knight.setHp(hp);
				knight.show();
				cout << endl << endl;
				paladin.show();
				if (paladin.getHp() <= 0) {
					cout << "You win \n";
					exit(0);
				}
				else
					if (knight.getHp() <= 0) {
						cout << "You lose\n";
						exit(0);
					}
			}
		}
		else
			if (yperson == "mage" && eperson == "paladin") {
				while (mage.getHp() >= 0 && paladin.getHp() >= 0) {
					//маг ударил паладина
					cout << endl << "mage attack paladin: " << endl;
					char b;
					int mana = mage.getMana();
					int dFireball = mage.getFireBall();
					int heal = mage.getHeal();
					int damage = mage.getDamage();
					int armor = paladin.getArmor();
					int pdamage = damage - armor;
					int hp = paladin.getHp();
					int hp2 = mage.getHp();
					cout << endl << "atack(input a) or Fireball(-200mana)(input f) or Heal(-200mana)(input h)";
					cin >> b;
						if (mana >= 200) {
							if (b == 'f') {
								hp = hp - dFireball;
								mana -= 200;
								mage.setMana(mana);
							}
							else
								if (b == 'h') {
									hp2 += heal;
									mana -= 200;
									mage.setMana(mana);
									mage.setHp(hp2);

								}
								else
									if (b == 'a') {
										hp = hp - pdamage;
									}
								

						}
					paladin.setHp(hp);
					mage.show();
					cout << endl << endl;
					paladin.show();
					//паладин ударил мага
					cout << "paladin attack mage: " << endl;
					damage = paladin.getDamage();
					armor = mage.getArmor();
					int armor2 = paladin.getArmor();
					mana = paladin.getMana();
					pdamage = damage - armor;
					hp = mage.getHp();
					Sleep(1000);
					srand(time(0));
					int m = rand() % 10;
					if (mana >= 300) {
						if (m > 4) {
							armor2 += 4;
							mana -= 300;
							paladin.setArmor(armor2);
							paladin.setMana(mana);
							cout << "Paladin increased armor by 4" << endl;

						}
						else hp = hp - pdamage;
					}
					else hp = hp - pdamage;
					mage.setHp(hp);
					mage.show();
					cout << endl << endl;
					paladin.show();
					if (paladin.getHp() <= 0) {
						cout << "You win \n";
						exit(0);
					}
					else
						if (mage.getHp() <= 0) {
							cout << "You lose\n";
							exit(0);
						}
				}
			}
		//против рыцаря
		if (yperson == "paladin" && eperson == "knight") {
			while (knight.getHp() >= 0 && paladin.getHp() >= 0) {
				//паладин ударил рыцаря
				cout << endl << "Paladin attack knight: " << endl;
				char b;
				int mana = paladin.getMana();
				int upArmor = paladin.getUpArmor();
				int damage = paladin.getDamage();
				int armor = knight.getArmor();
				int armor2 = paladin.getArmor();
				int pdamage = damage - armor;
				int hp = knight.getHp();
				cout << endl << "atack(input a) or Up Armor(-300mana)(input u)";
				cin >> b;
				if (b == 'a') {
					hp = hp - pdamage;

				}
				else
					if (mana >= 300) {
						if (b == 'u') {
							armor2 += upArmor;
							mana -= 300;
							paladin.setMana(mana);
							paladin.setArmor(armor2);
						}
					}
				knight.setHp(hp);
				paladin.show();
				cout << endl << endl;
				knight.show();
				//рыцарь ударил паладина
				cout << "knight attack paladin: " << endl;
				damage = knight.getDamage();
				armor = paladin.getArmor();
				mana = knight.getMana();
				int damageSA = knight.getSeriesAttacks();
				int pdamageSA = damageSA - armor;
				pdamage = damage - armor;
				hp = paladin.getHp();
				Sleep(1000);
				srand(time(0));
				int m = rand() % 10;
				if (mana >= 100) {
					if (m > 4) {
						mana -= 100;
						hp = hp - pdamageSA;
						knight.setMana(mana);
					}
					else hp = hp - pdamage;
				}
				else hp = hp - pdamage;
				paladin.setHp(hp);
				paladin.show();
				cout << endl << endl;
				knight.show();
				if (knight.getHp() <= 0) {
					cout << "You win \n";
					exit(0);
				}
				else
					if (paladin.getHp() <= 0) {
						cout << "You lose\n";
						exit(0);
					}
			}
		}
		else
			if (yperson == "mage" && eperson == "knight") {
				while (mage.getHp() >= 0 && paladin.getHp() >= 0) {
					//маг ударил рыцаря
					cout << endl << "mage attack knight: " << endl;
					char b;
					int mana = mage.getMana();
					int dFieball = mage.getFireBall();
					int heal = mage.getHeal();
					int damage = mage.getDamage();
					int armor = knight.getArmor();
					int pdamage = damage - armor;
					int hp = knight.getHp();
					int hp2 = mage.getHp();
					cout << endl << "atack(input a) or Fireball(-200mana)(input f) or Heal(-200mana)(input h)";
					cin >> b;
					if (b == 'a') {
						hp = hp - pdamage;

					}
					else
						if (mana >= 200) {
							if (b == 'f') {
								hp = hp - dFieball;
								mana -= 200;
								mage.setMana(mana);
							}
							else
								if (b == 'h') {
									hp += heal;
									mana -= 200;
									mage.setMana(mana);
									mage.setHp(hp);

								}
						}
					knight.setHp(hp);
					mage.show();
					cout << endl << endl;
					knight.show();
					//рыцарь ударил мага
					cout << "knight attack mage: " << endl;
					damage = knight.getDamage();
					armor = mage.getArmor();
					mana = knight.getMana();
					int damageSA = knight.getSeriesAttacks();
					int pdamageSA = damageSA - armor;
					pdamage = damage - armor;
					hp = mage.getHp();
					Sleep(1000);
					srand(time(0));
					int m = rand() % 10;
					if (mana >= 100) {
						if (m > 4) {
							mana -= 100;
							hp = hp - pdamageSA;
							knight.setMana(mana);
						}
						else hp = hp - pdamage;
					}
					else hp = hp - pdamage;
					mage.setHp(hp);
					mage.show();
					cout << endl << endl;
					knight.show();
					if (knight.getHp() <= 0) {
						cout << "You win \n";
						exit(0);
					}
					else
						if (mage.getHp() <= 0) {
							cout << "You lose\n";
							exit(0);
						}
				}
			}
		//против мага
		if (yperson == "knight" && eperson == "mage") {
			//рыцарь ударил мага
			while (mage.getHp() >= 0 && knight.getHp() >= 0) {
				cout << endl << "knight attack mage: " << endl;
				char b;
				int mana = knight.getMana();
				int damageSA = knight.getSeriesAttacks();
				int damage = knight.getDamage();
				int armor = mage.getArmor();
				int pdamageSA = damageSA - armor;
				int pdamage = damage - armor;
				int hp = mage.getHp();
				cout << endl << "atack(input a) or Series of Attacks(-100mana)(input s)";
				cin >> b;
				if (b == 'a') {
					hp = hp - pdamage;

				}
				else
					if (mana >= 100) {
						if (b == 's') {
							hp = hp - pdamageSA;
							mana -= 100;
							knight.setMana(mana);
						}
					}
				mage.setHp(hp);
				knight.show();
				cout << endl << endl;
				mage.show();
				//маг ударил рыцаря
				cout << "mage attack knight: " << endl;
				damage = mage.getDamage();
				armor = knight.getArmor();
				mana = mage.getMana();
				int dFireball = mage.getFireBall();
				int heal = mage.getHeal();
				int hp2 = mage.getHp();
				pdamage = damage - armor;
				hp = knight.getHp();
				Sleep(1000);
				srand(time(0));
				int m = rand() % 10;
				if (mana >= 200) {
					if (m > 4) {
						mana -= 200;
						hp = hp - dFireball;
						mage.setMana(mana);
					}
					else
						if (m == 4 || m == 5) {
							mana -= 200;
							hp2 += heal;
							mage.setMana(mana);
							mage.setHp(hp2);

						}
						else hp = hp - pdamage;
				}
				else hp = hp - pdamage;
				knight.setHp(hp);
				knight.show();
				cout << endl << endl;
				mage.show();
				if (mage.getHp() <= 0) {
					cout << "You win \n";
					exit(0);
				}
				else
					if (knight.getHp() <= 0) {
						cout << "You lose\n";
						exit(0);
					}
			}
		}

		else
			if (yperson == "paladin" && eperson == "mage") {
				while (knight.getHp() >= 0 && paladin.getHp() >= 0) {
					//паладин ударил мага
					cout << endl << "Paladin attack mage: " << endl;
					char b;
					int mana = paladin.getMana();
					int upArmor = paladin.getUpArmor();
					int damage = paladin.getDamage();
					int armor = mage.getArmor();
					int armor2 = paladin.getArmor();
					int pdamage = damage - armor;
					int hp = mage.getHp();
					cout << endl << "atack(input a) or Up Armor(-300mana)(input u)";
					cin >> b;
					if (b == 'a') {
						hp = hp - pdamage;

					}
					else
						if (mana >= 300) {
							if (b == 'u') {
								armor2 += upArmor;
								mana -= 300;
								paladin.setMana(mana);
								paladin.setArmor(armor2);
							}
						}
					mage.setHp(hp);
					paladin.show();
					cout << endl << endl;
					mage.show();
					//маг ударил паладина
					cout << "mage attack knight: " << endl;
					damage = mage.getDamage();
					armor = paladin.getArmor();
					mana = mage.getMana();
					int dFireball = mage.getFireBall();
					int heal = mage.getHeal();
					int hp2 = mage.getHp();
					pdamage = damage - armor;
					hp = paladin.getHp();
					Sleep(1000);
					srand(time(0));
					int m = rand() % 10;
					if (mana >= 200) {
						if (m > 4) {
							mana -= 200;
							hp = hp - dFireball;
							mage.setMana(mana);
						}
						else
							if (m == 4 || m == 3) {
								mana -= 200;
								hp2 += heal;
								mage.setMana(mana);
								mage.setHp(hp2);

							}
							else hp = hp - pdamage;
					}
					else hp = hp - pdamage;
					paladin.setHp(hp);
					paladin.show();
					cout << endl << endl;
					mage.show();
					if (mage.getHp() <= 0) {
						cout << "You win \n";
						exit(0);
					}
					else
						if (paladin.getHp() <= 0) {
							cout << "You lose\n";
							exit(0);
						}
				}
			}
	}
			
	else 
		if (Sfight == "no") {
			exit(0);
		
		}

}
//==================================
void YourCharacter(string fyperson){
	Mage mage;
	Knight knight;
	Paladin paladin;

	if (fyperson == "knight") {
		cout << "Your class knight\n";
		knight.show();
	}
	else
		if (fyperson == "paladin") {
			cout << "Your class paladin\n";
			paladin.show();
		}
		else
			if (fyperson == "mage") {
				cout << "Your class mage\n";
				mage.show();
			}
}
void EnemyCharacter(string feperson) {
	Mage mage;
	Knight knight;
	Paladin paladin;
	if (feperson == "knight") {
		cout << "Enemy class knight\n";
		knight.show();
	}
	else
		if (feperson == "paladin") {
			cout << "Enemy class paladin\n";
			paladin.show();
		}
		else
			if (feperson == "mage") {
				cout << "Enemy class mage\n";
				mage.show();
			}
}

