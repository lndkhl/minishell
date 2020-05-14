#include "../includes/minishell.h"

void	exec_exit(char **command[], char **env[])
{
	ft_arrdel(*command);
	ft_arrdel(*env);
	exit(EXIT_SUCCESS);
}
