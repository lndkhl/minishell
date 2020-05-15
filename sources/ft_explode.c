#include "../includes/minishell.h"

char	**ft_explode(char *args, int count)
{
	int	i;
	int	j;
	char	**shrapnel;

	i = -1;
	j = 0;
	shrapnel = (char **)malloc(sizeof(char *) * (count + 1));
	while (++i < count)
	{
		while (args[j])
		{
			while (args[j] == 32 || args[j] == '\t'\
 				|| args[j] == '\n' || args[j] == '\r'\
					|| args[j] == '\f' || args[j] == '\v')
				j++;
			if (args[j] != '\0')
				shrapnel[i] = ft_argsub(args, &j);
			if (args[j])
				j++;
		}
	}
	return (shrapnel);
}
