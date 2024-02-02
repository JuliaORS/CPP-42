/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 14:54:18 by julolle-          #+#    #+#             */
/*   Updated: 2024/02/02 14:54:20 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp" 

AAnimal::AAnimal(){
	this->_type = "undefined";
	std::cout << "Animal default construcor called. Type: " << this->getType() << std::endl;
}

AAnimal::AAnimal(const std::string & type){
	this->_type = type;
	std::cout << "Animal default construcor called. Type: " << this->getType() << std::endl;
}

//copy constructor
AAnimal::AAnimal(const AAnimal & src){
	*this = src;
	std::cout << "Animal copy construcor called. Type: " << this->getType() <<std::endl;
}

AAnimal::~AAnimal(){
	std::cout << "Animal Destructor called. Type: " << this->getType() << std::endl;
}

//operator "="
AAnimal & AAnimal::operator=(const AAnimal & src) {
	if (this != &src) {
		this->_type = src.getType();
	}
	std::cout << "Animal copy assignment operator called.Type: " << this->getType() << std::endl;
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
