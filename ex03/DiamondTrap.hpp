/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebinjama <ebinjama@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 16:45:46 by ebinjama          #+#    #+#             */
/*   Updated: 2024/08/22 15:28:08 by ebinjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
public:
	DiamondTrap();
	DiamondTrap(const DiamondTrap& other);
	DiamondTrap(const std::string& name);
	DiamondTrap& operator=(const DiamondTrap& other);
	~DiamondTrap();

	void attack(const std::string& target);

	void whoAmI();

private:
	std::string _name;
};
