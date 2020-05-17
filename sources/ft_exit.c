#include "../includes/minishell.h"

void	ft_exit(char **command[], char **env[])
{
	ft_arrdel(*command);
	ft_arrdel(*env);
	exit(EXIT_SUCCESS);
}
