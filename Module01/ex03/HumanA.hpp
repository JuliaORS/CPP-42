/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:48:55 by julolle-          #+#    #+#             */
/*   Updated: 2024/01/23 15:48:57 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP 
# define HUMANA_HPP
# include "Weapon.hpp" 

class HumanA{
	
	public: 
		HumanA(std::string name, Weapon &weapon);
		~HumanA();

		void	    attack();

	private:
		std::string _name;
		Weapon      &_weaponA;

};

#endif
