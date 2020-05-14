#include "../includes/minishell.h"

void ft_arrprint(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
		ft_putendl(arr[i++]);
}
