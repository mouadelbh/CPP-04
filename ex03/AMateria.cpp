/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bouh <mel-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 19:35:57 by mel-bouh          #+#    #+#             */
/*   Updated: 2025/03/07 21:45:11 by mel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : _type("default")
{
	// std::cout << "AMateria constructor called" << std::endl;
}

AMateria::AMateria(std::string const & type) : _type(type)
{
	// std::cout << "AMateria constructor called" << std::endl;
}

AMateria::AMateria(const AMateria &src)
{
	// std::cout << "AMateria copy constructor called" << std::endl;
	*this = src;
}

AMateria &AMateria::operator=(const AMateria &src)
{
	if (this != &src)
	{
		// std::cout << "AMateria assignation operator called" << std::endl;
		this->_type = src._type;
	}
	return (*this);
}

AMateria::~AMateria()
{
	// std::cout << "AMateria destructor called" << std::endl;
}

std::string const &AMateria::getType() const
{
	return (this->_type);
}

void	AMateria::use(ICharacter& target)
{
	if (this->_type == "ice")
		std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	else if (this->_type == "cure")
		std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	else
		std::cout << "* uses " << this->_type << " on " << target.getName() << " *" << std::endl;
}
