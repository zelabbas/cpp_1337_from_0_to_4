/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 12:26:52 by zelabbas          #+#    #+#             */
/*   Updated: 2024/05/01 12:26:02 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>
#include <string>

class Weapon
{
	private:
		std::string	type;
	public:
							Weapon(std::string);
							~Weapon();
		void				setType(std::string);
		const std::string&	getType(void);
};

#endif