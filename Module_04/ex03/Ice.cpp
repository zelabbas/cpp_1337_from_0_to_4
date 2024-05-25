/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 11:22:59 by zelabbas          #+#    #+#             */
/*   Updated: 2024/05/25 15:00:37 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria()
{
	this->type = "ice";
}

Ice::Ice(const std::string& type) : AMateria(type)
{

}

Ice::Ice(const Ice& obj)
{
	*this = obj;
}

Ice::~Ice(void)
{

}

Ice& Ice::operator= (const Ice& obj)
{
	if (this != &obj)
		AMateria::operator= (obj);
	return (*this);
}

AMateria* Ice::clone(void) const
{
	AMateria* cloneIce = new(std::nothrow) Ice(*this);
	if (!cloneIce)
	{
		std::cerr << "Memory allocation failed" << std::endl;
		return (nullptr);
	}
	return (cloneIce);
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an Ice bolt at " << target.getName() << "*" << std::endl;
}
