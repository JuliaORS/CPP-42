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

#include "Array.hpp"

template <class T>
Array<T>::Array() {
	this->_arr = NULL;
	this->_n = 0;
}

template <class T>
Array<T>::Array(unsigned int n) {
	this->_arr = new T[n];
	this->_n = n;
}

//copy constructor
template <class T>
Array<T>::Array(const Array & src){
	*this = src; //check deep copy
}

template <class T>
Array<T>::~Array(){
	if (this->_arr)
		delete [] _arr; 
}

//operator "="
template <class T>
Array<T> & Array<T>::operator=(const Array & src) {
	if (this->_arr != NULL){
		//delete [] _arr;
		//this->_arr = NULL;
	}
	this->_n = src._n;

	if (src._arr){
		this->_arr = new T[src._n];
		for(unsigned int i=0; i < src._n; i++){
			this->_arr[i] = src._arr[i];
		}

	}
	return (*this); //check deep copy
}

//operator "[]"
template <class T>
T &	Array<T>::operator[](unsigned int n) {
	if (n < this->_n){
		return this->_arr[n];
	}
	else {
		throw std::exception();
	}

}

//FUNCTIONS
template <class T>
unsigned int Array<T>::size() const {
	return (this->_n); 
}

