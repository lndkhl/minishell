#include "../includes/minishell.h"

void	ft_setcd(char *path, char **env[])
{
	char	*exec;
	char	*old;
	char	*current;
	char	**command;

	exec = ft_strdup("setenv");
	old = ft_strjoin("OLDPWD=", ft_resolve("$PWD", *env));
	current = ft_strjoin("PWD=", path);
	command = (char **)malloc(sizeof(char *) * 4);
	command[0] = exec;
	command[1] = old;
	command[2] = current;
	command[3] = NULL;
	ft_setenv(&command, env);
}
