#include "replace.hpp"

void	creatingOutfile( std::ofstream&		outfile,
						 const std::string	outfileName ) // on passe une reference car on ne peut pas copier un stream
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
	// std::stringstream	outfileLineStream;
	std::size_t	found = 0;

	while (std::getline(infile, line))
		// outfileLineStream << line << "\n"; // version sstream, plus performante
		outfileLine = outfileLine + line + "\n"; // stocker toutes les lignes du infile dans une seule string
	
	while (1)
	{
		found = outfileLine.find(previous, found); // retourne l'index de la 1ere occurrence de previous dans outfileLine, en cherchant a partir de l'index found
		replaceOneString(found, previous, replacement, outfileLine, outfile);
		if (found == std::string::npos)
			break ;
		found += previous.length();
	}
}


void	replaceOneString( std::size_t 			found,
						  const std::string		previous, 
						  const std::string 	replacement, 
						  const std::string		outfileLine,
						  std::ofstream&	outfile )
{
	std::string	result;

	result.append(outfileLine, 0, found);
	result.append(replacement);
	result.append(outfileLine, found + previous.length(), std::string::npos); // std::string::npos signifie "prend tout ce qui reste"

	outfile << result;
}
