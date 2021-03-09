#include <iostream>
#include <cassert>
#include <string>
#include <vector>
#include <memory>
#include "tester.hpp"
#include "test.hpp"

int	main(void)
{
	using testInstance = std::shared_ptr<ftest::test>;
	//using newTestInstance = std::make_shared<ftest::test>;

	std::vector<testInstance>	tests;

	// Part 1 : libc functions
	tests.push_back(std::make_shared<ftest::test>("ft_memset"));
	tests.push_back(std::make_shared<ftest::test>("ft_bzero"));
	tests.push_back(std::make_shared<ftest::test>("ft_memcpy"));
	tests.push_back(std::make_shared<ftest::test>("ft_memccpy"));
	tests.push_back(std::make_shared<ftest::test>("ft_memmove"));
	tests.push_back(std::make_shared<ftest::test>("ft_memchr"));
	tests.push_back(std::make_shared<ftest::test>("ft_memcmp"));
	tests.push_back(std::make_shared<ftest::test>("ft_strlen"));
	tests.push_back(std::make_shared<ftest::test>("ft_isalpha"));
	tests.push_back(std::make_shared<ftest::test>("ft_isdigit"));
	tests.push_back(std::make_shared<ftest::test>("ft_isalnum"));
	tests.push_back(std::make_shared<ftest::test>("ft_isascii"));
	tests.push_back(std::make_shared<ftest::test>("ft_isprint"));
	tests.push_back(std::make_shared<ftest::test>("ft_toupper"));
	tests.push_back(std::make_shared<ftest::test>("ft_tolower"));
	tests.push_back(std::make_shared<ftest::test>("ft_strchr"));
	tests.push_back(std::make_shared<ftest::test>("ft_strrchr"));
	tests.push_back(std::make_shared<ftest::test>("ft_strncmp"));
	tests.push_back(std::make_shared<ftest::test>("ft_strlcpy"));
	tests.push_back(std::make_shared<ftest::test>("ft_strlcat"));
	tests.push_back(std::make_shared<ftest::test>("ft_strnstr"));
	tests.push_back(std::make_shared<ftest::test>("ft_atoi"));
	tests.push_back(std::make_shared<ftest::test>("ft_calloc"));
	tests.push_back(std::make_shared<ftest::test>("ft_strdup"));

	// Part 2 : additionals functions
	tests.push_back(std::make_shared<ftest::test>("ft_substr"));
	tests.push_back(std::make_shared<ftest::test>("ft_strjoin"));
	tests.push_back(std::make_shared<ftest::test>("ft_strtrim"));
	tests.push_back(std::make_shared<ftest::test>("ft_split"));
	tests.push_back(std::make_shared<ftest::test>("ft_itoa"));
	tests.push_back(std::make_shared<ftest::test>("ft_strmapi"));
	tests.push_back(std::make_shared<ftest::test>("ft_putchar_fd"));
	tests.push_back(std::make_shared<ftest::test>("ft_putstr_fd"));
	tests.push_back(std::make_shared<ftest::test>("ft_putendl_fd"));
	tests.push_back(std::make_shared<ftest::test>("ft_putnbr_fd"));

	// Bonus Part
	tests.push_back(std::make_shared<ftest::test>("ft_lstnew"));
	tests.push_back(std::make_shared<ftest::test>("ft_lstadd_front"));
	tests.push_back(std::make_shared<ftest::test>("ft_lstsize"));
	tests.push_back(std::make_shared<ftest::test>("ft_lstlastadd_back"));
	tests.push_back(std::make_shared<ftest::test>("ft_lstdelone"));
	tests.push_back(std::make_shared<ftest::test>("ft_lstclear"));
	tests.push_back(std::make_shared<ftest::test>("ft_lstiter"));
	tests.push_back(std::make_shared<ftest::test>("ft_lstmap"));
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
