/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 19:55:18 by julolle-          #+#    #+#             */
/*   Updated: 2024/01/23 19:55:18 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp" 

int main( ) {

	std::cout << "---- Diamond Constructor ----" << std::endl<< std::endl;

	DiamondTrap Julia("Julia");
	
	std::cout << "---- Diamond actions ----" << std::endl<< std::endl;

	Julia.whoAmI();
	Julia.takeDamage(50);
	Julia.beRepaired(10);
	Julia.attack("Sevilla");
	Julia.takeDamage(120);
	Julia.attack("Marte");


	std::cout << "---- New constructor ----" << std::endl<< std::endl;

	DiamondTrap David("David");

	std::cout << "---- = operator ----" << std::endl<< std::endl;

	David = Julia;
	std::cout << David.getName() << " has " << David.getEP() << " energy points" << std::endl;
	std::cout << David.getName() << " has " << David.getHP() << " hit points" << std::endl<< std::endl;

	std::cout << "---- Copy assignment ----" << std::endl<< std::endl;

	DiamondTrap Pepe(David);
	std::cout << Pepe.getName() << " has " << Pepe.getEP() << "energy points" << std::endl;
	std::cout << Pepe.getName() << " has " << Pepe.getHP() << "hit points" << std::endl<< std::endl;

	std::cout << "---- Constructor with pointer ----" << std::endl<< std::endl;

	ClapTrap* ptr = new DiamondTrap("Ju");
	delete ptr;
	
	std::cout << "---- Destructors ----" << std::endl<< std::endl;

	return (0);
}
