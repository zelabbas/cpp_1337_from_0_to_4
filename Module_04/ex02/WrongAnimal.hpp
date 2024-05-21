/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 18:20:14 by zelabbas          #+#    #+#             */
/*   Updated: 2024/05/18 20:11:46 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
	protected:
		std::string type;
	public:
		WrongAnimal(void);
		WrongAnimal(const WrongAnimal&);
		WrongAnimal(const std::string&);
		virtual ~WrongAnimal(void);
		WrongAnimal& operator= (const WrongAnimal&);

		void setType(const std::string&);
		const std::string& getType(void) const;
		void makeSound(void) const;
};

#endif