#include "../includes/minishell.h"

int	ft_closequote(char *args, int index)
{
	int	i;
	char	quote;

	i = index;
	quote = args[i];
	while (args[++i])
	{
		if (args[i] == quote)
			return (++i);
	}
	return (0);
}
