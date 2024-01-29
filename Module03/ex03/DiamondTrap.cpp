/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 18:03:50 by julolle-          #+#    #+#             */
/*   Updated: 2024/01/29 14:03:27 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp" 

DiamondTrap::DiamondTrap() : ClapTrap("undefined_clap_name"), ScavTrap(_name), FragTrap(_name) {
	this->_name = "undefined";
	std::cout << "DiamondTrap default construcor called." << std::endl;
	this->_hitPoints = this->FragTrap::_hitPoints;
	this->_energyPoints = this->ScavTrap::_energyPoints;
	this->_attackDamage = this->FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(const std::string & name) :  ClapTrap(name + "_clap_name"), ScavTrap(_name), FragTrap(_name) {
	this->_name = name;
	this->_hitPoints = this->FragTrap::_hitPoints;
	this->_energyPoints = this->ScavTrap::_energyPoints;
	this->_attackDamage = this->FragTrap::_attackDamage;

	std::cout << "DiamondTrap construcor called: " << this->_name << std::endl;
}

//copy constructor
DiamondTrap::DiamondTrap(const DiamondTrap & src) : ClapTrap(src.getName() + "_clap_name"), ScavTrap(src.getName()), FragTrap(src.getName()){
	std::cout << "DiamondTrap copy construcor called: " << this->_name << std::endl;
	*this = src;
}

DiamondTrap::~DiamondTrap(){
	std::cout << "Diamondtrap Destructor called: " << this->_name << std::endl;
}

//operator "="
DiamondTrap & DiamondTrap::operator=(const DiamondTrap & src) {
	std::cout << "DiamondTrap copy assignment operator called: " << this->_name << std::endl;
	if (this != &src) {
		this->_name = src.getName();
		this->_hitPoints = src.FragTrap::_hitPoints;
		this->_energyPoints = src.FragTrap::_energyPoints;
		this->_attackDamage = src.FragTrap::_attackDamage;
		this->ClapTrap::_name = src.ClapTrap::getName();
	}
	return (*this);
}

//GETTERS
std::string	DiamondTrap::getName() const {
	return(_name);
}

void DiamondTrap::whoAmI(){
	std::cout << "WHO AM I - DiamondTrap name is: " << this->_name << std::endl;
	std::cout << "and ClapTrap name is: " << this->ClapTrap::_name << std::endl<< std::endl;
}
