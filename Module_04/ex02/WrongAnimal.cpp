/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 18:20:11 by zelabbas          #+#    #+#             */
/*   Updated: 2024/05/18 20:15:14 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	std::cout << "Default WrongAnimal constructor called" << std::endl;
	this->type = "Default_type";
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal Destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string& type)
{
	std::cout << "Default WrongAnimal constructor by name called" << std::endl;
	this->type = type;
}

WrongAnimal::WrongAnimal(const WrongAnimal& obj)
{
	std::cout << "copy WrongAnimal constructor called" << std::endl;
	*this = obj;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& obj)
{
	std::cout << "WrongAnimal assignment operator called" << std::endl;
	if (this != &obj)
		this->type = obj.type;
	return (*this);
}

void	WrongAnimal::setType(const std::string& type)
{
	this->type = type;
}

const std::string& WrongAnimal::getType(void) const
{
	return (this->type);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal Sound..." << std::endl;
}