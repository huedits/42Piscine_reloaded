/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimatheu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 12:48:32 by vimatheu          #+#    #+#             */
/*   Updated: 2022/08/23 13:05:19 by vimatheu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb <= 0)
		return (0);
	while (nb > (i * i) && i <= (~(1 << 31) / i))
		i++;
	if (i * i > nb || i > (~(1 << 31) / i))
		return (0);
	return (i);
}
