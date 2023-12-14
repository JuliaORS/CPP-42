
#include <iostream>
#include <cstring>
#include "contact.hpp" 
#include "phoneBook.hpp" 

int main (void)
{
	std::string	input;
	phoneBook	obj;	

	std::cout << "Enter one of these commands:" << std::endl;
	std::cout << "  ADD:    save a new contact" << std::endl;
	std::cout << "  SEARCH: display a specific contact" << std::endl;
	std::cout << "  EXIT" << std::endl;

	while (true)
	{
		std::getline(std::cin, input);

		if (input == "ADD"){
			std::cout << "ADD" << std::endl;
			obj.add_contact();
		}
		else if (input == "SEARCH")
			std::cout << "SEARCH" << std::endl;
		else if (input == "EXIT"){
			std::cout << "bye bye :D" << std::endl;
			break ;
		}
	}
	return (0);
}
