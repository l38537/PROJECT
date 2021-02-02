#include <iostream>
#include <string>
#include "Character.h"
#include "Knight.h"
#include "Mage.h"
#include "Paladin.h"
#include "Fight.h"
using namespace std;
void ChooseCharacterAndEnemy() {
	string yperson;
	string eperson;
	Mage mage;
	Knight knight;
	Paladin paladin;
//==========YourPerson==========
	cout << "Choose your class:\n\n" << "Characteristic mage: \n";
	mage.show();
	cout << "Characteristic paladin: \n";
	paladin.show();
	cout << "Characteristic knight: \n";
	knight.show();
	cout << "Enter class name: ";
	cin >> yperson;
	if (yperson == "knight") {
		cout << "Your class knight\n";
		knight.show();
	}
	else
		if (yperson == "paladin") {
			cout << "Your class paladin\n";
			paladin.show();
		}
		else
			if (yperson == "mage") {
				cout << "Your class mage\n";
				mage.show();
			}
			else
				if (yperson != "paladin" || yperson != "knight" || yperson != "mage") {
					cout << "Class does not exist, try again:";
					cin >> yperson;
					if (yperson == "knight") {
						cout << "Your class knight\n";
						knight.show();
					}
					else
						if (yperson == "paladin") {
							cout << "Your class paladin\n";
							paladin.show();
						}
						else
							if (yperson == "mage") {
								cout << "Your class mage\n";
								mage.show();
							}
				}
	system("cls");
//==========EnemyPerson==========
	cout << "Select enemy class :\n\n" << "Characteristic mage: \n";
	mage.show();
	cout << "Characteristic paladin: \n";
	paladin.show();
	cout << "Characteristic knight: \n";
	knight.show();
	cout << "Enter name enemy class: ";
	cin >> eperson;
	if (eperson == "knight") {
		cout << "Enemy class knight\n";
		knight.show();
	}
	else
		if (eperson == "paladin") {
			cout << "Enemy class paladin\n";
			paladin.show();
		}
		else
			if (eperson == "mage") {
				cout << "Enemy class mage\n";
				mage.show();
			}
			else
				if (eperson != "paladin" || eperson != "knight" || eperson != "mage") {
					cout << "Class does not exist, try again:";
					cin >> eperson;
					if (eperson == "knight") {
						cout << "Enemy class knight\n";
						knight.show();
					}
					else
						if (eperson == "paladin") {
							cout << "Enemy class paladin\n";
							paladin.show();
						}
						else
							if (eperson == "mage") {
								cout << "Enemy class mage\n";
								mage.show();
							}
				}
	system("cls");
	YAndECharacter(yperson,eperson);
}

void YAndECharacter(string fyperson, string feperson) {
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