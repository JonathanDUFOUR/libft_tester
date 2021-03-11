#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
#include <unistd.h>
#include <pwd.h>
#include "tester.hpp"



int	main(int ac, char *av[], char *env[])
{
	std::string	libftPath;

	(void)ac;
	(void)av;
	(void)env;
	libftPath = getLibDir();
	std::cout << libftPath << std::endl;

	return (0);
}
