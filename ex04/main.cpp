#include "replace.hpp"


int	main( int ac, char **av )
{
	if (ac != 4)
	{
		std::cout << PINK << "Wrong arguments, retry with: " << RESET
				  << BOLD_RED << "./replace filename string1 string2" << RESET
				  << PINK << " in order to replace string1 with string2." << RESET << std::endl;
		return (0);
	}

	std::string	infileName(av[1]);
	std::string	previous(av[2]);
	std::string	replacement(av[3]);
	if (!stringsAreValid(previous, replacement))
		return (1);

	std::ifstream	infile;
	if (!infileOpen(infile, infileName))
		return (1);

	std::string	outfileName = getOutfileName(infileName);

	std::ofstream	outfile;
	if (!outfileCreate(outfile, outfileName))
		return (1);

	replaceAllStrings(infile, outfile, previous, replacement);

	infile.close();
	outfile.close();

	return (0);
}

//! fonction interdite: std::string::replace
