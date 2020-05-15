#include "../includes/minishell.h"

void	exec_exit(char **command[], char *args[], char **params[], char **env[])
{
	free(*args);
	ft_arrdel(*command);
	ft_arrdel(*params);
	ft_arrdel(*env);
	exit(EXIT_SUCCESS);
}
