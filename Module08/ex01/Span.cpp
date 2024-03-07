/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 11:30:07 by julolle-          #+#    #+#             */
/*   Updated: 2024/02/28 11:30:07 by julolle-         ###   ########.fr       */
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
std::multiset<int>	Span::getSpan() const {
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
		throw std::exception();
}

int	Span::shortestSpan(){
	if (this->_span.empty() || this->_span.size() < 2)
		throw std::exception();
	else {
		
		
		for (int nb : this->_span) {

       		std::cout << num << " ";
    	}
		
		std::multiset<int>::iterator first = this->_span.begin();
        std::multiset<int>::iterator last = this->_span.end();
		
	}
}

int	Span::longestSpan(){
	if (this->_span.empty() || this->_span.size() < 2)
		throw std::exception();
	else {
		std::multiset<int>::iterator first = this->_span.begin();
        std::multiset<int>::iterator last = this->_span.end();
		return (*last - *first);
	}
}	
