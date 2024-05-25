/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 15:04:45 by zelabbas          #+#    #+#             */
/*   Updated: 2024/05/25 22:27:36 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Default Dog constructor called" << std::endl;
	this->type = "Dog";
}

Dog::Dog(const Dog& obj)
{
	std::cout << "copy Dog constructor called" << std::endl;
	*this = obj;
}

Dog::~Dog(void)
{
	std::cout << "Dog Destructor called" << std::endl;
}

Dog&	Dog::operator=(const Dog& obj)
{
	std::cout << "Dog assignment operator called" << std::endl;
	if (this != &obj)
		Animal::operator= (obj);
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Dog Sound..." << std::endl;
}
