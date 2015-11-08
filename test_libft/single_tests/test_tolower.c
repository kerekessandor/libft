/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_tolower.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/21 08:25:06 by jfazakas          #+#    #+#             */
/*   Updated: 2015/10/21 08:52:02 by jfazakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>

int		main(int ac, char **av)
{
	if (ac == 2)
	{
		ft_putnbr(ft_tolower(ft_atoi(av[1])));
		ft_putchar('\n');
		ft_putnbr(tolower(ft_atoi(av[1])));
		ft_putchar('\n');
	}
	return (0);
}
