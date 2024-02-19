/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 20:51:06 by julolle-          #+#    #+#             */
/*   Updated: 2024/02/19 20:51:06 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP 
# define FORM_HPP

# include <iostream>
#include "Bureaucrat.hpp"

# define MAX_GRADE 150
# define MIN_GRADE 1

class Bureaucrat;

class Form{
	
	public:
		Form();
		Form(const std::string & name, const unsigned int gradeToSign, \
			const unsigned int gradeToExecute);
		Form(const Form & src);
		~Form();

		Form & operator=(const Form & src);

		std::string 	getName() const;
		bool			getIsSigned() const;
		unsigned int 	getGradeToSign() const;
		unsigned int 	getGradeToExecute() const;

		void			setIsSigned(const bool isSigned);
		void			setGradeToSign(const unsigned int & gradeToSign);
		void			setGradeToExecute(const unsigned int & gradeToExecute);

		void			beSigned(Bureaucrat & bureaucrat);

		class GradeTooHighException : public std::out_of_range{
			public:
				GradeTooHighException(std::string error_msg);
		};
		class GradeTooLowException : public std::out_of_range{
			public:
				GradeTooLowException(std::string error_msg);
		};
		class FormIsSignedException : public std::runtime_error{
			public:
				FormIsSignedException(std::string error_msg);
		};
		
	private:
 		const std::string		_name;
		bool			_isSigned;
		unsigned int	_gradeToSign;
		unsigned int	_gradeToExcetute;

};

std::ostream &	operator<<(std::ostream & out, const Form & form);


#endif
