/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 19:54:54 by julolle-          #+#    #+#             */
/*   Updated: 2024/01/25 20:47:02 by julolle-         ###   ########.fr       */
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
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const & src);
		virtual ~ClapTrap();

		ClapTrap & operator=(ClapTrap const & src);

		void attack(const std::string& target);
		void takeDamage(unsigned int amount); 
		void beRepaired(unsigned int amount);
		
		virtual std::string getName() const;
		int			getHP() const;
		int			getEP() const;
		int			getAD() const;

		void		setName(std::string const name);
		void		setHP(int const hp);
		void		setEP(int const ep);
		void		setAD(int const ad);

	protected:
		std::string _name;
		int _hitPoints;
		int _energyPoints;
		int _attackDamage;

};

#endif
