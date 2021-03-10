#pragma once
#include <string>

namespace	ftest {

class test
{
protected:
	std::string name;

public:
	// Constructors
	test(const char *name = "UNNAMED") : name(name) {}
	test(std::string &name) : name(name) {}
	test(std::string &&name) : name(name) {}

	virtual void	run(void) = 0;
};

};
