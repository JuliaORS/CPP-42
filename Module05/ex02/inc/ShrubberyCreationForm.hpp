/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 19:54:15 by julolle-          #+#    #+#             */
/*   Updated: 2024/02/08 12:04:10 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP 
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include "AForm.hpp"

# define MIN_GRADE_SIGN 145
# define MIN_GRADE_EXECUTE 137


class ShrubberyCreationForm : public AForm{
	
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(const std::string & target);
		ShrubberyCreationForm(const ShrubberyCreationForm & src);
		~ShrubberyCreationForm();

		ShrubberyCreationForm & operator=(const ShrubberyCreationForm & src);

		std::string 	getTarget() const;

		void	execute(Bureaucrat const & executor) const;

		class GradeTooHighException : public std::out_of_range{
			public:
				GradeTooHighException(std::string error_msg);
		};
		class GradeTooLowException : public std::out_of_range{
			public:
				GradeTooLowException(std::string error_msg);
		};
		
	private:
 		const std::string	_target;

};

std::ostream &	operator<<(std::ostream & out, const ShrubberyCreationForm & SCform);

#endif
