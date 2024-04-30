/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 17:31:08 by zelabbas          #+#    #+#             */
/*   Updated: 2024/04/30 15:32:29 by zelabbas         ###   ########.fr       */
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

int main(int ac, char **av)
{
	std::string	command;
	PhoneBook	obj;
	(void)av;

	if (ac != 1)
	{
		std::cout << "Error Usage: The program don't accepte areguments." << std::endl;
		return (0);
	}
	ft_option();
	while (1)
	{
		std::cout << "enter a command: ";
		if (!std::getline(std::cin, command))
			break ;
		else if (!command.compare("ADD"))
			obj.add();
		else if (!command.compare("SEARCH"))
			obj.search();
		else if (!command.compare("EXIT"))
		{
			std::cout << "exit" << std::endl;
			exit(0);
		}
		else
			std::cout << RED_COLOR <<"Command not valid." << RESET_COLOR << std::endl;
	}
	return (0);
}