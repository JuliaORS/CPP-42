/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 19:52:50 by julolle-          #+#    #+#             */
/*   Updated: 2024/01/23 19:52:52 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp" 

Fixed::Fixed(){
	std::cout << "Default construcor called" << std::endl;
	this->_nb = 0;
}

//copy constructor
Fixed::Fixed(Fixed const & src){
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

//operador "="
Fixed& Fixed::operator=(Fixed const & raw) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &raw) {
		this->_nb = raw.getRawBits();
	}
	return (*this);
}

int	Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return(_nb);
}

void	Fixed::setRawBits(int const raw){
	this->_nb = raw;
}
