/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 11:07:21 by zelabbas          #+#    #+#             */
/*   Updated: 2024/05/25 14:55:09 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
	private:
		/* data */
	public:
		Ice(void);
		Ice(const std::string&);
		Ice(const Ice&);
		~Ice(void);
		Ice& operator=(const Ice&);
		AMateria* clone(void) const;
		void use(ICharacter& target);
};

#endif