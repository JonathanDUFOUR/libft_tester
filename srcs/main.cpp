#include <iostream>
#include <cassert>
#include <string>
#include <vector>
#include <memory>
#include "testPrintFunctions.hpp"
#include "tester.hpp"
#include "test.hpp"

int	main(void)
{
	using testInstance = std::shared_ptr<ftest::test>;
	//using newTestInstance = std::make_shared<ftest::test>;

	ftest::testPrintFct			printTest("lol");
	std::vector<testInstance>	tests;

	for (testInstance currentTest : tests)
	{
		try {
			currentTest->run();
			std::cout << _CONCAT("  ", SUCCESS_STR) << std::endl;
		} catch (std::string &err) {
			std::cout << "  \e[34m" << err << "\e[0m" << std::endl;
			std::cout << _CONCAT("  ", FAILURE_STR) << std::endl;
		}
	}
	return (0);
}
