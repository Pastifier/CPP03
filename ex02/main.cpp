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
std::cout << "---------------- SECTION ----------------" << std::endl;
	FragTrap blank;
std::cout << "---------------- SECTION ----------------" << std::endl;
	FragTrap first("First");
std::cout << "---------------- SECTION ----------------" << std::endl;
	FragTrap imposterFirst = first;
std::cout << "---------------- SECTION ----------------" << std::endl;

	blank.attack("First");
	first.takeDamage(blank.getAtkDmg());

std::cout << "---------------- SECTION ----------------" << std::endl;
	return 0;
}

