#include "../includes/minishell.h"

int	ft_quotecheck(char *args, int index)
{
	int	i;
	int	quote;

	i = index;
	quote = args[i];
	while (args[++i])
	{
		if (args[i] == quote)
			return (i);
	}
	return (0);
}
