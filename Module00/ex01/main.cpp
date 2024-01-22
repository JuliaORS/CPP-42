
#include "PhoneBook.hpp" 

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
			obj.add_contact();
		
		else if (input == "SEARCH")
			obj.search_contact();
		else if (input == "EXIT"){
			std::cout << "bye bye :D" << std::endl;
			break ;
		}
		else
			std::cout << "It is not a correct input :S" << std::endl<< std::endl;
	}
	return (0);
}
