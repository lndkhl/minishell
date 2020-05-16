#include "../includes/minishell.h"

void	ft_prompt(char **env[])
{
	char	*user;

	user = NULL;
	user = ft_resolve("$LOGNAME", *env);
	if (!user)
	{
		ft_putstr("[minishell]$> ");
		return ;
	}
	ft_putstr("[");
	ft_putstr(user);
	ft_putstr("@minishell]$> ");
}
