/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 21:48:11 by zelabbas          #+#    #+#             */
/*   Updated: 2024/05/25 17:13:35 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Default Brain constructor called" << std::endl;
	for (size_t i = 0; i < 100; i++)
		this->ideas[i] = "IDEA";
}

Brain::Brain(const Brain& obj)
{
	std::cout << "copy Brain constructor called" << std::endl;
	*this = obj;
}

Brain::~Brain(void)
{
	std::cout << "Brain Destructor called" << std::endl;
}

Brain&	Brain::operator=(const Brain& obj)
{
	std::cout << "Brain assignment operator called" << std::endl;
	if (this != &obj)
	{
		for (size_t i = 0; i < 100; i++)
		{
			this->ideas[i] = obj.ideas[i];
		}
	}
	return (*this);
}