#include "../includes/minishell.h"

char	*ft_initkey(char *args)
{
	char *key;

	key = NULL;
	if (ft_strchr(args, '='))
	{
		if (args[0] == '$')
			key = ft_strsub(args, 1, ft_strlen(args) -\
				ft_strlen(ft_strchr(args,'=')) - 1);
		else
			key = ft_strsub(args, 0, ft_strlen(args) -\
				ft_strlen(ft_strchr(args,'=')));
	}
	else if (ft_strchr(args, '/'))
		key = ft_strsub(args, 1, ft_strlen(args) -\
			ft_strlen(ft_strchr(args,'/')) - 1);
	else if (args[0] == '~')
		key = ft_strdup("HOME");
	else
		key =  ft_strsub(args, 1, ft_strlen(args) - 1);
	return (key);
}
