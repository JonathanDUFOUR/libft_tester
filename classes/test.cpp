#include <iostream>
#include "tester.hpp"
#include "test.hpp"

using namespace ftest;

void	test::run(void)
{
	std::cout << "Running: '" << this->name << "'..." << std::endl;
	throw std::string("THIS TEST IS INVALID !");
}
