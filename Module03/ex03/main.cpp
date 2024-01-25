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

	DiamondTrap Julia("Julia");
	
	Julia.takeDamage(50);
	Julia.beRepaired(10);

	DiamondTrap David("David");
	
	std::cout << "David name is " << David.getName() << std::endl;
	David = Julia;
	std::cout << "David hit points: " << David.getHP() << std::endl;
	std::cout << "David energy points: " << David.getEP() << std::endl;
	std::cout << "David attack damage: " << David.getAD() << std::endl;

	Julia.whoAmI();
	
	//DiamondTrap Julia("Julia");
	//DiamondTrap Ju("ju");
	//Ju = Julia;

	//DiamondTrap Julia("Julia");
	
	return (0);
}
