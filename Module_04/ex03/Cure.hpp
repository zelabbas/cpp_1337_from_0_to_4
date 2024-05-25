/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 14:52:56 by zelabbas          #+#    #+#             */
/*   Updated: 2024/05/25 14:57:29 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define	CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
	private:
		/* data */
	public:
		Cure(void);
		Cure(const std::string&);
		Cure(const Cure&);
		~Cure(void);
		Cure& operator=(const Cure&);
		AMateria* clone(void) const;
		void use(ICharacter& target);
};

#endif