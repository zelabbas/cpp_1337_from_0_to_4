/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 17:31:08 by zelabbas          #+#    #+#             */
/*   Updated: 2024/04/28 18:36:40 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"


void	ft_option()
{
	std::cout << "Valid commands:\n";
    std::cout << std::setw(10) << std::left << "ADD" << " - Add a new contact to the phone book.\n";
    std::cout << std::setw(10) << std::left << "SEARCH" << " - Search for a contact in the phone book.\n";
    std::cout << std::setw(10) << std::left << "EXIT" << " - Exit the program.\n";
}

int main()
{
	std::string	command;
	PhoneBook	obj;

	ft_option();
	while (1)
	{
		std::cout << "enter a command: ";
		if (!std::getline(std::cin, command))
			break ;
		if (!command.compare("ADD"))
			obj.add();
		if (!command.compare("SEARCH"))
			obj.search();
		if (!command.compare("EXIT"))
		{
			std::cout << "exit" << std::endl;
			exit(0);
		}
	}
	return (0);
}