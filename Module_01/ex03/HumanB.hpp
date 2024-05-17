/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 16:03:51 by zelabbas          #+#    #+#             */
/*   Updated: 2024/05/17 20:26:17 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP
#include "Weapon.hpp"

class HumanB
{
	private:
		std::string	name;
		Weapon* 	wp_B;
	public:
					HumanB(std::string);
					~HumanB();
		void		attack(void) const;
		
		void		setWeapon(Weapon&);
		Weapon&		getWeapon(void) const;
		
		void		setName(std::string);
		std::string	getName(void) const;
};


#endif