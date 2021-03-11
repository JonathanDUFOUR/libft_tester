
#ifdef _WIN32
# include <windows.h>
# include <shlobj.h>
#else
# include <pwd.h>
# include <unistd.h>
#endif

#include <stdio.h>
#include <readline/readline.h>
#include <readline/history.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string>
#include <iostream>
#include "tester.hpp"

#ifdef _WIN32
std::string getHome(void)
{
	char	path[MAX_PATH];

	if (SHGetFolderPathA(NULL, CSIDL_PROFILE, NULL, 0, path) != S_OK)
		throw std::string("Can not retrieve user home directory\n");
	return (path);
}
#else
std::string	getHome(void)
{
	using	passwd = struct passwd;

	passwd	*user;

	user = getpwuid(getuid());
	return (user->pw_dir);
}
#endif

bool	fileExist(const std::string &path)
{
	using	statinfo = struct stat;
	
	statinfo	infos;

	if (stat(path.c_str(), &infos))	return (false);
	return ((infos.st_mode & S_IFREG) != 0);
}

bool	dirExist(const std::string &path)
{
	using	statinfo = struct stat;
	
	statinfo	infos;

	if (stat(path.c_str(), &infos))	return (false);
	return ((infos.st_mode & S_IFDIR) != 0);
}

int		callMakefile(const std::string &path)
{
	const std::string	makefile(path + PATH_SEPARATOR + "Makefile");
	const std::string	cmd(MAKE_EXEC + path + " " LIBFT_NAME);

	if (!fileExist(makefile)) return (1);
	return (system(cmd.c_str()));
}

std::string	promptPath(void)
{
	std::string	path;
	char		*tmp;

	tmp = NULL;
	do {
		free(tmp);
		tmp = readline("  libft path: ");
	} while (!tmp || *tmp == 0);
	add_history(tmp);
	path = std::string(tmp);
	free(tmp);
	return (path);

}

std::string	getLibDir(std::string path)
{
	std::string				home;
	std::string				res;
	bool					exist;

	exist = true;
	if (path.empty())
	{
		try {
			home = getHome();
		} catch(const std::string &exception)
		{
			std::cerr << exception << std::endl;
			exist = false;
		}
		path = home + PATH_SEPARATOR + LIBFT_DIR;
	}
checkExistence:
	if (exist && (exist = !callMakefile(path)))
		exist = fileExist(path + PATH_SEPARATOR + LIBFT_NAME);

	// libft.a does not exist in provided path
	if (!exist)
	{
		std::cout << "\e[31m[ERROR] \e[0;2m";
		std::cout << "libft not found in: " << path << "\e[0m\n";
		std::cout << "Please, enter the path to your libft library\n";
		path = promptPath();
		std::cout << std::endl;
		exist = true;
		goto checkExistence;
	}
	return (path);
}
