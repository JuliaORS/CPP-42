/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 19:54:19 by julolle-          #+#    #+#             */
/*   Updated: 2024/01/31 19:11:20 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP 
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal{
	
	public: 
		Dog();
		Dog(const Dog & src);
		~Dog();

		Dog & operator=(const Dog & src);

		Brain*	getBrain() const;
		void	setBrain(Brain* brain); //sha de referenciar??

		void makeSound();
		void makeSound() const;

	private:
		Brain* _brain;
};

#endif
