#include "../includes/minishell.h"

char	*ft_resolve(char *command, char *env[])
{
	int	i;
	char	*temp;
	char	*sub;

	i = -1;
	sub = NULL;
	sub = (ft_strchr(command, '/')) ? ft_strsub(command, 1,\
		ft_strlen(command) - ft_strlen(ft_strchr(command,'/')) - 1) :\
		 ft_strsub(command, 1, ft_strlen(command) - 1);
	if (command[0] == '~')
	{
		(sub) ? free(sub) : NULL;
		sub = ft_strdup("HOME");
	}
	while (env[++i])
	{
		if ((temp = ft_strstr(env[i], sub)))
		{
			temp = &(env[i][ft_strlen(sub) + 1]);
			free(sub);
			return (temp);
		}
	}
	free(sub);
	return (NULL);
}
