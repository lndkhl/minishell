#include "../includes/minishell.h"

void	parse_command(char *line[], char **env[])
{
	char	**parameters;
	char	**command;
	int	count;

	parameters = ft_strsplit(*line, ' ');
	free(*line);
	count = real_count(parameters);
	command = trim_array(parameters, count);
	ft_arrdel(parameters);
	if (ft_strcmp(command[0], "exit") == 0)
		exec_exit(&command, env);
	/*
	else if (ft_strcmp(command[0], "echo" == 0)
		exec_echo(&command, env);
	else if (ft_strcmp(command[0], "cd" == 0)
		exec_cd(&command, env);
	else if (ft_strcmp(command[0], "setenv" == 0)
		exec_setenv(&command, env);
	else if (ft_strcmp(command[0], "env" == 0)
		exec_env(&command, env);
	else if (ft_strcmp(command[0], "unsetenv" == 0)
		exec_unsetenv(&command, env);
	*/
	else
		exec_command(&command, env);	
}
