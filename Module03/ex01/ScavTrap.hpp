
#ifndef SCAVTRAP_HPP 
# define SCAVTRAP_HPP

# include <iostream>
# include <cstring>
# include <iomanip>

class ScavTrap : public ClapTrap{
	
	public: 
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const & src);
		~ScavTrap();

		ScavTrap & operator=(ScavTrap const & src);

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
