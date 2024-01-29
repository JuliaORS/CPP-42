/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 19:54:15 by julolle-          #+#    #+#             */
/*   Updated: 2024/01/29 12:20:29 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP 
# define CLAPTRAP_HPP

# include <iostream>
# include <cstring>
# include <iomanip>

class ClapTrap{
	
	public:
		ClapTrap();
		ClapTrap(const std::string & name);
		ClapTrap(const ClapTrap & src);
		~ClapTrap();

		ClapTrap & operator=(const ClapTrap & src);

		std::string getName() const;
		int			getHP() const;
		int			getEP() const;
		int			getAD() const;

		void		setName(const std::string & name);
		void		setHP(int const hp);
		void		setEP(int const ep);
		void		setAD(int const ad);
		
		void attack(const std::string & target);
		void takeDamage(unsigned int amount); 
		void beRepaired(unsigned int amount);

	protected:
		std::string _name;
		int _hitPoints;
		int _energyPoints;
		int _attackDamage;

};

#endif
