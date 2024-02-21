/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 20:52:35 by julolle-          #+#    #+#             */
/*   Updated: 2024/02/19 20:52:35 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP 
# define INTERN_HPP

# include <iostream>
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern {
	
	public:
		Intern();
		Intern(const std::string & target);
		Intern(const Intern & src);
		~Intern();

		Intern & operator=(const Intern & src);

		AForm*	makeForm(const  std::string & nameForm, const std::string & targetForm) const;
};

#endif
