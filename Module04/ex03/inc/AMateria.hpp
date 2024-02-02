/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 13:47:44 by julolle-          #+#    #+#             */
/*   Updated: 2024/02/02 13:47:54 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP 
# define AANIMAL_HPP

class AMateria{
	
	public:

		AMateria();
		AMateria(const std::string & type);
		AMateria(const AMateria & src);
		virtual ~AMateria();

		AMateria & operator=(const AMateria & src); 

		AMateria(std::string const & type);
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);

};

#endif
