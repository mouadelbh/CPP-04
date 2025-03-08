/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bouh <mel-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 00:55:10 by mel-bouh          #+#    #+#             */
/*   Updated: 2025/03/08 01:37:57 by mel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	// std::cout << "MateriaSource default constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->blueprint[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &src)
{
	// std::cout << "MateriaSource copy constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->blueprint[i] = NULL;
	*this = src;
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &src)
{
	if (this != &src)
	{
		// std::cout << "MateriaSource assignation operator called" << std::endl;
		for (int i = 0; i < 4; i++)
		{
			if (this->blueprint[i])
				delete this->blueprint[i];
			this->blueprint[i] = NULL;
			if (src.blueprint[i])
				this->blueprint[i] = src.blueprint[i]->clone();
		}
	}
	return *this;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->blueprint[i])
			delete this->blueprint[i];
	}
	// std::cout << "MateriaSource destructor called" << std::endl;
}

void	MateriaSource::learnMateria(AMateria *m)
{
	int i = 0;

	while (i < 4)
	{
		if (!this->blueprint[i])
		{
			this->blueprint[i] = m->clone();
			break;
		}
		i++;
	}
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->blueprint[i] && this->blueprint[i]->getType() == type)
			return this->blueprint[i]->clone();
	}
	return NULL;
}
