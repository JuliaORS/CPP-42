/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 19:54:35 by julolle-          #+#    #+#             */
/*   Updated: 2024/01/23 19:54:35 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp" 

int main( ) {

	
	{
	std::cout << std::endl << "---- My own test----" << std::endl;
	
	std::cout << std::endl << "---- Constructors ----" << std::endl << std::endl;

	Animal AnimalGen;
	Cat Garfield;
	Dog Oddie;
	
	std::cout << std::endl << "---- Make sounds ----" << std::endl << std::endl;

	std::cout << "Animal makes ";
	AnimalGen.makeSound();
	std::cout << "Cat makes ";
	Garfield.makeSound();
	std::cout << "Dog makes ";
	Oddie.makeSound();

	std::cout << std::endl << "---- Destructors ----" << std::endl<< std::endl;
	}

	{
		std::cout << std::endl << "---- Mandatory test----" << std::endl << std::endl;
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound();
		j->makeSound();
		meta->makeSound();

		delete i;
		delete j;
		delete meta;
	}

	{
		std::cout << std::endl << "---- Fail test----" << std::endl << std::endl;
		const WrongAnimal* meta = new WrongAnimal();
		const WrongAnimal* i = new WrongCat();
		std::cout << i->getType() << " " << std::endl;
		i->makeSound();
		meta->makeSound();

		delete i;
		delete meta;
	}
	return (0);
}
