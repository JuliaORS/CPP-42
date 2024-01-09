
#include "HumanB.hpp" 

HumanB::HumanB(std::string name){
    this->name = name;
}

HumanB::~HumanB(){
}

std::string	HumanB::getType(){
	return (_type);
}

void	HumanB::attack()
{
	std::cout << this->name << "attacks with their" << this->weaponA << endl;
}
