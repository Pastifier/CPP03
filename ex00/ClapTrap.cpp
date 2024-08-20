/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebinjama <ebinjama@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 03:41:28 by ebinjama          #+#    #+#             */
/*   Updated: 2024/08/20 06:29:11 by ebinjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int ClapTrap::_instanceNum = 0;

ClapTrap::ClapTrap() : _name("<BLANK>"), _hitPoints(10), _energyPoints(10), _atkDMG(0) {
	switch (_instanceNum) {
		case (0):
			std::cout << " is alone in the battlefield!" << std::endl;
			break ;
		case (1):
			std::cout << "[SYSTEM] Ooo- Ooo! Someone joined! Good for you :D" << std::endl;
	}
	_instanceNum++;
}

ClapTrap::ClapTrap(const std::string& name) {
	switch (_instanceNum) {
		case (0):
			std::cout << "[SYSTEM] " << name << " is alone in the battlefield!" << std::endl;
			break ;
		case (1):
			std::cout << "[SYSTEM] Ooo- Ooo! Someone joined! Good for you :D" << std::endl;
	}
	_name = name;
	_hitPoints = 10;
	_energyPoints = 10;
	_atkDMG = 0;
	_instanceNum++;
}

ClapTrap::ClapTrap(ClapTrap const& other) : 
	_name(other._name),
	_hitPoints(other._hitPoints),
	_energyPoints(other._energyPoints),
	_atkDMG(other._atkDMG)
{
	std::cout << "[SYSTEM] " << _name << " has joi-" << std::endl;
	std::cout << other._name << ": I've finally found you... Faker!!" << std::endl;
	std::cout << _name << ": Faker? I think YOU'RE the fake object around here. You're comparing yourself to me? HAH! You're not even good enough to be my fake." << std::endl;
	std::cout << other._name << ": I'll make you eat those words!!" << std::endl;
	std::cout << "[SYSTEM] -_- ..." << std::endl;
	_instanceNum++;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
	if (this != &other) {
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
		_atkDMG = other._atkDMG;
	}
	return *this;
}

ClapTrap::~ClapTrap() {
	if (_instanceNum == 1) {
		std::cout << "[SYSTEM] no one respects me around here -_-" << std::endl;
	}
	_instanceNum--;
}

void ClapTrap::attack(const std::string& target) {
	std::cout << _name << " tries to attack." << std::endl;
	if (!_energyPoints) {
		std::cout << "\n NOT ENOUGH MANA!!! D:>" << std::endl;
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
		std::cout << _name << "'s mother: " << _name << " is already deeaaaaaad! * cries profusely *" << std::endl;
		return ;
	}

	const char* messages[3] = {
		" dies due to a concussion",
		" breathes one last breath",
		" dies before the hit even lands..."
	};

	std::cout << "[SYSTEM] " << _name << " is receiving a hit!" << std::endl;

	_hitPoints -= amount;
	if (_hitPoints <= 0) {
		std::cout << "[SYSTEM] " << _name << messages[idx++ % 3] << std::endl;
		std::cout << _name << "'s mother: NOOOOOO!!!! MY BABY!!!! D':>" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	std::cout << "[SYSTEM] " << _name << " is receiving a divine blessing!" << std::endl;

	if (_hitPoints <= 0) {
		_hitPoints = amount;
		std::cout << _name << "'s mother: Honey, look! " << _name << "'s back to life!! It's a miracle!!!!";
		std::cout << "\nNow go wash the dishes! >:(" << std::endl;
		return ;
	}
	_hitPoints += amount;
	if (_hitPoints < 0) {
		_hitPoints = 0;
		std::cout << "[SYSTEM] " << _name << " got healed WAY too much..." << std::endl;
		std::cout << _name << "'s mother: NOOOOOO!!!! MY BABY!!!! D':>" << std::endl;
		return ;
	}
	std::cout << "[SYSTEM] " << _name << " got healed for " << amount << " points!" << std::endl;
}
