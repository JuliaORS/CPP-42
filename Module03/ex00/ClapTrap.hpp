/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 19:53:45 by julolle-          #+#    #+#             */
/*   Updated: 2024/01/26 17:49:48 by julolle-         ###   ########.fr       */
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
		
	private:
		std::string _name;
		int _hitPoints;
		int _energyPoints;
		int _attackDamage;

};

#endif
