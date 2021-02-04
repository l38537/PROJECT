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

	///

	cout << "Select enemy class :\n\n" << "Characteristic ";
	mage.show();
	cout << "Characteristic ";
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
			if (eperson == "mage") {
				cout << "Enemy class:\n";
				mage.show();
			}
			else
				
					if (eperson != "paladin" || eperson != "knight" || eperson != "mage") {
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
							else
								if (eperson == "mage") {
									cout << "Enemy class\n";
									mage.show();
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
				cout << endl <<"knight attack paladin: " << endl;
				char b;
				int mana = knight.getMana();
				int damageSA = knight.getSeriesAttacks();
				int damage = knight.getDamage();
				int armor = paladin.getArmor();
				int pdamageSA = damageSA - armor;
				int pdamage = damage - armor;//damage - damage * part
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
				paladin.show();
				//паладин ударил рыцаря
				cout << "paladin attack knight: " << endl;
				damage = paladin.getDamage();
				armor = knight.getArmor();
				int armor2 = paladin.getArmor();
				mana = paladin.getMana();
				pdamage = damage - armor;//damage - damage * part
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
				}
				else hp = hp - pdamage;
				knight.setHp(hp);
				knight.show();
				if (paladin.getHp() <= 0) {
					cout << "You win \n";
				}
				else
					if (knight.getHp() <= 0) {
						cout << "You lose\n";
					}
			}
		}
		else
			if (yperson == "paladin" && eperson == "paladin") {
				
			}
			else
				if (yperson == "mage" && eperson == "paladin") {
				
				}
		//против рыцаря
		if (yperson == "knight" && eperson == "knight") {

		}
		else
			if (yperson == "paladin" && eperson == "knight") {

			}
			else
				if (yperson == "mage" && eperson == "knight") {

				}
		//против мага
		if (yperson == "knight" && eperson == "mage") {

		}
		else
			if (yperson == "paladin" && eperson == "mage") {

			}
			else
				if (yperson == "mage" && eperson == "mage") {

				}
	}
	else 
		if (Sfight == "no") {
			exit(0);
		
		}
		else 
			if (Sfight != "yes" || Sfight != "no") {
				cout << "Error, try again:";
				cin >> Sfight;
				if (Sfight == "yes") {

				}
				else
					if (Sfight == "no") {
						exit(0);

					}
			}

}
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

