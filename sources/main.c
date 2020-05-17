#include "minishell.h"

int	main(int argc, char **argv, char **envp)
{
	char	**envy;
	char	*line;
	char	*trim;
	int	count;

	(void)(argc && argv);
	envy = ft_arrdup(envp);
	ft_prompt();
	while (get_next_line(STDIN_FILENO, &line) == 1)
	{
		if (line[0])
		{
			trim = ft_strtrim(line);
			free(line);
			if (trim)
				count = ft_countargs(trim);
			(trim) ? ft_parse(&trim, count, &envy) : NULL;
		}
		else if (line)
			free(line);
		ft_prompt();
	}
	ft_arrdel(envy);
	return (0);
}
