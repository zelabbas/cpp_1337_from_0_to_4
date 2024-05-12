/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 09:05:36 by zelabbas          #+#    #+#             */
/*   Updated: 2024/05/12 16:32:00 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main(int ac, char **av)
{
	int	i;
	std::string str;

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		i = 1;
		while (i < ac)
		{
			str = av[i];
			for (size_t j = 0; j < str.length() ; j++)
			{
				if (!std::isupper(str.at(j)))
					str.at(j) = std::toupper(str.at(j));
			}
			std::cout << str;
			i++;
		}
		std::cout << std::endl;
	}
}
