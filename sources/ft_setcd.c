#include "../includes/minishell.h"

void	ft_setcd(char *path, char **env[])
{
	char	*old;
	char	*current;
	char	**command;

	old = ft_strjoin("OLDPWD=", ft_resolve("$PWD", *env));
	current = ft_strjoin("PWD=", path);
	ft_putstr("old = ");
	ft_putendl(old);
	ft_putstr("current = ");
	ft_putendl(current);
	command = (char **)malloc(sizeof(char *) * 3);
	command[0] = old;
	command[1] = current;
	command[2] = NULL;
	ft_setenv(&command, env);
}
