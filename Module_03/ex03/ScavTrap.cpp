/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 12:02:11 by zelabbas          #+#    #+#             */
/*   Updated: 2024/05/16 13:33:40 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	std::cout << "Default ScavTrap constructor  called" << std::endl;
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap Destructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
	std::cout << "Default ScavTrap constructor by name called" << std::endl;
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& obj)
{
	std::cout << "copy ScavTrap constructor called" << std::endl;
	*this = obj;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& obj)
{
    std::cout << "copy ScavTrap assignment operator called" << std::endl;
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
	this->energy_points--;
	std::cout << "ScavTrap " << this->getName() << " attacks " << target << " causing " <<
		this->getAttackDamage() << " points of damage!" << std::endl;
}

void ScavTrap::guardGate() const
{
    std::cout << "ScavTrap " << this->getName() << " is now in Gatekeeper mode" << std::endl;
}