
#pragma once
#include <string>

namespace	ftest {

// typedef	int	t_monSuperType;

class test
{
private:
	std::string name;

public:
	// Constructors
	test(const char *name = "UNNAMED") : name(name) {};
	test(std::string &name) : name(name) {};
	test(const std::string &&name) : name(name) {};

	void	run(void);
};

};
