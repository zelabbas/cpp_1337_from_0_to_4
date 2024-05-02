/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 20:39:59 by zelabbas          #+#    #+#             */
/*   Updated: 2024/04/29 21:01:44 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	
}

Zombie::~Zombie()
{
	std::cout << this->name << " has been destroyed" << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->name = name;
}

std::string	Zombie::getName(void)
{
	return (this->name);
}

void	Zombie::announce(void)
{
	if (!this->name.compare("Foo"))
		std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	else
		std::cout << "<" << this->name << ">" << ": BraiiiiiiinnnzzzZ..." << std::endl;
}