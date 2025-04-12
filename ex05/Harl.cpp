#include "Harl.hpp"

Harl::Harl() 
{
	levels[0] = "DEBUG";
	levels[1] = "INFO";
	levels[2] = "WARNING";
	levels[3] = "ERROR";
}

Harl::~Harl() {}

void	Harl::debug( void )
{
	std::cout << DARK_GREEN 
			  << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!"
			  << RESET << std::endl;
}

void	Harl::info( void )
{
	std::cout << LIGHT_GREEN
			  << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"
			  << RESET << std::endl;
}

void	Harl::warning( void )
{
	std::cout << ORANGE 
			  << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month."
			  << RESET << std::endl;
}

void	Harl::error( void )
{
	std::cout << BOLD_RED 
			  << "This is unacceptable! I want to speak to the manager now."
			  << RESET << std::endl;
}


void	Harl::complain( std::string level )
{
	// tableau de pointeurs vers fns membres, qui retournent void et ne prennent pas d'argt
	void (Harl::*functions[])() = { &Harl::debug, 
									&Harl::info, 
									&Harl::warning, 
									&Harl::error };
	
	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
		{
			(this->*functions[i])(); // this = objet actuel; 
									 // this->* appelle une fn membre dans le tableau de pointeurs de fonctions
									 // ->*functions[i] est l'operateur de dereferencement pour acceder a la fonction pointee par fonctions[i]
			return ;
		}
	}
	std::cerr << PINK << "Wrong level..." << RESET << std::endl;
}
