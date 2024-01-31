/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 18:03:50 by julolle-          #+#    #+#             */
/*   Updated: 2024/01/31 19:28:07 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp" 

Dog::Dog() : AAnimal("dog"){
	this->_type = "dog";
	this->_brain = new Brain;
	std::cout << "Dog default construcor called." << std::endl;
}

Dog::Dog(const Dog & src) : AAnimal(src){
	*this = src;
	std::cout << "Dog copy construcor called. " << std::endl;
}

Dog::~Dog(){
	delete this->_brain;
	std::cout << "Dog Destructor called." << std::endl;
}

Dog & Dog::operator=(const Dog & src) {
	if (this != &src) {
		this->_brain = new Brain(*src._brain);
		
		this->_type = src.getType();
	}
	std::cout << "Dog copy assignment operator called." << std::endl;
	return (*this);
}

//GETTERS
Brain*	Dog::getBrain() const {
	return (_brain);
}

//SETTERS
void	Dog::setBrain(Brain* brain) {
	this->_brain = brain;
}

//FUNCTIONS
void Dog::makeSound(){
	std::cout << "...bub bub..." << std::endl;
}

void Dog::makeSound() const{
	std::cout << "...bub bub..." << std::endl;
}
