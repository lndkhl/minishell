#include "../includes/minishell.h"

int	ft_isquote(char c)
{
	if (c == '\'' || c == '\"')
		return (1);
	return (0);
}
