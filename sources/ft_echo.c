#include "../includes/minishell.h"

void	ft_echo(char **command[])
{
	//int	i;

	//i = 1;
	ft_putendl("ft_echo:");
	ft_arrprint(*command);
	/*
	while (*command[i] != NULL)
	{
		ft_putstr(*command[i]);
		if (*command[++i])
			ft_putchar(32);
		else
			ft_putchar('\n');
	}
	*/
	ft_arrdel(*command);
}
