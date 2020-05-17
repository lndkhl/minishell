#include "../includes/minishell.h"

char	*ft_dirpath(char *args, char **env[])
{
	char	*key;
	char	*temp;
	char	*path;
	char	link[PATH_MAX];

	ft_putendl("here");
	key = ft_initkey(args);
	temp = ft_resolve(key, *env);
	if (temp)
		path = (ft_strchr(args, '/')) ? ft_strjoin(temp,\
			 ft_strchr(args, '/')) : ft_strdup(temp);
	else
		path = ft_strdup(args);
	free(key);
	if (ft_checkdir(path) == 0)
	{
		free(path);
		return (NULL);
	}
	else if (ft_checkdir(path) == 2)
	{
		readlink(args, ft_memset(link, 0, PATH_MAX), PATH_MAX);
		temp = ft_strsub(path, 0, (ft_strrchr(path, '/') - path + 1));
		path = ft_strjoin(temp, link);
		(temp) ? free(temp) : NULL;
	}
	return (path);
}

