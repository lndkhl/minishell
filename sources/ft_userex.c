#include "../includes/minishell.h"

int	ft_userex(char *name)
{
	struct stat	st_buff;

	if (lstat(name, &st_buff) == -1)
		return (0);
	if (st_buff.st_mode & S_IFREG)
	{
		if (st_buff.st_mode & S_IXUSR)
			return (1);
	}
	return (0);
}
