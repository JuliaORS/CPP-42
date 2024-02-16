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
#include "ShrubberyCreationForm.hpp"

void	formConstructorCorrectGrade(){
	
	/*std::cout << std::endl << "----- Test Form constructor with correct grade ----- " << std::endl;
	try {
		Form("Julia", 120, 125);
	}
	catch (std::out_of_range & e){
		std::cout << "\tcatch: " << e.what() << std::endl;
	}*/

}

void	formConstructorOutOfRange(){

	/*std::cout << std::endl << "----- Test form constructor out of range ----- " << std::endl;
	try {
		Form("Julia", 0, 130);	
	}
	catch (std::out_of_range & e){
		std::cout << "\tcatch: " << e.what() << std::endl;
	}

	try {
		Form("Julia", 1, 200);	
	}
	catch (std::out_of_range & e){
		std::cout << "\tcatch: " << e.what() << std::endl;
	}*/

}

void	testBeSignedFunction(){
	
	/*std::cout << std::endl << "----- Test be Signed Function ----- " << std::endl;

	Bureaucrat Julia("Julia", 121);
	Form form1("form1", 45, 50);

	try {
		form1.beSigned(Julia);
	}
	catch (std::out_of_range & e){
		std::cout << "\tcatch: " << e.what() << std::endl;
	}

	Julia.setGrade(20);
	try {
		form1.beSigned(Julia);
	}
	catch (std::out_of_range & e){
		std::cout << "\tcatch: " << e.what() << std::endl;
	}

	std::cout << std::endl << "----- Test Sign form Function> ----- " << std::endl;
	
	Julia.signForm(form1);
	Form form2("form2", 12, 120);
	Julia.signForm(form2);
	form2.setGradeToSign(123);
	Julia.signForm(form2);*/

}

void	testCanonicalForm(){

	/*std::cout << std::endl << std::endl << "----- Test canonical form ----- " << std::endl << std::endl;
	
	Form form1 = AForm("form1", 123, 12);
	Form form2(form1);
	Form form3 = form1;

	std::cout << form1 << std::endl;
	std::cout << form2 << std::endl;
	std::cout << form3 << std::endl;*/
}


int main() {
	
	ShrubberyCreationForm sCform = ShrubberyCreationForm();
	Bureaucrat Julia("Julia", 121);

	sCform.execute(Julia);
	sCform.execute(Julia);


	//formConstructorCorrectGrade();
	//formConstructorOutOfRange();

	//testBeSignedFunction();

	//testCanonicalForm();

	return (0);
}
