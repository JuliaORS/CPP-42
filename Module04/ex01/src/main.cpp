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

void	generalTest(){

	std::cout << std::endl << "------------------ My own tests-----------------" << std::endl;
	
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

void	arrayTest(){

	std::cout << std::endl << "------------- Create array of Animals -------------" << std::endl << std::endl;

	const int MAX_ANIMALS = 6;
	Animal *arrAnimal[MAX_ANIMALS];
	
	std::cout << std::endl << "-- Fill array of dogs--" << std::endl << std::endl;

	for (int i=0; i < MAX_ANIMALS/2; i++)
		arrAnimal[i] = new Dog;

	std::cout << std::endl << "-- Fill array of cats--" << std::endl << std::endl;

	for (int i=MAX_ANIMALS/2; i < MAX_ANIMALS; i++)
		arrAnimal[i] = new Cat;

	arrAnimal[0]->makeSound();
	arrAnimal[5]->makeSound();

	std::cout << std::endl << "-- Destructors --" << std::endl << std::endl;

	for (int i = 0; i < MAX_ANIMALS; i++)
        delete arrAnimal[i];
}

void	checkDeepCopy(){
	
	std::cout << std::endl << "------------- Check deep copies -------------" << std::endl << std::endl;
		
	Dog originalDog;
	originalDog.getBrain()->setIdea("I am hungry");
	originalDog.getBrain()->setIdea("I am happy");
	originalDog.getBrain()->setIdea("I am sad");

	Dog copyDog = originalDog;

	std::cout << std::endl << "-- Before modification --" << std::endl;
	std::cout << "-- Original dog --" << std::endl;
	originalDog.getBrain()->printIdeas();
	std::cout << "-- Copy dog --" << std::endl;
	copyDog.getBrain()->printIdeas();

	std::cout << std::endl << "-- After modification --" << std::endl;
	copyDog.getBrain()->setIdea("I am rare");
	originalDog.getBrain()->setIdea("I am resting");
	std::cout << "-- Original dog --" << std::endl;
	originalDog.getBrain()->printIdeas();
	std::cout << "-- Copy dog --" << std::endl;
	copyDog.getBrain()->printIdeas();

}

void	mandatoryTest(){

	std::cout << std::endl << "----------------- Mandatory test -----------------" << std::endl << std::endl;

	const Animal* j = new Dog(); 
	const Animal* i = new Cat();
	delete j;
	delete i;
}

int main(){

	generalTest();
	arrayTest();
	checkDeepCopy();
	mandatoryTest();

	return (0);
}
