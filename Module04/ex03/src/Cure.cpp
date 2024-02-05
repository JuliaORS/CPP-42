/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 17:12:53 by julolle-          #+#    #+#             */
/*   Updated: 2024/02/05 15:42:09 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure"){
	std::cout << "Cure construcor called." << std::endl;
}

Cure::Cure(const Cure & src) : AMateria(src){
	*this = src;
	std::cout << "Cure copy construcor called." << std::endl;
}

Cure::~Cure(){
	std::cout << "Cure destructor called." << std::endl;
}

Cure & Cure::operator=(const Cure & src){
	
	if (this != &src) {
		this->_type = src.getType();
	}
	std::cout << "Cure copy assignment operator called." << std::endl;
	return(*this);
}

//FUNCTIONS
AMateria* Cure::clone() const{
	AMateria* newCure = new Cure(*this);
	return (newCure);
}

void Cure::use(ICharacter& target){
	std::cout << "* heals " << target.getName() << "’s wounds *"<< std::endl;
}
