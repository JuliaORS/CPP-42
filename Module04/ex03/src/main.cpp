/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 19:54:35 by julolle-          #+#    #+#             */
/*   Updated: 2024/01/23 19:54:35 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

void	checkMateria(){

	std::cout << std::endl << "------------------ Materia test -----------------" << std::endl;
	
	std::cout << std::endl << "---- Constructors ----" << std::endl << std::endl;

	AMateria *newCure = new Cure;
	Ice newIce;

	std::cout << std::endl << "---- getters test ----" << std::endl << std::endl;
	
	std::cout << "Type of this materia is " << newCure->getType() << std::endl;
	std::cout << "Type of this materia is " << newIce.getType() << std::endl;


	std::cout << std::endl << "---- Check clone function ----" << std::endl << std::endl;

	AMateria *cloneCure = newCure->clone();
	std::cout << "Type: " << cloneCure->getType() << std::endl;
	std::cout << "Type: " << newCure->getType() << std::endl;

	delete newCure;

	std::cout << "After delete original materia, clone still exists and its type is: " << cloneCure->getType() << std::endl;
	
	std::cout << std::endl << "---- Check use function ----" << std::endl << std::endl;
	Character Julia("Julia");
	newIce.use(Julia);
	cloneCure->use(Julia);

	std::cout << std::endl << "---- Destructors ----" << std::endl<< std::endl;

	delete cloneCure;

}

void	checkCharacter(){

	std::cout << std::endl << "------------------ Character test -----------------" << std::endl;
	
	std::cout << std::endl << "---- Constructors ----" << std::endl << std::endl;

	Character *Bob= new Character("Bob");
	Character Julia("Julia");
	
	std::cout << std::endl << "---- Check getters and setters ----" << std::endl << std::endl;
	
	std::cout << "Name of character " << Julia.getName() << std::endl;
	std::cout << "Name of character " << Bob->getName() << std::endl;


	std::cout << std::endl << "---- Equip/Unequip and use functions ----" << std::endl << std::endl;

	AMateria* ice = new Ice();
	AMateria* cure = new Cure();
	Bob->equip(ice);
	Bob->equip(cure);
	Bob->equip(cure);
	Bob->equip(cure);
	Bob->equip(cure);

	Bob->unequip(3);
	Bob->unequip(1);

	Bob->equip(ice);

	Bob->use(2, Julia);

	std::cout << std::endl << "---- Check deep copy ----" << std::endl << std::endl;
	
	Character Paula("Paula");
	std::cout << "Name of original character: " << Paula.getName() << std::endl;
	std::cout << "Name of character we will modify, before copy: " << Julia.getName() << std::endl;
	Julia = Paula;
	std::cout << "Name after copy: " << Julia.getName() << std::endl;

	Julia.setName("Julia");

	std::cout << "Name after modification: " << Julia.getName() << std::endl;
	std::cout << "Name of original character: " << Paula.getName() << std::endl;
	
	Julia = *Bob;
	Bob->use(0, Julia);
	Julia.unequip(0);

	//std::cout << "" << Julia.use(0, *Paula) << std::endl;
	//std::cout << "" << Bob.use(0, *Paula) << std::endl;
	
	std::cout << std::endl << "---- Destructors ----" << std::endl<< std::endl;

	delete Bob;
	delete ice;
	delete cure;
}

int main(){

	//checkMateria();
	checkCharacter();

	return (0);
}
