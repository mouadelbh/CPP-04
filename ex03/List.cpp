/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   List.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bouh <mel-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 22:18:11 by mel-bouh          #+#    #+#             */
/*   Updated: 2025/03/08 01:42:48 by mel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "List.hpp"

List::List()
{
	head = NULL;
	// std::cout << "List default constructor called" << std::endl;
}

List::List(const List &src)
{
	// std::cout << "List copy constructor called" << std::endl;
	head = NULL;
	*this = src;
}

List	&List::operator=(const List &src)
{
	if (this != &src)
	{
		// std::cout << "List assignation operator called" << std::endl;
		this->clear();
		Node *tmp = src.head;
		while (tmp)
		{
			this->push_front(tmp->m->clone());
			tmp = tmp->next;
		}
	}
	return *this;
}

List::~List()
{
	// std::cout << "List destructor called" << std::endl;
	this->clear();
	head = NULL;
}

void	List::pop()
{
	if (head)
	{
		Node *tmp = head;
		head = head->next;
		delete tmp->m;
		delete tmp;
	}
}

void	List::push_front(AMateria *m)
{
	Node *newNode = new Node;
	newNode->m = m;
	newNode->next = head;
	head = newNode;
}

void	List::clear()
{
	Node *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		delete tmp->m;
		delete tmp;
	}
}

AMateria	*List::get(int idx)
{
	Node *tmp = head;
	int i = 0;

	while (tmp && i < idx)
	{
		tmp = tmp->next;
		i++;
	}
	if (tmp)
		return tmp->m;
	return NULL;
}
