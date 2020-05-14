#include "../includes/minishell.h"

void	exec_command(char **parameters[], char **env[])
{
	pid_t	pid;
	char	*path;

	if (ft_strchr(*parameters[0], '/'))
		path = ft_strdup(*parameters[0]);
	else
		path = ft_strjoin("/usr/bin/", *parameters[0]);
	pid = fork();
	if (pid == 0)
		execve(path, *parameters, *env);
	else
		wait(NULL);
	free(path);
}
