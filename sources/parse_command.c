#include "../includes/minishell.h"

void	parse_command(char *line[], char **env[])
{
	char	**parameters;
	char	**command;
	char	*args;
	int	count;

	parameters = ft_strsplit(*line, ' ');
	args = ft_strdup(*line);
	free(*line);
	count = real_count(parameters);
	command = trim_array(parameters, count);
	if (ft_strcmp(parameters[0], "exit") == 0)
		exec_exit(&command, &args, &parameters,env);
	/*
	else if (ft_strcmp(parameters[0], "echo" == 0)
		exec_echo(&command, &args, &parameters, env);
	else if (ft_strcmp(parameters[0], "cd" == 0)
		exec_cd(&command, &args, &parameters, env);
	else if (ft_strcmp(parameters[0], "setenv" == 0)
		exec_setenv(&command, &args, &parameters, env);
	else if (ft_strcmp(parameters[0], "env" == 0)
		exec_env(&command, &args, &parameters, env);
	else if (ft_strcmp(parameters[0], "unsetenv" == 0)
		exec_unsetenv(&command, &args, &parameters, env);
	*/
	ft_arrdel(parameters);
	exec_command(&command, &args, env);	
}
