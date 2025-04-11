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


void	creatingOutfile( std::ofstream& outfile, const std::string outfileName ) // on passe une reference car on ne peut pas copier un stream
{
	outfile.open(outfileName.c_str());
	if (!outfile.is_open())
		throw std::runtime_error(std::string(BOLD_RED) + "Error: cannot create outfile <" + outfileName + ">" + RESET);
}


void	replaceAllStrings( std::ifstream&		infile,
						   std::ofstream&		outfile,
						   const std::string	previous,
						   const std::string	replacement)
{
	std::string	line;
	std::string	outfileLine;
	std::string	result;
	std::size_t	found = 0;

	while (std::getline(infile, line))
		outfileLine += line + "\n"; // stocker toutes les lignes du infile dans une seule string

	std::size_t	start = 0;
	while ((found = outfileLine.find(previous, found)) != std::string::npos)
	{
		result.append(outfileLine, start, found - start);
		result.append(replacement);
		start = found + previous.length();
		found += previous.length();
	}
	
	result.append(outfileLine, start, std::string::npos); // std::string::npos signifie "prend tout ce qui reste"
	outfile << result;
}
