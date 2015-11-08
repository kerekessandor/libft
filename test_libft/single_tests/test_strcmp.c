/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/21 10:18:09 by jfazakas          #+#    #+#             */
/*   Updated: 2015/10/21 10:18:59 by jfazakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(int ac, char **av)
{
	if (ac == 3)
	{
		ft_putnbr(strcmp(av[1], av[2]));
		ft_putchar('\n');
		ft_putnbr(ft_strcmp(av[1], av[2]));
		ft_putchar('\n');
	}
	return (0);
}
