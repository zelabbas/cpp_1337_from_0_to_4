/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 10:49:21 by zelabbas          #+#    #+#             */
/*   Updated: 2024/05/15 10:17:02 by zelabbas         ###   ########.fr       */
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
	ScavTrap b;
	b = a;
	a.setHitPoints(700);
	a.attack("saim");
	b.takeDamage(400);
	b.attack("test");
	std::cout << a.getHitPoints() << std::endl;
	return (0);
}