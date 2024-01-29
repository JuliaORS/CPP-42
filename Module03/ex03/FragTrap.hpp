/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 19:55:14 by julolle-          #+#    #+#             */
/*   Updated: 2024/01/29 13:12:21 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP 
# define FRAGTRAP_HPP

# include <iostream>
# include <cstring>
# include <iomanip>
# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap{
	
	public:
		FragTrap();
		FragTrap(const std::string & name);
		FragTrap(const FragTrap & src);
		virtual ~FragTrap();

		FragTrap & operator=(const FragTrap & src);

		void highFivesGuys(void);

};

#endif
