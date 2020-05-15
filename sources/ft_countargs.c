#include "../includes/minishell.h"

int	ft_countargs(char *args)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (args[i])
	{
		while (args[i] == 32 || args[i] == '\t' || args[i] == '\n'\
			|| args[i] == '\r' || args[i] == '\f'\
			|| args[i] == '\v')
			i++;
		if (args[i] != '\0')
			count++;
		else
			break;
		if (args[i] == '\'' || args[i] == '\"')
		{
			if (!(i = ft_quotecheck(args, i)))
				return (-1);
		}
		while (args[i] && args[i] != 32 && args[i] != '\t' &&\
			args[i] != '\n' && args[i] != '\r' && args[i] != '\f'\
			&& args[i] != '\v')
			i++;
	}
	return (count);
}
