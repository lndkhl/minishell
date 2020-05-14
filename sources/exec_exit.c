#include "../includes/minishell.h"

void	exec_exit(char **parameters[], char **envy[])
{
	ft_arrdel(*parameters);
	ft_arrdel(*envy);
	exit(EXIT_SUCCESS);
}
