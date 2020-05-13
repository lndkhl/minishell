#include "minishell.h"

int	main(int argc, char **argv, char **envp)
{
	char	**envy;
	char	*line;

	(void)(argc && argv);
	ft_putstr("\e[92m$> \e[39m");
	line = NULL;
	envy = ft_arrdup(envp);
	while (get_next_line(STDIN_FILENO, &line) == 1)
	{
		if (line && line[0])
			parse_command(&line, &envy);
	}
	ft_arrdel(envy);
	return (0);
}
