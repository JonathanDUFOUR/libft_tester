#include <iostream>
#include "tester.hpp"
#include "test.hpp"

using namespace ftest;

void	test::run(void)
{
	std::cout << "Running: '" << this->name << "'..." << std::endl;
	throw std::string("YOUR " + this->name + " IS INVALID !");
}
