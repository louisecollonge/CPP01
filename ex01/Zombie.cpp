#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::~Zombie() { std::cout << BOLD_RED << "Destroying a zombie..." << RESET << std::endl; }

void	Zombie::setName( std::string setName ) { name = setName; }

void	Zombie::announce( std::string name )
{
	std::cout << TURQUOISE << name << ": BraiiiiiiinnnzzzZ..." << RESET << std::endl;
}
