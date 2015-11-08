/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/21 10:18:09 by jfazakas          #+#    #+#             */
/*   Updated: 2015/10/21 10:23:47 by jfazakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(int ac, char **av)
{
	if (ac == 4)
	{
		ft_putnbr(strncmp(av[1], av[2], ft_atoi(av[3])));
		ft_putchar('\n');
		ft_putnbr(ft_strncmp(av[1], av[2], ft_atoi(av[3])));
		ft_putchar('\n');
	}
	return (0);
}
