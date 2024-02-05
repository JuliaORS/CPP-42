/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 15:47:09 by julolle-          #+#    #+#             */
/*   Updated: 2024/02/05 14:34:01 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() {
	this->_id = 0;
	this->_name = "undefined";
 	std::cout << "Character default construcor called." << std::endl;
}

Character::Character(const std::string & name) {
	_name = name;
 	std::cout << "Character construcor called. Name: " << this->getName() << std::endl;
}

Character::Character(const Character & src) { //DUBTES DE COM CREAR DEEP COPY
	Character *newChar = new Character(src.getName());
	*this = *newChar;
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

//FUNCTIONS
/*void Character::equip(AMateria* m){
	if (this->_id < 4)
		this->_inventory[id] = m;
	else
		std::cout << "Inventory is full. Unequip one materia to add a new one." << std::endl;
}

void Character::unequip(int idx){
	if (_inventory[idx] != NULL)
		delete _inventory[idx];
	else
		std::cout << "There is not materia to unequip in this slot." << std::endl;
}

void Character::use(int idx, ICharacter& target) {
	if (_inventory[idx] != NULL)
		this->_inventory[idx].use(target);
	else
		std::cout << "There is not materia to use in this slot." << std::endl;
}*/

