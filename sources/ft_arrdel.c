#include "../includes/minishell.h"

void	ft_arrdel(char **arr)
{
	int	i;

	i = ft_arrlen(arr);
	while (--i > -1)
		free(arr[i]);
	free(arr);
}
