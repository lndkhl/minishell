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
		execve(path, *command, *env);
	else
		wait(NULL);
	free(path);
	ft_arrdel(*command);
}
