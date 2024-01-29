/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 18:03:50 by julolle-          #+#    #+#             */
/*   Updated: 2024/01/29 19:45:11 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp" 

Dog::Dog() : Animal("dog"){
	std::cout << "Dog default construcor called." << std::endl;
	this->_type = "dog";
}

Dog::Dog(const Dog & src) : Animal(src){
	*this = src;
	std::cout << "Dog copy construcor called. " << std::endl;
}

Dog::~Dog(){
	std::cout << "Dog Destructor called." << std::endl;
}

Dog & Dog::operator=(const Dog & src) {
	if (this != &src) {
		this->_type = src.getType();
	}
	std::cout << "Dog copy assignment operator called." << std::endl;
	return (*this);
}

//FUNCTIONS
void Dog::makeSound(){
	std::cout << "...bub bub..." << std::endl;
}

void Dog::makeSound() const{
	std::cout << "...bub bub..." << std::endl;
}
