/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebinjama <ebinjama@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 06:01:26 by ebinjama          #+#    #+#             */
/*   Updated: 2024/08/21 15:02:14 by ebinjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

int main() {
	ScavTrap one("Nice");
	one.attack("some random ass name");
	std::cout << "----------------------------------------------------" << std::endl;
	ScavTrap two = one;
	std::cout << "----------------------------------------------------" << std::endl;

	ScavTrap three("Jackson");
	three = one;

	three.attack("Emran");
	ScavTrap Four;

	Four.attack("Falafel");
	for (int i = 0; i < 24; i++)
		Four.takeDamage(4);

	for (int i = 0; i < 24; i++)
		Four.beRepaired(1);
	return 0;
}

