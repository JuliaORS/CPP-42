/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 15:47:09 by julolle-          #+#    #+#             */
/*   Updated: 2024/02/02 18:30:10 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() {
	_name = "undefined";
 	std::cout << "Character default construcor called." << std::endl;
}

Character::Character(const std::string & name) {
	_name = name;
 	std::cout << "Character construcor called. Name: " << this->getName() << std::endl;
}

Character::Character(const Character & src) { //DUBTES DE COM CREAR DEEP COPY
	Character *newChar = new Character(src);
	*newChar = src;
	std::cout << "Character copy construcor called. Name: " << this->getName() << std::endl;
}

Character::~Character() {
 	std::cout << this->getName() << " destructor called." << std::endl;
}

Character &Character::operator=(const Character & src) { //DUBTES DE COM CREAR DEEP COPY
	if (this != &src) {
		this->_name = src.getName();
	}
	std::cout << "Character copy assignment operator called. Name: " << this->getName() << std::endl;
	return(*this);
}

//GETTERS
std::string	const & Character::getName() const {
	return(_name);
}

//SETTERS
void	Character::setName(const std::string & name){
	_name = name; 
}

