/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bouh <mel-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 20:38:50 by mel-bouh          #+#    #+#             */
/*   Updated: 2025/03/08 01:01:50 by mel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ICharacter.hpp"
#include "AMateria.hpp"
#include "List.hpp"

class	Character : public ICharacter
{
	private:
		std::string	name;
		AMateria	*inventory[4];
		List		*list;
	public:
		Character();
		Character(std::string const & name);
		Character(const Character &src);
		Character	&operator=(const Character &src);
		virtual	~Character();
		void	use(int idx, ICharacter& target) ;
		void	equip(AMateria* m);
		void	unequip(int idx);
		void	printList();
		void 	printInventory();
		std::string	const &getName() const;
};
