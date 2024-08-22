/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebinjama <ebinjama@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 03:41:28 by ebinjama          #+#    #+#             */
/*   Updated: 2024/08/21 12:50:13 by ebinjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int ClapTrap::_instanceNum = 0;

ClapTrap::ClapTrap() :	_name("<BLANK>"),
						_hitPoints(10),
						_energyPoints(10),
						_atkDMG(0)
{
	std::cout << "[SYSTEM]";
	switch (_instanceNum) {
		case (0):
			DEBUG_PRINT(" is alone in the battlefield!");
			break ;
		case (1):
			DEBUG_PRINT(" Ooo- Ooo! Someone joined! Good for you :D");
			break ;
		default:
			DEBUG_PRINT(_name << " ClapTrap has joined the battlefield!");
	}
	_instanceNum++;
}

ClapTrap::ClapTrap(const std::string& name) {
	switch (_instanceNum) {
		case (0):
			DEBUG_PRINT("[SYSTEM] " << name << " is alone in the battlefield!");
			break ;
		case (1):
			DEBUG_PRINT("[SYSTEM] Ooo- Ooo! Someone joined! Good for you :D");
	}
	_name = name;
	_hitPoints = 10;
	_energyPoints = 10;
	_atkDMG = 0;
	_instanceNum++;
}


ClapTrap::ClapTrap(ClapTrap const& other) :	_name(other._name),
											_hitPoints(other._hitPoints),
											_energyPoints(other._energyPoints),
											_atkDMG(other._atkDMG)
{
	DEBUG_PRINT("[SYSTEM] " << _name << " has joi-");
	DEBUG_PRINT(other._name << ": I've finally found you... Faker!!");
	DEBUG_PRINT(_name << ": Faker? I think YOU'RE the fake object around here. You're comparing yourself to me? HAH! You're not even good enough to be my fake.");
	DEBUG_PRINT(other._name << ": I'll make you eat those words!!");
	DEBUG_PRINT("[SYSTEM] -_- ...");
	_instanceNum++;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
	if (this != &other) {
		_name = other._name;
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
		_atkDMG = other._atkDMG;
	}
	return *this;
}

ClapTrap::~ClapTrap() {
	std::cout << _name << " destroyed" << std::endl;
	if (_instanceNum == 1) {
		DEBUG_PRINT("[SYSTEM] no one respects me around here -_-");
	}
	_instanceNum--;
}

void ClapTrap::attack(const std::string& target) {
	DEBUG_PRINT(_name << " tries to attack.");
	if (!_energyPoints) {
		DEBUG_PRINT("\n NOT ENOUGH MANA!!! D:>");
		return ;
	}

	std::cout << _name << " attacks " << target << " for " << _atkDMG << " damage!";
	if (_atkDMG < 0)
		std::cout << "does that mean " << _name << " got healed " << target << "..?";
	std::cout << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	static unsigned short idx;
	if (_hitPoints <= 0) {
		_hitPoints = 0;
		DEBUG_PRINT(_name << "'s mother: " << _name << " is already deeaaaaaad! * cries profusely *");
		return ;
	}

	const char* messages[3] = {
		" dies due to a concussion",
		" breathes one last breath",
		" dies before the hit even lands..."
	};

	DEBUG_PRINT("[SYSTEM] " << _name << " is receiving a hit!");

	_hitPoints -= amount;
	if (_hitPoints <= 0) {
		DEBUG_PRINT("[SYSTEM] " << _name << messages[idx++ % 3]);
		DEBUG_PRINT(_name << "'s mother: NOOOOOO!!!! MY BABY!!!! D':>");
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	DEBUG_PRINT("[SYSTEM] " << _name << " is receiving a divine blessing!");

	if (_hitPoints <= 0) {
		_hitPoints = amount;
		DEBUG_PRINT(_name << "'s mother: Honey, look! " << _name << "'s back to life!! It's a miracle!!!!");
		DEBUG_PRINT("Now go wash the dishes! >:(");
		return ;
	}
	_hitPoints += amount;
	if (_hitPoints < 0) {
		_hitPoints = 0;
		DEBUG_PRINT("[SYSTEM] " << _name << " got healed WAY too much...");
		DEBUG_PRINT(_name << "'s mother: NOOOOOO!!!! MY BABY!!!! D':>");
		return ;
	}
	DEBUG_PRINT("[SYSTEM] " << _name << " got healed for " << amount << " points!");
}

const std::string& ClapTrap::getName() {
	return _name;
}

int ClapTrap::getHitPoints() {
	return _hitPoints;
}

int ClapTrap::getEnergyPoints() {
	return _energyPoints;
}

int ClapTrap::getAtkDmg() {
	return _atkDMG;
}