/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bouh <mel-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 05:27:06 by mel-bouh          #+#    #+#             */
/*   Updated: 2025/03/07 17:59:16 by mel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Brain
{
	private:
		std::string ideas[100];
	public:
		Brain();
		Brain(std::string idea);
		Brain(const Brain &src);
		Brain &operator=(const Brain &src);
		~Brain();
		void	setIdea(const std::string &idea);
		std::string	getIdea(int i) const;
};
