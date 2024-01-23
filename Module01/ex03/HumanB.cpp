/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:48:59 by julolle-          #+#    #+#             */
/*   Updated: 2024/01/23 15:49:01 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp" 

HumanB::HumanB(std::string name): _name(name){
    this->_name = name;
	this->_weaponB = NULL;
}

HumanB::~HumanB(){
}

std::string	HumanB::getName(){
	return (_name);
}

void	HumanB::setWeapon(Weapon &weapon){
	this->_weaponB = &weapon;
}

void	HumanB::attack(){
	if (this->_weaponB == NULL)
		std::cout  << "There is no wepaon to attack! :S" <<std::endl;
	else
		std::cout << this->_name << " attacks with their " << _weaponB->getType() << std::endl;
}
