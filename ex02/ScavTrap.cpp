/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebinjama <ebinjama@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 10:21:07 by ebinjama          #+#    #+#             */
/*   Updated: 2024/08/21 13:43:20 by ebinjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap() : ClapTrap() {
	std::cout << "[SYSTEM] <BLANK> ScavTrap has joined the battlefield. It doesn't really care whether it's alone or not!" << std::endl;
	_hitPoints = 100;
	_energyPoints = 50;
	_atkDMG = 20;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other) {
	*this = other;
	std::cout << "[SYSTEM] ";
	std::cout << other._name << " ScavTrap has joined the battlefield. It doesn't really care about being an imposter, even!" << std::endl;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name) {
	std::cout << "[SYSTEM] " << _name << " ScravTrap has joined the battlefield. It doesn't really care whether it's alone or not!" << std::endl;
	_hitPoints = 100;
	_energyPoints = 50;
	_atkDMG = 20;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
	std::cout << "falafel" << std::endl;
	if (this != &other) {
		_name = other._name;
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
		_atkDMG = other._atkDMG;
	}
	return *this;
}

void ScavTrap::attack(const std::string& target) {
	std::cout << "[SCAVTRAP] " << this->_name << " tries to attack." << std::endl;
	if (!_energyPoints) {
		std::cout << "\n NOT ENOUGH MANA!!! D:>" << std::endl;
		return ;
	}

	std::cout << _name << " attacks " << target << " for " << this->_atkDMG << " damage!";
	if (_atkDMG < 0)
		std::cout << "does that mean " << _name << " got healed " << target << "..?";
	std::cout << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap destroyed" << std::endl;
}

void ScavTrap::guardGate() {
	std::cout << _name << " ScavTrap is now in Gate keeper mode!" << std::endl;
}