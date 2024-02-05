/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 15:51:46 by julolle-          #+#    #+#             */
/*   Updated: 2024/02/05 14:47:28 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice"){
	std::cout << "Ice construcor called." << std::endl;
}

Ice::Ice(const Ice & src) : AMateria(src){
	*this = src;
	std::cout << "Ice copy construcor called." << std::endl;
}

Ice::~Ice(){
	std::cout << "Ice destructor called." << std::endl;
}

Ice & Ice::operator=(const Ice & src){
	
	if (this != &src) {
		this->_type = src.getType();
	}
	std::cout << "Ice copy assignment operator called." << std::endl;
	return(*this);
}

//FUNCTIONS
AMateria* Ice::clone() const{
	AMateria* newIce = new Ice;
	return (newIce);
}

void Ice::use(ICharacter& target){
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl; 
}
