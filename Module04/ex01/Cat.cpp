/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 18:03:50 by julolle-          #+#    #+#             */
/*   Updated: 2024/01/29 19:43:03 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp" 

Cat::Cat() : Animal("cat"){
	this->_type = "cat";
	std::cout << "Cat default construcor called." << std::endl;
}

Cat::Cat(const Cat & src) : Animal(src){
	*this = src;
	std::cout << "Cat copy construcor called." << std::endl;
}

Cat::~Cat(){
	std::cout << "Cat Destructor called." << std::endl;
}

Cat & Cat::operator=(const Cat & src) {
	if (this != &src) {
		this->_type = src.getType();
	}
	std::cout << "Cat copy assignment operator called." << std::endl;
	return (*this);
}

//FUNCTIONS
void Cat::makeSound() {
	std::cout << "...meow meow..." << std::endl;
}

void Cat::makeSound() const{
	std::cout << "...meow meow..." << std::endl;
}
