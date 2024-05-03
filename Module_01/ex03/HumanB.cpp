/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 16:03:47 by zelabbas          #+#    #+#             */
/*   Updated: 2024/05/03 20:40:48 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
	this->wp_B = NULL;
}

HumanB::~HumanB()
{

}

void	HumanB::attack(void)
{
	if (this->wp_B)
		std::cout << this->name << " attacks with their " 
			<< this->wp_B->getType() << std::endl;
	else
		std::cout << this->name << " attacks with their " << "there's no Weapon." << std::endl;
}

void	HumanB::setWeapon(Weapon& weapon)
{
	this->wp_B = &weapon;
}

Weapon& HumanB::getWeapon(void)
{
	return (*this->wp_B);
}

void	HumanB::setName(std::string name)
{
	this->name = name;
}

std::string	HumanB::getName(void)
{
	return (this->name);
}