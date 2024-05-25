/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 16:35:55 by zelabbas          #+#    #+#             */
/*   Updated: 2024/05/25 15:00:26 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)
{
	this->type = "Default_type";
}

AMateria::AMateria(std::string const &type)
{
	this->type = type;
}

AMateria::AMateria(const AMateria &obj)
{
	*this = obj;
}

AMateria::~AMateria(void)
{
}

AMateria &AMateria::operator=(const AMateria &obj)
{
	if (this != &obj)
		this->type = obj.type;
	return (*this);
}

std::string const &AMateria::getType(void) const
{
	return (this->type);
}

void AMateria::setTyape(const std::string &type)
{
	this->type = type;
}

void AMateria::use(ICharacter &target)
{
	(void)target;
}
