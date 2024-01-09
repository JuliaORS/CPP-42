
#include "Zombie.hpp" 

Zombie*	zombieHorde(int N, std::string name){
	Zombie *newZom = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		newZom[i].setName(name);
	}
	return (newZom);
}
