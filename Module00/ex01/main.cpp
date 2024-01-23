/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:24:38 by julolle-          #+#    #+#             */
/*   Updated: 2024/01/23 15:24:40 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook.hpp" 

int main (void)
{
	std::string	input;
	PhoneBook	obj;	

	std::cout << "Enter one of these commands:" << std::endl;
	std::cout << "  ADD (to save a new contact)" << std::endl;
	std::cout << "  SEARCH (to display a specific contact)" << std::endl;
	std::cout << "  EXIT" << std::endl<< std::endl;

	while (true)
	{
		std::cout << ">> ";
		if (!std::getline(std::cin, input))
			return (1);
		if (input == "ADD")
			obj.addContact();
		
		else if (input == "SEARCH")
			obj.searchContact();
		else if (input == "EXIT"){
			std::cout << "bye bye :D" << std::endl;
			break ;
		}
		else
			std::cout << "It is not a correct input :S" << std::endl<< std::endl;
	}
	return (0);
}
