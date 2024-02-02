/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 18:03:50 by julolle-          #+#    #+#             */
/*   Updated: 2024/02/02 11:58:07 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp" 

Cat::Cat() : AAnimal("cat"){
	this->_type = "cat";
	this->_brain = new Brain;
	std::cout << "Cat default construcor called." << std::endl;
}

Cat::Cat(const Cat & src) : AAnimal(src){
	*this = src;
	std::cout << "Cat copy construcor called." << std::endl;
}

Cat::~Cat(){
	delete this->_brain ;
	std::cout << "Cat Destructor called." << std::endl;
}

Cat & Cat::operator=(const Cat & src) {
	if (this != &src) {
		this->_brain = new Brain(*src._brain);
		this->_type = src.getType();
	}
	std::cout << "Cat copy assignment operator called." << std::endl;
	return (*this);
}

//GETTERS
Brain*	Cat::getBrain() const {
	return (_brain);
}

//SETTERS
void	Cat::setBrain(Brain* brain) {
	this->_brain = brain;
}

//FUNCTIONS
void Cat::makeSound() {
	std::cout << "...meow meow..." << std::endl;
}

void Cat::makeSound() const{
	std::cout << "...meow meow..." << std::endl;
}