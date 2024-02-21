/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 20:51:59 by julolle-          #+#    #+#             */
/*   Updated: 2024/02/19 20:51:59 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : \
	AForm("PresidentialPardonForm", MIN_GRADE_SIGN_PP, MIN_GRADE_EXECUTE_PP), _target("undefinedTarget") {
}

PresidentialPardonForm::PresidentialPardonForm(const std::string & target) : \
	AForm("PresidentialPardonForm", MIN_GRADE_SIGN_PP, MIN_GRADE_EXECUTE_PP), _target(target) {
}

//copy constructor
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & src){
	*this = src;
}

PresidentialPardonForm::~PresidentialPardonForm(){
}

//operator "="
PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm & src) {
	if (this != &src) {
		this->setIsSigned(src.getIsSigned());
		this->setGradeToSign(src.getGradeToSign());
		this->setGradeToExecute(src.getGradeToExecute());
	}
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

AForm *	PresidentialPardonForm::clone() {
	AForm* clone = new PresidentialPardonForm(*this);
	return (clone);
}

//operador "<<" 
std::ostream &	operator<<(std::ostream & out, const PresidentialPardonForm & PPform){
	out << YELLOW << "[" << PPform.getTarget() << "] Presidential Pardon Form | Grade to sign: " \
		 << PPform.getGradeToSign() << " | Grade to execute: " << PPform.getGradeToExecute();
	if (PPform.getIsSigned())
		out << " | Form is Signed." << RESET << std::endl;
	else
		out << " | form is not signed." << RESET << std::endl;
	return (out);
}
