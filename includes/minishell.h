#ifndef MINISHELL_H
# define MINISHELL_H
# include <sys/types.h>
# include <sys/wait.h>
# include "../libft/includes/libft.h"

void		parse_command(char *line[], char **env[]);
void		exec_exit(char **params[], char **env[]);
void		exec_command(char **command[], char **env[]);
char		**trim_array(char *arr[], int count);
int		real_count(char *arr[]);

void		ft_arrprint(char *arr[]);
char		**ft_arrdup(char *arr[]);
int		ft_arrlen(char *arr[]);
void		ft_arrdel(char *arr[]);

#endif
