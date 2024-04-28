/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 17:31:02 by zelabbas          #+#    #+#             */
/*   Updated: 2024/04/28 21:29:13 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	
}

Contact::~Contact()
{
	
}
// setters
void Contact::setFirstName(std::string firstname)
{
	this->firstname = firstname;
}

void Contact::setLastName(std::string lastname)
{
	this->lastname = lastname;
}

void Contact::setNickName(std::string nickname)
{
	this->nickname = nickname;
}

void Contact::setPhoneNumber(std::string phone_number)
{
	this->phone_number = phone_number;
}

void Contact::setDarkestSecret(std::string darkest_secret)
{
	this->darkest_secret = darkest_secret;
}

void	Contact::setIndex(int i)
{
	this->index = i;
}

//getters 
std::string Contact::getFirstName()
{
	return (this->firstname);
}

std::string Contact::getLastName()
{
	return (this->lastname);
}

std::string Contact::getNickName()
{
	return (this->nickname);
}

std::string Contact::getPhoneNumber()
{
	return (this->phone_number);
}

std::string Contact::getDarkSecret()
{
	return (this->darkest_secret);
}

int	Contact::getIndex()
{
	return (this->index);
}

std::string Contact::truncateString(const std::string& str, size_t maxLength)
{
    if (str.length() > maxLength)
	{
        return str.substr(0, maxLength - 1) + ".";
    }
	else
        return str;
}

int	Contact::print_contact()
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

