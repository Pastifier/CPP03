/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebinjama <ebinjama@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 15:41:22 by ebinjama          #+#    #+#             */
/*   Updated: 2024/08/22 09:36:07 by ebinjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap() : ClapTrap() {
	DEBUG_PRINT(_name << " FragTrap default constructor called");
	_hitPoints = 100;
	_energyPoints = 100;
	_atkDMG = 30;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other) {
	DEBUG_PRINT(_name << " FragTrap default constructor called");
	*this = other;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name) {
	_name = name;
	DEBUG_PRINT(_name << " FragTrap custom constructor called");
}

FragTrap& FragTrap::operator=(const FragTrap& rhs) {
	if (this != &rhs) {
		_name = rhs._name;
		_hitPoints = rhs._hitPoints;
		_energyPoints = rhs._energyPoints;
		_atkDMG = rhs._atkDMG;
	}

	DEBUG_PRINT(_name << " FragTrap copy assignment operator called");
	return *this;
}

FragTrap::~FragTrap() {
	DEBUG_PRINT(_name << " FragTrap destructor called");
}

void FragTrap::attack(const std::string& target) {
	DEBUG_PRINT("[FRAGTRAP] " << this->_name << " tries to attack.");
	if (!_energyPoints) {
		std::cout << "\n NOT ENOUGH MANA!!! D:>" << std::endl;
		return ;
	}

	DEBUG_PRINT(_name << " attacks " << target << " for " << this->_atkDMG << " damage!";
		if (_atkDMG < 0)
			std::cout << "does that mean " << _name << " got healed " << target << "..?";
		std::cout
	);
}

void FragTrap::highFivesGuys() const {
	DEBUG_PRINT(_name << ": Gimme five, frembo!");
}

void FragTrap::setHitPoints(int value) {
	_hitPoints = value;
}

void FragTrap::setAtkDmg(  int value) {
	_atkDMG = value;
}
