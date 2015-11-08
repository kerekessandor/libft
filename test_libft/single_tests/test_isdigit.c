/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isdigit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/21 09:57:17 by jfazakas          #+#    #+#             */
/*   Updated: 2015/10/21 09:59:32 by jfazakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>

int		main(int ac, char **av)
{
	if (ac == 2)
	{
		ft_putnbr(isdigit(ft_atoi(av[1])));
		ft_putchar('\n');
		ft_putnbr(ft_isdigit(ft_atoi(av[1])));
		ft_putchar('\n');
	}
	return (0);
}
