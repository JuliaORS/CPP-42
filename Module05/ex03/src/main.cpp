/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 20:53:30 by julolle-          #+#    #+#             */
/*   Updated: 2024/02/19 20:53:30 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"


void	shrubberyCreationFormTest(){
	
	std::cout << std::endl << CYAN << "----- Shrubbery Creation Form Test----- " << RESET << std::endl;
	
	std::cout << std::endl << MAGENTA << "Try to execute ShrubberyCreationForm" << RESET << std::endl;
	try {
		ShrubberyCreationForm SCForm = ShrubberyCreationForm("home");
		Bureaucrat Julia = Bureaucrat("Julia", 14);
		SCForm.execute(Julia);
	}
	catch (std::out_of_range & e){
		std::cout << RED << "\tcatch: " << e.what() << RESET << std::endl;
	}
	catch (std::runtime_error & e){
		std::cout << RED << "\tcatch: " << e.what() << RESET << std::endl;
	}
	catch (std::exception & e){
		std::cout << RED << "\tcatch: " << e.what() << RESET << std::endl;
	}
}


void	robotomyRequestFormTest(){
	std::cout << std::endl << CYAN << "----- Robotomy Request Form Test----- " << RESET << std::endl;
	
	std::cout << std::endl << MAGENTA << "Try to execute robotomyRequestForm" << RESET << std::endl;
	try {
		RobotomyRequestForm RRForm = RobotomyRequestForm("home");
		Bureaucrat Julia = Bureaucrat("Julia", 14);
		RRForm.execute(Julia);
	}
	catch (std::out_of_range & e){
		std::cout << RED << "\tcatch: " << e.what() << RESET << std::endl;
	}
	catch (std::runtime_error & e){
		std::cout << RED << "\tcatch: " << e.what() << RESET << std::endl;
	}
	catch (std::exception & e){
		std::cout << RED << "\tcatch: " << e.what() << RESET << std::endl;
	}
}

void	presidentialPardonFormTest(){
	std::cout << std::endl << CYAN << "----- Presidential Pardo Form Test----- " << RESET << std::endl;
	
	std::cout << std::endl << MAGENTA << "Try to execute presidentialPardonForm" << RESET << std::endl;
	try {
		PresidentialPardonForm PPForm = PresidentialPardonForm("home");
		Bureaucrat Julia = Bureaucrat("Julia", 14);
		PPForm.execute(Julia);
	}
	catch (std::out_of_range & e){
		std::cout << RED << "\tcatch: " << e.what() << RESET << std::endl;
	}
	catch (std::runtime_error & e){
		std::cout << RED << "\tcatch: " << e.what() << RESET << std::endl;
	}
	catch (std::exception & e){
		std::cout << RED << "\tcatch: " << e.what() << RESET << std::endl;
	}
}

void	bureaucratTest(){
	
	std::cout << std::endl << CYAN << "----- Bureaucrat Test----- " << RESET << std::endl;
	
	try {
		Bureaucrat Julia = Bureaucrat("Julia", 75);
		ShrubberyCreationForm SCForm = ShrubberyCreationForm("home");
		RobotomyRequestForm RRForm = RobotomyRequestForm("home");
		std::cout << std::endl << MAGENTA << "Try to sign ShrubberyCreationForm" << RESET << std::endl;
		Julia.signForm(SCForm);
		std::cout << std::endl << MAGENTA << "Try to sign RobotomyRequestForm" << RESET << std::endl;
		Julia.signForm(RRForm);
		std::cout << std::endl << MAGENTA << "Try to execute RobotomyRequestForm" << RESET << std::endl;
		Julia.executeForm(RRForm);
		Julia.incrementGrade(70);
		std::cout << std::endl << MAGENTA << "Try to execute RobotomyRequestForm" << RESET << std::endl;
		Julia.executeForm(RRForm);
	}
	catch (std::out_of_range & e){
		std::cout << RED << "\tcatch: " << e.what() << RESET << std::endl;
	}
	catch (std::runtime_error & e){
		std::cout << RED << "\tcatch: " << e.what() << RESET << std::endl;
	}
	catch (std::exception & e){
		std::cout << RED << "\tcatch: " << e.what() << RESET << std::endl;
	}
}

void	internTest(){
	
	std::cout << std::endl << CYAN << "----- Intern Test----- " << RESET << std::endl;
	
	Intern intern = Intern();
	
	AForm *SCForm = intern.makeForm("ShrubberyCreationForm", "home");
	AForm *RRForm = intern.makeForm("RobotomyRequestForm", "school");
	AForm *PPForm = intern.makeForm("PresidentialPardonForm", "street");
	AForm *WForm = intern.makeForm("WrongForm", "street");
	
    Intern  someRandomIntern;
    AForm*   rrf;
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	
	delete SCForm;
	delete RRForm;
	delete PPForm;
	delete WForm;
	delete rrf;

}

int main() {
	
	shrubberyCreationFormTest();
	robotomyRequestFormTest();
	presidentialPardonFormTest();

	bureaucratTest();

	internTest();

	return (0);
}
