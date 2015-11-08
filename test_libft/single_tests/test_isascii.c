/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isascii.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/21 09:14:03 by jfazakas          #+#    #+#             */
/*   Updated: 2015/10/21 09:24:58 by jfazakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>

int		main(int ac, char **av)
{
	if (ac == 2)
	{
		ft_putnbr(ft_isascii(ft_atoi(av[1])));
		ft_putchar('\n');
		ft_putnbr(isascii(ft_atoi(av[1])));
		ft_putchar('\n');
	}
	return (0);
}
