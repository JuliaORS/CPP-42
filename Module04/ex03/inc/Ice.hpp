/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 15:33:01 by julolle-          #+#    #+#             */
/*   Updated: 2024/02/02 17:32:18 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria{
		
	public:
		Ice();
		Ice(const Ice & src);
		~Ice();

		Ice& operator=(const Ice & src);
		
		AMateria* clone() const;
		//void use(ICharacter& target);
	
};

#endif
