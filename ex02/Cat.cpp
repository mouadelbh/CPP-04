/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bouh <mel-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 03:33:22 by mel-bouh          #+#    #+#             */
/*   Updated: 2025/03/07 19:19:08 by mel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include.hpp"

Cat::Cat() : AAnimal("Cat")
{
	brain = new Brain("Miw Miw");
	std::cout << "Cat Default constructor called" << std::endl;
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Cat Destructor called" << std::endl;
}

Cat::Cat(const Cat &src)
{
	std::cout << "Cat Copy constructor called" << std::endl;
	brain = NULL;
	*this = src;
}

Cat &Cat::operator=(const Cat &src)
{
	if (this != &src)
	{
		std::cout << "Cat Assignation operator called" << std::endl;
		if (brain)
			delete this->brain;
		type = src.type;
		this->brain = new Brain(*src.brain);
	}
	return *this;
}

void	Cat::setIdea(const std::string &idea)
{
	brain->setIdea(idea);
}

void	Cat::makeSound() const
{
	std::cout << "Meow Meow" << std::endl;
}

std::string	Cat::getIdea(int i) const
{
	return brain->getIdea(i);
}
