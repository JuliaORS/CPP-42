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

#include "Form.hpp"

Form::Form() : _name("uname"), _isSigned(false), _gradeToSign(MAX_GRADE),\
	 _gradeToExcetute(MAX_GRADE){
	std::cout << "Form default construcor called." << std::endl;
}

Form::Form(const std::string & name, const unsigned int gradeToSign, \
	const unsigned int gradeToExecute) : _name(name), _isSigned(false) {
	if (gradeToSign < MIN_GRADE || gradeToExecute < MIN_GRADE)
		throw Form::GradeTooHighException("");
	else if (gradeToSign > MAX_GRADE || gradeToExecute > MAX_GRADE)
		throw Form::GradeTooLowException("");
	else{
		this->_gradeToSign = gradeToSign;
		this->_gradeToExcetute = gradeToExecute;
	}

	std::cout << this->_name << " Form construcor called." << std::endl;
}

//copy constructor
Form::Form(const Form & src){
	*this = src;
	std::cout << "Form copy construcor called." <<std::endl;
}

Form::~Form(){
	std::cout << this->_name << " Form Destructor called." << std::endl;
}

//operator "="
Form & Form::operator=(const Form & src) {
	if (this != &src) {
		this->_name = src.getName();
		this->_isSigned = src.getIsSigned();
		this->_gradeToSign = src.getGradeToSign();
		this->_gradeToExcetute = src.getGradeToExecute();
	}
	std::cout << "Form copy assignment operator called." << std::endl;
	return (*this);
}

//GETTERS
std::string	Form::getName() const {
	return(_name);
}

bool	Form::getIsSigned() const {
	return(_isSigned);
}

unsigned int Form::getGradeToSign() const{
	return(_gradeToSign);
}

unsigned int Form::getGradeToExecute() const{
	return(_gradeToExcetute);
}

//SETTERS
void	Form::setName(const std::string & name){
	this->_name = name;
}

void	Form::setIsSigned(const bool isSigned){
	this->_isSigned = isSigned;
}

void	Form::setGradeToSign(const unsigned int & gradeToSign){
	this->_gradeToSign = gradeToSign;
}

void	Form::setGradeToExecute(const unsigned int & getGradeToExecute){
	this->_gradeToExcetute = getGradeToExecute;
}


//FUNCTIONS
void	Form::beSigned(Bureaucrat & bureaucrat){
	if (bureaucrat.getGrade() > this->_gradeToSign)
		throw Form::GradeTooLowException("");
	else{
		this->_isSigned= true;
		std::cout << bureaucrat.getName() << " has signed " << this->_name << std::endl; 
	}
}

//exceptions constructors
Form::GradeTooHighException::GradeTooHighException(std::string error_msg) : \
	std::out_of_range(error_msg + "Range too high") {
};

Form::GradeTooLowException::GradeTooLowException(std::string error_msg) : \
	std::out_of_range(error_msg + "Range too low"){
};


//operador "<<" 
std::ostream &	operator<<(std::ostream & out, const Form & form){
	out << "[" << form.getName() << "] Grade to sign: " << form.getGradeToSign() \
		<< " / Grade to execute: " << form.getGradeToExecute();
	if (form.getIsSigned())
		out << " / Form is Signed." << std::endl;
	else
		out << " / form is not signed." <<std::endl;
	return (out);
}
