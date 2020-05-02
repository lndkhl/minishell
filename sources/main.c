#include "minishell.h"

int	main(int argc, char **argv)
{
	while (1)
	{
		output_prompt();
		read_command(command, parameters);
		if (fork() != 0)
			wait (NULL);
		else
			execve (command, parameters, 0);
	}
	return (0);
}

