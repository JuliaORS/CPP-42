/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 10:41:41 by julolle-          #+#    #+#             */
/*   Updated: 2024/02/07 16:06:44 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : IMateriaSource (){
	std::cout << "Materia source default construcor called." << std::endl;
	for (int i=0; i < 4; i++)
		this->_inventory[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource & src){
	*this = src;
	std::cout << "Materia source copy construcor called. Name: "  << std::endl;
}

MateriaSource::~MateriaSource(){
	for (int i = 0; i < 4; i++){
		if (this->_inventory[i] != NULL )
			delete this->_inventory[i];
	}
	std::cout << "Materia source destructor called." << std::endl;
}

MateriaSource &MateriaSource::operator=(const MateriaSource & src)
{
	if (this != &src) {
		for (int i = 0; i < 4; i++){
			if (this->_inventory[i] != NULL)
				this->_inventory[i] = src._inventory[i];
	}
	}
	std::cout << "Materia source copy assignment operator called." << std::endl;
	return(*this);
}

//FUNCTIONS
void MateriaSource::learnMateria(AMateria* target){
	int  i = 0;
	while (i < 4){
		if (this->_inventory[i] != NULL)
			i++;
		else{
			this->_inventory[i] = target->clone();
			std::cout << target->getType() << " has been stored in inventory in position: " << i << std::endl;
			break;
		}
	}
	if (i == 4)
		std::cout << "Inventory is full." << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type){

	int i = 0;
	while (i < 4){
		if (this->_inventory[i] != NULL && type == this->_inventory[i]->getType()){
			return (this->_inventory[i]->clone());
		}
		i++;
	}

	return NULL;
}
