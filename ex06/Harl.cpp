#include "Harl.hpp"

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
			  << "[ DEBUG ]" << std::endl
			  << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." << std::endl
			  << "I really do!"
			  << RESET << std::endl << std::endl;
}

void	Harl::info( void )
{
	std::cout << LIGHT_GREEN
			  << "[ INFO ]" << std::endl
			  << "I cannot believe adding extra bacon costs more money." << std::endl
			  << "You didn’t put enough bacon in my burger!" << std::endl
			  << "If you did, I wouldn’t be asking for more!"
			  << RESET << std::endl << std::endl;
}

void	Harl::warning( void )
{
	std::cout << ORANGE 
			  << "[ WARNING ]" << std::endl
			  << "I think I deserve to have some extra bacon for free." << std::endl
			  << "I’ve been coming for years, whereas you started working here just last month."
			  << RESET << std::endl << std::endl;
}

void	Harl::error( void )
{
	std::cout << BOLD_RED 
			  << "[ ERROR ]" << std::endl
			  << "This is unacceptable! I want to speak to the manager now."
			  << RESET << std::endl << std::endl;
}


void	Harl::complain( std::string level )
{
	void (Harl::*functions[])() = { &Harl::debug, 
									&Harl::info, 
									&Harl::warning, 
									&Harl::error };
	
	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
		{
			(this->*functions[i])();
			return ;
		}
	}
}
