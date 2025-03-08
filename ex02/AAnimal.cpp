/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bouh <mel-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 03:28:12 by mel-bouh          #+#    #+#             */
/*   Updated: 2025/03/07 19:29:46 by mel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	type = "Animal";
	std::cout << "Animal Default constructor called" << std::endl;
}

AAnimal::AAnimal(std::string type)
{
	this->type = type;
	std::cout << "Animal " << type << " is constructed" << std::endl;
}

AAnimal::~AAnimal()
{
	std::cout << "Animal Destructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &src)
{
	std::cout << "Animal Copy constructor called" << std::endl;
	*this = src;
}

AAnimal &AAnimal::operator=(const AAnimal &src)
{
	if (this != &src)
	{
		std::cout << "Animal Assignation operator called" << std::endl;
		type = src.type;
	}
	return *this;
}

std::string AAnimal::getType() const
{
	return type;
}

void AAnimal::makeSound() const
{
	std::cout << "Let me do it for you" << std::endl;
}
