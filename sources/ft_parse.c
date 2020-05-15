#include "../includes/minishell.h"

void	ft_parse(char *line[], char **env[])
{
	char	**command;
	int	count;
	char	*args;

	args = ft_strdup(*line);
	free(*line);
	count = ft_countargs(args);
	(count > -1) ? command = ft_explode(args, count) :\
		ft_putendl("minishell: syntax error: unclosed quotation mark");
	if (count == -1)
		return;
	if (ft_strcmp(command[0], "exit") == 0)
		ft_exit(&command, env);
	else if (ft_strcmp(command[0], "echo") == 0)
		ft_echo(&command);
	/*
	else if (ft_strcmp(parameters[0], "cd" == 0)
		ft_cd(&command, env);
	else if (ft_strcmp(parameters[0], "setenv" == 0)
		ft_setenv(&command, env);
	else if (ft_strcmp(parameters[0], "env" == 0)
		ft_env(&command, env);
	else if (ft_strcmp(parameters[0], "unsetenv" == 0)
		ft_unsetenv(&command, env);
	*/
	else
		ft_command(&command, env);
}
