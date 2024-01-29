/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 19:53:48 by julolle-          #+#    #+#             */
/*   Updated: 2024/01/23 19:53:48 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp" 

int main( ){
	
	Claptrap Pepe();
	ClapTrap Julia("Julia");

	ClapTrap Ferran("Ferran");

	Julia.attack("Barcelona");

	Julia.beRepaired(3);
	Julia.attack("Sevilla");
	Julia.beRepaired(10);
	Julia.takeDamage(5);
	Julia.takeDamage(25);
	Julia.takeDamage(1);

	Ferran.attack("Sevilla");
	Ferran.attack("Sevilla");
	Ferran.attack("Sevilla");
	Ferran.attack("Sevilla");
	Ferran.attack("Sevilla");
	Ferran.attack("Sevilla");
	Ferran.attack("Sevilla");
	Ferran.attack("Sevilla");
	Ferran.beRepaired(1);
	Ferran.beRepaired(1);
	Ferran.beRepaired(1);
	Ferran.beRepaired(1);
	return (0);
}
