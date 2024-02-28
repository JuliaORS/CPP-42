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

#include "Serializer.hpp"

Serializer::Serializer() {
}

//copy constructor
Serializer::Serializer(const Serializer & src){
	*this = src;
}

Serializer::~Serializer(){
}

//operator "="
Serializer & Serializer::operator=(const Serializer & src) {
	(void)src;
	return (*this);
}

//FUNCTIONS
uintptr_t	Serializer::serialize(Data* ptr){
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* 		Serializer::deserialize(uintptr_t raw){
	return (reinterpret_cast<Data *>(raw));
}
