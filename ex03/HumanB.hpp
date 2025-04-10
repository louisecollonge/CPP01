#ifndef HUMANB_HPP
#define HUMANB_HPP

#define TURQUOISE	"\033[38;5;49m"
#define ORANGE		"\033[38;5;214m"
#define RESET		"\033[0m"

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB
{
	private:
		std::string	name;
		Weapon		*weapon;

	public:
		HumanB( std::string newName );
		~HumanB();
		void	attack( void );
		void	setWeapon( Weapon& type );
};

#endif
