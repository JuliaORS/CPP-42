/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:49:03 by julolle-          #+#    #+#             */
/*   Updated: 2024/01/23 15:49:05 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp" 

#ifndef HUMANB_HPP 
# define HUMANB_HPP

class HumanB{
	
	public: 
		HumanB(std::string name);
		~HumanB();

		std::string getName();
        void	    setWeapon(Weapon &weapon);
		void	    attack();
    
    private:
		std::string _name;
		Weapon      *_weaponB;
};

#endif
