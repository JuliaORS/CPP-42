/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 19:54:19 by julolle-          #+#    #+#             */
/*   Updated: 2024/01/29 12:22:41 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP 
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap{
	
	public: 
		FragTrap();
		FragTrap(const std::string & name);
		FragTrap(const FragTrap & src);
		~FragTrap();

		FragTrap & operator=(const FragTrap & src);

		void highFivesGuys(void);

};

#endif
