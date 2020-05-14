#include "../includes/minishell.h"

char	**trim_array(char *arr[], int count)
{
	int	i;
	int	size;
	char	*trim;
	char	**clean;

	if (!count)
		return (ft_arrdup(arr));
	i = -1;
	size = ft_arrlen(arr);
	clean = (char **)malloc(sizeof(char *) * (size - count + 1));
	count = 0;
	while (++i < size)
	{
		if ((trim = ft_strtrim(arr[i])))
			clean[count++] = trim;
	}
	clean[count] = NULL;
	return (clean);
}
