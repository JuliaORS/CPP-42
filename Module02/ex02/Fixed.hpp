
#ifndef FIXED_HPP 
# define FIXED_HPP

# include <iostream>
# include <cstring>
# include <iomanip>

class Fixed{
	
	public: 
		Fixed();

		Fixed(Fixed const & src);

		Fixed(int const nbI);
		Fixed(float const nbF);
		~Fixed();

		Fixed & operator=(Fixed const & rhs);

		int		toInt() const;
		float	toFloat() const;

		int		getRawBits() const;
		void	setRawBits(int const raw);

	private:
		int	_fixPoint;
		static int const _fracBits = 8;
};

std::ostream &	operator<<(std::ostream & out, Fixed & rhs);
std::ostream &	operator<<(std::ostream & out, Fixed const & rhs);

#endif
