/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 14:24:52 by zelabbas          #+#    #+#             */
/*   Updated: 2024/05/19 12:05:54 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Default Animal constructor called" << std::endl;
	this->type = "Default_type";
}

Animal::~Animal(void)
{
	std::cout << "Animal Destructor called" << std::endl;
}

Animal::Animal(const std::string& type)
{
	std::cout << "Default Animal constructor by name called" << std::endl;
	this->type = type;
}

Animal::Animal(const Animal& obj)
{
	std::cout << "copy Animal constructor called" << std::endl;
	*this = obj;
}

Animal&	Animal::operator=(const Animal& obj)
{
	std::cout << "Animal assignment operator called" << std::endl;
	if (this != &obj)
		this->type = obj.type;
	return (*this);
}

void	Animal::setType(const std::string& type)
{
	this->type = type;
}

const std::string& Animal::getType(void) const
{
	return (this->type);
}

void	Animal::makeSound(void) const
{
	std::cout << "Animal Sound..." << std::endl;
}