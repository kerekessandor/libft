/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/21 18:59:34 by jfazakas          #+#    #+#             */
/*   Updated: 2015/10/26 15:40:46 by jfazakas         ###   ########.fr       */
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
	void	*ptr1;
	void	*ptr2;

	if (ac == 3)
	{
		ptr1 = malloc(ft_atoi(av[2]));
		ptr2 = malloc(ft_atoi(av[2]));
		ft_det(ft_memset(ptr1, ft_atoi(av[1]), ft_atoi(av[2])), atoi(av[2]));
		ft_det(memset(ptr2, ft_atoi(av[1]), ft_atoi(av[2])), ft_atoi(av[2]));
	}
	return (0);
}
