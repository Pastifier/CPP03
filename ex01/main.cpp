/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebinjama <ebinjama@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 06:01:26 by ebinjama          #+#    #+#             */
/*   Updated: 2024/08/22 09:09:27 by ebinjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

int main() {

DEBUG_PRINT("----------------------- SECTION -----------------------");

	ScavTrap one("Nice");
	one.attack("some random name");
	ScavTrap Four;

DEBUG_PRINT("----------------------- SECTION -----------------------");
	
	ScavTrap two = one;

DEBUG_PRINT("----------------------- SECTION -----------------------");

	ScavTrap three("Jackson");
	three = one;

DEBUG_PRINT("----------------------- SECTION -----------------------");

	DEBUG_PRINT(one.getName() << ": " << one.getHitPoints());
	DEBUG_PRINT(one.getName() << ": " << one.getEnergyPoints());
	DEBUG_PRINT(one.getName() << ": " << one.getAtkDmg());

DEBUG_PRINT("----------------------- SECTION -----------------------");

	three.attack("Emran");
	Four.attack("Falafel");

DEBUG_PRINT("----------------------- SECTION -----------------------");

	for (int i = 0; i < 24; i++)
		Four.takeDamage(4);

DEBUG_PRINT("----------------------- SECTION -----------------------");

	for (int i = 0; i < 24; i++)
		Four.beRepaired(1);

DEBUG_PRINT("----------------------- SECTION -----------------------");
	
	Four.guardGate();
	
DEBUG_PRINT("----------------------- SECTION -----------------------");

	return 0;
}

