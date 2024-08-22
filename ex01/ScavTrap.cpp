/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebinjama <ebinjama@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 10:21:07 by ebinjama          #+#    #+#             */
/*   Updated: 2024/08/22 08:51:58 by ebinjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap() : ClapTrap() {
	DEBUG_PRINT("[SYSTEM] <BLANK> ScavTrap has joined the battlefield. It doesn't really care whether it's alone or not!");
	_hitPoints = 100;
	_energyPoints = 50;
	_atkDMG = 20;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other) {
	*this = other;
	std::cout << "[SYSTEM] ";
	DEBUG_PRINT(other._name << " ScavTrap has joined the battlefield. It doesn't really care about being an imposter, even!");
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name) {
	DEBUG_PRINT("[SYSTEM] " << _name << " ScravTrap has joined the battlefield. It doesn't really care whether it's alone or not!");
	_hitPoints = 100;
	_energyPoints = 50;
	_atkDMG = 20;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
	if (this != &other) {
		_name = other._name;
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
		_atkDMG = other._atkDMG;
	}
	return *this;
}

void ScavTrap::attack(const std::string& target) {
	DEBUG_PRINT("[SCAVTRAP] " << this->_name << " tries to attack.");
	if (!_energyPoints) {
		DEBUG_PRINT("NOT ENOUGH MANA!!! D:>");
		return ;
	}

	DEBUG_PRINT(
		_name << " attacks " << target << " for " << this->_atkDMG << " damage!";
		if (_atkDMG < 0) {
			std::cout << "does that mean " << _name << " got healed " << target << "..?";
		}
		std::cout
	);
}

ScavTrap::~ScavTrap() {
	DEBUG_PRINT("ScavTrap destroyed");
}

void ScavTrap::guardGate() {
	DEBUG_PRINT(_name << " ScavTrap is now in Gate-keeper mode!");
}

void ScavTrap::setEnergyPoints(int value) {
	_energyPoints = value;
}
