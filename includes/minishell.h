#ifndef MINISHELL_H
# define MINISHELL_H
# include <sys/types.h>
# include <sys/wait.h>
# include "../libft/includes/libft.h"

int		parse_command(char *path[], char **paramaters[]);
void		ft_arr_print(char *arr[]);
char		**ft_arrdup(char *arr[]);
int		ft_arrlen(char *arr[]);
void		ft_arrdel(char *arr[]);

#endif
