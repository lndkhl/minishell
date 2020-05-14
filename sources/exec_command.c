#include "../includes/minishell.h"

void	exec_command(char **command[], char **env[])
{
	pid_t	pid;
	char	*path;

	if (ft_strchr(*command[0], '/'))
		path = ft_strdup(*command[0]);
	else
		path = ft_strjoin("/usr/bin/", *command[0]);
	pid = fork();
	if (pid == 0)
	{
		if(execve(path, *command, *env) == -1)
		{
			ft_putstr("minishell: ");
			ft_putstr((ft_strrchr(path, '/') + 1));
			ft_putendl(": command not found");
			exit(EXIT_SUCCESS);
		}
	}
	else
		wait(NULL);
	free(path);
	ft_arrdel(*command);
}
