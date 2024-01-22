/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 15:39:39 by julolle-          #+#    #+#             */
/*   Updated: 2024/01/22 16:08:18 by julolle-         ###   ########.fr       */
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
	return (_first_name);
}

void	Contact::setFirstName(std::string str){
	this->_first_name = str;
}

std::string Contact::getLastName(){
	return (_last_name);
}

void    Contact::setLastName(std::string str){
	this->_last_name = str;
}

std::string Contact::getNickname(){
	return (_nickname);
}

void	Contact::setNickname(std::string str){
	this->_nickname = str;
}

std::string Contact::getPhonenumber (){
	return (_phone_number);
}

void	Contact::setPhonenumber(std::string str){
	this->_phone_number = str;
}

std::string Contact::getDarkestSecret (){
	return (_darkest_secret);
}

void	Contact::setDarkestSecret(std::string str){
	this->_darkest_secret = str;
}
