/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 20:43:21 by zelabbas          #+#    #+#             */
/*   Updated: 2024/05/02 13:50:17 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(int ac, char **av)
{
	(void)av;
	if (ac != 1)
	{
		std::cerr << "The program don't accepte arguments." << std::endl;
		return (0);
	}
	Zombie *obj;
	Zombie obj1;
	Zombie obj2;
	obj1.setName("Foo");
	obj2.setName("red");
	obj = newZombie("blue");
	randomChump("green");
	obj->announce();
	obj1.announce();
	obj2.announce();
	delete obj;
	return (0);
}