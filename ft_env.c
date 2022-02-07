#include "includes/minishell.h"

char	*ft_strdup(const char *src)
{
	char	*str;
	int		size;
	int		i;

	size = 0;
	i = 0;
	while (src[size] != '\0')
		size++;
	str = malloc(sizeof(char) * (size + 1));
	if (!str)
		return (NULL);
	while (src[i] != '\0')
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	**copie_envp(char **envp)
{
	char	**str;
	int		i;

	i = 0;
	while (envp[i])
		i++;
	str = malloc(sizeof(char *) * (i + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (envp[i])
	{
		str[i] = ft_strdup(envp[i]);
		printf("env = %s\n", str[i]);
		i++;
	}
	str[i] = NULL;
	return (str);
}

