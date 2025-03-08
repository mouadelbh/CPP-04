/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bouh <mel-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 19:42:20 by mel-bouh          #+#    #+#             */
/*   Updated: 2025/03/07 21:51:19 by mel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	// std::cout << "Ice constructor called" << std::endl;
}

Ice::Ice(const Ice &src) : AMateria(src)
{
	// std::cout << "Ice copy constructor called" << std::endl;
}

Ice &Ice::operator=(const Ice &src)
{
	if (this != &src)
	{
		AMateria::operator=(src);
		// std::cout << "Ice assignation operator called" << std::endl;
	}
	return (*this);
}

Ice::~Ice()
{
	// std::cout << "Ice destructor called" << std::endl;
}

AMateria* Ice::clone() const
{
	return (new Ice());
}

std::string const &Ice::getType() const
{
	return (this->_type);
}

void Ice::use(ICharacter& target)
{
	AMateria::use(target);
}
