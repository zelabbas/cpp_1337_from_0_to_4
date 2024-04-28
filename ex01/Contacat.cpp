/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contacat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 17:31:02 by zelabbas          #+#    #+#             */
/*   Updated: 2024/04/28 18:30:01 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contacat.hpp"

Contacat::Contacat()
{
	
}

Contacat::~Contacat()
{
	
}
// setters
void Contacat::setFirstName(std::string firstname)
{
	this->firstname = firstname;
}

void Contacat::setLastName(std::string lastname)
{
	this->lastname = lastname;
}

void Contacat::setNickName(std::string nickname)
{
	this->nickname = nickname;
}

void Contacat::setPhoneNumber(std::string phone_number)
{
	this->phone_number = phone_number;
}

void Contacat::setDarkestSecret(std::string darkest_secret)
{
	this->darkest_secret = darkest_secret;
}

void	Contacat::setIndex(int i)
{
	this->index = i;
}

//getters 
std::string Contacat::getFirstName()
{
	return (this->firstname);
}

std::string Contacat::getLastName()
{
	return (this->lastname);
}

std::string Contacat::getNickName()
{
	return (this->nickname);
}

std::string Contacat::getPhoneNumber()
{
	return (this->phone_number);
}

std::string Contacat::getDarkSecret()
{
	return (this->darkest_secret);
}

int	Contacat::getIndex()
{
	return (this->index);
}

std::string Contacat::truncateString(const std::string& str, size_t maxLength)
{
    if (str.length() > maxLength)
	{
        return str.substr(0, maxLength - 1) + ".";
    }
	else
        return str;
}

int	Contacat::print_contact()
{
	if (!this->firstname.empty())
	{
		std::cout << "|" ;
		std::cout << std::setw(10) << std::right << getIndex();
        std::cout << " | ";
        std::cout << std::setw(10) << std::right << truncateString(getFirstName(), 10);
        std::cout << " | ";
        std::cout << std::setw(10) << std::right << truncateString(getLastName(), 10);
        std::cout << " | ";
        std::cout << std::setw(10) << std::right << truncateString(getNickName(), 10);
        std::cout << " | " << std::endl;
		std::cout <<" --------------------------------------------------" << std::endl;
		return (1);
	}
	return (0);
}

