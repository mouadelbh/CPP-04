/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bouh <mel-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 20:53:50 by mel-bouh          #+#    #+#             */
/*   Updated: 2025/03/08 02:05:03 by mel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : name("default")
{
	// std::cout << "Character default constructor called" << std::endl;
	list = new List();
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
}

Character::Character(std::string const & name) : name(name)
{
	list = new List();
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
	// std::cout << "Character constructor called" << std::endl;
}

Character::Character(const Character &src)
{
	// std::cout << "Character copy constructor called" << std::endl;
	list = new List(); // Initialize list before assignment
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
	*this = src;
}

Character	&Character::operator=(const Character &src)
{
	if (this != &src)
	{
		// std::cout << "Character assignation operator called" << std::endl;
		for (int i = 0; i < 4; i++)
		{
			if (this->inventory[i])
				delete this->inventory[i];
			this->inventory[i] = NULL;  // Set to NULL after deleting
			if (src.inventory[i])
				this->inventory[i] = src.inventory[i]->clone();
		}
		this->name = src.name;
	}
	return *this;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i])
			delete this->inventory[i];
	}
	delete list;
	// std::cout << "Character destructor called" << std::endl;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4 && this->inventory[idx])
		inventory[idx]->use(target);
	else
		std::cout << "Invalid index" << std::endl;
}

void	Character::equip(AMateria* m)
{
	int i = 0;

	while (i < 4)
	{
		if (!this->inventory[i])
		{
			this->inventory[i] = m;
			break;
		}
		i++;
	}
	if (i == 4)
		std::cout << "Inventory is full" << std::endl;
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
	{
		if (this->inventory[idx])
		{
			list->push_front(this->inventory[idx]);
			this->inventory[idx] = NULL;
		}
		else
			std::cout << "Empty slot" << std::endl;
	}
	else
		std::cout << "Invalid index" << std::endl;
}

std::string	const &Character::getName() const
{
	return this->name;
}

void	Character::printInventory()
{
	std::cout << "-------Inventory-------" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i])
			std::cout << "       "<<this->inventory[i]->getType() << std::endl;
	}
	std::cout << "-----------------------" << std::endl;
}

void	Character::printList()
{
	AMateria *m;
	int		i = 0;
	m = list->get(0);

	std::cout << "-------Ground-------" << std::endl;
	while (m) {
		std::cout << m->getType() << std::endl;
		i++;
		m = list->get(i);
	}
	std::cout << "-----------------------" << std::endl;
}
