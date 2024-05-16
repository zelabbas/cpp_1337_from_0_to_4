/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 10:49:21 by zelabbas          #+#    #+#             */
/*   Updated: 2024/05/16 12:42:18 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(int ac, char **av)
{
	(void)av;
	if (ac != 1)
	{
		std::cout << "Error Usage: program don't accepte arguments." << std::endl;
		return (0);
	}
	ClapTrap a("tkanane");
	ClapTrap b("zak");
	ClapTrap  c;
	c = a;

	std::cout << a.getName() << std::endl;
	a.attack("saim");
	a.takeDamage(20);
	a.beRepaired(10);
	std::cout << std::endl;
	b.attack("moicho");
	b.takeDamage(5);
	b.attack("youyou");
	b.takeDamage(5);
	b.attack("osos");
	std::cout << std::endl;

	std::cout << "hello my name is " << c.getName() << std::endl;
	return (0);
}