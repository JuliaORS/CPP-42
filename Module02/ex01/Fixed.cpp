
#include "Fixed.hpp" 

Fixed::Fixed(){
	std::cout << "Default construcor called" << std::endl;
	this->_fixPoint = 0;
}

//Copy constructor
Fixed::Fixed(Fixed const & src){
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

//Integer constructor
Fixed::Fixed(int const nbI){
	std::cout << "Integer constructor called" << std::endl;
	this->_fixPoint = nbI << this->_fracBits;
}

//Float constructor
Fixed::Fixed(float const nbF){
	std::cout << "Float constructor called" << std::endl;
	this->_fixPoint = roundf(nbF * (1 << this->_fracBits));
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

//operador "="
Fixed & Fixed::operator=(Fixed const & raw) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &raw) {
		this->_fixPoint = raw.getRawBits();
	}
	return (*this);
}

int	Fixed::toInt() const {
	int nbI = this->_fixPoint >> this->_fracBits; 
	return(nbI);
}

float	Fixed::toFloat() const {
	float nbF = (this->_fixPoint / (float)(1 << _fracBits));
	return(nbF);
}

int	Fixed::getRawBits() const {
	return(_fixPoint);
}

void	Fixed::setRawBits(int const raw){
	this->_fixPoint = raw;
}

//operador "<<" (const)
std::ostream &	operator<<(std::ostream & out, Fixed const & rhs){
	out << rhs.toFloat();
	return (out);
}

//operador "<<" 
std::ostream &	operator<<(std::ostream & out, Fixed  & rhs){
	out << rhs.toFloat();
	return (out);
}
