/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 14:54:01 by julolle-          #+#    #+#             */
/*   Updated: 2024/02/07 14:01:48 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP 
# define CHARACTER_HPP

# include <iostream>
# include "ICharacter.hpp"
# include "AMateria.hpp"


class AMateria;

class Character : public ICharacter{
	
	public:
		Character();
		Character(const std::string & name);
		Character(const Character & src);
		~Character();

		Character & operator=(const Character & src);

		std::string const & getName() const;
		void	setName(const std::string & name);

		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
		void printInventory();

	private:
		AMateria* 	_inventory[4];
		int			_idxFloor;
		AMateria* 	_floor[];
};

#endif
