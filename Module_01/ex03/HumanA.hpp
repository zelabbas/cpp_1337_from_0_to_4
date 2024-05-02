/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 16:03:44 by zelabbas          #+#    #+#             */
/*   Updated: 2024/05/01 14:32:42 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP
#include "Weapon.hpp"

class HumanA
{
	private:
		std::string	name;
		Weapon& 	wp_A;
	public:
					HumanA(std::string, Weapon& weapon);
					~HumanA();
		void		attack(void);
		
		void		setWeapon(Weapon&);
		Weapon& 	getWeapon(void);

		void		setName(std::string);
		std::string getName(void);
		
};

#endif