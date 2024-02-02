/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 13:48:32 by julolle-          #+#    #+#             */
/*   Updated: 2024/02/02 13:53:46 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP 
# define AANIMAL_HPP

# include "Brain.hpp"
# include <iostream>

class AAnimal{
	
	public:

		AAnimal();
		AAnimal(const std::string & type);
		AAnimal(const AAnimal & src);
		virtual ~AAnimal();

		AAnimal & operator=(const AAnimal & src); 

		std::string getType() const;
		void		setType(const std::string & type);
		
		virtual void	makeSound() = 0;

	protected:

		std::string _type;

};

#endif