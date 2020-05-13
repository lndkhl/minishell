#include "../includes/minishell.h"

void ft_arr_print(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
		ft_putendl(arr[i++]);
}
