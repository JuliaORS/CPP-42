/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 18:03:50 by julolle-          #+#    #+#             */
/*   Updated: 2024/01/29 19:55:18 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp" 

WrongCat::WrongCat() : WrongAnimal("cat"){
	this->_type = "cat";
	std::cout << "Cat default construcor called." << std::endl;
}

WrongCat::WrongCat(const WrongCat & src) : WrongAnimal(src){
	*this = src;
	std::cout << "Cat copy construcor called." << std::endl;
}

WrongCat::~WrongCat(){
	std::cout << "Cat Destructor called." << std::endl;
}

WrongCat & WrongCat::operator=(const WrongCat & src) {
	if (this != &src) {
		this->_type = src.getType();
	}
	std::cout << "Cat copy assignment operator called." << std::endl;
	return (*this);
}

//FUNCTIONS
void WrongCat::makeSound() {
	std::cout << "...meow meow..." << std::endl;
}

void WrongCat::makeSound() const{
	std::cout << "...meow meow..." << std::endl;
}
