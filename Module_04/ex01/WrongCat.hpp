/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 18:20:20 by zelabbas          #+#    #+#             */
/*   Updated: 2024/05/25 22:32:30 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	private:
		/* data */
	public:
		WrongCat(void);
		WrongCat(const WrongCat&);
		~WrongCat();
		
		WrongCat& operator= (const WrongCat&);
		void makeSound(void) const;
};

#endif