#ifndef MINISHELL_H
# define MINISHELL_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int	main(int argc, char **argv, char **envp);

int		ft_pwd(int fd);
char	**copie_envp(char **envp);
int		ft_echo(char *str, int fd);




void	ft_putstr_fd(char *s, int fd);

#endif
