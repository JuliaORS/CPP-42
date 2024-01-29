/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 19:55:08 by julolle-          #+#    #+#             */
/*   Updated: 2024/01/29 13:18:41 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP 
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
	
	public:
		DiamondTrap();
		DiamondTrap(const std::string & name);
		DiamondTrap(const DiamondTrap & src);
		~DiamondTrap();

		DiamondTrap & operator=(const DiamondTrap & src);

		std::string getName() const;
		
		void whoAmI();

	private:
		std::string _name;
};

#endif
