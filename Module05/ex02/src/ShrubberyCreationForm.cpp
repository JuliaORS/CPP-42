/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 20:52:08 by julolle-          #+#    #+#             */
/*   Updated: 2024/02/19 20:52:08 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : \
	AForm("ShrubberyCreationForm", MIN_GRADE_SIGN_SC, MIN_GRADE_EXECUTE_SC), _target("undefinedTarget") {
	std::cout << "ShrubberyCreationForm default construcor called." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string & target) : \
	AForm("ShrubberyCreationForm", MIN_GRADE_SIGN_SC, MIN_GRADE_EXECUTE_SC), _target(target) {
	std::cout << this->_target << " ShrubberyCreationForm construcor called." << std::endl;
}

//copy constructor
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & src){
	*this = src;
	std::cout << "ShrubberyCreationForm copy construcor called." <<std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
	std::cout << "ShrubberyCreationForm Destructor called." << std::endl;
}

//operator "="
ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm & src) {
	if (this != &src) {
		this->setIsSigned(src.getIsSigned());
		this->setGradeToSign(src.getGradeToSign());
		this->setGradeToExecute(src.getGradeToExecute());
	}
	std::cout << "ShrubberyCreationForm copy assignment operator called." << std::endl;
	return (*this);
}

//GETTERS
std::string	ShrubberyCreationForm::getTarget() const {
	return(_target);
}

//FUNCTIONS
void	addTreeFile(std::ofstream &outfile){
	
	outfile << 	"		            .....\n" \
				"		       ......().......\n" \
				"      ....().................\n" \
				"     ..........................\n" \
				"   .......................()....\n" \
				"  ...............................\n" \
				"......()........................\n" \
				" ...................()......\n" \
				"      ...................\n" \
				"             |||\n" \
				"             |||\n" \
				"             |||\n" \
				"       ---------------\n" << std::endl;			
}

void	ShrubberyCreationForm::executeConcreteForm() const{
	std::ofstream outfile(_target + "_shrubbery");
	if (!outfile.is_open()){
		std::cout << "File has an error" << std::endl;
		return;
	}
	std::cout << GREEN << "Creating trees..." << RESET << std::endl;
	addTreeFile(outfile);
}

//operador "<<" 
std::ostream &	operator<<(std::ostream & out, const ShrubberyCreationForm & SCform){
	out << YELLOW << "[" << SCform.getTarget() << "] Shrubbery Creation Form | Grade to sign: " \
		<< SCform.getGradeToSign() << " | Grade to execute: " << SCform.getGradeToExecute();
	if (SCform.getIsSigned())
		out << " | Form is Signed." << std::endl;
	else
		out << " | form is not signed." <<std::endl;
	return (out);
}
