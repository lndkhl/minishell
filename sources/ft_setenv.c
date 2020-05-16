#include "../includes/minishell.h"

void	ft_setenv(char **command[], char **env[])
{
	int	i;
	int	j;
	char	*key;
	char	**temp;
	char	**args;

	temp = ft_arrdup(*env);
	args = ft_arrdup(*command);
	ft_arrdel(*env);
	ft_arrdel(*command);
	i = 0;
	j = -1;
	if (!ft_validkeys(args))
		return ;
	while (args[++i])
	{
		key = ft_key(args[i]);
		if ((j = ft_arrstr(temp, key)) > -1)
			ft_replace(&temp, args[i], j, key);
		else
			ft_arrpush(&temp, args[i]);
		free(key);
	}
	ft_arrdel(args);
	*env = temp;
}
