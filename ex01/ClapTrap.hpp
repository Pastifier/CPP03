/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebinjama <ebinjama@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 03:30:21 by ebinjama          #+#    #+#             */
/*   Updated: 2024/08/22 05:15:26 by ebinjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class ClapTrap
{
public:
	ClapTrap();
	ClapTrap(const std::string& name);
	ClapTrap(ClapTrap const &other);
	ClapTrap& operator=(ClapTrap const &other);
	~ClapTrap();

	const std::string &getName() const;
	/*virtual*/ int getAtkDmg() const;
	/*virtual*/ int getHitPoints() const;
	/*virtual*/ int getEnergyPoints() const;

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	
protected:
	std::string _name;
	int _hitPoints;
	int _energyPoints;
	int _atkDMG;
	static int _instanceNum;
};
