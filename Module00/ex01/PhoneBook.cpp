/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 18:19:49 by julolle-          #+#    #+#             */
/*   Updated: 2024/01/09 13:13:54 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp" 

PhoneBook::PhoneBook()
{
}

PhoneBook::~PhoneBook()
{
}

std::string	ask_input(std::string info)
{
	std::string	input;

	std::cout << info << ": ";
	if (!std::getline(std::cin, input)) //protegir !input
		return (NULL) ;
	return (input);
}

void	PhoneBook::add_contact()
{
	std::string input;
	Contact     *pb;

	if (Contact::getNb() == 8)
		Contact::setNb(0);

	pb = &this->_contact[Contact::getNb()];
	pb->setFirstName(ask_input("First Name"));
	pb->setLastName(ask_input("Last Name"));
	pb->setNickname(ask_input("Nickname"));
	pb->setPhonenumber(ask_input("Phone Number"));
	pb->setDarkestSecret(ask_input("Darkest Secret"));
	Contact::setNb(Contact::getNb() + 1);
	std::cout << "New contact saved!" << std::endl<< std::endl;
	return ;
}

void PhoneBook::search_contact()
{
	std::string	input;
	int index = -1;

	if (this->_contact[0].getFirstName() == "")
	{
		std::cout << "Phonebook is empty" << std::endl<< std::endl;
		return ;
	}
	 for (int i = 0; this->_contact[i].getFirstName() != ""; i++)
	{
		std::cout << std::setw(10) << i + 1 << "|";
		
		if (this->_contact[i].getFirstName().size() > 10)
			std::cout << std::setw(9) << this->_contact[i].getFirstName().substr(0, 9) << "." << "|";
		else
			std::cout << std::setw(10) << this->_contact[i].getFirstName() << "|";

		if (this->_contact[i].getLastName().size() > 10)
			std::cout << std::setw(9) << this->_contact[i].getLastName().substr(0, 9) << "." << "|";
		else
			std::cout << std::setw(10) << this->_contact[i].getLastName() << "|";

		if (this->_contact[i].getNickname().size() > 10)
			std::cout << std::setw(9) << this->_contact[i].getNickname().substr(0, 9) << "." << std::endl;
		else
			std::cout << std::setw(10) << this->_contact[i].getNickname() << std::endl;
	}

	std::cout << "Enter the index that you want to display" << std::endl<< std::endl;
	std::cout << ">> ";
	std::getline(std::cin, input);
	if (input.length() != 1)
	{
		std::cout << "Invalid index." << std::endl;
		return;
	}
	index = input[0] - '0' - 1;
	if (index < 0 || index > 7)
	{
		std::cout << "Invalid index." << std::endl;
		return;
	}

	std::cout << std::setw(10) << "Index" << "|" << std::setw(10) << "First Name"  << "|" << \
	std::setw(10) << "Last Name"  << "|" << std::setw(10) << "Nickname" << \
	"|" << std::setw(10) << "Phone num" << "|" << std::setw(10) << "Secret" << \
	std::endl; 

	std::cout << std::setw(10) << index + 1 << "|" << std::setw(10) << this->_contact[index].getFirstName() << "|" << \
	std::setw(10) << this->_contact[index].getLastName() << "|" << std::setw(10) << this->_contact[index].getNickname() << \
	"|" << std::setw(10) << this->_contact[index].getPhonenumber() << "|" << std::setw(10) << this->_contact[index].getDarkestSecret() << \
	std::endl << std::endl; 
}
