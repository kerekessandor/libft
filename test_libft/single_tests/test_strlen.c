/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/21 14:01:40 by jfazakas          #+#    #+#             */
/*   Updated: 2015/10/21 14:03:05 by jfazakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(int ac, char **av)
{
	if (ac == 2)
	{
		ft_putnbr(strlen(av[1]));
		ft_putchar('\n');
		ft_putnbr(ft_strlen(av[1]));
		ft_putchar('\n');
	}
	return (0);
}
