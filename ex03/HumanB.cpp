#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB( std::string newName ) : name(newName), weapon(NULL) {}

HumanB::~HumanB() {}

void	HumanB::setWeapon( Weapon& type ) { weapon = &type; }

void	HumanB::attack( void )
{
	std::cout << TURQUOISE << name
			  << " attacks with their ";
	
	if (weapon)
		std::cout << ORANGE << weapon->getType() << TURQUOISE << " !";
	else
		std::cout << "bare hands...";
	
	std::cout << RESET << std::endl;
}
