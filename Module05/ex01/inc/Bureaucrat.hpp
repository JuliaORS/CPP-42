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

#ifndef BUREAUCRAFT_HPP 
# define BUREAUCRAFT_HPP

# include <iostream>
# include "Form.hpp"

# define MAX_GRADE 150
# define MIN_GRADE 1

# define MAGENTA "\033[35m"
# define RESET "\033[0m"
# define  CYAN "\033[36m"  

class Form;

class Bureaucrat{
	
	public:
		Bureaucrat();
		Bureaucrat(const std::string & name, const unsigned int grade);
		Bureaucrat(const Bureaucrat & src);
		virtual ~Bureaucrat();

		Bureaucrat & operator=(const Bureaucrat & src);

		std::string 	getName() const;
		unsigned int 	getGrade() const;

		void	incrementGrade();
		void	decrementGrade();
		void	incrementGrade(unsigned int increment);
		void	decrementGrade(unsigned int decrement);

		void	signForm(Form & form);

		class GradeTooHighException : public std::out_of_range{
			public:
				GradeTooHighException(std::string error_msg);
		};
		class GradeTooLowException : public std::out_of_range{
			public:
				GradeTooLowException(std::string error_msg);
		};
		
	private:
 		const	std::string		_name;
		unsigned int	_grade;

};

std::ostream &	operator<<(std::ostream & out, const Bureaucrat & bureaucrat);


#endif
