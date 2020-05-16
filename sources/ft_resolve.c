#include "../includes/minishell.h"

char	*ft_resolve(char *command, char *env[])
{
	int	i;
	char	*temp;
	char	*sub;

	i = -1;
	if (ft_strchr(command, '/'))
		sub = ft_strsub(command, 1, ft_strlen(command) -\
			ft_strlen(ft_strchr(command,'/')));
	else
		sub = ft_strsub(command, 1, ft_strlen(command) - 1);
	while (env[++i])
	{
		if ((temp = ft_strstr(env[i], sub)))
		{
			if (temp[ft_strlen(sub)] == '=')
			{
				temp = &(env[i][ft_strlen(sub) + 1]);
				free(sub);
				return (temp);
			}
		}
	}
	free(sub);
	return (NULL);
}
