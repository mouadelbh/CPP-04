/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bouh <mel-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 06:44:22 by mel-bouh          #+#    #+#             */
/*   Updated: 2025/03/07 19:18:00 by mel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

#include "Brain.hpp"

class AAnimal
{
	protected:
		std::string type;
	public:
		AAnimal();
		AAnimal(std::string type);
		AAnimal(const AAnimal &src);
		AAnimal &operator=(const AAnimal &src);
		virtual ~AAnimal();
		std::string getType() const;
		virtual void makeSound() const = 0;
};
