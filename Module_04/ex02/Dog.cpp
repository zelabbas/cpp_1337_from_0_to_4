/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 15:04:45 by zelabbas          #+#    #+#             */
/*   Updated: 2024/05/25 17:16:36 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Default Dog constructor called" << std::endl;
	this->brain = new Brain();
	if (!this->brain)
	{
		std::cout << "faild to allocate memory" << std::endl;
		exit(-1);
	}
	this->type = "Dog";
}

Dog::Dog(const std::string& type) : Animal(type)
{
	std::cout << "Default Dog constructor by name called" << std::endl;
}

Dog::Dog(const Dog& obj)
{
	std::cout << "copy Dog constructor called" << std::endl;
	*this = obj;
}

Dog::~Dog(void)
{
	delete this->brain;
	std::cout << "Dog Destructor called" << std::endl;
}

Dog&	Dog::operator=(const Dog& obj)
{
	std::cout << "Dog assignment operator called" << std::endl;
	if (this != &obj)
	{
		Animal::operator= (obj);
		*this->brain = *obj.brain;
	}
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Dog Sound..." << std::endl;
}
