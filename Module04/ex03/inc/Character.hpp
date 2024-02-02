/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 14:54:01 by julolle-          #+#    #+#             */
/*   Updated: 2024/02/02 18:25:02 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP 
# define CHARACTER_HPP

# include <iostream>
# include "ICharacter.hpp"

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
		//Materia 	_inventory[4];

};

#endif
