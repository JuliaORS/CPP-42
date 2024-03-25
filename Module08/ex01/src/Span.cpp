/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 11:30:07 by julolle-          #+#    #+#             */
/*   Updated: 2024/03/25 11:17:20 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int n) : _size(n) {
}

//copy constructor
Span::Span(const Span & src){
	*this = src;
}

Span::~Span(){
}

//operator "="
Span & Span::operator=(const Span & src) {
	if (this != &src){
		this->_size = src.getSize();
		this->_span = src.getSpan();
	}
	return (*this);
}

//getters
std::multiset<int>	Span::getSpan() const{
	return(_span);
}

unsigned int	Span::getSize() const {
	return(_size);
}

//functions
void	Span::addNumber(int nb) {
	if(this->_span.size() < _size)
		this->_span.insert(nb);
	else
		throw std::runtime_error("Span is full.");
}

void	Span::addRangeNumbers() {
	srand(time(NULL));
	for (unsigned int i=0; i < _size; i++) {
		this->_span.insert(rand() % 100000 + 1);
	}
}

unsigned int	Span::shortestSpan(){
	if (this->_span.empty() || this->_span.size() < 2)
		throw std::runtime_error("Span has less than 2 numbers.");

	std::multiset<int>::iterator it = ++(this->_span.begin());
	std::multiset<int>::iterator prev = this->_span.begin();
	unsigned int diff = *(--(this->_span.end())) - *it;
	
	for (; it != this->_span.end(); it++) {
		if ((unsigned int)(*it - *prev) < diff)
			diff = *it - *prev;
		prev++;
	}
	return diff;
}

unsigned int	Span::longestSpan(){
	if (this->_span.empty() || this->_span.size() < 2)
		throw std::runtime_error("Span has less than 2 numbers.");
	else {
		std::multiset<int>::iterator first = this->_span.begin();
        std::multiset<int>::iterator last = this->_span.end();
		last--;
		return (*last - *first);
	}
}	

void	Span::printSpan() const {
	for (std::multiset<int>::const_iterator it = _span.begin(); it != _span.end(); ++it) {
		std::cout << "number: " << *it << std::endl;
	}
}
