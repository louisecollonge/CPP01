#include "Zombie.hpp"

// Constructor
Zombie::Zombie(std::string setName) { name = setName; }

// Destructor
Zombie::~Zombie() { std::cout << BOLD_RED << "Destroying " << name << "." << RESET << std::endl; }

// Getter
std::string	Zombie::getName( void ) { return (name); }

// Method
void	Zombie::announce( void )
{
	std::cout << TURQUOISE << name << ": BraiiiiiiinnnzzzZ..." << RESET << std::endl;
}
