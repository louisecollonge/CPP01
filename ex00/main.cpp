#include "Zombie.hpp"

int	main(void)
{
	randomChump("Stackie");

	Zombie	*zHeap = newZombie("Heapie");
	zHeap->announce();
	delete (zHeap);
}
