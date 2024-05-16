/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 11:42:04 by zelabbas          #+#    #+#             */
/*   Updated: 2024/05/16 15:20:24 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	std::cout << "Default DiamondTrap constructor  called" << std::endl;
	this->name = "Default_clap_name";
	this->hit_points = 100; // From FragTrap
    this->energy_points = 50; // From ScavTrap
    this->attack_damage = 20; // From FragTrap
}

DiamondTrap::DiamondTrap(const std::string& name) : ClapTrap(name + "_clap_trap"), name(name)
{
	std::cout << "Default DiamondTrap constructor by name called" << std::endl;
    this->hit_points = 100; // From FragTrap
    this->energy_points = 50; // From ScavTrap
    this->attack_damage = 20; // From FragTrap
}

DiamondTrap::DiamondTrap(const DiamondTrap& obj)
{
	std::cout << "copy DiamondTrap constructor called" << std::endl;
	*this = obj;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap Destructor called" << std::endl;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& obj)
{
	std::cout << "copy DiamondTrap assignment operator called" << std::endl;
	if (this != &obj)
	{
		ClapTrap::operator= (obj);
		this->name = obj.name;
	}
	return (*this);
}

void DiamondTrap::setName(const std::string& name)
{
	this->name = name;
}

const std::string& DiamondTrap::getName(void) const
{
	return (this->name);
}

void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}
void DiamondTrap::whoAmI(void) const
{
	std::cout << "DiamondTrap " << this->getName()
		 << " ClapTrap name " << ClapTrap::getName() << std::endl;
}

