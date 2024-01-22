
#include "ClapTrap.hpp" 

int main( ) {

	ClapTrap Julia("Julia");
	ClapTrap Ferran("Ferran");

	Julia.attack("Barcelona");

	Julia.beRepaired(3);
	Julia.attack("Sevilla");
	Julia.beRepaired(10);
	Julia.takeDamage(5);
	Julia.takeDamage(25);


	Ferran.attack("Sevilla");
	Ferran.attack("Sevilla");
	Ferran.attack("Sevilla");
	Ferran.attack("Sevilla");
	Ferran.attack("Sevilla");
	Ferran.attack("Sevilla");
	Ferran.attack("Sevilla");
	Ferran.attack("Sevilla");
	Ferran.beRepaired(1);
	Ferran.beRepaired(1);
	Ferran.beRepaired(1);
	Ferran.beRepaired(1);
	return (0);
}
