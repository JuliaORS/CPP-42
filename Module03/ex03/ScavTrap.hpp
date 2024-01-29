/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 19:55:43 by julolle-          #+#    #+#             */
/*   Updated: 2024/01/29 12:34:08 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP 
# define SCAVTRAP_HPP

# include <iostream>
# include <cstring>
# include <iomanip>
# include "ClapTrap.hpp" 

class ScavTrap : virtual public ClapTrap{
	
	public: 
		ScavTrap();	
		ScavTrap(const std::string & name);
		ScavTrap(const ScavTrap & src);
		~ScavTrap();

		ScavTrap & operator=(const ScavTrap & src);

		void guardGate();
};

#endif
