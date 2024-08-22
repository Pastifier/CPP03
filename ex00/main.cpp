/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebinjama <ebinjama@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 06:01:26 by ebinjama          #+#    #+#             */
/*   Updated: 2024/08/21 15:04:12 by ebinjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void) {

DEBUG_PRINT("----------------------- SECTION -----------------------");

	ClapTrap blank;
	ClapTrap mohammed("Mohammed");
	ClapTrap emran(mohammed);

DEBUG_PRINT("----------------------- SECTION -----------------------");

	DEBUG_PRINT(mohammed.getName() << ": " << mohammed.getHitPoints());
	DEBUG_PRINT(mohammed.getName() << ": " << mohammed.getEnergyPoints());
	DEBUG_PRINT(mohammed.getName() << ": " << mohammed.getAtkDmg());

DEBUG_PRINT("----------------------- SECTION -----------------------");

	mohammed.attack("Emran");
	emran.takeDamage(10);
	emran.takeDamage(10);
	emran.takeDamage(10);
	emran.takeDamage(10);
	emran.takeDamage(10);
	emran.beRepaired(10);
	emran.takeDamage(10);
	emran.beRepaired(10);
	emran.takeDamage(10);
	emran.beRepaired(10);
	emran.takeDamage(10);
	emran.beRepaired(10);
	emran.takeDamage(10);

DEBUG_PRINT("----------------------- SECTION -----------------------");

	for (int i = 0; i < 10; i++)
		mohammed.attack("Emran");
	ClapTrap ahmed = mohammed;

DEBUG_PRINT("----------------------- SECTION -----------------------");

	return 0;
}

