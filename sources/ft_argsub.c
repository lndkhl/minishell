#include "../includes/minishell.h"

char	*ft_argsub(char *args, int *index)
{
	int	i;
	int	delim;
	char	*sub;

	delim = 0;
	if (args[*index] == '\'' || args[*index] == '\"')
	{
		delim = args[*index];
		*index += 1;
		i = *index;
		while (args[i] && args[i] != delim)
			i++;
	}
	else
	{
		i = *index;
		while (args[i] && !ft_iswhitespace(args[i]))
			i++;
	}
	sub = ft_strsub(args, (*index), i - (*index));
	*index = (delim) ? ++i : i;
	return (sub);
}
