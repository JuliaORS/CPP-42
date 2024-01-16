
#ifndef FIXED_HPP 
# define FIXED_HPP

# include <iostream>
# include <cstring>
# include <iomanip>

class Fixed{
	
	public: 
		Fixed();
		Fixed(const Fixed&);
		~Fixed();

		void	complain(std::string level);

	private:
		void _debug();
		void _info();
		void _warning();
		void _error();

};

#endif
