#include "replace.hpp"

std::string	getOutfileName( const std::string infileName )
{
	std::string	outfileName = infileName + ".replace";
	return (outfileName);
}


void	openingFile( std::ifstream& infile, const std::string& infileName )
{
	infile.open(infileName.c_str());

	if (!infile.is_open())
		throw std::runtime_error(std::string(BOLD_RED) + "Error: cannot open infile <" + infileName + ">" + RESET);
}


void	stringsCheck( const std::string previous, const std::string replacement )
{
	if (previous.empty() || replacement.empty())
		throw std::invalid_argument(std::string(BOLD_RED) + "String(s) cannot be empty" + RESET);
}
