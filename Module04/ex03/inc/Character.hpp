/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 14:54:01 by julolle-          #+#    #+#             */
/*   Updated: 2024/02/05 14:36:04 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP 
# define CHARACTER_HPP

# include <iostream>
# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character : public ICharacter{
	
	public:
		Character();
		Character(const std::string & name);
		Character(const Character & src);
		~Character();

		Character & operator=(const Character & src);

		std::string const & getName() const;
		void	setName(const std::string & name);

	private:
		//AMateria* 	_inventory[4];
		int			_id;

};

#endif
