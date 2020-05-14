#ifndef MINISHELL_H
# define MINISHELL_H
# include <sys/types.h>
# include <sys/wait.h>
# include "../libft/includes/libft.h"

int		parse_command(char *path[], char **params[]);
void		exec_exit(char **params[], char **env[]);
void		exec_command(char **params[], char **env[]);

void		ft_arrprint(char *arr[]);
char		**ft_arrdup(char *arr[]);
int		ft_arrlen(char *arr[]);
void		ft_arrdel(char *arr[]);

#endif
