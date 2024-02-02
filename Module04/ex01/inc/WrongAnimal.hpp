/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 19:54:15 by julolle-          #+#    #+#             */
/*   Updated: 2024/02/02 13:54:38 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP 
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal{
	
	public:
		WrongAnimal();
		WrongAnimal(const std::string & type);
		WrongAnimal(const WrongAnimal & src);
		~WrongAnimal();

		WrongAnimal & operator=(const WrongAnimal & src);

		std::string getType() const;
		void		setType(const std::string & type);
		
		void makeSound();
		void makeSound() const;

	protected:
		std::string _type;

};

#endif
