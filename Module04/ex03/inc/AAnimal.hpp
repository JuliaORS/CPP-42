/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 13:47:39 by julolle-          #+#    #+#             */
/*   Updated: 2024/02/02 13:47:40 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef AANIMAL_HPP 
# define AANIMAL_HPP

# include <iostream>
# include <cstring>
# include <iomanip>
# include "Brain.hpp"

class AMateria{
	
	public:

		AMateria();
		AMateria(const std::string & type);
		AMateria(const AMateria & src);
		virtual ~AMateria();

		AMateria & operator=(const AMateria & src); 

		std::string getType() const;
		void		setType(const std::string & type);
		
		virtual void	makeSound() = 0;

	protected:

		std::string _type;

};

#endif
