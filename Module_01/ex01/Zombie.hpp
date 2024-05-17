/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 20:37:23 by zelabbas          #+#    #+#             */
/*   Updated: 2024/05/17 20:25:13 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>
#include <cstdlib>

class Zombie
{
	private:
		std::string	name;
	public:
					Zombie();
					~Zombie();
		void		setName(std::string);
		std::string	getName(void) const;
		void announce(void) const;
};

Zombie* zombieHorde( int N, std::string name );
#endif	