#include "../includes/minishell.h"

int		ft_arrlen(char **arr)
{
	int	len;

	len = 0;
	while (arr[len])
		len++;
	return(len);
}
