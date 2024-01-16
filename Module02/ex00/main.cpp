
#include "Harl.hpp" 

int main(int ac, char **av)
{
	Harl harl;

	if (ac == 2){
		harl.complain(av[1]);

	}
	else
		std::cout << "Enter a correct order: DEBUG, INFO, WARNING or ERROR" << std::endl;
	return (0);
}
