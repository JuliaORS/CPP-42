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

#include "Bureaucrat.hpp" 

void	constructorCorrectGrade(){
	
	std::cout << std::endl << CYAN << "----- Test correct grade ----- " << RESET << std::endl;
	try {
		Bureaucrat("Julia", 120);
	}
	catch (std::exception & e){
		std::cout << "\tcatch: " << e.what() << std::endl;
	}
}

void	constructorTooHighGrade(){

	std::cout << std::endl << CYAN << "----- Test too high grade ----- " << RESET << std::endl;
	try {
		Bureaucrat("Julia", 0);	
	}
	catch (std::exception & e){
		std::cout << "\tcatch: " << e.what() << std::endl;
	}
}

void	constructorTooLowGrade(){
	
	std::cout << std::endl << CYAN << "----- Test too low grade ----- " << RESET << std::endl;
	try {
		Bureaucrat("Julia", 987);
	}
	catch (std::exception & e){
		std::cout << "\tcatch: " << e.what() << std::endl;
	}
}

void	testIncrementGrade(){
	
	std::cout << std::endl << std::endl << CYAN << "----- Test increment grade ----- " << RESET << std::endl << std::endl;
	try {
		Bureaucrat Julia = Bureaucrat("Julia", 120);
		std::cout << Julia << std::endl;
		std::cout << MAGENTA << "Try to increment 119." << RESET << std::endl;
		Julia.incrementGrade(119);
		std::cout << Julia << std::endl << std::endl;
		std::cout << MAGENTA << "Try to increment 1." << RESET << std::endl;
		Julia.incrementGrade();
		std::cout << Julia << std::endl << std::endl;
	}
	catch (std::exception & e){
		std::cout << "\tcatch: " << e.what() << std::endl;
	}
}

void	testDecrementGrade(){
	
	std::cout << std::endl << std::endl << CYAN << "----- Test decrement grade ----- " << RESET << std::endl << std::endl;
	try {
		Bureaucrat Julia = Bureaucrat("Julia", 120);
		std::cout << Julia << std::endl;
		std::cout << MAGENTA << "Try to decrement 30." << RESET << std::endl;
		Julia.decrementGrade(30);
		std::cout << Julia << std::endl << std::endl;
		std::cout << MAGENTA << "Try to decrement 1." << RESET << std::endl;
		Julia.decrementGrade();
		std::cout << Julia << std::endl << std::endl;
	}
	catch (std::exception & e){
		std::cout << "\tcatch: " << e.what() << std::endl;
	}
}

void	testCanonicalForm(){
	std::cout << std::endl << std::endl << CYAN << "----- Test canonical form ----- " << RESET << std::endl << std::endl;
	try {
		Bureaucrat Julia = Bureaucrat("Julia", 120);
		Bureaucrat Pepe = Bureaucrat("Pepe", 113);
		Pepe = Julia;
		std::cout << Pepe << std::endl << std::endl;
		std::cout << Julia << std::endl << std::endl;
	}
	catch (std::exception & e){
		std::cout << "\tcatch: " << e.what() << std::endl;
	}
}


int main() {
	
	constructorCorrectGrade();
	constructorTooHighGrade();
	constructorTooLowGrade();

	testIncrementGrade();
	testDecrementGrade();

	testCanonicalForm();

	return (0);
}
