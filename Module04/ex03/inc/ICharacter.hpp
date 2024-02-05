/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 14:54:37 by julolle-          #+#    #+#             */
/*   Updated: 2024/02/05 12:48:00 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP 
# define ICHARACTER_HPP

# include "AMateria.hpp"

class ICharacter {

	public:
		virtual ~ICharacter() {}
		virtual std::string const & getName() const = 0;
		//virtual void equip(AMateria* m) = 0;
		//virtual void unequip(int idx) = 0;
		//virtual void use(int idx, ICharacter& target) = 0;
	
	protected:
		//AMateria*	_inventory[4];
		std::string	_name;


};

#endif
