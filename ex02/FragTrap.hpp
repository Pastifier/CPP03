/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebinjama <ebinjama@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 15:31:59 by ebinjama          #+#    #+#             */
/*   Updated: 2024/08/21 16:47:47 by ebinjama         ###   ########.fr       */
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

	virtual void attack(const std::string& target);
	unsigned int getAtkDmg();
	void highFivesGuys();
private:
};
