#define TURQUOISE	"\033[38;5;49m"
#define ORANGE		"\033[38;5;214m"
#define RESET		"\033[0m"

#include <iostream>
#include <string>

int	main(void)
{
	std::string		str = "HI THIS IS BRAIN";
	std::string*	stringPTR = &str;
	std::string&	stringREF = str;

	std::cout	<< std::endl
				<< TURQUOISE << "Memory adress of the string variable:	" << &str << std::endl
				<< "Memory adress held by stringPTR:	" << stringPTR << std::endl
				<< "Memory adress held by stringREF:	" << &stringREF << RESET << std::endl
				<< std::endl;

	std::cout	<< ORANGE << "Value of the string variable:	" << str << std::endl
				<< "Value pointed to by stringPTR:	" << *stringPTR << std::endl
				<< "Value pointed to by stringREF:	" << stringREF << RESET << std::endl
				<< std::endl;
}
