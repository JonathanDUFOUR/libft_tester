#include <string>
#include <pwd.h>
#include <unistd.h>
#include "tester.hpp"

std::string	getHome(void)
{
	using	passwd = struct passwd;

	passwd	*user;

	user = getpwuid(getuid());
	return (user->pw_dir);
}
