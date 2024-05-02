/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 16:03:51 by zelabbas          #+#    #+#             */
/*   Updated: 2024/05/01 15:11:24 by zelabbas         ###   ########.fr       */
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
		void		attack(void);
		
		void		setWeapon(Weapon&);
		Weapon&		getWeapon(void);
		
		void		setName(std::string);
		std::string	getName(void);
};


#endif