#include "includes/minishell.h"

int	main(int argc, char **argv, char **envp)
{
	int file;
	char	**cp_env;
	char	*str1 = "-n";
	char	*str2 = "hello";
	char	s[100];
	
	file = ft_pwd(1);
	cp_env = copie_envp(envp);
	ft_echo(str1, 1);
	ft_echo(str2, 1);
	
	printf("%s\n", getcwd(s, 100));
	chdir("..");
	printf("%s\n", getcwd(s, 100));


	return (0);
}

