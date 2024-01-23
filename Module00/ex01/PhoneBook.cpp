/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 18:19:49 by julolle-          #+#    #+#             */
/*   Updated: 2024/01/23 12:36:25 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp" 

PhoneBook::PhoneBook(){
	this->_lastIx = -1;
	this->_size = 0;
}

PhoneBook::~PhoneBook(){
}

std::string	askInput(std::string info)
{
	std::string	input;
	
	std::cout << info << ": ";
	if (!std::getline(std::cin, input))
		return ("");
	while (input == "" || std::isspace(input[0])){
		std::cout << "Write a correct input." << std::endl;
		std::cout << info << ": ";
	}
	
	return (input);
}

int	PhoneBook::saveContact(int nB){
	Contact     *pb;
	std::string	input;
	pb = &this->_contact[nB];

	input = askInput("First Name");
	if (input != "")
		pb->setFirstName(input);
	else
		return (1);
	input = askInput("Last Name");
	if (input != "")
		pb->setLastName(input);
	else
		return (1);
	input = askInput("Nickname");
	if (input != "")
		pb->setNickname(input);
	else
		return (1);
	input = askInput("Phone Number");
	if (input != "")
		pb->setPhonenumber(input);
	else
		return (1);
	input = askInput("Darkest Secret");
	if (input != "")
		pb->setDarkestSecret(input);
	else
		return (1);
	return (0);
}

void	PhoneBook::addContact(){
	Contact     *pb;
	std::string	input;

	if (this->_lastIx == 7){
		this->_lastIx = 0;
	}
	else
		this->_lastIx = this->_lastIx + 1;
	Contact::setNb(this->_lastIx);
	pb = &this->_contact[Contact::getNb()];
	if (this->saveContact(this->_lastIx))
		return ;

	std::cout << "New contact saved!" << std::endl<< std::endl;
	if (this->_size < 8)
		this->_size += 1;
	return ;
}

void PhoneBook::showContact(){

	std::cout << std::setw(10) << "Index" << "|" << std::setw(10) << \
		"First Name"  << "|" << std::setw(10) << "Last Name"  << "|" << \
		std::setw(10) << "Nickname" << std::endl; 

	for(int i = 0; i < this->_size; i++){
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
}

void PhoneBook::searchContact(){
	std::string	input;
	int 		index = 0;

	if (this->_size == 0){
		std::cout << "Phonebook is empty" << std::endl<< std::endl;
		return ;
	}

	this->showContact();
	std::cout << "Enter the index that you want to display" << std::endl;
	std::cout << ">> ";
	if (!std::getline(std::cin, input))
		return ;

	else if (input.length() != 1 || (input[0] - 49) < 0 || (input[0] - 48) > this->_size){
		std::cout << "Invalid index." << std::endl<< std::endl;
		return;
	}
	index = input[0] - '0' - 1;

	std::cout << std::setw(10) << "Index" << "|" << std::setw(10) << "First Name" << 
	"|" << std::setw(10) << "Last Name"  << "|" << std::setw(10) << "Nickname" <<
	"|" << std::setw(10) << "Phone num" << "|" << std::setw(10) << "Secret" <<
	std::endl; 

	std::cout << std::setw(10) << index + 1 << "|" << 
	std::setw(10) << this->_contact[index].getFirstName() << "|" << 
	std::setw(10) << this->_contact[index].getLastName() << "|" << 
	std::setw(10) << this->_contact[index].getNickname() << "|" << 
	std::setw(10) << this->_contact[index].getPhonenumber() << "|" << 
	std::setw(10) << this->_contact[index].getDarkestSecret() << 
	std::endl << std::endl; 
}
