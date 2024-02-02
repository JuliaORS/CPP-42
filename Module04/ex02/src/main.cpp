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

void	generalTest(){

	std::cout << std::endl << "------------------ My own tests-----------------" << std::endl;
	
	std::cout << std::endl << "---- Constructors ----" << std::endl << std::endl;

	Cat Garfield;
	Dog Oddie;
	
	std::cout << std::endl << "---- Make sounds ----" << std::endl << std::endl;

	std::cout << "Cat makes ";
	Garfield.makeSound();
	std::cout << "Dog makes ";
	Oddie.makeSound();

	std::cout << std::endl << "---- Destructors ----" << std::endl<< std::endl;

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

void	checkAbsClass(){

	std::cout << std::endl << "----------------- Checking abstract class -----------------" << std::endl << std::endl;

	//AAnimal tiger;

	//AAnimal* zebra = new AAnimal; 
	//delete zebra;

	AAnimal* lion = new Cat();
	lion->makeSound();

	delete lion;

}

int main(){

	generalTest();
	checkDeepCopy();
	checkAbsClass();
	return (0);
}
