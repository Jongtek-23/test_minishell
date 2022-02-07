#include "includes/minishell.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_putstr_fd(char *s, int fd)
{
	if (fd < 0 || !s)
		return ;
	write(fd, s, ft_strlen(s));
}

int	ft_pwd(int fd)
{
	char	*str;

	str = getcwd(NULL, 0);
	//printf("first =  %s\n", str);
	ft_putstr_fd(str, fd);
	write(fd, "\n", 1);
	free(str);
	return (1);
}

