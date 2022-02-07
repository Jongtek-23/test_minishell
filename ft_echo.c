#include "includes/minishell.h"

int			ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*t1;
	unsigned char	*t2;

	t1 = (unsigned char *)s1;
	t2 = (unsigned char *)s2;
	i = 0;
	if (t1 == NULL || t2 == NULL)
		return (-1);
	while (t1[i] != '\0' && t2[i] != '\0' && i < n)
	{
		if (t1[i] != t2[i])
			return (t1[i] - t2[i]);
		else
			i++;
	}
	if (t1[i] != '\0' && i < n)
		return (t1[i]);
	if (t2[i] != '\0' && i < n)
		return (-t2[i]);
	return (0);
}

int	n_opt_chk(char *str)
{
	int	i;

	i = 1;
	//printf("dedans\n");
	if (ft_strncmp("-n", str, 2) != 0)
	{
		printf("d\n");
		return (0);
	}
	while (str[++i])
	{
		if (str[i] != 'n')
			return (0);
	}
	return (1);	
}

int	ft_echo(char *str, int fd)
{
	int	i;
	int	count;
	int	flag;

	i = 1;
	count = 0;
	flag = 0;
	//while (n_opt_chk(str[i]))
	if (n_opt_chk(str))
	{
		flag = 1;
		i++;
		return (0);
	}
	//while (str)
	ft_putstr_fd(str, fd);
	if (flag == 0)
	{
		printf("flag = %d\n", flag);
		write(fd, "\n", 1);
	}

	return (1);
}

