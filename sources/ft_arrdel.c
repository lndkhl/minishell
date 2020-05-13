#include "../includes/minishell.h"

void		ft_arrdel(char **arr)
{
	int	len;

	if (arr)
	{
		len = ft_arrlen(arr);
		while (len > -1)
			free(arr[len--]);
		free(arr);
	}
}
