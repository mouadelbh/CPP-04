/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bouh <mel-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 05:13:49 by mel-bouh          #+#    #+#             */
/*   Updated: 2025/03/07 19:20:33 by mel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include.hpp"

void	allocate_animals(AAnimal *animals[10])
{
	for (int i = 0; i < 5; i++)
		animals[i] = new Cat();
	for (int i = 5; i < 10; i++)
		animals[i] = new Dog();
}

int main(void)
{
	//subject test
	{
		const AAnimal* j = new Dog();
		const AAnimal* i = new Cat();

		delete j;//should not create a leak
		delete i;
	}
	//my test
	{
		AAnimal *animals[10];
		allocate_animals(animals);
		for (int i = 0; i < 10; i++)
			animals[i]->makeSound();
		for (int i = 0; i < 10; i++)
			delete animals[i];
	}
	//deep copy tests
	{
		Dog cat;
		Dog copy = cat;
		std::cout << "origin ideas:" << std::endl;
		for (int i = 0; i < 10; i++)
			std::cout << cat.getIdea(i) << std::endl;
		std::cout << "copy ideas:" << std::endl;
		for (int i = 0; i < 10; i++)
			std::cout << copy.getIdea(i) << std::endl;
		cat.setIdea("Tuna");
		std::cout << "origin ideas:" << std::endl;
		for (int i = 0; i < 10; i++)
			std::cout << cat.getIdea(i) << std::endl;
		std::cout << "copy ideas:" << std::endl;
		for (int i = 0; i < 10; i++)
			std::cout << copy.getIdea(i) << std::endl;
	}
}
