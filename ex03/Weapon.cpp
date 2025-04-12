#include "Weapon.hpp"

Weapon::Weapon( std::string newType ) { setType(newType); }

Weapon::~Weapon() {}

const std::string&	Weapon::getType( void ) { return (type); }

void	Weapon::setType( std::string newType ) { type = newType; }
