#pragma once

#include <cassert>

#define SUCCESS_STR	"\e[32m>>>SUCCESS<<<\e[0m"
#define FAILURE_STR	"\e[31m>>>FAILURE<<<\e[0m"
#define _CONCAT(_x, _y) (_x _y)
#define LIBFT_DIR	"libft_troll"
#define LIBFT_NAME	"libft.a"

#define MAKE_EXEC	"/usr/bin/make --no-print-directory -C "

#ifdef _WIN32
# define PATH_SEPARATOR	'\\'
#else
# define PATH_SEPARATOR '/'
#endif

std::string	getHome(void);
std::string	getLibDir(std::string path = "");
