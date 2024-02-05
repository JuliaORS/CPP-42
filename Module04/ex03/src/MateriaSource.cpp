/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 10:41:41 by julolle-          #+#    #+#             */
/*   Updated: 2024/02/05 15:38:00 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : IMateriaSource (){
	std::cout << "Materia source default construcor called." << std::endl;
}

MateriaSource::MateriaSource(const std::string & name) {
	std::cout << "Materia source construcor called." << std::endl;
}

MateriaSource::~MateriaSource(){
	std::cout << "Materia source destructor called." << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource& other)
{
	*this = other;
}

MateriaSource &MateriaSource::operator=(const MateriaSource & src)
{
	if (this != &src) {
		//this->_type = src.getType();
	}
	std::cout << "Materia source copy assignment operator called." << std::endl;
	return(*this);
}

//FUNCTIONS
void MateriaSource::learnMateria(AMateria* target){
	int i = 0;
	
	for (int i=0: i < 4; i++){
		if (this->_inventory[i] != NULL){
			this->_inventory[i] = target;
			break;
		}
	}	
}

AMateria* MateriaSource::createMateria(std::string const & type){

	MateriaSource newMS = new MateriaSource(type);
	if (!newMS)
		return 0;
	return (newMS)
	
}
