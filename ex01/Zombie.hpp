#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#define TURQUOISE	"\033[38;5;49m"
#define BOLD_RED 	"\033[1;31m"
#define RESET		"\033[0m"

#include <iostream>
#include <string>

class Zombie
{
	private:
		std::string	name;

	public:
		Zombie();
		~Zombie();
		void	announce( std::string name );
		void	setName( std::string setName );
};

// Prototypes:
Zombie*	zombieHorde( int N, std::string name );

#endif
