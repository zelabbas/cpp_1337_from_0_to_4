/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 16:35:52 by zelabbas          #+#    #+#             */
/*   Updated: 2024/05/24 20:08:31 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <string>

#include "ICharacter.hpp"

class ICharacter;


class AMateria
{
	protected:
		std::string type;
	public:
		AMateria(void);
		AMateria(std::string const &type);
		AMateria(const AMateria &);
		virtual ~AMateria(void);
		AMateria &operator=(const AMateria &);
		std::string const &getType() const; // Returns the materia type
		void setTyape(const std::string &);
		virtual AMateria *clone() const = 0;
		virtual void use(ICharacter &target);
};

#endif