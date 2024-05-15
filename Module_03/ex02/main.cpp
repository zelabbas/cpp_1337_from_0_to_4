/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 10:49:21 by zelabbas          #+#    #+#             */
/*   Updated: 2024/05/15 11:34:06 by zelabbas         ###   ########.fr       */
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
	FragTrap b;
	b = a;
	a.attack("youyou");
	a.takeDamage(120);
	a.attack("saim");
	b.takeDamage(400);
	b.attack("test");
	b.highFivesGuys();
	std::cout << a.getHitPoints() << std::endl;
	return (0);
}