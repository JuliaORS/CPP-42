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

#ifndef ROBOTOMYREQUESTFORM_HPP 
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include "AForm.hpp"

# define MIN_GRADE_SIGN_RR 72
# define MIN_GRADE_EXECUTE_RR 45


class RobotomyRequestForm : public AForm{
	
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(const std::string & target);
		RobotomyRequestForm(const RobotomyRequestForm & src);
		~RobotomyRequestForm();

		RobotomyRequestForm & operator=(const RobotomyRequestForm & src);

		std::string 	getTarget() const;

		void	executeConcreteForm() const;

	private:
 		const std::string	_target;

};

std::ostream &	operator<<(std::ostream & out, const RobotomyRequestForm & SCform);

#endif
