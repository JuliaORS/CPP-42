/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 19:54:10 by julolle-          #+#    #+#             */
/*   Updated: 2024/01/29 12:06:15 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP 
# define SCAVTRAP_HPP

# include <iostream>
# include <cstring>
# include <iomanip>
# include "ClapTrap.hpp" 

class ScavTrap : public ClapTrap{
	
	public: 
		ScavTrap();
		ScavTrap(const std::string & name);
		ScavTrap(const ScavTrap & src);
		~ScavTrap();

		ScavTrap & operator=(const ScavTrap & src);

		void guardGate();
};

#endif
