#include <iostream>
#include "DiamondTrap.hpp"
//#include <cstring>
//#include <cstdio>

int main(void) {
	//char buffer[sizeof(DiamondTrap)];

DEBUG_PRINT("--------------------- SECTION ---------------------");

	DiamondTrap blank;
	DiamondTrap first("First");
	DiamondTrap imposterFirst = first;
	DiamondTrap otherImposterFirst(first);

DEBUG_PRINT("--------------------- SECTION ---------------------");

	DEBUG_PRINT(blank.getName() << ": " << blank.getHitPoints());
	DEBUG_PRINT(blank.getName() << ": " << blank.getEnergyPoints());
	DEBUG_PRINT(blank.getName() << ": " << blank.getAtkDmg());
	DEBUG_PRINT(first.getName() << ": " << first.getHitPoints());
	DEBUG_PRINT(first.getName() << ": " << first.getEnergyPoints());
	DEBUG_PRINT(first.getName() << ": " << first.getAtkDmg());
	DEBUG_PRINT(imposterFirst.getName() << ": " << imposterFirst.getHitPoints());
	DEBUG_PRINT(imposterFirst.getName() << ": " << imposterFirst.getEnergyPoints());
	DEBUG_PRINT(imposterFirst.getName() << ": " << imposterFirst.getAtkDmg());

DEBUG_PRINT("--------------------- SECTION ---------------------");

	blank.whoAmI(); // This will output stuff, also
	first.whoAmI();
	imposterFirst.whoAmI();
	otherImposterFirst.whoAmI();

DEBUG_PRINT("--------------------- SECTION ---------------------");

	blank.attack("Emran");
	first.attack("Emran");
	imposterFirst.attack("Emran");

//DEBUG_PRINT("--------------------- SECTION ---------------------");
//	memcpy(buffer, static_cast<void *>(&blank), sizeof(DiamondTrap));
//	for (size_t i = 0; i < sizeof(DiamondTrap); i++) {
//		printf("%.2X\n", buffer[i]);
//	}
//	printf("\n------------------------------\n");
//	for (size_t i = 0; i < sizeof(DiamondTrap); i++) {
//		printf("%c", buffer[i]);
//	}

DEBUG_PRINT("\n--------------------- SECTION ---------------------");

	return 0;
}

