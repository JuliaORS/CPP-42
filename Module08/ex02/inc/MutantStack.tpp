/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 12:14:40 by julolle-          #+#    #+#             */
/*   Updated: 2024/03/11 21:20:18 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template<typename T>
MutantStack<T>::MutantStack() : std::stack<T>(){
}

template<typename T>
MutantStack<T>::MutantStack(const MutantStack & src) : std::stack<T>(src) {
}

template<typename T>
MutantStack<T>::~MutantStack(){
}

//operator "="
template<typename T>
MutantStack<T> &	MutantStack<T>::operator=(const MutantStack<T> & src){
	return (std::stack<T>::operator=(src));
}

template<typename T>
typename MutantStack<T>::iterator	MutantStack<T>::begin(){
	return (this->c.begin());
}

template<typename T>
typename MutantStack<T>::iterator	MutantStack<T>::end(){
	return (this->c.end());
}
