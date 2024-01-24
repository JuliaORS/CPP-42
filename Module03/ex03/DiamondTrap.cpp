/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 18:03:50 by julolle-          #+#    #+#             */
/*   Updated: 2024/01/24 16:21:06 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp" 

DiamondTrap::DiamondTrap(std::string name) : ScavTrap(name), FragTrap(name){
	this->_name = name;
	std::cout << "DiamondTrap construcor called: " << this->_name << std::endl;
	//this->_hitPoints = this->FragTrap::_hitPoints;

	//this->_energyPoints = 50;
	//this->_attackDamage = 20;
}
/*
//copy constructor
DiamondTrap::DiamondTrap(DiamondTrap const & src) : ClapTrap(src){
	std::cout << "DiamondTrap copy construcor called: " << this->_name << std::endl;
	*this = src;
}
*/
DiamondTrap::~DiamondTrap(){
	std::cout << "Diamondtrap Destructor called: " << this->_name << std::endl;
}
/*
//operator "="
DiamondTrap & DiamondTrap::operator=(DiamondTrap const & src) {
	std::cout << "DiamondTrap copy assignment operator called: " << this->_name << std::endl;
	if (this != &src) {
		this->_name = src.getName();
		this->_hitPoints = src.getHP();
		this->_energyPoints = src.getEP();
		this->_attackDamage = src.getAD();
	}
	return (*this);
}

void DiamondTrap::whoAmI(){
	std::cout << this->_name << " is in Gate keeper mode.";
	std::cout << std::endl << std::endl;
}
*/