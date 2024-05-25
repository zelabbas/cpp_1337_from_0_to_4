/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 10:58:02 by zelabbas          #+#    #+#             */
/*   Updated: 2024/05/25 12:44:24 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria* materias[4];
		int counter;
		void clearMaterias(void);
		void copyMaterias(const MateriaSource& obj);
	public:
		MateriaSource(void);
		MateriaSource(const MateriaSource&);
		~MateriaSource(void);

		MateriaSource& operator= (const MateriaSource&);
		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
};


#endif