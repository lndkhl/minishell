#include "../includes/minishell.h"

void	ft_echo(char **command[], char **env[])
{
	int	i;

	i = 0;
	while (*command[++i])
		ft_putendl(*command[i]);
	ft_arrdel(*command);
	ft_arrdel(*env);
}
