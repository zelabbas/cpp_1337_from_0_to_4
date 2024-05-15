/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 12:02:11 by zelabbas          #+#    #+#             */
/*   Updated: 2024/05/15 10:25:29 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	std::cout << "Default ScavTrap constructor  called" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap Destructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
	std::cout << "Default ScavTrap constructor by name called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& obj)
{
	std::cout << "copy ScavTrap constructor called" << std::endl;
	*this = obj;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& obj)
{
    std::cout << "ScavTrap copy assignment operator called" << std::endl;
    if (this != &obj)
		ClapTrap::operator= (obj);
    return (*this);
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->getHitPoints() <= 0 || this->getHitPoints() <= 0)
	{
		std::cout << "ScavTrap " << this->getName() << " has no energy or hit points left to attack!" << std::endl;
		return ;
	}
	this->setEnergyPoints(this->getEnergyPoints() - 1);
	std::cout << "ScavTrap " << this->getName() << " attacks " << target << " causing " <<
		this->getAttackDamage() << " points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gatekeeper mode" << std::endl;
}
