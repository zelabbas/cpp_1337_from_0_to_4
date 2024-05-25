/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 20:16:31 by zelabbas          #+#    #+#             */
/*   Updated: 2024/05/25 10:26:33 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <string>
#include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
		std::string name;
		int counter;
		AMateria* inventory[4];
		void clearInventory(void);
		void copyInventory(const Character& other);
	public:
		Character();
		Character(const std::string&);
		Character(const Character&);
		~Character();
		Character& operator= (const Character&);
		const std::string& getName(void) const;
		void equip(AMateria* m);
 		void unequip(int idx);
 		void use(int idx, ICharacter& target);
};

#endif