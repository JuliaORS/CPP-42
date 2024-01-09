
#include "Zombie.hpp" 

int main()
{
    Zombie *zom;

    Zombie zombie_clas = Zombie("Zombie");
    zombie_clas.announce();

    std::cout << "We allocate zombie on the heap " << std::endl;
    zom = newZombie("Zombie heap");


    std::cout << "We allocate zombie on the stack " << std::endl;
    randomChump("Zombie stack");

    zom->announce();

    delete zom;
    
    return (0);
}