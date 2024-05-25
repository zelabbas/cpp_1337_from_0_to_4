/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 15:26:41 by zelabbas          #+#    #+#             */
/*   Updated: 2024/05/25 22:22:59 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Default Cat constructor called" << std::endl;
	this->type = "Cat";
}

Cat::Cat(const Cat& obj)
{
	std::cout << "copy Cat constructor called" << std::endl;
	*this = obj;
}

Cat::~Cat(void)
{
	std::cout << "Cat Destructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& obj)
{
	std::cout << "Cat assignment operator called" << std::endl;
	if (this != &obj)
		Animal::operator=(obj);
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Cat Sound..." << std::endl;
}