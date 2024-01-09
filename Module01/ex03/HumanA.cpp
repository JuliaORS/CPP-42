
#include "HumanA.hpp" 

HumanA::HumanA(std::string name, Weapon weaponA)
{
    this->_name = name;
    this->_weaponA = weaponA;
}

HumanA::~HumanA()
{
}

std::string	HumanA::getType()
{
	return (_type);
}

void	HumanA::attack()
{
	std::cout << this->name << "attacks with their" << this->weaponA << endl;
}
