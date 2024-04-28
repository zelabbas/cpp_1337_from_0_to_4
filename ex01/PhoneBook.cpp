/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 17:31:11 by zelabbas          #+#    #+#             */
/*   Updated: 2024/04/28 19:33:18 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	count = 0;
}

PhoneBook::~PhoneBook(){}

int	check_whitespaces(std::string str)
{
	size_t	i;
	size_t	count_char;

	count_char = 0;
	i = 0;
	while (str[i])
	{
		if ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
			count_char++;
		i++;
	}
	if (count_char == str.length())
		return (1);
	return (0);
}

int	check_isdigit(std::string str)
{
	size_t i;

	i = 0;
	while (str[i])
	{
		if (!std::isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

void	PhoneBook::add()
{
	std::string	info;

	if (count >= 8)
		count = 0;
	do
	{
		std::cout << "enter the firstname: ";
		if (!std::getline(std::cin, info))
			exit(1);
		if (!info.empty() && !check_whitespaces(info))
			this->tab[count].setFirstName(info);
	}while (info.empty() || check_whitespaces(info));
	
	do 
	{
		std::cout << "enter the lastname: ";
		if (!std::getline(std::cin, info))
			exit(1);
		if (!info.empty() && !check_whitespaces(info))
			this->tab[count].setLastName(info);
	}while (info.empty() || check_whitespaces(info));
	
	do 
	{
		std::cout << "enter the nickname: ";
		if (!std::getline(std::cin, info))
			exit(1);
		if (!info.empty() && !check_whitespaces(info))
			this->tab[count].setNickName(info);
	}while (info.empty() || check_whitespaces(info));

	do 
	{
		std::cout << "enter the phone number: ";
		if (!std::getline(std::cin, info))
			exit(1);
		if (!info.empty() && !check_whitespaces(info))
			this->tab[count].setPhoneNumber(info);
	}while (info.empty() || check_whitespaces(info) || !check_isdigit(info));
	
	do 
	{
		std::cout << "enter the darkest secret: ";
		if (!std::getline(std::cin, info))
			exit(1);
		if (!info.empty() && !check_whitespaces(info))
			this->tab[count].setDarkestSecret(info);
	}while (info.empty() || check_whitespaces(info));
	tab[count].setIndex(count);
	count++;
}

int	PhoneBook::print_phonebook()
{
	size_t	i;

	i = 0;
	for(i = 0; i < 8 ; i++)
	{
		if (!this->tab[i].print_contact())
			break ;
	}
	if (i == 0)
	{
		std::cout << "The list of contacats is empty.\n";
		return (0);
	}
	return (1);
}

int	getID(std::string str)
{
	if (str.length() > 1)
		return (-1);
	return (str[0] - '0');
}
void	PhoneBook::search()
{
	int 		id;
	std::string	str;

	std::cout <<" --------------------------------------------------" << std::endl;
	std::cout << "|" ;
  	std::cout << std::setw(10) << std::right << "Index";
    std::cout << " | ";
    std::cout << std::setw(10) << std::right << "First Name";
    std::cout << " | ";
    std::cout << std::setw(10) << std::right << "Last Name";
    std::cout << " | ";
    std::cout << std::setw(10) << std::right << "Nickname";
	std::cout << " |" << std::endl;
	std::cout <<" --------------------------------------------------" << std::endl;
	if (!this->print_phonebook())
		return ;
	std::cout << "search by id: ";
	if (!std::getline(std::cin, str))
		exit(1);
	id = getID(str);
	if (id < 0 || id >= 8 || this->tab[id].getFirstName().empty())
	{
		std::cout << "The contact ID doesn't exist.\n";
		return ;
	}
	
	std::cout << "Contact details:\n";
    std::cout << "First Name: " << tab[id].getFirstName() << std::endl;
    std::cout << "Last Name: " << tab[id].getLastName() << std::endl;
    std::cout << "Nickname: " << tab[id].getNickName() << std::endl;
    std::cout << "Phone Number: " << tab[id].getPhoneNumber() << std::endl;
    std::cout << "Darkest Secret: " << tab[id].getDarkSecret() << std::endl;
}
