/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 20:53:38 by julolle-          #+#    #+#             */
/*   Updated: 2024/02/19 20:53:38 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : \
	AForm("form", MIN_GRADE_SIGN_RR, MIN_GRADE_EXECUTE_RR), _target("undefinedTarget") {
	std::cout << "RobotomyRequestForm default construcor called." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string & target) : \
	AForm("form", MIN_GRADE_SIGN_RR, MIN_GRADE_EXECUTE_RR), _target(target) {

	std::cout << this->_target << " RobotomyRequestForm construcor called." << std::endl;
}

//copy constructor
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & src){
	*this = src;
	std::cout << "RobotomyRequestForm copy construcor called." <<std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(){
	std::cout << "RobotomyRequestForm Destructor called." << std::endl;
}

//operator "="
RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm & src) {
	if (this != &src) {
		this->setIsSigned(src.getIsSigned());
		this->setGradeToSign(src.getGradeToSign());
		this->setGradeToExecute(src.getGradeToExecute());
	}
	std::cout << "RobotomyRequestForm copy assignment operator called." << std::endl;
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

//operador "<<" 
std::ostream &	operator<<(std::ostream & out, const RobotomyRequestForm & SCform){
	out << YELLOW << "[" << SCform.getTarget() << "] Robotomy request Form | Grade to sign: " \
		<< SCform.getGradeToSign() << " | Grade to execute: " << SCform.getGradeToExecute();
	if (SCform.getIsSigned())
		out << " | Form is Signed." << std::endl;
	else
		out << " | form is not signed." <<std::endl;
	return (out);
}
