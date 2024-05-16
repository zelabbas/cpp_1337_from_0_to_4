/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 10:49:21 by zelabbas          #+#    #+#             */
/*   Updated: 2024/05/16 12:53:49 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(int ac, char **av)
{
	(void)av;
	if (ac != 1)
	{
		std::cout << "Error Usage: program don't accepte arguments." << std::endl;
		return (0);
	}
	ScavTrap a("zak");
	std::cout << std::endl;
	ScavTrap const c("test");
	std::cout << std::endl;
	ScavTrap b;
	std::cout << std::endl;
	a.attack("youyou");
	a.takeDamage(120);
	a.attack("saim");
	std::cout << std::endl;

	b.takeDamage(400);
	b.attack("test");
	
	std::cout << a.getHitPoints() << std::endl;
	std::cout << "my name is " << c.getName() << " my hit points is " << c.getHitPoints() << std::endl;
	std::cout << std::endl;

	b.guardGate();
	return (0);
}