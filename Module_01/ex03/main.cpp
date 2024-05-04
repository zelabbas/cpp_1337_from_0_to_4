/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 15:12:22 by zelabbas          #+#    #+#             */
/*   Updated: 2024/05/03 23:44:26 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

// void	leak(){system("leaks human");}

int main(int ac, char **av)
{
	// atexit(leak);
	(void)av;
	if (ac != 1)
	{
		std::cerr << "The program don't accepte arguments." << std::endl;
		return (0);
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
		jim.getWeapon();
	}
	return 0;
}