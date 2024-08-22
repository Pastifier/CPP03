/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebinjama <ebinjama@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 03:41:28 by ebinjama          #+#    #+#             */
/*   Updated: 2024/08/22 06:28:29 by ebinjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int ClapTrap::_instanceNum = 0;

ClapTrap::ClapTrap() : _name("<BLANK>"), _hitPoints(10), _energyPoints(10), _atkDMG(0) {
	std::cout << _name << " ClapTrap constructor got called, ya zum" << std::endl;
	_instanceNum++;
}

ClapTrap::ClapTrap(const std::string& name) {
	std::cout << _name << " ClapTrap constructor got called, ya zum" << std::endl;
	_name = name;
	_hitPoints = 10;
	_energyPoints = 10;
	_atkDMG = 0;
	_instanceNum++;
}

ClapTrap::ClapTrap(ClapTrap const& other) {
	*this = other;
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
	std::cout << _name << " ClapTrap destroyed" << std::endl;
	if (_instanceNum == 0) {
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

void ClapTrap::takeDamage(  int amount) {
	static   short idx;
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

void ClapTrap::beRepaired(  int amount) {
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