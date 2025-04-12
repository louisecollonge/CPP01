#include "Zombie.hpp"

int	main(void)
{
	unsigned int	N = 5;
	std::string		name = "Bimo";

	Zombie* horde = zombieHorde(N, name);

	for (unsigned int i = 0; i < N; i++)
		horde[i].announce(name);

	delete[] horde;
}
