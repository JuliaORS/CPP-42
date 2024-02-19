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

#ifndef PRESIDENTIALPARDONFORM_HPP 
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include "AForm.hpp"

# define MIN_GRADE_SIGN_PP 25
# define MIN_GRADE_EXECUTE_PP 5


class PresidentialPardonForm : public AForm{
	
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(const std::string & target);
		PresidentialPardonForm(const PresidentialPardonForm & src);
		~PresidentialPardonForm();

		PresidentialPardonForm & operator=(const PresidentialPardonForm & src);

		std::string 	getTarget() const;

		void	executeConcreteForm() const;

	private:
 		const std::string	_target;

};

std::ostream &	operator<<(std::ostream & out, const PresidentialPardonForm & SCform);

#endif
