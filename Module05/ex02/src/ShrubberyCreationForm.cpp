/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 18:03:50 by julolle-          #+#    #+#             */
/*   Updated: 2024/02/08 15:57:17 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("form", MIN_GRADE_SIGN, MIN_GRADE_EXECUTE), _target("undefinedTarget") {
	std::cout << "ShrubberyCreationForm default construcor called." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string & target) : AForm("form", MIN_GRADE_SIGN, MIN_GRADE_EXECUTE), _target(target) {

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

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const{
	
	try{
		

	} 


	std::ofstream outfile(_target + "_shrubbery");
	if (!outfile.is_open()){
		std::cout << "File has an error" << std::endl;
		return;
	}

	addTreeFile(outfile);
}

//operador "<<" 
std::ostream &	operator<<(std::ostream & out, const ShrubberyCreationForm & SCform){
	out << "[" << SCform.getTarget() << "] Grade to sign: " << SCform.getGradeToSign() \
		<< " / Grade to execute: " << SCform.getGradeToExecute();
	if (SCform.getIsSigned())
		out << " / Form is Signed." << std::endl;
	else
		out << " / form is not signed." <<std::endl;
	return (out);
}
