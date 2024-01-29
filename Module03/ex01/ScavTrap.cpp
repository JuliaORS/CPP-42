/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 18:03:50 by julolle-          #+#    #+#             */
/*   Updated: 2024/01/29 12:49:59 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp" 

ScavTrap::ScavTrap() : ClapTrap(){
	std::cout << "ScavTrap default construcor called." << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(const std::string & name) : ClapTrap(name){
	std::cout << "ScavTrap construcor called: " << this->_name << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

//copy constructor
ScavTrap::ScavTrap(const ScavTrap & src) : ClapTrap(src){
	std::cout << "ScavTrap copy construcor called: " << this->_name << std::endl;
	*this = src;
}

ScavTrap::~ScavTrap(){
	std::cout << "Scavtrap Destructor called: " << this->_name << std::endl;
}

//operator "="
ScavTrap & ScavTrap::operator=(const ScavTrap & src) {
	std::cout << "Scavtrap copy assignment operator called: " << this->_name << std::endl;
	if (this != &src) {
		this->_name = src.getName();
		this->_hitPoints = src.getHP();
		this->_energyPoints = src.getEP();
		this->_attackDamage = src.getAD();
	}
	return (*this);
}

void ScavTrap::guardGate(){
	std::cout << "ScavpTrap " << this->_name << " is in Gate keeper mode.";
	std::cout << std::endl << std::endl;
}
