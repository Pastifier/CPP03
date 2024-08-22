/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebinjama <ebinjama@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 15:41:09 by ebinjama          #+#    #+#             */
/*   Updated: 2024/08/21 16:16:57 by ebinjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

int main(void) {
DEBUG_PRINT("---------------- SECTION ----------------");

	FragTrap blank;

DEBUG_PRINT("---------------- SECTION ----------------");

	FragTrap first("First");

DEBUG_PRINT("---------------- SECTION ----------------");

	FragTrap imposterFirst = first;
	FragTrap otherImposterFirst(imposterFirst);

DEBUG_PRINT("---------------- SECTION ----------------");

	blank.attack("First");
	first.takeDamage(blank.getAtkDmg());

DEBUG_PRINT("---------------- SECTION ----------------");

	DEBUG_PRINT(blank.getName() << ": " << blank.getHitPoints());
	DEBUG_PRINT(blank.getName() << ": " << blank.getEnergyPoints());
	DEBUG_PRINT(blank.getName() << ": " << blank.getAtkDmg());

DEBUG_PRINT("---------------- SECTION ----------------");

	return 0;
}

