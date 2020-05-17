#include "../includes/minishell.h"

char	*ft_key(char *args)
{
	char	*key;

	if (ft_strchr(args, '='))
	{
		key = ft_strsub(args, 0, ft_strlen(args) -\
				ft_strlen(ft_strchr(args, '=')));
		return (key);
	}
	key = ft_strdup(args);
	return (key);
}
