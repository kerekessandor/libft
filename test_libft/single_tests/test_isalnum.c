/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isalnum.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/21 10:04:05 by jfazakas          #+#    #+#             */
/*   Updated: 2015/10/21 10:07:57 by jfazakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>

int		main(int ac, char **av)
{
	if (ac == 2)
	{
		ft_putnbr(isalnum(ft_atoi(av[1])));
		ft_putchar('\n');
		ft_putnbr(ft_isalnum(ft_atoi(av[1])));
		ft_putchar('\n');
	}
	return (0);
}
