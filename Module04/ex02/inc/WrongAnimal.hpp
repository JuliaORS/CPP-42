/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 19:54:15 by julolle-          #+#    #+#             */
/*   Updated: 2024/01/29 19:59:35 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP 
# define WRONGANIMAL_HPP

# include <iostream>
# include <cstring>
# include <iomanip>

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
