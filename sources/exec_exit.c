#include "../includes/minishell.h"

void	exec_exit(char **command[], char **envy[])
{
	ft_arrdel(*command);
	ft_arrdel(*envy);
	exit(EXIT_SUCCESS);
}
