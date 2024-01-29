/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 19:54:02 by julolle-          #+#    #+#             */
/*   Updated: 2024/01/23 19:54:02 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp" 

int main( ) {

	ClapTrap Julia("Julia");
	ScavTrap Pepe("Pepe");
	ScavTrap Empty;

	ScavTrap Teo("Teo");

	Pepe.attack("Miami");
	Teo.takeDamage(5);
	Pepe.beRepaired(3);

	Teo.guardGate();

	Pepe.beRepaired(3);

	Pepe.beRepaired(5);
	Pepe.attack("Miami");
	Pepe.attack("Miami");
	Pepe.attack("Miami");
	Pepe.attack("Miami");

	Teo.takeDamage(5);
	Teo.takeDamage(10);
	Teo.takeDamage(7);

	return (0);
}

