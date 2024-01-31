/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 18:03:50 by julolle-          #+#    #+#             */
/*   Updated: 2024/01/31 19:18:55 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp" 

AAnimal::AAnimal(){
	this->_type = "undefined";
	std::cout << "A default construcor called. Type: " << this->getType() << std::endl;
}

AAnimal::AAnimal(const std::string & type){
	this->_type = type;
	std::cout << "A default construcor called. Type: " << this->getType() << std::endl;
}

//copy constructor
AAnimal::AAnimal(const AAnimal & src){
	*this = src;
	std::cout << "A copy construcor called. Type: " << this->getType() <<std::endl;
}

AAnimal::~AAnimal(){
	std::cout << "A Destructor called. Type: " << this->getType() << std::endl;
}

//operator "="
AAnimal & AAnimal::operator=(const AAnimal & src) {
	if (this != &src) {
		this->_type = src.getType();
	}
	std::cout << "A copy assignment operator called.Type: " << this->getType() << std::endl;
	return (*this);
}

//GETTERS
std::string	AAnimal::getType() const {
	return(_type);
}

//SETTERS
void	AAnimal::setType(const std::string & type){
	this->_type = type;
}

//FUNCTIONS
void AAnimal::makeSound(){
	std::cout << "...Silence..." << std::endl;
}

void AAnimal::makeSound() const{
	std::cout << "...Silence..." << std::endl;
}
