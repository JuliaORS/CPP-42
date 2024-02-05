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
#include "ICharacter.hpp"
#include "AMateria.hpp"

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

	// std::cout << std::endl << "------------------ Character test -----------------" << std::endl;
	
	// std::cout << std::endl << "---- Constructors ----" << std::endl << std::endl;

	// ICharacter *Bob= new Character;
	// Character Julia("Julia");
	// Character Paula("Paula");

	// std::cout << std::endl << "---- Functions ----" << std::endl << std::endl;
	
	// std::cout << "Name of character " << Bob->getName() << std::endl;
	
	// std::cout << std::endl << "---- Check deep copy with copy constructor ----" << std::endl << std::endl;
	
	// std::cout << "Name of original character: " << Paula.getName() << std::endl;
	// std::cout << "Name of character we will modify, before copy: " << Julia.getName() << std::endl;
	// Julia = Paula;
	// std::cout << "Name after copy: " << Julia.getName() << std::endl;

	// Julia.setName("Julia");

	// std::cout << "Name after modification: " << Julia.getName() << std::endl;
	// std::cout << "Name of original character: " << Paula.getName() << std::endl;



	// newMateria->setType("iron");
	// std::cout << "After modification, type of this materia is " << newMateria->getType() << std::endl;

	// std::cout << "Type of this materia is " << newIce.getType() << std::endl;
	// newIce.setType("wood");
	// std::cout << "After modification, type of this materia is " << newIce.getType() << std::endl;

	// AMateria *cloneMat = newIce.clone();
	// std::cout << "After clone type of this materia is " << cloneMat->getType() << std::endl;
	
	

}

int main(){

	checkMateria();
	//checkCharacter();

	return (0);
}
