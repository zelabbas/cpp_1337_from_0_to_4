/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 16:03:41 by zelabbas          #+#    #+#             */
/*   Updated: 2024/05/17 20:27:42 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : wp_A(weapon)
{
	this->name = name;
}

HumanA::~HumanA(void)
{
	
}

void	HumanA::attack(void) const
{
	std::cout << this->name << " attacks with their " 
		<< this->wp_A.getType() << std::endl;
}

void	HumanA::setWeapon(Weapon& weapon)
{
	this->wp_A = weapon;
}

Weapon& HumanA::getWeapon(void) const
{
	return (this->wp_A);
}

void	HumanA::setName(std::string name)
{
	this->name = name;
}

std::string HumanA::getName(void) const
{
	return (this->name);
}
