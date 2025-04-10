#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA( std::string newName, Weapon& newType ) : name(newName), weapon(newType) {}

HumanA::~HumanA() {}

void	HumanA::attack( void )
{
	std::cout << TURQUOISE << name
			  << " attacks with their "
			  << ORANGE
			  << weapon.getType()
			  << TURQUOISE
			  << " !"
			  << RESET << std::endl;
}
