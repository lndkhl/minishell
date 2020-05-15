#include "../includes/minishell.h"

void	ft_arrprint(char **arr)
{
	int	i;

	i = 1;
	while (arr[i])
	{
		ft_putstr(arr[i]);
		if (arr[++i])
			ft_putchar(32);
		else
			ft_putchar('\n');
	}
}
