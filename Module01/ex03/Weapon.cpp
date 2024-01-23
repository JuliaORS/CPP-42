/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:49:15 by julolle-          #+#    #+#             */
/*   Updated: 2024/01/23 15:49:15 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp" 

Weapon::Weapon(){
}

Weapon::~Weapon(){
}

Weapon::Weapon(std::string type){
	this->_type = type;
}

std::string	Weapon::getType(){
	return (_type);
}

void	Weapon::setType(std::string type)
{
	this->_type = type;
	return ;
}
