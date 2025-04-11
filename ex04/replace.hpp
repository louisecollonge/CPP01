#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <iostream>
#include <string>
#include <fstream> // file stream
#include <sstream> // string stream
#include <stdexcept> // pour gestion d'erreur

#define TURQUOISE	"\033[38;5;49m"
#define ORANGE		"\033[38;5;214m"
#define BOLD_RED 	"\033[1;31m"
#define PINK	 	"\033[0;35m"
#define RESET		"\033[0m"

void		stringsCheck( const std::string previous, const std::string replacement );
void		openingFile( std::ifstream& infile, const std::string& infileName );
void		creatingOutfile( std::ofstream& outfile, const std::string outfileName );
std::string	getOutfileName( const std::string infileName );
void		replaceAllStrings( std::ifstream& infile, std::ofstream& outfile,
			const std::string previous, const std::string replacement );
// std::string	replaceOneString( std::size_t i, const std::string previous,
			// const std::string replacement, const std::string outfileLine, std::ofstream& outfile );

#endif
