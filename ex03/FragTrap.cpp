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
	std::cout << _name << " FragTrap default constructor called" << std::endl;
	_hitPoints = 100;
	_energyPoints = 100;
	_atkDMG = 30;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other) {
	std::cout << _name << " FragTrap default constructor called" << std::endl;
	*this = other;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name) {
	_name = name;
	std::cout << _name << " FragTrap custom constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& rhs) {
	if (this != &rhs) {
		_name = rhs._name;
		_hitPoints = rhs._hitPoints;
		_energyPoints = rhs._energyPoints;
		_atkDMG = rhs._atkDMG;
	}

	std::cout << _name << " FragTrap copy assignment operator called" << std::endl;
	return *this;
}

FragTrap::~FragTrap() {
	std::cout << _name << " FragTrap destructor called" << std::endl;
}

void FragTrap::attack(const std::string& target) {
	std::cout << "[FRAGTRAP] " << this->_name << " tries to attack." << std::endl;
	if (!_energyPoints) {
		std::cout << "\n NOT ENOUGH MANA!!! D:>" << std::endl;
		return ;
	}

	std::cout << _name << " attacks " << target << " for " << this->_atkDMG << " damage!";
	if (_atkDMG < 0)
		std::cout << "does that mean " << _name << " got healed " << target << "..?";
	std::cout << std::endl;
}

  int FragTrap::getAtkDmg() const {
	return _atkDMG;
}

void FragTrap::highFivesGuys() const {
	std::cout << _name << ": Gimme five, frembo!" << std::endl;
}

int FragTrap::getHitPoints() const {
	return _hitPoints;
}

void FragTrap::setHitPoints(int value) {
	_hitPoints = value;
}

void FragTrap::setAtkDmg(  int value) {
	_atkDMG = value;
}

std::string &FragTrap::getClapName() {
	return ClapTrap::_name;
}

const std::string &FragTrap::getClapName() const {
	return ClapTrap::_name;
}