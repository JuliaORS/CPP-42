/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 19:54:10 by julolle-          #+#    #+#             */
/*   Updated: 2024/01/25 19:18:47 by julolle-         ###   ########.fr       */
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
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const & src);
		~ScavTrap();

		ScavTrap & operator=(ScavTrap const & src);

		void guardGate();
};

#endif
