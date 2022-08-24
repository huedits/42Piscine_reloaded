/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimatheu <vimatheu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 19:21:24 by vimatheu          #+#    #+#             */
/*   Updated: 2022/08/24 21:35:04 by vimatheu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_display_file(int *fd)
{
	char	c[1];

	while (read(*fd, c, 1))
	{
		ft_putchar(*c);
	}
	close(*fd);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
