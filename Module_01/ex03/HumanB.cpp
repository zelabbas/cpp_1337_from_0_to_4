/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 16:03:47 by zelabbas          #+#    #+#             */
/*   Updated: 2024/05/03 16:54:46 by zelabbas         ###   ########.fr       */
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
	{
		std::cout << "there's no Weapon , creat first a Weapon and try again." << std::endl;
		exit(1);
	}
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

