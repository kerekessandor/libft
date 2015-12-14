/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skerekes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/16 20:18:08 by skerekes          #+#    #+#             */
/*   Updated: 2015/11/22 13:37:32 by skerekes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int		index;
	long	aux;
	char	position[11];

	index = 0;
	aux = n;
	if (aux == 0)
		ft_putchar_fd('0', fd);
	if (aux < 0)
	{
		ft_putchar_fd('-', fd);
		aux = -aux;
	}
	while (aux != 0)
	{
		position[index] = aux % 10 + '0';
		aux = aux / 10;
		index++;
	}
	index--;
	while (index >= 0)
	{
		ft_putchar_fd(position[index], fd);
		index--;
	}
}
