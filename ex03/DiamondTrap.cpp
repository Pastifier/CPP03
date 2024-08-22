/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebinjama <ebinjama@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 17:02:16 by ebinjama          #+#    #+#             */
/*   Updated: 2024/08/22 09:43:37 by ebinjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "DiamondTrap.hpp"
#include <iostream>


DiamondTrap::DiamondTrap() : ClapTrap(), FragTrap(), ScavTrap(),
_name("<BLANK>"),
_clapTrapName(FragTrap::getClapName() += "_clap_name")
{
	FragTrap::setAtkDmg(30);
	DEBUG_PRINT(_name << " DiamondTrap default constructor called");
}

DiamondTrap::DiamondTrap(const std::string& name) : ClapTrap(name), FragTrap(), ScavTrap(),
_name(name),
_clapTrapName(FragTrap::getClapName() += "_clap_name")
{
	FragTrap::setAtkDmg(30);
	FragTrap::setHitPoints(100); // Unneeded because they have the same value,
                                 // just did it to show a point during evals.

	DEBUG_PRINT(_name << " DiamondTrap string-param constructor called");
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) : ClapTrap(), FragTrap(), ScavTrap(),
_name(other.getName()),
_clapTrapName(FragTrap::getClapName() += "_clap_name")
{
	FragTrap::setAtkDmg(30);
	DEBUG_PRINT(_name << " DiamondTrap copy constructor called");
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& rhs) {
	if (this != &rhs) {
		_name = rhs._name;
		_hitPoints = rhs._hitPoints;
		_energyPoints = rhs._energyPoints;
		_atkDMG = rhs._atkDMG;
		FragTrap::getClapName() = rhs.FragTrap::getClapName();
	}
	ScavTrap::setAtkDmg(FragTrap::getAtkDmg());
	return *this;
}

DiamondTrap::~DiamondTrap()
{
}

void DiamondTrap::attack(const std::string& target) {
	ScavTrap::attack(target);
}

const std::string& DiamondTrap::getName() const {
	return DiamondTrap::_name;
}

int DiamondTrap::getHitPoints() const {
	return FragTrap::getHitPoints();
}

int DiamondTrap::getEnergyPoints() const {
	return ScavTrap::_energyPoints;
}

int DiamondTrap::getAtkDmg() const {
	return FragTrap::_atkDMG;
}

void DiamondTrap::whoAmI() {
	DEBUG_PRINT("I am "<< _name << "!");
	DEBUG_PRINT("Wait. Actually, No! I am " << _clapTrapName << "!");
}

void DiamondTrap::setName(const std::string& name) {
	DiamondTrap::_name = name;
}

void DiamondTrap::setHitPoints(int hp) {
	DiamondTrap::_hitPoints = hp;
}

void DiamondTrap::setEnergyPoints(int ep) {
	DiamondTrap::_energyPoints = ep;
}

void DiamondTrap::setAtkDmg(int ad) {
	DiamondTrap::_atkDMG = ad;
}
