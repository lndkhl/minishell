#include "../includes/minishell.h"

int	parse_command(char *line[], char **envy[])
{
	pid_t	pid;
	char	path[128];
	char	**parameters;

	parameters = ft_strsplit(*line, ' ');
	if (ft_strcmp(parameters[0], "exit") == 0)
	{
		free(*line);
		ft_arrdel(parameters);
		ft_arrdel(*envy);
		exit(EXIT_SUCCESS);
	}
	ft_strcpy(path, "/usr/bin/");
	ft_strcat(path, parameters[0]);
	pid = fork();
	if (pid == 0)
		execve(path, parameters, *envy);
	else
	{
		wait(NULL);
		ft_putstr("\e[92m$> \e[39m");
	}
	free(*line);
	ft_arrdel(parameters);
	return (1);
}
