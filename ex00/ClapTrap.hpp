/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebinjama <ebinjama@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 03:30:21 by ebinjama          #+#    #+#             */
/*   Updated: 2024/08/20 04:09:14 by ebinjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <string>
# include <iostream>

# ifndef DEBUG_PRINT
#  define DEBUG_PRINT(X) std::cout << X << std::endl
# endif // !DEBUG_PRINT()

class ClapTrap
{
public:
	ClapTrap(/* args */);
	ClapTrap(const std::string& name);
	ClapTrap(ClapTrap const &other);
	ClapTrap& operator=(ClapTrap const &other);
	~ClapTrap();

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	const std::string& getName() const;
	int getHitPoints() const;
	int getEnergyPoints() const;
	int getAtkDmg() const;
private:
	std::string _name;
	int _hitPoints;
	int _energyPoints;
	int _atkDMG;
	static int _instanceNum;
};
