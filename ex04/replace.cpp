#include "replace.hpp"



bool	stringsAreValid( const std::string previous, const std::string replacement )
{
	if (previous.empty() || replacement.empty())
	{
		std::cerr << BOLD_RED << "Error: strings arguments cannot be empty" << RESET << std::endl;
		return (false);
	}
	return (true);
}


bool	infileOpen( std::ifstream& infile, const std::string& infileName )
{
	infile.open(infileName.c_str());
	if (!infile.is_open())
	{
		std::cerr << BOLD_RED << "Error: cannot open infile" << RESET << std::endl;
		return (false);
	}
	return (true);
}


std::string	getOutfileName( const std::string infileName )
{
	std::string	outfileName = infileName + ".replace";
	return (outfileName);
}


// we cannot copy a stream so we pass its reference
bool	outfileCreate( std::ofstream& outfile, const std::string outfileName )
{
	outfile.open(outfileName.c_str());
	if (!outfile.is_open())
	{
		std::cerr << BOLD_RED << "Error: cannot create outfile" << RESET << std::endl;
		return (false);
	}
	return (true);
}


// store all the file in 1 string: outfileLine
// found = index where "previous" is found
// outfileLine.find(previous, found): looking for "previous" starting at index [found]
// npos: until no "previous" is found anymore
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
		outfileLine += line + "\n";

	std::size_t	start = 0;
	while ((found = outfileLine.find(previous, found)) != std::string::npos)
	{
		result.append(outfileLine, start, found - start);
		result.append(replacement);
		start = found + previous.length();
		found += previous.length();
	}
	result.append(outfileLine, start, std::string::npos);

	outfile << result;
}
