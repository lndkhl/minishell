#include "minishell.h"

int	main(int argc, char **argv, char **envp)
{
	char	**parameters;
	char	path[128];
	char	*line;
	pid_t	pid;

	ft_putstr("\e[92m$> \e[39m");
	pid = 0;
	line = NULL;
	while (get_next_line(STDIN_FILENO, &line) == 1)
	{
		parameters = ft_strsplit(line, ' ');
		free(line);
		ft_strcpy(path, "/usr/bin/");
		ft_strcat(path, parameters[0]);
		if (ft_strcmp(parameters[0], "exit") == 0)
		{
			ft_arrdel(parameters);
			exit(EXIT_SUCCESS);
		}
		pid = fork();
		if (pid == 0)
			(execve(path, parameters, envp));
		else
		{
			wait(NULL);
			ft_putstr("\e[92m$> \e[39m");
		}
		ft_arrdel(parameters);
	}
	return (0);
}
