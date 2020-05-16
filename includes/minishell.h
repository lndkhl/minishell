#ifndef MINISHELL_H
# define MINISHELL_H
# include <sys/types.h>
# include <sys/wait.h>
# include "../libft/includes/libft.h"

/*core shell functions*/
void	ft_parse(char *args[], int count, char **env[]);
int	ft_countargs(char *args);
int	ft_quotecheck(char *args, int index);
char	**ft_explode(char *arr, int count);
char	*ft_argsub(char *args, int *index);
void	ft_command(char **cmd[], char **env[]);
char	*ft_resolve(char *cmd, char *env[]);
void	ft_prompt(char **env[]);
/*built-ins*/
void	ft_exit(char **cmd[], char **env[]);
void	ft_echo(char **cmd[], char **env[]);
void	ft_cd(char **cmd[], char **env[]);
/*array manipulation*/
char	**ft_arrdup(char *arr[]);
int	ft_arrlen(char *arr[]);
void	ft_arrdel(char *arr[]);
void	ft_arrprint(char *arr[], char **env[]);
/*misc*/
int	ft_iswhitespace(char c);
#endif
