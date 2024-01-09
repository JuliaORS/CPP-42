
#include "Zombie.hpp" 

int main()
{
	Zombie *newZom;
	int N;

	N = 8;
	newZom = zombieHorde(N, "Julia");

	for (int i = 0; i < N; i++)
	{
		std::cout << "Zombie number " << i+1 << " announcement:" <<std::endl;
		newZom[i].announce();
	}

	delete[] newZom;
	
	return (0);
}