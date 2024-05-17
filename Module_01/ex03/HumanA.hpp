/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 16:03:44 by zelabbas          #+#    #+#             */
/*   Updated: 2024/05/17 20:27:10 by zelabbas         ###   ########.fr       */
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
		void		attack(void) const;
		
		void		setWeapon(Weapon&);
		Weapon& 	getWeapon(void) const;

		void		setName(std::string);
		std::string getName(void) const;
		
};

#endif