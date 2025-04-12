#include "Harl.hpp"

static int	getLevel( Harl harl, std::string str )
{
	for (int i = 0; i < 4; ++i)
	{
		if (str == harl.levels[i])
			return (i);
	}
	return (-1);
}

int	main( int ac, char **av )
{
	if (ac != 2)
	{
		std::cerr << RED << "Wrong argument, try again with: " << RESET
				  << BOLD_RED << "./harlFilter LEVEL"<< RESET << std::endl
				  << RED << "Levels are DEBUG, INFO, WARNING and ERROR"
				  << RESET << std::endl << std::endl;
		return (1);
	}
	
	Harl	harl;
	int		level = getLevel(harl, av[1]);

	switch (level)
	{
		case 0:
			harl.complain("DEBUG");
		case 1:
			harl.complain("INFO");
		case 2:
			harl.complain("WARNING");
		case 3:
			harl.complain("ERROR");
			break ;
		default:
			std::cerr << PINK << "[ Probably complaining about insignificant problems ]"
					  << RESET << std::endl << std::endl;
	}
	return (0);
}
