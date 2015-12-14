/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skerekes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/04 15:31:44 by skerekes          #+#    #+#             */
/*   Updated: 2015/11/22 13:35:14 by skerekes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	int		i;
	long	nbr;
	char	v[11];

	i = 0;
	nbr = n;
	if (nbr == 0)
		ft_putchar('0');
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	while (nbr != 0)
	{
		v[i] = nbr % 10 + '0';
		nbr = nbr / 10;
		i++;
	}
	i--;
	while (i >= 0)
	{
		ft_putchar(v[i]);
		i--;
	}
}
