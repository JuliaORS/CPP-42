/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 20:53:26 by julolle-          #+#    #+#             */
/*   Updated: 2024/02/19 20:53:26 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp" 

Intern::Intern() {
	std::cout << "Intern default construcor called." << std::endl;
}

//copy constructor
Intern::Intern(const Intern & src){
	*this = src;
	std::cout << "Intern copy construcor called." <<std::endl;
}

Intern::~Intern(){
	std::cout << "Intern Destructor called." << std::endl;
}

//operator "="
Intern & Intern::operator=(const Intern & src) {
	(void)src;
	std::cout << "Intern copy assignment operator called." << std::endl;
	return (*this);
}

//FUNCTIONS
AForm *	Intern::makeForm(const std::string & formName, const std::string & target ) const
{
	ShrubberyCreationForm SCForm = ShrubberyCreationForm(target);
	RobotomyRequestForm RRForm = RobotomyRequestForm(target);
	PresidentialPardonForm PPForm = PresidentialPardonForm(target);
	int	i = 0;

	AForm*	forms[] = {&SCForm, &RRForm, &PPForm};
	
	for(int i=0; i<3; i++){
		if (formName.compare(forms[i]->getName()))
		{
			std::cout << GREEN << "Intern creates " << formName << RESET << std::endl;
			return (forms[i]->clone());
		}
	}
	std::cout << RED << "Form doesn't exist." << RESET << std::endl;
	return (NULL);
}

//operador "<<" 
std::ostream &	operator<<(std::ostream & out, const Intern & intern){
	out << YELLOW << "Intern" << RESET;
	return (out);
}
