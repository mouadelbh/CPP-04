/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   List.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bouh <mel-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 22:15:25 by mel-bouh          #+#    #+#             */
/*   Updated: 2025/03/07 22:17:50 by mel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

struct Node
{
	AMateria *m;
	Node *next;
};

class List
{
	private:
		Node *head;
	public:
		List();
		List(const List &src);
		List	&operator=(const List &src);
		~List();
		void	push_front(AMateria *m);
		void	pop();
		void	clear();
		AMateria	*get(int idx);
};
