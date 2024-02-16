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

#include "main.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

void	checkMateria(){

	std::cout << std::endl << CYAN << "------------------ Materia test -----------------" << RESET << std::endl;

	
	std::cout << std::endl << MAGENTA << "---- Constructors ----" << RESET << std::endl << std::endl;

	AMateria *newCure = new Cure;
	Ice newIce;

	std::cout << std::endl << MAGENTA << "---- getters test ----" << RESET << std::endl << std::endl;
	
	std::cout << "Type of this materia is " << newCure->getType() << std::endl;
	std::cout << "Type of this materia is " << newIce.getType() << std::endl;


	std::cout << std::endl << MAGENTA << "---- Check clone function ----" << RESET << std::endl << std::endl;

	AMateria *cloneCure = newCure->clone();
	std::cout << "Type: " << cloneCure->getType() << std::endl;
	std::cout << "Type: " << newCure->getType() << std::endl;

	delete newCure;

	std::cout << "After delete original materia, clone still exists and its type is: " << cloneCure->getType() << std::endl;
	
	std::cout << std::endl << MAGENTA << "---- Check use function ----" << RESET << std::endl << std::endl;
	Character Julia("Julia");
	newIce.use(Julia);
	cloneCure->use(Julia);

	std::cout << std::endl << MAGENTA << "---- Destructors ----" << RESET << std::endl<< std::endl;

	delete cloneCure;

}

void	checkCharacter(){

	std::cout << std::endl << CYAN << "------------------ Character test -----------------" << RESET << std::endl;
	
	std::cout << std::endl << MAGENTA << "---- Constructors ----" << RESET << std::endl << std::endl;

	Character* Bob= new Character("Bob");
	Character* Julia= new Character("Julia");
	AMateria* ice = new Ice();
	AMateria* cure = new Cure();
	
	std::cout << std::endl << MAGENTA << "---- Check getters and setters ----" << RESET << std::endl << std::endl;
	
	std::cout << "Name of character " << Julia->getName() << std::endl;
	std::cout << "Name of character " << Bob->getName() << std::endl;


	std::cout << std::endl << MAGENTA << "---- Equip/Unequip and use functions ----" << RESET << std::endl << std::endl;

	Bob->equip(cure);
	Bob->equip(cure);
	Bob->equip(cure);
	Bob->equip(cure);
	Bob->equip(cure);

	std::cout << std::endl;
	Bob->printInventory();
	std::cout << std::endl;

	Bob->use(0, *Julia);
	Bob->unequip(3);
	Bob->equip(ice);

	std::cout << std::endl;
	Bob->printInventory();
	std::cout << std::endl;

	std::cout << std::endl << MAGENTA << "---- Check deep copy ----" << RESET << std::endl << std::endl;

	std::cout << std::endl << MAGENTA << "-Copy assignment-" << RESET << std::endl << std::endl;	
	*Julia = *Bob;

	std::cout << std::endl << MAGENTA << "-Check copy-" << RESET << std::endl << std::endl;
	Julia->unequip(0); 
	Julia->equip(ice); 

	Bob->use(0, *Julia);
	Julia->use(0, *Julia);

	std::cout << std::endl << MAGENTA << "---- Destructors ----" << RESET << std::endl<< std::endl;

	delete Bob;
	delete Julia;
	delete ice;
	delete cure;
}

void checkMateriaSource(){

	std::cout << std::endl << CYAN << "------------------ Materia Source Test -----------------" << RESET << std::endl;

	std::cout << std::endl << MAGENTA << "---- Constructors ----" << RESET << std::endl << std::endl;

	MateriaSource *newMatSource = new MateriaSource;
	AMateria *cure = new Cure;

	std::cout << std::endl << MAGENTA << "---- Materia source test ----" << RESET << std::endl << std::endl;

	newMatSource->learnMateria(cure);
	AMateria* newMateria = newMatSource->createMateria("cure");
	std::cout << std::endl << "Name of new materia is " << newMateria->getType() << std::endl<< std::endl;


	AMateria* newMateriaFail = newMatSource->createMateria("fail");
	std::cout << std::endl << "Name of new materia is " << newMateriaFail << std::endl;

	std::cout << std::endl << MAGENTA << "---- Destructors ----" << RESET << std::endl << std::endl;

	delete newMatSource;
	delete cure;
	delete newMateria;
}

int main(){

	checkMateria();
	checkCharacter();
	checkMateriaSource();

	return (0);
}
