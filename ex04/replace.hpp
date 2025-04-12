#ifndef REPLACE_HPP
#define REPLACE_HPP

#define TURQUOISE	"\033[38;5;49m"
#define ORANGE		"\033[38;5;214m"
#define BOLD_RED 	"\033[1;31m"
#define PINK	 	"\033[0;35m"
#define RESET		"\033[0m"

#include <iostream>
#include <string>
#include <fstream> // file stream
#include <sstream> // string stream


bool		stringsAreValid( const std::string previous, const std::string replacement );
bool		infileOpen( std::ifstream& infile, const std::string& infileName );
bool		outfileCreate( std::ofstream& outfile, const std::string outfileName );
std::string	getOutfileName( const std::string infileName );
void		replaceAllStrings( std::ifstream& infile, std::ofstream& outfile,
			const std::string previous, const std::string replacement );

#endif
