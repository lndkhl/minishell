#include "../includes/minishell.h"

int	parse_command(char *line[], char **env[])
{
	char	**parameters;

	parameters = ft_strsplit(*line, ' ');
	free(*line);
	*line = NULL;
	if (ft_strcmp(parameters[0], "exit") == 0)
		exec_exit(&parameters, env);
	else
		exec_command(&parameters, env);
	ft_arrdel(parameters);
	return (1);
}
