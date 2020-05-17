#include "../includes/minishell.h"

int	ft_checkdir(char *args)
{
	struct stat	st_buff;

	if (lstat(args, &st_buff) < 0)
	{
		ft_error(args, 3);
		return (0);
	}
	else if ((st_buff.st_mode & S_IFMT) == S_IFLNK)
		return (2);
	else if ((st_buff.st_mode & S_IFMT) == S_IFDIR)
	{
		if ((!(st_buff.st_mode & S_IRGRP)\
			&&!(st_buff.st_mode & S_IRUSR) &&\
			 !(st_buff.st_mode & S_IROTH)))
		{
			ft_error(args, 2);
			return (0);
		}
		return (1);
	}
	ft_error(args, 1);
	return (0);
}
