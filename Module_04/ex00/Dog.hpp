/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 14:57:13 by zelabbas          #+#    #+#             */
/*   Updated: 2024/05/25 22:27:42 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
	private:
		/* date */
	public:
		Dog(void);
		Dog(const Dog&);
		~Dog();
		
		Dog& operator= (const Dog&);
		void makeSound(void) const;
};

#endif