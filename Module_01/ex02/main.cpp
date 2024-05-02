/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 21:54:33 by zelabbas          #+#    #+#             */
/*   Updated: 2024/05/02 13:51:35 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
	(void)av;
	if (ac != 1)
	{
		std::cerr << "The program don't accepte arguments." << std::endl;
		return (0);
	}
	std::string str;
	str = "HI THIS IS BRAIN";
	
	std::string* stringPTR = &str;
	std::string& stringREF = str;
	
	std::cout << "the The memory address :" << std::endl;
	std::cout << "The memory address of the string variable: " << &str << std::endl;
	std::cout << "The memory address held by stringPTR: " << stringPTR << std::endl;
	std::cout << "The memory address held by stringREF: " << &stringREF << std::endl;
	std::cout << "-------------------------------------------------------------" << std::endl;
	std::cout << "The value:" << std::endl;
	std::cout << "The value of the string variable: " << str << std::endl;
	std::cout << "The value pointed to by stringPTR: " << *stringPTR << std::endl;
	std::cout << "The value pointed to by stringREF: " << stringREF << std::endl;
	return (0);
}