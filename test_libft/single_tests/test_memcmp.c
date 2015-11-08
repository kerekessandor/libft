/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/22 09:50:09 by jfazakas          #+#    #+#             */
/*   Updated: 2015/10/22 09:56:40 by jfazakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(int ac, char **av)
{
	if (ac == 4)
	{
		ft_putnbr(ft_memcmp(av[1], av[2], ft_atoi(av[3])));
		ft_putchar('\n');
		ft_putnbr(memcmp(av[1], av[2], ft_atoi(av[3])));
		ft_putchar('\n');
	}
	return (0);
}
