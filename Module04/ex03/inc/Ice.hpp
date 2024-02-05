/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 15:33:01 by julolle-          #+#    #+#             */
/*   Updated: 2024/02/05 14:47:22 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"
# include "Character.hpp"

class Ice : public AMateria{
		
	public:
		Ice();
		Ice(const Ice & src);
		~Ice();

		Ice& operator=(const Ice & src);
		
		AMateria* clone() const;
		void use(ICharacter& target);
	
};

#endif
