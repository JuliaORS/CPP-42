
#include "Zombie.hpp" 

Zombie::Zombie(){
}

Zombie::~Zombie(){
    std::cout << this->_name << " has been destroyed" << std::endl;
}

Zombie::Zombie(std::string name){
    this->_name = name;
}

void Zombie::announce(){
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

