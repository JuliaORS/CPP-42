/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 15:39:39 by julolle-          #+#    #+#             */
/*   Updated: 2024/01/23 15:24:14 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp" 

int	Contact::_nContact = 0;

Contact::Contact(){
}

Contact::~Contact(){
}

int Contact::getNb(){
	return (Contact::_nContact);
}

void	Contact::setNb(int i){
	Contact::_nContact = i;
}

std::string Contact::getFirstName(){
	return (_firstName);
}

void	Contact::setFirstName(std::string str){
	this->_firstName = str;
}

std::string Contact::getLastName(){
	return (_lastName);
}

void    Contact::setLastName(std::string str){
	this->_lastName = str;
}

std::string Contact::getNickname(){
	return (_nickName);
}

void	Contact::setNickname(std::string str){
	this->_nickName = str;
}

std::string Contact::getPhonenumber (){
	return (_phoneNumber);
}

void	Contact::setPhonenumber(std::string str){
	this->_phoneNumber = str;
}

std::string Contact::getDarkestSecret (){
	return (_darkestSecret);
}

void	Contact::setDarkestSecret(std::string str){
	this->_darkestSecret = str;
}
