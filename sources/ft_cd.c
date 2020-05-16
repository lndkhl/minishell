#include "../includes/minishell.h"

void	ft_cd(char **command[], char **env[])
{
	char	*path;

	if (*command[2])
	{
		ft_putendl("minishell: cd: too many arguments");
		return ;
	}
	if (!(*command[1]) || *command[1][0] == '$' || *command[1][0] == '~')
		path = ft_resolve(*command[1], *env);
	else
		path = *env[0];
	ft_putstr(path);
}
