
#ifndef FIXED_HPP 
# define FIXED_HPP

# include <iostream>
# include <cstring>
# include <iomanip>

class Fixed{
	
	public: 
		Fixed();
		Fixed(Fixed const & src);
		~Fixed();

		Fixed & operator=(Fixed const & rhs);

		int		getRawBits() const;
		void	setRawBits(int const raw);

	private:
		int	_nb;
		static int const _bits = 8;

};

#endif
