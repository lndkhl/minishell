#include "../includes/minishell.h"

void	ft_remove(char **env[], int index)
{
	int	i;
	int	j;
	int	size;
	char	**shrunk;
	char	**temp;

	i = -1;
	j = 0;
	size = ft_arrlen(*env);
	shrunk = (char **)malloc(sizeof(char *) * (size));
	temp = *env;
	while (j < size)
	{
		if (j != index)
			shrunk[++i] = ft_strdup(temp[j]);
		++j;
	}
	shrunk[size - 1] = NULL;
	ft_arrdel(*env);
	*env = shrunk;
}
