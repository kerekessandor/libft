/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/21 18:59:34 by jfazakas          #+#    #+#             */
/*   Updated: 2015/10/21 20:05:28 by jfazakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_det(char *b, int size)
{
	int		i;

	i = 0;
	while (i < size)
	{
		ft_putnbr((int)(b[i]));
		ft_putchar(' ');
		i++;
	}
	ft_putchar('\n');
}

int		main(int ac, char **av)
{
	char	*s;

	if (ac == 2)
	{
		s = ft_strnew(ft_atoi(av[1]));
		ft_det(s, ft_atoi(av[1]));
	}
	return (0);
}
