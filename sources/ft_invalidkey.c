#include "../includes/minishell.h"

int	ft_invalidkey(char *args[])
{
	int	i;
	char	*key;

	i = 0;
	while (args[++i])
	{
		key = (!ft_strchr(args[i], '=')) ? ft_strdup(args[i]) :\
			ft_strsub(args[i], 0, ft_strlen(args[i]) -\
			ft_strlen(ft_strchr(args[i], '=')));
		if (!ft_isalpha(key[0]) && key[0] != '$')
		{
			free (key);
			return (1);
		}
		free (key);
	}
	return (0);
}
