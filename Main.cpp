#include <iostream>
#include "Character.h"
#include "Knight.h"
#include "Mage.h"
#include "Paladin.h"
using namespace std;
int main() {
	Mage mage;
	Knight knight;
	Paladin paladin;
	mage.show();
	paladin.show();
	knight.show();
}
