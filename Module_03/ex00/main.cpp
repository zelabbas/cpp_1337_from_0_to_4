/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 10:49:21 by zelabbas          #+#    #+#             */
/*   Updated: 2024/05/14 11:53:25 by zelabbas         ###   ########.fr       */
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
	ClapTrap b("moicho");
	ClapTrap c(a);
	
	b.attack("zak");
	a.attack("test");
	c.attack("saim");
	c.takeDamage(2);
	b.takeDamage(5);
	b.beRepaired(20);
	b.takeDamage(9);
	return (0);
}