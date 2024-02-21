/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 20:52:04 by julolle-          #+#    #+#             */
/*   Updated: 2024/02/19 20:52:04 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : \
	AForm("RobotomyRequestForm", MIN_GRADE_SIGN_RR, MIN_GRADE_EXECUTE_RR), _target("undefinedTarget") {
}

RobotomyRequestForm::RobotomyRequestForm(const std::string & target) : \
	AForm("RobotomyRequestForm", MIN_GRADE_SIGN_RR, MIN_GRADE_EXECUTE_RR), _target(target) {
}

//copy constructor
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & src){
	*this = src;
}

RobotomyRequestForm::~RobotomyRequestForm(){
}

//operator "="
RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm & src) {
	if (this != &src) {
		this->setIsSigned(src.getIsSigned());
		this->setGradeToSign(src.getGradeToSign());
		this->setGradeToExecute(src.getGradeToExecute());
	}
	return (*this);
}

//GETTERS
std::string	RobotomyRequestForm::getTarget() const {
	return(_target);
}

//FUNCTIONS
void	RobotomyRequestForm::executeConcreteForm() const{
	std::cout << GREEN << "trrrr trrrr\nbrrr brrr" << std::endl;
	std::cout << getTarget() + " has been robotomized successfully 50% of the time." << RESET << std::endl;
}

AForm *	RobotomyRequestForm::clone() {
	AForm* clone = new RobotomyRequestForm(*this);
	return (clone);
}

//operador "<<" 
std::ostream &	operator<<(std::ostream & out, const RobotomyRequestForm & RRform){
	out << YELLOW << "[" << RRform.getName() << "] Target: " << RRform.getTarget() << "| Grade to sign: " \
		<< RRform.getGradeToSign() << " | Grade to execute: " << RRform.getGradeToExecute();
	if (RRform.getIsSigned())
		out << " | Form is Signed." << std::endl;
	else
		out << " | form is not signed." <<std::endl;
	return (out);
}
