#include "../includes/minishell.h"

char		**ft_arrdup(char **arr)
{
	int	i;
	int	len;
	char	**dup;

	if (!(arr))
		return (NULL);
	i = -1;
	len = ft_arrlen(arr);
	if (!(dup = (char **)malloc(sizeof(char *) * (len + 1))))
		return (NULL);
	while (++i < len)
		dup[i] = ft_strdup(arr[i]);
	dup[i] = NULL;
	return (dup);
}
