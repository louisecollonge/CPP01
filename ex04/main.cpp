#include "replace.hpp"


int	main( int ac, char **av )
{
	if (ac != 4)
	{
		std::cout << TURQUOISE << "Wrong arguments, retry with: " << RESET
				  << BOLD_RED << "./replace filename string1 string2" << RESET << std::endl
				  << TURQUOISE << "in order to replace string1 with string2." << RESET << std::endl;
		return (0);
	}

	std::string	infileName(av[0]);
	std::string	previous(av[1]);
	std::string	replacement(av[2]);
	stringsCheck(previous, replacement);

	std::ifstream	infile;
	openingFile(infile, infileName);

	std::string		outfileName = getOutfileName(infileName);

	std::ofstream	outfile;
	creatingOutfile(outfile, outfileName);

	replaceAllStrings(infile, outfile, previous, replacement);

	infile.close();
	outfile.close();
}

//! fonction interdite: std::string::replace
