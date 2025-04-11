#ifndef HARL_HPP
#define HARL_HPP

#define BOLD_RED 	"\033[1;31m"
#define DARK_GREEN	"\033[38;5;22m"
#define LIGHT_GREEN	"\033[38;5;46m" 
#define ORANGE		"\033[38;5;214m"
#define PINK	 	"\033[0;35m"
#define RESET		"\033[0m"

#include <iostream>
#include <string>

class Harl
{
	private:
		void	debug( void );
		void	info( void );
		void	warning( void );
		void	error( void );
	
	public:
		Harl();
		~Harl();
		std::string	levels[4];
		// typedef	void (Harl::*function)();
		void	complain( std::string level );
};


#endif
