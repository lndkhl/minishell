#include "../includes/minishell.h"

void		read_command(char *command, char **parameters)
{
	int	i;
	int	j;
	char	line[1024];
	char	*extra;
	char	*array[128];
	char	*temp;

	#include <stdio.h>
	printf("here");
	i = 0;
	temp = NULL;
	while (1)
	{
		int c = fgetc (stdin);
		line[i++] = (char)c;
		if (c == '\n')
			break;
	}
	if (i == 1)
		return;
	i = 0;
	extra = strtok(line, " \n");
	while (extra != NULL)
	{
		array[i++] = ft_strdup(extra);
		extra = strtok(NULL, " \n");
	}
	strcpy(command, array[0]);
	j = 0;
	while (j++ < i)
		parameters[j] = array[j];
	parameters[i] = NULL;
	ft_putendl("eof");
}		
