/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebinjama <ebinjama@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 15:31:59 by ebinjama          #+#    #+#             */
/*   Updated: 2024/08/22 09:35:53 by ebinjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	FragTrap();
	FragTrap(const FragTrap& other);
	FragTrap(const std::string& name);
	FragTrap& operator=(const FragTrap& rhs);
	~FragTrap();

	void attack(const std::string& target);
	void highFivesGuys() const;

	void setHitPoints(int value);
	void setAtkDmg(int value);
private:
};
