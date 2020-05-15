#include "../includes/minishell.h"

char	*ft_argsub(char *args, int *index)
{
	int	i;
	char	delim;
	char	*sub;

	i = 0;
	if (args[*index] == '\'' || args[*index] == '\"')
	{
		delim = args[*index];
		while (args[i] && args[i] != delim)
			i++;
	}
	else
	{
		while (args[i] && args[i] != 32 && args[i] != '\t' && \
			args[i] != '\n' && args[i] != '\r'\
			 && args[i] != '\f' && args[i] != '\v')
			i++;
	}
	sub = ft_strsub(args, (*index) + 1, i - (*index) - 1);
	*index = i;
	return (sub);
}
