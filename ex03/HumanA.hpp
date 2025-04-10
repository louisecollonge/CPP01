#ifndef HUMANA_HPP
#define HUMANA_HPP

#define TURQUOISE	"\033[38;5;49m"
#define ORANGE		"\033[38;5;214m"
#define RESET		"\033[0m"

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA
{
	private:
		std::string	name;
		Weapon&		weapon;

	public:
		HumanA( std::string newName, Weapon& newType );
		~HumanA();
		void	attack( void );
};

#endif
