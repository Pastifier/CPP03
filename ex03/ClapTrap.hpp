/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebinjama <ebinjama@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 03:30:21 by ebinjama          #+#    #+#             */
/*   Updated: 2024/08/22 08:19:38 by ebinjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <string>

class ClapTrap
{
public:
	ClapTrap();
	ClapTrap(const std::string& name);
	ClapTrap(ClapTrap const &other);
	ClapTrap& operator=(ClapTrap const &other);
	~ClapTrap();

	void attack(const std::string& target);
	void takeDamage(  int amount);
	void beRepaired(  int amount);
	
protected:
	std::string _name;
	int _hitPoints;
	int _energyPoints;
	int _atkDMG;
	static int _instanceNum;
};
