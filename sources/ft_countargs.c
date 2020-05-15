#include "../includes/minishell.h"

int	ft_countargs(char *args)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (args[i])
	{
		while (ft_iswhitespace(args[i]))
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
		while (args[i] && (ft_iswhitespace(args[i]) == 0))
			i++;
	}
	return (count);
}
