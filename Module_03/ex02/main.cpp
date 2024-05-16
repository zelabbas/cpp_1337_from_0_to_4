/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 10:49:21 by zelabbas          #+#    #+#             */
/*   Updated: 2024/05/16 13:22:06 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(int ac, char **av)
{
	(void)av;
	if (ac != 1)
	{
		std::cout << "Error Usage: program don't accepte arguments." << std::endl;
		return (0);
	}
	FragTrap a("zak");
	std::cout << std::endl;
	FragTrap const c("test");
	std::cout << std::endl;
	FragTrap b;
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

	b.highFivesGuys();
	return (0);
}