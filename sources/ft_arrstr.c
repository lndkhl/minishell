#include "../includes/minishell.h"

int	ft_arrstr(char *arr[], char *key)
{
	int	i;
	char	*temp;
	char	*envkey;

	i = -1;
	temp = (key[0] == '$') ? ft_resolve(key, arr) : key;
	if (!temp)
		return (-1);
	envkey = NULL;
	while (arr[++i])
	{
		envkey = ft_initkey(arr[i]);
		if (ft_strcmp(envkey, temp) == 0)
		{
			free(envkey);
			return (i);
		}
		free(envkey);
	}
	return (-1);
}
