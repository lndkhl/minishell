#include "../includes/minishell.h"

int	ft_iswhitespace(char c)
{
	if (c == 32 || c == '\t' || c == '\n' || c == '\r' || c == '\f' ||\
		c == '\v')
		return (1);
	return (0);
	
}
