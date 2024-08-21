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
	ClapTrap mohammed("Mohammed");
	ClapTrap emran(mohammed);

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

	for (int i = 0; i < 10; i++)
		mohammed.attack("Emran");

	return 0;
}

