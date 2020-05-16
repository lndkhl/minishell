#include "../includes/minishell.h"

char	*ft_resolve(char *command, char *env[])
{
	int	i;
	char	*key;
	char	*envkey;
	char	*temp;

	i = -1;
	key = ft_initkey(command);
	while (env[++i])
	{
		envkey = ft_initkey(env[i]);
		if (ft_strcmp(key, envkey) == 0)
		{
			temp = &(env[i][ft_strlen(envkey) + 1]);
			free(key);
			free(envkey);
			return (temp);
		}
	}
	free(key);
	free(envkey);
	return (NULL);
}
