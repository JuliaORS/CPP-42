/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 18:03:50 by julolle-          #+#    #+#             */
/*   Updated: 2024/01/29 12:50:04 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp" 

ClapTrap::ClapTrap() : _name("undefined"){
	std::cout << "ClapTrap default construcor called." << std::endl;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
}

ClapTrap::ClapTrap(const std::string & name) : _name(name){
	std::cout << "ClapTrap construcor called: " << this->_name << std::endl;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
}

//copy constructor
ClapTrap::ClapTrap(const ClapTrap & src){
	std::cout << "ClapTrap copy construcor called: " << this->_name << std::endl;
	*this = src;
}

ClapTrap::~ClapTrap(){
	std::cout << "Claptrap Destructor called: " << this->_name << std::endl;
}

//operator "="
ClapTrap & ClapTrap::operator=(const ClapTrap & src) {
	std::cout << "Claptrap copy assignment operator called: " << this->_name << std::endl;
	if (this != &src) {
		this->_name = src.getName();
		this->_hitPoints = src.getHP();
		this->_energyPoints = src.getEP();
		this->_attackDamage = src.getAD();
	}
	return (*this);
}

//GETTERS
std::string	ClapTrap::getName() const {
	return(_name);
}

int	ClapTrap::getHP() const {
	return(_hitPoints);
}

int	ClapTrap::getEP() const {
	return(_energyPoints);
}

int	ClapTrap::getAD() const {
	return(_attackDamage);
}

//SETTERS
void	ClapTrap::setName(const std::string & name){
	this->_name = name;
}

void	ClapTrap::setHP(int const hp){
	this->_hitPoints = hp;
}

void	ClapTrap::setEP(int const ep){
	this->_energyPoints = ep;
}

void	ClapTrap::setAD(int const ad){
	this->_attackDamage = ad;
}

//FUNCTIONS
void ClapTrap::attack(const std::string & target){

	if ( this->_hitPoints == 0)
		std::cout << this->_name <<" can not attack (0 hit points)." << std::endl;
	else if (this->_energyPoints == 0)
		std::cout << "CLapTrap " << this->_name <<" can not attack (0 energy points)." << std::endl;
	else {
		this->_energyPoints--;
		std::cout << this->_name << " attacks " << target << " causing ";
		std::cout << this->_attackDamage << " points of damage!" << std::endl;
		std::cout << this->_name << " has " << this->_hitPoints << " hit points and ";
		std::cout << this->_energyPoints << " energy points."<< std::endl<< std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount){

	if (this->_hitPoints > 0){
		this->_hitPoints =  this->_hitPoints - amount;
		if (this->_hitPoints < 0)
			this->_hitPoints = 0;
		std::cout << this->_name << " is damaged with " << amount;
		std::cout << " hit points!" << std::endl;
		std::cout << this->_name << " has " << this->_hitPoints << " hit points and ";
		std::cout << this->_energyPoints << " energy points."<< std::endl<< std::endl;
	}
	else{
		std::cout << this->_name << " can not be damaged (0 hit points)." << std::endl<< std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount){

	if (this->_hitPoints == 0)
		std::cout << this->_name <<" can not be repaired (0 hit points)." << std::endl;
	else if (this->_energyPoints == 0)
		std::cout << this->_name <<" can not be repaired (0 energy points)." << std::endl;
	else{
		this->_energyPoints--;
		this->_hitPoints +=  amount;
		std::cout << this->_name << " has been repaired with ";
		std::cout << amount << " hit points!" << std::endl;
		std::cout << this->_name << " has " << this->_hitPoints << " hit points and ";
		std::cout << this->_energyPoints << " energy points."<< std::endl<< std::endl;
	}
}
