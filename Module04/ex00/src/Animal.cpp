/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 18:03:50 by julolle-          #+#    #+#             */
/*   Updated: 2024/01/29 19:54:47 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp" 

Animal::Animal(){
	this->_type = "undefined";
	std::cout << "Animal default construcor called. Type: " << this->getType() << std::endl;
}

Animal::Animal(const std::string & type){
	this->_type = type;
	std::cout << "Animal default construcor called. Type: " << this->getType() << std::endl;
}

//copy constructor
Animal::Animal(const Animal & src){
	*this = src;
	std::cout << "Animal copy construcor called. Type: " << this->getType() <<std::endl;
}

Animal::~Animal(){
	std::cout << "Animal Destructor called. Type: " << this->getType() << std::endl;
}

//operator "="
Animal & Animal::operator=(const Animal & src) {
	if (this != &src) {
		this->_type = src.getType();
	}
	std::cout << "Animal copy assignment operator called.Type: " << this->getType() << std::endl;
	return (*this);
}

//GETTERS
std::string	Animal::getType() const {
	return(_type);
}

//SETTERS
void	Animal::setType(const std::string & type){
	this->_type = type;
}

//FUNCTIONS
void Animal::makeSound(){
	std::cout << "...Silence..." << std::endl;
}

void Animal::makeSound() const{
	std::cout << "...Silence..." << std::endl;
}

