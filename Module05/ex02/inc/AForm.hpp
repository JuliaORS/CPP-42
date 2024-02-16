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

#ifndef AFORM_HPP 
# define AFORM_HPP

# include <iostream>
# include <fstream>
# include "Bureaucrat.hpp"

# define MAX_GRADE 150
# define MIN_GRADE 1

class Bureaucrat;

class AForm{
	
	public:
		AForm();
		AForm(const std::string & name, const unsigned int gradeToSign, \
			const unsigned int gradeToExecute);
		AForm(const AForm & src);
		virtual ~AForm();

		AForm & operator=(const AForm & src);

		std::string 	getName() const;
		bool			getIsSigned() const;
		unsigned int 	getGradeToSign() const;
		unsigned int 	getGradeToExecute() const;

		void			setIsSigned(const bool isSigned);
		void			setGradeToSign(const unsigned int & gradeToSign);
		void			setGradeToExecute(const unsigned int & gradeToExecute);

		void			beSigned(Bureaucrat & bureaucrat);
		virtual void	execute(Bureaucrat const & executor) const = 0;

		class GradeTooHighException : public std::out_of_range{
			public:
				GradeTooHighException(std::string error_msg);
		};
		class GradeTooLowException : public std::out_of_range{
			public:
				GradeTooLowException(std::string error_msg);
		};
		
	private:
 		const std::string		_name;
		bool			_isSigned;
		unsigned int	_gradeToSign;
		unsigned int	_gradeToExcetute;

};

std::ostream &	operator<<(std::ostream & out, const AForm & form);

#endif
