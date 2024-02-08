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

#include "Bureaucrat.hpp" 

Bureaucrat::Bureaucrat(const std::string & name, const int grade) {
	try {
		if (grade < 1 || grade > 150)
			throw std::exception();
		else{
			this-> _name = name;
			this->_grade = grade;	
		}
		
	}
	catch (std::exception &e){
	}
	std::cout << "Bureaucrat construcor called." << std::endl;
}

//copy constructor
Bureaucrat::Bureaucrat(const Bureaucrat & src){
	*this = src;
	std::cout << "Bureaucrat copy construcor called." <<std::endl;
}

Bureaucrat::~Bureaucrat(){
	std::cout << "Bureaucrat Destructor called." << std::endl;
}

//operator "="
Bureaucrat & Bureaucrat::operator=(const Bureaucrat & src) {
	if (this != &src) {
		this->_name = src.getName();
		this->_grade = src.getGrade();
	}
	std::cout << "Bureaucrat copy assignment operator called." << std::endl;
	return (*this);
}

//GETTERS
std::string	Bureaucrat::getName() const {
	return(_name);
}

int	Bureaucrat::getGrade() const {
	return(_grade);
}

//SETTERS
void	Bureaucrat::setName(const std::string & name){
	this->_name = name;
}

void	Bureaucrat::setGrade(const int & grade){
	this->_grade = grade;
}

//FUNCTIONS
void	Bureaucrat::incrementGrade(){
	this->_grade--;
}

void	Bureaucrat::decrementGrade(){
	this->_grade++;
}

//operador "<<" 
std::ostream &	operator<<(std::ostream & out, const Bureaucrat & bureaucrat){
	out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return (out);
}
