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
}

//copy constructor
Intern::Intern(const Intern & src){
	*this = src;
}

Intern::~Intern(){
}

//operator "="
Intern & Intern::operator=(const Intern & src) {
	(void)src;
	return (*this);
}

//FUNCTIONS
AForm *	Intern::makeForm(const std::string & formName, const std::string & target ) const
{
	ShrubberyCreationForm SCForm = ShrubberyCreationForm(target);
	RobotomyRequestForm RRForm = RobotomyRequestForm(target);
	PresidentialPardonForm PPForm = PresidentialPardonForm(target);
	AForm*	forms[] = {&SCForm, &RRForm, &PPForm};
	
	for(int i=0; i<3; i++){
		if (formName.compare(forms[i]->getName()))
		{
			std::cout << "Intern creates " << formName << std::endl;
			return (forms[i]->clone());
		}
	}
	std::cout << RED << "Form doesn't exist." << RESET << std::endl;
	return (NULL);
}

