/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimatheu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 15:31:15 by vimatheu          #+#    #+#             */
/*   Updated: 2022/08/23 16:07:56 by vimatheu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str);
void	ft_swap(char **args, int i, int j);
int		ft_strcmp(char *s1, char *s2);

int	main(int argc, char *argv[])
{
	int		i;
	int		j;

	i = 1;
	if (argc < 2)
		return (0);
	while (i < argc - 1)
	{
		j = i + 1;
		while (j < argc)
		{
			ft_swap(argv, i, j);
			j++;
		}
		i++;
	}
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
}

void	ft_swap(char **args, int i, int j)
{
	char	*aux;

	if (ft_strcmp(args[i], args[j]) > 0)
	{
		aux = args[i];
		args[i] = args[j];
		args[j] = aux;
	}
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	return (s1[i] - s2[i]);
}
