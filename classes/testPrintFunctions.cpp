#include <iostream>
#include "tester.hpp"
#include "testPrintFunctions.hpp"

using namespace ftest;

void	testPrintFct::run(void)
{
	std::cout << "Running: '" << this->name << "'..." << std::endl;
	throw std::string("YOUR " + this->name + " IS INVALID !");
}
