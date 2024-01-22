
#include "Fixed.hpp" 

int main()
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));

	//operator "++ --"
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;

	Fixed c(6);

	//operator "min and max"
	std::cout << "minimus between "<< c << " and "<< b << " is: " << Fixed::min(c, b) << std::endl;
	std::cout << "maximus "<< c << " and "<< b << " is: " << Fixed::max(c, b) << std::endl;

	//operator ">"
	if (b >= c)
		std::cout << b << " is bigger than " << c << std::endl;
	else
		std::cout << c << " is bigger than " << b << std::endl;

	//operator "<"
	if (b <= c)
		std::cout << b << " is smaller than " << c << std::endl;
	else
		std::cout << c << " is smaller than " << b << std::endl;

	//operator "=="
	if (b == c)
		std::cout << b << " is equal than " << c << std::endl;
	else
		std::cout << b << " is not equal than " << c << std::endl;

	//operator "!="
	if (b != c)
		std::cout << b << " is not equal than " << c << std::endl;
	else
		std::cout << b << " is equal than " << c << std::endl;
	
	//operator "+ - * /"
	std::cout << b << " + " << c << " = " << b+c << std::endl;
	std::cout << b << " - " << c << " = " << b-c << std::endl;
	std::cout << b << " * " << c << " = " << b*c << std::endl;
	std::cout << b << " / " << c << " = " << b/c << std::endl;

	return 0;
}
