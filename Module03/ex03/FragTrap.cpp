/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 18:03:50 by julolle-          #+#    #+#             */
/*   Updated: 2024/01/25 19:35:42 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp" 

FragTrap::FragTrap() : ClapTrap(){
	std::cout << "FragTrap default construcor called: " << this->_name << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name){
	std::cout << "FragTrap construcor called: " << this->_name << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(FragTrap const & src) : ClapTrap(src){
	std::cout << "FragTrap copy construcor called: " << this->_name << std::endl;
	*this = src;
}

FragTrap::~FragTrap(){
	std::cout << "Fragtrap Destructor called: " << this->_name << std::endl;
}

FragTrap & FragTrap::operator=(FragTrap const & src) {
	std::cout << "Fragtrap copy assignment operator called: " << this->_name << std::endl;
	if (this != &src) {
		this->_name = src.getName();
		this->_hitPoints = src.getHP();
		this->_energyPoints = src.getEP();
		this->_attackDamage = src.getAD();
	}
	return (*this);
}

void FragTrap::highFivesGuys(){
	std::cout << this->_name << ": give me high fives.";
	std::cout << std::endl << std::endl;
}