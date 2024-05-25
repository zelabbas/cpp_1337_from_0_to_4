/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 15:36:08 by zelabbas          #+#    #+#             */
/*   Updated: 2024/05/25 19:03:14 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

void leak(void) {system("leaks abstract");}
int main()
{
	atexit(leak);
	
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	j->makeSound();
	i->makeSound();
	std::cout << std::endl;
	delete j;
	delete i;
	std::cout << std::endl;

	Animal* tab[4];

	std::cout << std::endl;
	
	tab[0] = new Cat();
	tab[1] = new Cat();
	tab[2] = new Dog();
	tab[3] = new Dog();
	std::cout << std::endl;

	for (size_t i = 0; i < 4; i++)
		tab[i]->makeSound();
	std::cout << std::endl;
	
	for (size_t i = 0; i < 4; i++)
		delete tab[i];
	return 0;
}