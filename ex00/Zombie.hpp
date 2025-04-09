#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#define BLUE		"\033[94m"
#define TURQUOISE	"\033[38;5;49m"
#define ORANGE		"\033[38;5;214m"
#define BOLD_RED 	"\033[1;31m"
#define RESET		"\033[0m"

#include <iostream>
#include <string>

class	Zombie
{
	private:
		std::string name;

	public:
		Zombie(std::string setName);
		~Zombie();
		std::string	getName( void );
		void announce( void );
};

// Prototypes
Zombie	*newZombie( std::string name );
void	randomChump( std::string name );

#endif
