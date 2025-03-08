/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bouh <mel-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 00:54:23 by mel-bouh          #+#    #+#             */
/*   Updated: 2025/03/08 01:00:00 by mel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria *blueprint[4];
	public:
		MateriaSource();
		MateriaSource(const MateriaSource &src);
		MateriaSource	&operator=(const MateriaSource &src);
		~MateriaSource();
		void		learnMateria(AMateria *m);
		AMateria	*createMateria(std::string const &type);
};
