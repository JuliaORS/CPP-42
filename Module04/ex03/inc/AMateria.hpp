/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 13:47:44 by julolle-          #+#    #+#             */
/*   Updated: 2024/02/05 14:47:10 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP 
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

class AMateria{
	
	public:

		AMateria(std::string const & type);
		AMateria(const AMateria & src);
		virtual ~AMateria();

		AMateria & operator=(const AMateria & src); 

		std::string	const &	getType() const;
		void	setType(const std::string & type);

		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter & target);
	
	protected:
		std::string _type;

};

#endif
