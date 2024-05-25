/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 15:36:08 by zelabbas          #+#    #+#             */
/*   Updated: 2024/05/25 22:29:03 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete i;
	delete j;
	delete meta;
	std::cout << "---------------------------------------------" << std::endl;
	const WrongAnimal* wrongAnimal = new WrongAnimal();
	const WrongAnimal* wrongCat = new WrongCat();
	std::cout << wrongAnimal->getType() << " " << std::endl;
	std::cout << wrongCat->getType() << " " << std::endl;
	wrongCat->makeSound();
	wrongAnimal->makeSound();
	delete wrongCat;
	delete wrongAnimal;
	return 0;
}