#include "Zombie.hpp"

void	randomChump( std::string name )
{
	Zombie	zStack(name);
	zStack.announce();
}
