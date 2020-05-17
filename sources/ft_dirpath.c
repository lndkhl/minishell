#include "../includes/minishell.h"

char	*ft_dirpath(char *args, char **env[])
{
	char	*temp;
	char	*path;
	char	link[PATH_MAX];

	temp = NULL;
	if (args[0] != '/' && (temp = ft_resolve(args, *env)))
		path = (ft_strchr(args, '/')) ? ft_strjoin(temp,\
			 ft_strchr(args, '/')) : ft_strdup(temp);
	else
		path = ft_strdup(args);
	if (ft_checkdir(path) == 0)
	{
		free(path);
		return (NULL);
	}
	else if (ft_checkdir(path) == 2)
	{
		readlink(path, ft_memset(link, 0, PATH_MAX), PATH_MAX);
		temp = ft_strsub(path, 0, (ft_strrchr(path, '/') - path + 1));
		free(path);
		path = ft_strjoin(temp, link);
		(temp) ? free(temp) : NULL;
	}
	return (path);
}
