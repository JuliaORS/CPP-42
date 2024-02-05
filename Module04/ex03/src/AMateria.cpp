/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 16:06:58 by julolle-          #+#    #+#             */
/*   Updated: 2024/02/05 14:47:32 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria (std::string const & type) : _type(type){
	std::cout << "Materia construcor called. Type: " << this->_type << std::endl;
}

AMateria::AMateria (const AMateria & src){
	*this = src;
	std::cout << "Materia copy construcor called." << std::endl;
}

AMateria::~AMateria (){
	std::cout << "Materia destructor called." << std::endl;
}


AMateria & AMateria::operator=(const AMateria & src)
{
	if (this != &src) {
		this->_type = src.getType();
	}
	std::cout << "Materia copy assignment operator called." << std::endl;
	return(*this);
}

//GETTERS
std::string	const & AMateria::getType() const {
	return(_type);
}

//SETTERS
void	AMateria::setType(const std::string & type){
	this->_type = type;
}

//FUNCTIONS
void	AMateria::use(ICharacter& target){
	(void)target;
	std::cout << "This materia doesn't exist." << std::endl;
}
