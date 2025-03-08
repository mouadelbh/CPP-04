/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bouh <mel-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 03:35:29 by mel-bouh          #+#    #+#             */
/*   Updated: 2025/03/07 19:12:33 by mel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include.hpp"

Dog::Dog() : Animal("Dog")
{
	brain = new Brain("Humpf Humpf");
	std::cout << "Dog Default constructor called" << std::endl;
}

Dog::~Dog()
{
	delete brain;
	std::cout << "Dog Destructor called" << std::endl;
}

Dog::Dog(const Dog &src)
{
	brain = NULL;
	std::cout << "Dog Copy constructor called" << std::endl;
	*this = src;
}

Dog &Dog::operator=(const Dog &src)
{
	if (this != &src)
	{
		std::cout << "Dog Assignation operator called" << std::endl;
		if (brain)
			delete this->brain;
		type = src.type;
		this->brain = new Brain(*src.brain);
	}
	return *this;
}

void	Dog::makeSound() const
{
	std::cout << "Woof Woof" << std::endl;
}

void	Dog::setIdea(const std::string &idea)
{
	brain->setIdea(idea);
}

std::string	Dog::getIdea(int i) const
{
	return brain->getIdea(i);
}
