/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 19:54:15 by julolle-          #+#    #+#             */
/*   Updated: 2024/01/31 18:59:45 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP 
# define AANIMAL_HPP

# include <iostream>
# include <cstring>
# include <iomanip>
# include "Brain.hpp"

class AAnimal{
	
	protected:
		AAnimal();
		AAnimal(const std::string & type);
		AAnimal(const AAnimal & src);
		virtual ~AAnimal();

		AAnimal & operator=(const AAnimal & src);

		std::string getType() const;
		void		setType(const std::string & type);
		
		virtual void	makeSound();
		virtual void	makeSound() const;

		std::string _type;

};

#endif