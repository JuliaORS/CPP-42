/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 15:39:39 by julolle-          #+#    #+#             */
/*   Updated: 2024/01/09 13:12:50 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp" 

int	Contact::_num_contact = 0;

Contact::Contact()
{
}

Contact::~Contact()
{
}

int	Contact::getNb()
{
	return (Contact::_num_contact);
}

void	Contact::setNb(int i)
{
	Contact::_num_contact = i;
	return ;
}

std::string Contact::getFirstName()
{
	return (_first_name);
}

void	Contact::setFirstName(std::string str)
{
	this->_first_name = str;
	return ;
}

std::string Contact::getLastName()
{
	return (_last_name);
}

void    Contact::setLastName(std::string str)
{
	this->_last_name = str;
	return ;
}

std::string Contact::getNickname()
{
	return (_nickname);
}

void	Contact::setNickname(std::string str)
{
	this->_nickname = str;
	return ;
}

std::string Contact::getPhonenumber ()
{
	return (_phone_number);
}

void	Contact::setPhonenumber(std::string str)
{
	this->_phone_number = str;
	return ;
}

std::string Contact::getDarkestSecret ()
{
	return (_darkest_secret);
}

void	Contact::setDarkestSecret(std::string str)
{
	this->_darkest_secret = str;
	return ;
}
