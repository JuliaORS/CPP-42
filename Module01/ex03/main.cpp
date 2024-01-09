
#include "HumanB.hpp"
#include "HumanA.hpp"

int main(void)
{
	Weapon gun = Weapon("guns");
	HumanA ju("Ju", gun);
	ju.attack();

	HumanB nu("Nu");
	
	
	return (0);
}
