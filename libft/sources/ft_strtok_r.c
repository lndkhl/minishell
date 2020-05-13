#include "../includes/libft.h"

char		*ft_strtok_r(char *str, const char *delim, char **svptr)
{
	char	*token;
	char	*delim_ptr;
	size_t	len;
	int	offset;

	token = NULL;
	delim_ptr = NULL;
	if (str == NULL && *svptr == NULL)
		return (NULL);
	else if (str == NULL && *svptr != NULL)
		str = *svptr;
	offset = 0;
	delim_ptr = ft_strchr_s(str, delim, &offset);
	len = ft_strlen(str) - ft_strlen(delim_ptr);
	token = ft_strsub(str, 0, len);
	str = NULL;
	*svptr = NULL;
	if (delim_ptr != NULL && delim_ptr[offset] != '\0')
		*svptr = (char *)&delim_ptr[offset];

	return (token);
}

