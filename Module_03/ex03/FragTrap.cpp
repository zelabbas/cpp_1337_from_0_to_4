/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 11:06:25 by zelabbas          #+#    #+#             */
/*   Updated: 2024/05/16 15:24:22 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	std::cout << "Default FragTrap constructor  called" << std::endl;
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
	std::cout << "Default FragTrap constructor by name called" << std::endl;
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap& copy_obj)
{
	std::cout << "copy FragTrap constructor called" << std::endl;
	*this = copy_obj;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap Destructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& obj)
{
    std::cout << "copy FragTrap assignment operator called" << std::endl;
	if (this != &obj)
		ClapTrap::operator= (obj);
	return (*this);
}

void	FragTrap::attack(const std::string& target)
{
	if (this->getHitPoints() <= 0 || this->getHitPoints() <= 0)
	{
		std::cout << "FragTrap " << this->getName() << " has no energy or hit points left to attack!" << std::endl;
		return ;
	}
	this->energy_points--;
	std::cout << "FragTrap " << this->getName() << " attacks " << target << " causing " <<
		this->getAttackDamage() << " points of damage!" << std::endl;
}

void	FragTrap::highFivesGuys(void) const
{
	std::cout << "FragTrap " << this->getName() << " requests a high five!" << std::endl;
}