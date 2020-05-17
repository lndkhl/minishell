#include "../includes/minishell.h"

char	*ft_setpath(char *args, char *env[])
{
	char	*key;
	char	*temp;
	char	*path;

	temp = ft_resolve(args, env);
	if (temp)
	{
		key = ft_strchr(args, '/');
		if (key)
			path = ft_strjoin(temp, key);
		else
			path = ft_strdup(temp);
	}
	else
	{
		temp = ft_resolve("$PATH", env);
		temp = (temp) ? ft_pathprep(temp, args) : NULL;
		path = (temp) ? temp : ft_strdup(args);
	}
	return (path);
}
