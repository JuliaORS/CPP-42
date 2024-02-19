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
#include "Form.hpp"

void formConstructor(std::string name, unsigned int gradeToSign, unsigned int gradeToExecute){
	try {
		Form form = Form(name, gradeToSign, gradeToExecute);
		std::cout << form << std::endl;
	}
	catch (std::out_of_range & e){
		std::cout << RED << "\tcatch: form constructor error. " << e.what() << RESET << std::endl;
	}
}

void	formConstructorCorrectGrade(){
	
	std::cout << std::endl << CYAN << "----- Test Form constructor with correct grade ----- " << RESET << std::endl;
	formConstructor("Julia", 120, 125);

}

void	formConstructorOutOfRange(){

	std::cout << std::endl << CYAN << "----- Test form constructor out of range ----- " << RESET << std::endl;

	std::cout << MAGENTA << "Grade too high" << RESET << std::endl;
	formConstructor("Julia", 0, 130);
	formConstructor("Julia", 130, 0);
	formConstructor("Julia", 200, 0);

	std::cout << std::endl << MAGENTA << "Grade too low" << RESET << std::endl;
	formConstructor("Julia", 130, 200);	
	formConstructor("Julia", 200, 130);	
}

void	testBeSignedFunction(){
	
	std::cout << std::endl << CYAN << "----- Test be Signed Function ----- " << RESET << std::endl;

	std::cout << std::endl << MAGENTA << "Try to sign with too low grade" << RESET << std::endl;
	try {
		Bureaucrat Julia("Julia", 65);
		Form form1("form1", 20, 50);
		form1.beSigned(Julia);
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

	std::cout << std::endl << MAGENTA << "Try to sign with correct grade" << RESET << std::endl;
	try {
		Bureaucrat Julia("Julia", 21);
		Form form1("form1", 45, 50);
		form1.beSigned(Julia);
		std::cout << std::endl << MAGENTA << "Try to sign when Form is already signed" << RESET << std::endl;
		Julia.signForm(form1);
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


	std::cout << std::endl << MAGENTA << "Try to sign form with correct grade" << RESET << std::endl;
	try {
		Bureaucrat Julia("Julia", 21);
		Form form2("form2", 56, 120);
		Julia.signForm(form2);
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

void	testCanonicalForm(){

	std::cout << std::endl << std::endl << CYAN << "----- Test canonical form ----- " << RESET << std::endl;
	try {
		Form form1 = Form("form1", 123, 12);
		Form form2 = Form("form2", 1, 34);
		Form form3(form1);
		Form form4 = form1;
		std::cout << std::endl << MAGENTA << "Check << operator" << RESET << std::endl;	
		std::cout << form1 << std::endl;
		std::cout << form2 << std::endl;
	}
	catch (std::out_of_range & e){
		std::cout << RED << "\tcatch: " << e.what() << RESET << std::endl;
	}
}


int main() {
	
	formConstructorCorrectGrade();
	formConstructorOutOfRange();

	testBeSignedFunction();

	testCanonicalForm();

	return (0);
}
