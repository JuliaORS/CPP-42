/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 20:52:31 by julolle-          #+#    #+#             */
/*   Updated: 2024/02/19 20:52:31 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAFT_HPP 
# define BUREAUCRAFT_HPP

# include <iostream>
# include "AForm.hpp"

# define MAX_GRADE 150
# define MIN_GRADE 1

# define MAGENTA "\033[35m"
# define RESET "\033[0m"
# define  CYAN "\033[36m"  
# define RED "\033[31m"
# define GREEN "\033[32m"
# define YELLOW "\033[38:5:220m"


class AForm;

class Bureaucrat{
	
	public:
		Bureaucrat();
		Bureaucrat(const std::string & name, const unsigned int grade);
		Bureaucrat(const Bureaucrat & src);
		~Bureaucrat();

		Bureaucrat & operator=(const Bureaucrat & src);

		std::string 	getName() const;
		unsigned int 	getGrade() const;

		void	incrementGrade();
		void	decrementGrade();
		void	incrementGrade(unsigned int increment);
		void	decrementGrade(unsigned int decrement);

		void	signForm(AForm & form);
		void	executeForm(AForm const & form);

		class GradeTooHighException : public std::exception{
			public:
				const char * what () const throw ();
		};
		class GradeTooLowException : public std::exception{
			public:
				const char * what () const throw ();
		};
		
	private:
 		const std::string	_name;
		unsigned int		_grade;

};

std::ostream &	operator<<(std::ostream & out, const Bureaucrat & bureaucrat);


#endif
