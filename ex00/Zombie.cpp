#include "Zombie.hpp"

// Constructor
Zombie::Zombie(std::string setName) { name = setName; }

// Destructor
Zombie::~Zombie() { std::cout << "Destroying " << name << "." << std::endl; }

// Getter
std::string	Zombie::getName( void ) { return (name); }

// Method
void	Zombie::announce( void )
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
