/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 15:57:19 by zelabbas          #+#    #+#             */
/*   Updated: 2024/05/03 16:59:46 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int main(int ac, char **av)
{
	std::string		file_in;
	std::string		str_toreplace;
	std::string		str_replace;
	std::string		line;
	std::ifstream 	file_read;
	std::ofstream 	file_write;
	
	if (ac != 4)
	{
		std::cerr << "Error Usage: ./replace filename string1 string2" << std::endl;
		return (0);
	}
	file_in = av[1];
	str_toreplace = av[2];
	str_replace = av[3];
	if (!str_toreplace.compare(""))
	{
		std::cerr << "s1 could not be empty" << std::endl;
		return (0);
	}
	std::cout << "file to read is:" << file_in << std::endl;
	std::cout << "file to write is: " << file_in + ".replace" << std::endl;  
	std::cout << "str_toreplace: " << str_toreplace << std::endl; 
	std::cout << "str_replace: " << str_replace << std::endl; 
	file_read.open(file_in);
	if(!file_read.is_open())
	{
		std::cerr << "Error : could not open the file: " << file_in << std::endl;
		return (0);
	}
	file_write.open(file_in + ".replace");
	if (!file_write.is_open())
	{
		std::cerr << "Error : could not creat the file: " << file_in + ".replace" << std::endl;
		file_read.close();
		return (0);
	}
	while (std::getline(file_read, line))
	{
		file_write << replace_string(line ,str_toreplace, str_replace);
		if (!file_read.eof())
			file_write << "\n";
	}
	file_read.close();
	file_write.close();
	std::cout << "Done ✅" << std::endl;
	return (0);
}