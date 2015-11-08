/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isprint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/21 09:03:29 by jfazakas          #+#    #+#             */
/*   Updated: 2015/10/21 09:07:16 by jfazakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>

int		main(int ac, char **av)
{
	if (ac == 2)
	{
		ft_putnbr(ft_isprint(ft_atoi(av[1])));
		ft_putchar('\n');
		ft_putnbr(isprint(ft_atoi(av[1])));
		ft_putchar('\n');
	}
	return (0);
}
