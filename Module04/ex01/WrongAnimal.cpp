/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 18:03:50 by julolle-          #+#    #+#             */
/*   Updated: 2024/01/29 19:54:44 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp" 

WrongAnimal::WrongAnimal(){
	this->_type = "undefined";
	std::cout << "Animal default construcor called. Type: " << this->getType() << std::endl;
}

WrongAnimal::WrongAnimal(const std::string & type){
	this->_type = type;
	std::cout << "Animal default construcor called. Type: " << this->getType() << std::endl;
}

//copy constructor
WrongAnimal::WrongAnimal(const WrongAnimal & src){
	*this = src;
	std::cout << "Animal copy construcor called. Type: " << this->getType() <<std::endl;
}

WrongAnimal::~WrongAnimal(){
	std::cout << "Animal Destructor called. Type: " << this->getType() << std::endl;
}

//operator "="
WrongAnimal & WrongAnimal::operator=(const WrongAnimal & src) {
	if (this != &src) {
		this->_type = src.getType();
	}
	std::cout << "Animal copy assignment operator called.Type: " << this->getType() << std::endl;
	return (*this);
}

//GETTERS
std::string	WrongAnimal::getType() const {
	return(_type);
}

//SETTERS
void	WrongAnimal::setType(const std::string & type){
	this->_type = type;
}

//FUNCTIONS
void WrongAnimal::makeSound(){
	std::cout << "...Silence..." << std::endl;
}

void WrongAnimal::makeSound() const{
	std::cout << "...Silence..." << std::endl;
}

