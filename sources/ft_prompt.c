#include "../includes/minishell.h"

void	ft_prompt(char **env[])
{
	char	*user;

	user = NULL;
	user = ft_resolve("$LOGNAME", *env);
	if (!user)
	{
		ft_putstr("\e[92m[minishell]$ \e[39m");
		return ;
	}
	ft_putstr("[\e[92m");
	ft_putstr(user);
	ft_putstr("@minishell\e[39m]$ ");
}
