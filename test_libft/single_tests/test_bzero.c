/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/21 18:59:34 by jfazakas          #+#    #+#             */
/*   Updated: 2015/11/08 14:44:36 by skerekes         ###   ########.fr       */
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

	if (ac == 2)
	{
		ptr1 = malloc(ft_atoi(av[1]));
		ptr2 = malloc(ft_atoi(av[1]));
		ft_bzero(ptr1, ft_atoi(av[1]));
		bzero(ptr2, ft_atoi(av[1]));
		ft_det(ptr1, ft_atoi(av[1]));
		ft_det(ptr2, ft_atoi(av[1]));
	}
	return (0);
}
