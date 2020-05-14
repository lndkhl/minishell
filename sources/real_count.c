#include "../includes/minishell.h"

int	real_count(char *arr[])
{
	int	i;
	int	count;
	char	*temp;

	i = -1;
	while (arr[++i])
	{
		if (!(temp = ft_strtrim(arr[i])))
			count++;
		if (temp)
			free(temp);
	}
	return (count);
}
