/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 19:54:15 by julolle-          #+#    #+#             */
/*   Updated: 2024/02/02 13:54:30 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP 
# define ANIMAL_HPP

# include <iostream>
# include "Brain.hpp"

class Animal{
	
	public:
		Animal();
		Animal(const std::string & type);
		Animal(const Animal & src);
		virtual ~Animal();

		Animal & operator=(const Animal & src);

		std::string getType() const;
		void		setType(const std::string & type);
		
		virtual void	makeSound();
		virtual void	makeSound() const;

	protected:
		std::string _type;

};

#endif
