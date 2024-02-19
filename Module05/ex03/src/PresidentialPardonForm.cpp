/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 20:53:34 by julolle-          #+#    #+#             */
/*   Updated: 2024/02/19 20:53:34 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : \
	AForm("form", MIN_GRADE_SIGN_PP, MIN_GRADE_EXECUTE_PP), _target("undefinedTarget") {
	std::cout << "PresidentialPardonForm default construcor called." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string & target) : \
	AForm("form", MIN_GRADE_SIGN_PP, MIN_GRADE_EXECUTE_PP), _target(target) {
	std::cout << this->_target << " PresidentialPardonForm construcor called." << std::endl;
}

//copy constructor
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & src){
	*this = src;
	std::cout << "PresidentialPardonForm copy construcor called." <<std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(){
	std::cout << "PresidentialPardonForm Destructor called." << std::endl;
}

//operator "="
PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm & src) {
	if (this != &src) {
		this->setIsSigned(src.getIsSigned());
		this->setGradeToSign(src.getGradeToSign());
		this->setGradeToExecute(src.getGradeToExecute());
	}
	std::cout << "PresidentialPardonForm copy assignment operator called." << std::endl;
	return (*this);
}

//GETTERS
std::string	PresidentialPardonForm::getTarget() const {
	return(_target);
}

//FUNCTIONS
void	PresidentialPardonForm::executeConcreteForm() const{
	std::cout << GREEN << getTarget() + " has been pardoned by Zaphod Beeblebrox." << RESET << std::endl;
}

//operador "<<" 
std::ostream &	operator<<(std::ostream & out, const PresidentialPardonForm & SCform){
	out << YELLOW << "[" << SCform.getTarget() << "] Presidential Pardon Form | Grade to sign: " \
		 << SCform.getGradeToSign() << " | Grade to execute: " << SCform.getGradeToExecute();
	if (SCform.getIsSigned())
		out << " | Form is Signed." << RESET << std::endl;
	else
		out << " | form is not signed." << RESET << std::endl;
	return (out);
}
