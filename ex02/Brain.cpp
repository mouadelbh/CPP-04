/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bouh <mel-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 05:28:50 by mel-bouh          #+#    #+#             */
/*   Updated: 2025/03/07 17:59:33 by mel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Default constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		ideas[i] = "Idea";
}

Brain::Brain(std::string idea)
{
	std::cout << "Brain type constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		ideas[i] = idea;
}

Brain::~Brain()
{
	std::cout << "Brain Destructor called" << std::endl;
}

Brain::Brain(const Brain &src)
{
	std::cout << "Brain Copy constructor called" << std::endl;
	*this = src;
}

Brain &Brain::operator=(const Brain &src)
{
	if (this != &src)
	{
		std::cout << "Brain Assignation operator called" << std::endl;
		for (int i = 0; i < 100; i++)
			ideas[i] = src.ideas[i];
	}
	return *this;
}

void	Brain::setIdea(const std::string &idea)
{
	for (int i = 0; i < 100; i++)
		ideas[i] = idea;
}

std::string	Brain::getIdea(int i) const
{
	if (i < 0)
		i = 0;
	else if (i > 99)
		i = 99;
	return ideas[i];
}
