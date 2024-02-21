/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 20:51:52 by julolle-          #+#    #+#             */
/*   Updated: 2024/02/19 20:51:52 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp" 

Bureaucrat::Bureaucrat() : _name("uname"), _grade(MAX_GRADE) {
}

Bureaucrat::Bureaucrat(const std::string & name, const unsigned int grade) : _name(name) {
	if (grade < MIN_GRADE)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > MAX_GRADE)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade = grade;
}

//copy constructor
Bureaucrat::Bureaucrat(const Bureaucrat & src){
	*this = src;
}

Bureaucrat::~Bureaucrat(){
}

//operator "="
Bureaucrat & Bureaucrat::operator=(const Bureaucrat & src) {
	if (this != &src) {
		this->_grade = src.getGrade();
	}
	return (*this);
}

//GETTERS
std::string	Bureaucrat::getName() const {
	return(_name);
}

unsigned int	Bureaucrat::getGrade() const {
	return(_grade);
}

//FUNCTIONS
void	Bureaucrat::incrementGrade(){
	if (this->_grade - 1 < MIN_GRADE)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade--;
}

void	Bureaucrat::incrementGrade(unsigned int increment){
	if (this->_grade < MIN_GRADE + increment)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade = this->_grade - increment;
}

void	Bureaucrat::decrementGrade(){
	if (this->_grade + 1 > MAX_GRADE)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade++;
}
void	Bureaucrat::decrementGrade(unsigned int decrement){
	if (this->_grade + decrement > MAX_GRADE)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade = this->_grade + decrement;
}

void	Bureaucrat::signForm(AForm & form){
	if (form.getIsSigned()){
		throw AForm::FormIsSignedException("");
	}
	else {
		try{
			form.beSigned(*this);
			std::cout << GREEN << form.getName() << " is signed by " << this->_name << RESET << std::endl;  
		}
		catch (std::out_of_range & e){
			std::cout << RED << this->_name << " could not sign " << form.getName() << \
			" beacuse " << e.what() << RESET<< std::endl;;
		}
	}
}

void	Bureaucrat::executeForm(AForm const & form){
	try{
		form.execute(*this);
		std::cout << GREEN << _name << " executed " << form.getName() << RESET << std::endl; 
	}
	catch (std::out_of_range & e){
		std::cout << RED << this->_name << " could not execute " << form.getName() << \
			" beacuse " << e.what() << RESET << std::endl;;
	}
}

//exceptions constructors
const char *	Bureaucrat::GradeTooHighException::what () const throw (){
	return ("Range too high");
}

const char *	Bureaucrat::GradeTooLowException::what () const throw (){
	return ("Range too low");
}

//operador "<<" 
std::ostream &	operator<<(std::ostream & out, const Bureaucrat & bureaucrat){
	out << YELLOW << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << RESET;
	return (out);
}
