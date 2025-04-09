#include "Zombie.hpp"

Zombie*	zombieHorde( int N, std::string setName )
{
	Zombie* horde = new Zombie[N];

	for (int i = 0; i < N; i++)
		horde[i].setName(setName);

	return (horde);
}
