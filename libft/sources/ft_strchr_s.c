#include "../includes/libft.h"

char		*ft_strchr_s(const char *s, const char *d, int *offset)
{
	int	i;
	int	j;
	char	n;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (d[j] != '\0' && s[i] != d[j])
			j++;
		if (s[i] == d[j])
		{
			while (s[i] != '\0' && s[i] == d[j])
			{
				i++;
				*offset = *offset + 1;
			}
			return ((char *)&s[i - *offset]);
		}
		i++;
	}
	return (NULL);
}
		
