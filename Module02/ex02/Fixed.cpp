
#include "Fixed.hpp" 

Fixed::Fixed(){
	this->_fixPoint = 0;
}

//Copy constructor
Fixed::Fixed(Fixed const & src){
	*this = src;
}

//Integer constructor
Fixed::Fixed(int const nbI){
	this->_fixPoint = nbI << this->_fracBits;
}

//Float constructor
Fixed::Fixed(float const nbF){
	this->_fixPoint = roundf(nbF * (1 << this->_fracBits));
}

Fixed::~Fixed(){
}

//COMPARISON OPERATORS
//operator "="
Fixed & Fixed::operator=(Fixed const & raw) {
	if (this != &raw) {
		this->_fixPoint = raw.getRawBits();
	}
	return (*this);
}

//operator ">"
bool Fixed::operator>(Fixed const & raw) const {
	return (this->_fixPoint > raw._fixPoint ? true : false);
}

//operator "<"
bool Fixed::operator<(Fixed const & raw) const {
	return (this->_fixPoint < raw._fixPoint ? true : false);
}

//operator ">="
bool Fixed::operator>=(Fixed const & raw) const {
	return (this->_fixPoint >= raw._fixPoint ? true : false);
}

//operator "<="
bool Fixed::operator<=(Fixed const & raw) const {
	return (this->_fixPoint <= raw._fixPoint ? true : false);
}

//operator "=="
bool Fixed::operator==(Fixed const & raw) const {
	return (this->_fixPoint == raw._fixPoint ? true : false);
}

//operator "!="
bool Fixed::operator!=(Fixed const & raw) const {
	return (this->_fixPoint != raw._fixPoint ? true : false);
}

//ARITHMETIC OPERATORS
//operator "+"
float Fixed::operator+(Fixed const & raw) const {
	return (this->toFloat() + raw.toFloat());
}

//operator "-"
float Fixed::operator-(Fixed const & raw) const {
	return (this->toFloat() - raw.toFloat());
}

//operator "*"
float Fixed::operator*(Fixed const & raw) const {
	return (this->toFloat() * raw.toFloat());
}

//operator "/"
float Fixed::operator/(Fixed const & raw) const {
	return (this->toFloat() / raw.toFloat());
}

//INCREMENT and DECREMENT OPERATORS
//operator pre"++"
Fixed Fixed::operator++(){
	this->_fixPoint = this->_fixPoint + 1;
	return (*this);
}

//operator post"++"
Fixed Fixed::operator++(int){
	Fixed	init(*this);
	this->_fixPoint = this->_fixPoint + 1;
	return (init);
}

//operator pre"--"
Fixed Fixed::operator--(){
	this->_fixPoint = this->_fixPoint - 1;
	return (*this);
}

//operator pre"++"
Fixed Fixed::operator--(int){
	Fixed	init(*this);
	this->_fixPoint = this->_fixPoint - 1;
	return (init);
}

//MAX MIN OPERATORS
//operator min 
const Fixed & Fixed::min(Fixed const & first, Fixed const & sec){
	return (first < sec ? first : sec);
}

Fixed & Fixed::min(Fixed & first, Fixed & sec){

	return (first < sec ? first : sec);
}

//operator max
const Fixed & Fixed::max(Fixed const & first, Fixed const & sec){
	return (first > sec ? first : sec);
}

Fixed & Fixed::max(Fixed & first, Fixed & sec){

	return (first > sec ? first : sec);
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
