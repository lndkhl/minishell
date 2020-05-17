#include "../includes/minishell.h"

void	ft_replace(char **env[], char *args, int index, char *key)
{
	char	**temp;
	char	*resolved;
	char	*replacement;

	temp = *env;
	if (key[0] == '$')
	{
		resolved = ft_resolve(key, temp);
		replacement = ft_strjoin(resolved, &(args[ft_strlen(key)]));
		free(temp[index]);
		temp[index] = replacement;
	}
	else
	{
		free(temp[index]);
		temp[index] = ft_strdup(args);
	}
}
