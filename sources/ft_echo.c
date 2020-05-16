#include "../includes/minishell.h"

void	ft_echo(char **command[], char **env[])
{
	ft_putendl("ft_echo:");
	ft_arrprint(*command, env);
	ft_arrdel(*command);
}
