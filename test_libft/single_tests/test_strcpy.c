/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/21 14:17:12 by jfazakas          #+#    #+#             */
/*   Updated: 2015/10/22 17:52:14 by jfazakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(int ac, char **av)
{
	char 	*str1;
	char	*str2;

	str1 = (char*)malloc(6);
	str2 = (char*)malloc(6);
	if (ac == 2)
	{
		ft_strcpy(str1, av[1]);
		ft_putstr(str1);
		ft_putchar('\n');
		strcpy(str2, av[1]);
		ft_putstr(str2);
		ft_putchar('\n');
	}
	return (0);
}
