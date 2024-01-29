/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 19:54:19 by julolle-          #+#    #+#             */
/*   Updated: 2024/01/29 19:35:35 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP 
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal{
	
	public: 
		Dog();
		Dog(const Dog & src);
		~Dog();

		Dog & operator=(const Dog & src);

		void makeSound();
		void makeSound() const;
};

#endif

