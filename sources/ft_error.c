#include "../includes/minishell.h"

void	ft_error(char *args, int type)
{
	ft_putstr("minishell: cd: ");
	(args) ? ft_putstr(args) : NULL;
	if (type == 1)
		ft_putstr(": is not a directory\n");
	else if (type == 2)
		ft_putstr(": permission denied\n");
	else if (type == 3)
		ft_putstr(": no such file or directory\n");
	else
		ft_putstr(": unspecified error\n");
}
