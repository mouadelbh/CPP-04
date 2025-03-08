/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bouh <mel-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 19:48:12 by mel-bouh          #+#    #+#             */
/*   Updated: 2025/03/08 00:25:12 by mel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	// std::cout << "Cure constructor called" << std::endl;
}

Cure::Cure(const Cure &src) : AMateria(src)
{
	// std::cout << "Cure copy constructor called" << std::endl;
}

Cure &Cure::operator=(const Cure &src)
{
	if (this != &src)
	{
		AMateria::operator=(src);
		// std::cout << "Cure assignation operator called" << std::endl;
	}
	return (*this);
}

Cure::~Cure()
{
	// std::cout << "Cure destructor called" << std::endl;
}

std::string const &Cure::getType() const
{
	return (this->_type);
}

AMateria* Cure::clone() const
{
	return (new Cure());
}

void Cure::use(ICharacter& target)
{
	AMateria::use(target);
}
