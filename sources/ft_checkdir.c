#include "../includes/minishell.h"

int	ft_checkdir(char *args)
{
	struct stat	st_buff;

	if (lstat(args, &st_buff) < 0)
	{
		ft_putstr("minishell: cd: ");
		(args) ? ft_putstr(args) : NULL;
		ft_putstr(": no such file or directory\n");
	}
	else if ((st_buff.st_mode & S_IFMT) == S_IFLNK)
		return (2);
	else if ((st_buff.st_mode & S_IFMT) == S_IFDIR)
	{
		if ((!(st_buff.st_mode & S_IRGRP)\
			&&!(st_buff.st_mode & S_IRUSR) &&\
			 !(st_buff.st_mode & S_IROTH)))
		{
			ft_putstr("minishell: cd: ");
			(args) ? ft_putstr(args) : NULL;
			ft_putstr(": permission denied\n");
			return (0);
		}
		return (1);
	}
	return (0);
}
