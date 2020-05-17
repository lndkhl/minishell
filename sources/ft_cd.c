#include "../includes/minishell.h"

void	ft_cd(char **command[], char **env[])
{
	char	*path;
	char	**args;

	path = NULL;
	args = *command;
	if (ft_arrlen(args) > 2)
		ft_putendl("minishell: cd: too many arguments");
	else if (!(args[1]) || ft_strcmp(args[1], "~") == 0 ||\
			ft_strcmp(args[1], "--") == 0)
		path = ft_strdup(ft_resolve("$HOME", *env));
	else if (ft_strcmp(args[1], "-") == 0)
		path = ft_strdup(ft_resolve("$OLDPWD", *env));
	else
		path = ft_dirpath(args[1], env);
	ft_arrdel(*command);
	if (!path)
		return ;
	(ft_strcmp(path, "-") == 0) ? ft_putendl(path) : NULL;
	ft_setcd(path, env);
	chdir(path);
	free(path);
}
