/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 20:37:23 by zelabbas          #+#    #+#             */
/*   Updated: 2024/04/29 21:53:39 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>

class Zombie
{
	private:
		std::string	name;
	public:
					Zombie();
					~Zombie();
		void		setName(std::string);
		std::string	getName(void);
		void announce(void);
};

Zombie* zombieHorde( int N, std::string name );
#endif	