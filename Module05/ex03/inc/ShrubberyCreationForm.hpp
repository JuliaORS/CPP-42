/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 20:53:13 by julolle-          #+#    #+#             */
/*   Updated: 2024/02/19 20:53:13 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP 
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include "AForm.hpp"

# define MIN_GRADE_SIGN_SC 145
# define MIN_GRADE_EXECUTE_SC 137


class ShrubberyCreationForm : public AForm{
	
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(const std::string & target);
		ShrubberyCreationForm(const ShrubberyCreationForm & src);
		~ShrubberyCreationForm();

		ShrubberyCreationForm & operator=(const ShrubberyCreationForm & src);

		std::string 	getTarget() const;

		void	executeConcreteForm() const;

	private:
 		const std::string	_target;

};

std::ostream &	operator<<(std::ostream & out, const ShrubberyCreationForm & SCform);

#endif
