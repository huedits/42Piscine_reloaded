/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimatheu <vimatheu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 19:21:20 by vimatheu          #+#    #+#             */
/*   Updated: 2022/08/24 21:27:10 by vimatheu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#define ERR_FILE_MISSING "File name missing.\n"
#define ERR_ARGS "Too many arguments.\n"
#define ERR_OPEN_FILE "Couldn't read file.\n"

void	ft_display_file(int *fd);
void	ft_putstr(char *str);
void	ft_putchar(char c);

int	main(int argc, char *argv[])
{
	int	fd;

	if (argc == 1)
	{
		ft_putstr(ERR_FILE_MISSING);
		return (0);
	}
	if (argc > 2)
	{
		ft_putstr(ERR_ARGS);
		return (0);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		ft_putstr(ERR_OPEN_FILE);
		return (0);
	}
	ft_display_file(&fd);
	ft_putchar('\n');
}
