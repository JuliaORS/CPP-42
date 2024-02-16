/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 15:47:09 by julolle-          #+#    #+#             */
/*   Updated: 2024/02/07 14:28:49 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() {
	this->_name = "undefined";
	for (int i=0; i < 4; i++)
		this->_inventory[i] = NULL;
	this->_idxFloor = 0;
 	std::cout << "Character default construcor called." << std::endl;
}

Character::Character(const std::string & name) {
	_name = name;
	for (int i=0; i < 4; i++)
		this->_inventory[i] = NULL;
 	std::cout << "Character construcor called. Name: " << this->getName() << std::endl;
}

//copy constructor
Character::Character(const Character & src) { 
	
	this->_name = src.getName();

	for (int i=0; i < 4; i++){
		this->_inventory[i] = NULL;
		if (src._inventory[i])
			this->_inventory[i] = src._inventory[i]->clone();
	}
	std::cout << "Character copy construcor called. Name: " << this->getName() << std::endl;
}

Character::~Character() {
 	std::cout << this->getName() << " destructor called." << std::endl;
	for (int i = 0; i < 4; i++){
		if (this->_inventory[i] != NULL)
			delete this->_inventory[i];
	}
	for (int i = 0; i < this->_idxFloor; i++){
		delete this->_floor[i];
	}
}

//Operator =
Character &Character::operator=(const Character & src) {
	if (this != &src){
		this->_name = src.getName();
		for(int i=0; i < 4; i++){
			if (this->_inventory[i])
				delete this->_inventory[i];
			this->_inventory[i] = NULL;
			if (src._inventory[i])
				this->_inventory[i] = src._inventory[i]->clone();
		}
		
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
void Character::equip(AMateria* m){
	
	int  i = 0;
	while (i < 4){
		if (this->_inventory[i] != NULL)
			i++;
		else{
			this->_inventory[i] = m->clone();
			std::cout << m->getType() << " has been equiped to inventory of " << this->_name << " in " << i << " position"<< std::endl;
			break;
		}
	}
	if (i == 4)
		std::cout << "Inventory is full. Unequip one materia to add a new one." << std::endl;	
}

void Character::unequip(int idx){
	if (idx >= 0 && idx < 4 && this->_inventory[idx] != NULL){
		std::cout << _inventory[idx]->getType() << " has been unequiped to inventory of " << this->_name << " in " << idx << " position"<< std::endl;
		_floor[this->_idxFloor] = _inventory[idx];
		this->_idxFloor++;
		this->_inventory[idx] = NULL;
	}
		
	else
		std::cout << "There is not materia to unequip in this slot." << std::endl;
}

void Character::use(int idx, ICharacter& target) {
	if (idx >= 0 && idx < 4 && this->_inventory[idx] != NULL){
		this->_inventory[idx]->use(target);
		std::cout << this->getName() << " uses " << _inventory[idx]->getType() << " to " << target.getName() << std::endl << std::endl;;
	}
	else
		std::cout << "There is not materia to use in this slot." << std::endl << std::endl;;
}

void Character::printInventory() {
	
	std::cout << "INVENTORY:" << std::endl;
	for(int i=0; i < 4; i++){
		if (this->_inventory[i] != NULL)
			std::cout << "Slot: " << i << " - Materia: " << this->_inventory[i]->getType() << std::endl;;
	}
}
