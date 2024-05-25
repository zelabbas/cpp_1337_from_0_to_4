/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 18:20:17 by zelabbas          #+#    #+#             */
/*   Updated: 2024/05/25 22:28:13 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	std::cout << "Default WrongCat constructor called" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& obj)
{
	std::cout << "copy WrongCat constructor called" << std::endl;
	*this = obj;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat Destructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& obj)
{
	std::cout << "WrongCat assignment operator called" << std::endl;
	if (this != &obj)
		WrongAnimal::operator=(obj);
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "WrongCat Sound..." << std::endl;
}