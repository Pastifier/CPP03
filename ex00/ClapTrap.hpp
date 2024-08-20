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

#include <string>

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
private:
	std::string _name;
	int _hitPoints;
	int _energyPoints;
	int _atkDMG;
	static int _instanceNum;
};
