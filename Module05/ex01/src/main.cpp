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

void	formConstructorCorrectGrade(){
	
	std::cout << std::endl << CYAN << "----- Test Form constructor with correct grade ----- " << RESET << std::endl;
	try {
		Form("Julia", 120, 125);
	}
	catch (std::out_of_range & e){
		std::cout << "\tcatch: " << e.what() << std::endl;
	}

}

void	formConstructorOutOfRange(){

	std::cout << std::endl << CYAN << "----- Test form constructor out of range ----- " << RESET << std::endl;

	std::cout << MAGENTA << "Grade too high" << RESET << std::endl;
	try {
		Form("Julia", 0, 130);	
	}
	catch (std::out_of_range & e){
		std::cout << "\tcatch: " << e.what() << std::endl;
	}

	try {
		Form("Julia", 130, 0);	
	}
	catch (std::out_of_range & e){
		std::cout << "\tcatch: " << e.what() << std::endl;
	}

	try {
		Form("Julia", 200, 0);	
	}
	catch (std::out_of_range & e){
		std::cout << "\tcatch: " << e.what() << std::endl;
	}

	std::cout << std::endl << MAGENTA << "Grade too low" << RESET << std::endl;
	try {
		Form("Julia", 130, 200);	
	}
	catch (std::out_of_range & e){
		std::cout << "\tcatch: " << e.what() << std::endl;
	}

	try {
		Form("Julia", 200, 130);	
	}
	catch (std::out_of_range & e){
		std::cout << "\tcatch: " << e.what() << std::endl;
	}

}

void	testBeSignedFunction(){
	
	std::cout << std::endl << CYAN << "----- Test be Signed Function ----- " << RESET << std::endl;

	Bureaucrat Julia("Julia", 121);
	Form form1("form1", 45, 50);

	std::cout << std::endl << MAGENTA << "Try to sign with too low grade" << RESET << std::endl;
	try {
		form1.beSigned(Julia);
	}
	catch (std::out_of_range & e){
		std::cout << "\tcatch: " << e.what() << std::endl;
	}

	std::cout << std::endl << MAGENTA << "Try to sign with correct grade" << RESET << std::endl;
	Julia.setGrade(20);
	try {
		form1.beSigned(Julia);
	}
	catch (std::out_of_range & e){
		std::cout << "\tcatch: " << e.what() << std::endl;
	}

	std::cout << std::endl << CYAN << "----- Test Sign form Function> ----- " << RESET << std::endl;
	
	std::cout << std::endl << MAGENTA << "Form is already signed" << RESET << std::endl;
	Julia.signForm(form1);

	std::cout << std::endl << MAGENTA << "Bureaucrat has too low grade" << RESET << std::endl;
	Form form2("form2", 12, 120);
	Julia.signForm(form2);

	
	std::cout << std::endl << MAGENTA << "Bureaucrat can sign form" << RESET << std::endl;
	form2.setGradeToSign(123);
	Julia.signForm(form2);

}

void	testCanonicalForm(){

	std::cout << std::endl << std::endl << CYAN << "----- Test canonical form ----- " << RESET << std::endl;
	
	Form form1 = Form("form1", 123, 12);
	Form form2 = Form("form2", 1, 34);

	Form form3(form1);
	Form form4 = form1;

	std::cout << std::endl << MAGENTA << "Check << operator" << RESET << std::endl;	
	std::cout << form1 << std::endl;
	std::cout << form2 << std::endl;
}


int main() {
	
	formConstructorCorrectGrade();
	formConstructorOutOfRange();

	testBeSignedFunction();

	testCanonicalForm();

	return (0);
}
