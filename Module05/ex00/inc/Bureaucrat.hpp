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

class Bureaucrat{
	
	public:
		Bureaucrat(const std::string & name, const int grade);
		Bureaucrat(const Bureaucrat & src);
		virtual ~Bureaucrat();

		Bureaucrat & operator=(const Bureaucrat & src);

		std::string getName() const;
		int 		getGrade() const;
		void		setName(const std::string & name);
		void		setGrade(const int & grade);

		void		incrementGrade();
		void		decrementGrade();
		
		

	private:
 		std::string	_name;
		int			_grade;

};

std::ostream &	operator<<(std::ostream & out, const Bureaucrat & bureaucrat);


#endif
