#include "../includes/minishell.h"

void	ft_command(char **command[], char **env[])
{
	pid_t	pid;
	char	*path;

	path = ft_setpath(*command[0], *env);
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
