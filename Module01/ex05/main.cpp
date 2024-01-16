
#include "HumanB.hpp"
#include "HumanA.hpp"

int main(void)
{
	{
		Weapon gun = Weapon("gun1");

		std::cout << "type of gun is: " << gun.getType() << std::endl << std::endl;
		
		gun.setType("gun2");
		std::cout << "new type of gun is: " << gun.getType() << std::endl << std::endl;


		HumanA ju("Ju", gun);
		ju.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");

		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club"); 
		bob.attack();
	} 
	{
		Weapon club = Weapon("crude spiked club");

		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club"); 
		jim.attack();
	}
	return (0);
}
