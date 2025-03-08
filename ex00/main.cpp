/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bouh <mel-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 06:43:41 by mel-bouh          #+#    #+#             */
/*   Updated: 2025/03/07 17:22:59 by mel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include.hpp"

void	AnimalSound(const Animal* Animal)
{
	Animal->makeSound();
}

void	workingPolymorphism()
{
	Dog huskey;
	Cat persian;
	Animal capybary;
	AnimalSound(&huskey);
	AnimalSound(&persian);
	AnimalSound(&capybary);
	std::cout << RED << "Deleting my tests objects" << RESET << std::endl;
}

void	wrongPolymorphism()
{
	WrongAnimal *wrong_Animal = new WrongAnimal();
	WrongAnimal *wrong_cat = new WrongCat();
	wrong_Animal->makeSound();
	wrong_cat->makeSound();
	delete wrong_cat;
	delete wrong_Animal;
}

int main()
{
	//subject tests
	std::cout << GREEN << "Creating subject tests objects" << RESET << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	std::cout << RED << "Deleting subject tests objects" << RESET << std::endl;
	delete meta;
	delete j;
	delete i;

	//My tests
	std::cout << GREEN << "Creating my tests objects" << RESET << std::endl;
	workingPolymorphism();

	//Wrong Animal test
	std::cout << GREEN << "Creating wrong Animal tests objects" << RESET << std::endl;
	wrongPolymorphism();
	std::cout << RED << "Deleting wrong Animal tests objects" << RESET << std::endl;
	return 0;
}
