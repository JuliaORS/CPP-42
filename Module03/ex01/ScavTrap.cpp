/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 18:03:50 by julolle-          #+#    #+#             */
/*   Updated: 2024/01/22 21:04:19 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp" 

ScavTrap::ClapTrap(std::string name) : _name(name){
	std::cout << "Default construcor called" << std::endl;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
}

//copy constructor
ScavTrap::ScavTrap(ClapTrap const & src){
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

ScavTrap::~ScavTrap(){
	std::cout << "Destructor called" << std::endl;
}

//operator "="
ScavTrap & ScavTrap::operator=(ScavTrap const & src) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &src) {
		this->_name = src.getName();
		this->_hitPoints = src.getHP();
		this->_energyPoints = src.getEP();
		this->_attackDamage = src.getAD();
	}
	return (*this);
}

//GETTERS
std::string	ScavTrap::getName() const {
	return(_name);
}

int	ScavTrap::getHP() const {
	return(_hitPoints);
}

int	ScavTrap::getEP() const {
	return(_energyPoints);
}

int	ScavTrap::getAD() const {
	return(_attackDamage);
}

//SETTERS
void	ScavTrap::setName(std::string const name){
	this->_name = name;
}

void	ScavTrap::setHP(int const hp){
	this->_hitPoints = hp;
}

void	ScavTrap::setEP(int const ep){
	this->_energyPoints = ep;
}

void	ScavTrap::setAD(int const ad){
	this->_attackDamage = ad;
}

//FUNCTIONS
void ScavTrap::attack(const std::string& target){
	if (this->_energyPoints > 0 && this->_hitPoints > 0){
		this->_energyPoints--;
		std::cout << "ClapTrap " << this->_name << " attacks " << target << " causing ";
		std::cout << this->_attackDamage << " points of damage!" << std::endl;
		std::cout << this->_name << " has " << this->_hitPoints << " hit points and ";
		std::cout << this->_energyPoints << " energy points."<< std::endl<< std::endl;
	}
	else
		std::cout << "ClapTrap " << this->_name << " can not attack." << std::endl;
}

void ScavTrap::takeDamage(unsigned amount){
	if (this->_hitPoints - amount >= 0){
		this->_hitPoints -=  amount;
		if (this->_hitPoints < 0)
			this->_hitPoints = 0;
		std::cout << "ClapTrap " << this->_name << " is damaged with " << amount;
		std::cout << " hit points!" << std::endl;
		std::cout << this->_name << " has " << this->_hitPoints << " hit points and ";
		std::cout << this->_energyPoints << " energy points."<< std::endl<< std::endl;
	}
	else{
		std::cout << "ClapTrap " << this->_name << " doesn't have hit points." << std::endl;
	}
}

void ScavTrap::beRepaired(unsigned amount){
	if (this->_energyPoints > 0 && this->_hitPoints > 0){
		this->_energyPoints--;
		this->_hitPoints +=  amount;
		std::cout << "ClapTrap " << this->_name << " has been repaired with ";
		std::cout << amount << " hit points!" << std::endl;
		std::cout << this->_name << " has " << this->_hitPoints << " hit points and ";
		std::cout << this->_energyPoints << " energy points."<< std::endl<< std::endl;
	}
	else
		std::cout << "ClapTrap " << this->_name << " can not be repaired." << std::endl;
}
