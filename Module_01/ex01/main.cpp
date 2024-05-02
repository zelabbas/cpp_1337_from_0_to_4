/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 21:17:35 by zelabbas          #+#    #+#             */
/*   Updated: 2024/05/02 13:52:58 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// void	leak(){system("leaks zombiehorde");}

int main(int ac, char **av)
{
	// atexit(leak);
	(void)av;
	if (ac != 1)
	{
		std::cerr << "The program don't accepte arguments." << std::endl;
		return (0);
	}
	Zombie *tab_zombies;

	tab_zombies = zombieHorde(10, "main");
	if (!tab_zombies)
	{
		std::cout << "The table is empty." << std::endl;
		return (0);
	}
	for (size_t i = 0; i < 10; i++)
		tab_zombies[i].announce();
	delete[] tab_zombies;
	return (0);
}