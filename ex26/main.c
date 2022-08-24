#include <ctype.h>
#include <stdio.h>

int ft_count_if(char **tab, int (*f)(char*));
int ft_isalpha(char *s);

int	main(int argc, char *argv[])
{
	if (argc == 1)
		return (0);
	printf("%d\n", ft_count_if(argv, ft_isalpha));
	return (0);
}

int ft_isalpha(char *s)
{
	int i;

	i = 0;
	while (*s)
	{
		if (!isalpha(*s))
			return (0);
		s++;
	}
	return (1);
}