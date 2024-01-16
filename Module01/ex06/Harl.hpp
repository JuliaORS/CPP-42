
#ifndef HARL_HPP 
# define HARL_HPP

# include <iostream>
# include <cstring>
# include <iomanip>

class Harl{
	
	public: 
		Harl();
		~Harl();

		void	complain(std::string level);

	private:
		void _debug();
		void _info();
		void _warning();
		void _error();

};

#endif
