#include "minishell.h"

int	main(int argc, char **argv, char **envp)
{
	char	**envy;
	char	*line;
	char	*trim;

	(void)(argc && argv);
	ft_putstr("\e[92m$> \e[39m");
	envy = ft_arrdup(envp);
	while (get_next_line(STDIN_FILENO, &line) == 1)
	{
		if (line[0])
		{
			trim = ft_strtrim(line);
			free(line);
			if (trim)
				parse_command(&trim, &envy);
		}
		else if (line)
			free(line);
		ft_putstr("\e[92m$> \e[39m");
	}
	ft_arrdel(envy);
	return (0);
}
