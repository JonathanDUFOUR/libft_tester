#pragma once
#include <string>
#include "test.hpp"

namespace	ftest {

class testPrintFct : test
{
private:

public:
	// Constructors
	testPrintFct(const char *name = "UNNAMED PRINT FUNCTION") : test(name) {}
	testPrintFct(std::string &name) : test(name) {}
	testPrintFct(std::string &&name) : test(name) {}

	void	run(void) override;
};

}
