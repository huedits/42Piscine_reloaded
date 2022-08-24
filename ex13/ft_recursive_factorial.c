/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimatheu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 10:39:47 by vimatheu          #+#    #+#             */
/*   Updated: 2022/08/23 13:15:40 by vimatheu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	r;

	if (nb < 0)
		return (0);
	if (nb < 1)
		return (1);
	r = ft_recursive_factorial(nb - 1);
	if (r > (~(1 << 31) / nb))
		return (0);
	return (nb * r);
}
