#ifndef MINISHELL_H
# define MINISHELL_H
# include <sys/types.h>
# include <sys/wait.h>
# include "../libft/includes/libft.h"

void	ft_parse(char *args[], char **env[]);
int	ft_quotecheck(char *args, int index);
void	ft_exit(char **cmd[], char **env[]);
void	ft_command(char **cmd[], char **env[]);
char	**ft_explode(char *arr, int count);
int	ft_countargs(char *args);
void	ft_echo(char **cmd[], char **env[]);
char	*ft_argsub(char *args, int *index);

void	ft_arrprint(char *arr[]);
char	**ft_arrdup(char *arr[]);
int	ft_arrlen(char *arr[]);
void	ft_arrdel(char *arr[]);

int	ft_iswhitespace(char c);
#endif
