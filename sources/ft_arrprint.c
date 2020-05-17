#include "../includes/minishell.h"

void	ft_arrprint(char **arr, char **env[])
{
	int	i;
	char	*temp;

	i = 1;
	while (arr[i])
	{
		if (arr[i][0] == '~' || arr[i][0] == '$')
		{
			temp = ft_resolve(arr[i], *env);
			if (temp)
				ft_putstr(temp);
			temp = ft_strchr(arr[i], '/');
			if (temp)
				ft_putstr(temp);
		}
		else
			ft_putstr(arr[i]);
		(arr[++i]) ? ft_putchar(32) : ft_putchar('\n');
	}
}
