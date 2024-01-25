/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 18:03:50 by julolle-          #+#    #+#             */
/*   Updated: 2024/01/25 19:49:23 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp" 

DiamondTrap::DiamondTrap() : ClapTrap("undefined_clap_name"), ScavTrap(), FragTrap() {
	this->_name = "undefined";
	std::cout << "DiamondTrap default construcor called: " << this->_name << std::endl;
	this->_hitPoints = this->FragTrap::_hitPoints;
	this->_energyPoints = this->ScavTrap::_energyPoints;
	this->_attackDamage = this->FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(std::string name) :  ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name) {
	this->_name = name;
	std::cout << "DiamondTrap construcor called: " << this->_name << std::endl;
	this->_hitPoints = this->FragTrap::_hitPoints;
	this->_energyPoints = this->ScavTrap::_energyPoints;
	this->_attackDamage = this->FragTrap::_attackDamage;
}

//copy constructor
DiamondTrap::DiamondTrap(DiamondTrap const & src) : ClapTrap(src.getName() + "_clap_name"), ScavTrap(src.getName()), FragTrap(src.getName()){
	std::cout << "DiamondTrap copy construcor called: " << this->_name << std::endl;
	*this = src;
}

DiamondTrap::~DiamondTrap(){
	std::cout << "Diamondtrap Destructor called: " << this->_name << std::endl;
}

//operator "="
DiamondTrap & DiamondTrap::operator=(DiamondTrap const & src) {
	std::cout << "DiamondTrap copy assignment operator called: " << this->_name << std::endl;
	if (this != &src) {
		this->_name = src.getName();
		this->_hitPoints = src.FragTrap::_hitPoints;
		this->_energyPoints = src.FragTrap::_energyPoints;
		this->_attackDamage = src.FragTrap::_attackDamage;
	}
	return (*this);
}

/*void DiamondTrap::whoAmI(){
	std::cout << this->_name << " is in Gate keeper mode.";
	std::cout << std::endl << std::endl;
}
*/