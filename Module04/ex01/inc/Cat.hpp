/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 19:54:19 by julolle-          #+#    #+#             */
/*   Updated: 2024/01/31 19:13:35 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP 
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal{
	
	public: 
		Cat();
		Cat(const Cat & src);
		~Cat();

		Cat & operator=(const Cat & src);

		Brain*	getBrain() const;
		void	setBrain(Brain* brain); //sha de referenciar??
		
		void makeSound();
		void makeSound() const;

	private:
		Brain* _brain;
};

#endif
