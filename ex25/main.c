#include <stdio.h>

void	ft_foreach(int *tab, int length, void(*f)(int));

void print(int n)
{
	printf("Número: %d\n", n);
}

int	main(void)
{
	int	tab[5] = {4, 2, 6, 1, 0};

	ft_foreach(tab, 5, &print);
}