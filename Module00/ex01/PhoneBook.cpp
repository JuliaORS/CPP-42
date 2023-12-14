/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 18:19:49 by julolle-          #+#    #+#             */
/*   Updated: 2023/12/14 18:43:25 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp" 

PhoneBook::PhoneBook()
{
}

PhoneBook::~PhoneBook()
{
}

std::string    ask_input(std::string info)
{
    std::string	input;

    std::cout << "Enter " << info << std::endl;
    std::getline(std::cin, input);
    return (input);
}

void PhoneBook::add_contact()
{
    std::string input;
    Contact     *new_con;

    if (Contact::getNb() == 8)
        Contact::setNb(0);
    
    new_con = &this->_contact[Contact::getNb()];
	new_con->setFirstName(ask_input("First Name"));
    new_con->setLastName(ask_input("Last Name"));
	new_con->setNickname(ask_input("Nickname"));
    new_con->setPhonenumber(ask_input("Phone Number"));
	new_con->setDarkestSecret(ask_input("Darkest Secret"));
	Contact::setNb(Contact::getNb() + 1);
    std::cout << "New contact saved!" << std::endl<< std::endl;
	return ;
}

void PhoneBook::search_contact()
{
    if (Contact::getNb())
    {
        std::cout << "Phonebook is empty" << std::endl<< std::endl;
        return ;
    }
     std::cout << std::setw(10) << "Index" << "|" << std::setw(10) << "First Name" << "|" << \
        std::setw(10) << "Last Name" << "|" <<  std::setw(10) << "Nickname" << std::endl;
}
