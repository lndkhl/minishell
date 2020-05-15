#include "../includes/minishell.h"

char	*ft_argsub(char *args, int *index)
{
	int	i;
	char	delim;
	char	*sub;

	i = *index;
	if (args[*index] == '\'' || args[*index] == '\"')
	{
		delim = args[*index];
		while (args[i] && args[i] != delim)
			i++;
	}
	else
	{
		while (args[i] && !ft_iswhitespace(args[i]))
			i++;
	}
	sub = ft_strsub(args, (*index), i - (*index));
	*index = i;
	return (sub);
}
