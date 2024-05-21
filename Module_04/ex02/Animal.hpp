/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 12:49:56 by zelabbas          #+#    #+#             */
/*   Updated: 2024/05/21 14:21:06 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
	protected:
		std::string type;
	public:
		Animal(void);
		Animal(const Animal&);
		Animal(const std::string&);
		virtual ~Animal(void);
		Animal& operator= (const Animal&);

		void setType(const std::string&);
		const std::string& getType(void) const;
		virtual void makeSound(void) const = 0;
};

#endif