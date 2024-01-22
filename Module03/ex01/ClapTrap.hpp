
#ifndef CLAPTRAP_HPP 
# define CLAPTRAP_HPP

# include <iostream>
# include <cstring>
# include <iomanip>

class ClapTrap{
	
	public: 
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const & src);
		~ClapTrap();

		ClapTrap & operator=(ClapTrap const & src);

		void attack(const std::string& target);
		void takeDamage(unsigned int amount); 
		void beRepaired(unsigned int amount);
		
		std::string getName() const;
		int			getHP() const;
		int			getEP() const;
		int			getAD() const;

		void		setName(std::string const name);
		void		setHP(int const hp);
		void		setEP(int const ep);
		void		setAD(int const ad);

	private:
		std::string _name;
		int _hitPoints;
		int _energyPoints;
		int _attackDamage;

};

#endif
