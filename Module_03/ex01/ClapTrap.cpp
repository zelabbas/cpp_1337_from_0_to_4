/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 12:27:49 by zelabbas          #+#    #+#             */
/*   Updated: 2024/05/16 14:43:37 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Default ClapTrap constructor called" << std::endl;
	this->name = "Default";
	this->hit_points = 10;
	this->energy_points = 10;
	this->attack_damage = 0;
}

ClapTrap::ClapTrap(const std::string& name)
{
	std::cout << "Default ClapTrap constructor by name called" << std::endl;
	this->name = name;
	this->hit_points = 10;
	this->energy_points = 10;
	this->attack_damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap& obj)
{
	std::cout << "copy ClapTrap constructor called" << std::endl;
	*this = obj;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor ClapTrap called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& obj)
{
	std::cout << "Copy ClapTrap assignment operator called" << std::endl;
	if (this != &obj)
	{
		this->name = obj.name;
		this->hit_points = obj.hit_points;
		this->energy_points = obj.energy_points;
		this->attack_damage = obj.attack_damage;
	}
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->hit_points <= 0 || this->energy_points <= 0)
	{
		std::cout << "ClapTrap " << this->name << " has no energy or hit points left to attack!" << std::endl;
		return ;
	}
	this->energy_points--;
	std::cout << "ClapTrap " << this->name << " attacks " << target << " causing " <<
		this->attack_damage << " points of damage!" << std::endl;
	
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hit_points <= 0 || this->energy_points <= 0)
	{
		std::cout << "ClapTrap " << this->name << " is already out of hit points!" << std::endl;
		return ;
	}
	this->hit_points -= amount;
	if (hit_points < 0)
		this->hit_points = 0;
	std::cout << "ClapTrap " << this->name << " takes " << amount << " points of damage! "
        << "Current hit points: " << this->hit_points << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hit_points <= 0 || this->energy_points <= 0)
	{
		std::cout << "ClapTrap " << name << " has no energy or hit points left to repair!" << std::endl;
            return;
	}
	this->hit_points += amount;
	this->energy_points--;
	std::cout << "ClapTrap " << name << " is repaired by " << amount << " points! "
    	<< "Current hit points: " << this->hit_points << ", energy points: " << this->energy_points << std::endl;
}


void	ClapTrap::setName(const std::string& name)
{
	this->name = name;
}

void	ClapTrap::setHitPoints(unsigned int hitpoints)
{
	this->hit_points = hitpoints;
}

void	ClapTrap::setEnergyPoints(unsigned int energypoints)
{
	this->energy_points =  energypoints;
}

void	ClapTrap::setAttackDamage(unsigned int attackdamage)
{
	this->attack_damage = attackdamage;
}

const std::string& ClapTrap::getName(void) const
{
	return (this->name);
}

int	ClapTrap::getHitPoints(void) const
{
	return (this->hit_points);
}

int ClapTrap::getEnergyPoints(void) const
{
	return (this->energy_points);
}

int ClapTrap::getAttackDamage(void) const
{
	return (this->attack_damage);
}