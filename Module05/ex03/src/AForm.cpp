/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 20:53:17 by julolle-          #+#    #+#             */
/*   Updated: 2024/02/19 20:53:17 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name("uname"), _isSigned(false), _gradeToSign(MAX_GRADE),\
	 _gradeToExcetute(MAX_GRADE){
	std::cout << "Form default construcor called." << std::endl;
}

AForm::AForm(const std::string & name, const unsigned int gradeToSign, \
	const unsigned int gradeToExecute) : _name(name), _isSigned(false) {
	if (gradeToSign < MIN_GRADE || gradeToExecute < MIN_GRADE)
		throw AForm::GradeTooHighException("");
	else if (gradeToSign > MAX_GRADE || gradeToExecute > MAX_GRADE)
		throw AForm::GradeTooLowException("");
	else{
		this->_gradeToSign = gradeToSign;
		this->_gradeToExcetute = gradeToExecute;
	}

	std::cout << this->_name << " Form construcor called." << std::endl;
}

//copy constructor
AForm::AForm(const AForm & src){
	*this = src;
	std::cout << "Form copy construcor called." <<std::endl;
}

AForm::~AForm(){
	std::cout << this->_name << " Form Destructor called." << std::endl;
}

//operator "="
AForm & AForm::operator=(const AForm & src) {
	if (this != &src) {
		this->_isSigned = src.getIsSigned();
		this->_gradeToSign = src.getGradeToSign();
		this->_gradeToExcetute = src.getGradeToExecute();
	}
	std::cout << "Form copy assignment operator called." << std::endl;
	return (*this);
}

//GETTERS
std::string	AForm::getName() const {
	return(_name);
}

bool	AForm::getIsSigned() const {
	return(_isSigned);
}

unsigned int AForm::getGradeToSign() const{
	return(_gradeToSign);
}

unsigned int AForm::getGradeToExecute() const{
	return(_gradeToExcetute);
}

//SETTERS
void	AForm::setIsSigned(const bool isSigned){
	this->_isSigned = isSigned;
}

void	AForm::setGradeToSign(const unsigned int & gradeToSign){
	this->_gradeToSign = gradeToSign;
}

void	AForm::setGradeToExecute(const unsigned int & getGradeToExecute){
	this->_gradeToExcetute = getGradeToExecute;
}


//FUNCTIONS
void	AForm::beSigned(Bureaucrat & bureaucrat){
	if (bureaucrat.getGrade() > this->_gradeToSign)
		throw AForm::GradeTooLowException(" ");
	if (this->_isSigned)
		throw AForm::FormIsSignedException("");
	else{
		this->_isSigned= true;
		std::cout << GREEN << bureaucrat.getName() << " has signed " << this->_name << RESET << std::endl; 
	}
}

void	AForm::execute(Bureaucrat const & executor) const{
	if (_isSigned){
		throw AForm::FormIsSignedException("");
	}
	if (executor.getGrade() > getGradeToExecute()){
		throw AForm::GradeTooLowException("");
	}
	executeConcreteForm();
}

//exceptions
AForm::GradeTooHighException::GradeTooHighException(std::string error_msg) : \
	std::out_of_range(error_msg + "Range too high.") {
};

AForm::GradeTooLowException::GradeTooLowException(std::string error_msg) : \
	std::out_of_range(error_msg + "Range too low."){
};

AForm::FormIsSignedException::FormIsSignedException(std::string error_msg) : \
	std::runtime_error(error_msg + "Form is already signed."){
};
