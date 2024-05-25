/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 15:20:16 by zelabbas          #+#    #+#             */
/*   Updated: 2024/05/25 22:23:06 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
	private:
		/* data */
	public:
		Cat(void);
		Cat(const Cat&);
		~Cat();
		
		Cat& operator= (const Cat&);
		void makeSound(void) const;
};

#endif