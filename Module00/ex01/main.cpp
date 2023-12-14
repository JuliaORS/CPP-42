
#include "PhoneBook.hpp" 

int main (void)
{
	std::string	input;
	PhoneBook	obj;	


	while (true)
	{
		std::cout << "Enter one of these commands:" << std::endl;
		std::cout << "  ADD:    save a new contact" << std::endl;
		std::cout << "  SEARCH: display a specific contact" << std::endl;
		std::cout << "  EXIT" << std::endl<< std::endl;
		std::cout << ">>";
		std::getline(std::cin, input);

		if (input == "ADD")
			obj.add_contact();
		else if (input == "SEARCH")
			obj.search_contact();
		else if (input == "EXIT")
		{
			std::cout << "bye bye :D" << std::endl;
			break ;
		}
		else
			std::cout << "It is not a correct input :S" << std::endl<< std::endl;
	}
	return (0);
}
