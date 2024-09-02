/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 11:10:00 by zelabbas          #+#    #+#             */
/*   Updated: 2024/05/25 16:01:02 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"


void MateriaSource::clearMaterias(void)
{
    for (int i = 0; i < this->counter; ++i)
	{
        delete materias[i];
        materias[i] = NULL;
    }
}

void MateriaSource::copyMaterias(const MateriaSource& other)
{
    for (int i = 0; i < 4; ++i)
	{
        if (other.materias[i] != NULL)
            materias[i] = other.materias[i]->clone();
		else
            materias[i] = NULL;
    }
}

MateriaSource::MateriaSource(void)
{
	this->counter = 0;
	for (size_t i = 0; i < 4; i++)
	{
		this->materias[i] = NULL;
	}
}

MateriaSource::MateriaSource(const MateriaSource& obj)
{
	*this = obj;
}

MateriaSource::~MateriaSource(void)
{
	for (size_t i = 0; i < 4; i++)
	{
		if (this->materias[i] != NULL)
			delete this->materias[i];
	}
}

MateriaSource& MateriaSource::operator= (const MateriaSource& obj)
{
	if (this != &obj)
	{
		clearMaterias();
		this->counter = obj.counter;
		copyMaterias(obj);
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria* m)
{
	if (this->counter < 4 && m)
	{
		this->materias[this->counter] = m;
		this->counter++;
	}
	else
		delete m;
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < this->counter; i++)
	{
		if (this->materias[i]->getType() == type)
			return (this->materias[i]->clone());
	}
	return (NULL);
}
