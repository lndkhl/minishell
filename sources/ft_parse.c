#include "../includes/minishell.h"

void	ft_parse(char *line[], int count, char **env[])
{
	char	**command;

	if (count == -1)
	{
		ft_putendl("minishell: syntax error: unclosed quotation mark");
		free(*line);
		return ;
	}
	command = ft_explode(*line, count);
	if (ft_strcmp(command[0], "exit") == 0)
		ft_exit(&command, env);
	else if (ft_strcmp(command[0], "echo") == 0)
		ft_echo(&command, env);
	else if (ft_strcmp(command[0], "env") == 0)
		ft_env(&command, env);
	/*
	else if (ft_strcmp(command[0], "cd" == 0)
		ft_cd(&command, env);
	else if (ft_strcmp(command[0], "setenv" == 0)
		ft_setenv(&command, env);
	else if (ft_strcmp(command[0], "unsetenv" == 0)
		ft_unsetenv(&command, env);
	*/
	else
		ft_command(&command, env);
}
