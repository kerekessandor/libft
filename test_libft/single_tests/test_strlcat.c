/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strcat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/21 16:59:36 by jfazakas          #+#    #+#             */
/*   Updated: 2015/10/21 18:12:54 by jfazakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(int ac, char **av)
{
	char	*s1;
	char	*s2;

	s1 = (char*)malloc(10);
	s2 = (char*)malloc(10);
	if (ac == 4)
	{
		ft_strcpy(s1, av[1]);
		ft_strcpy(s2, av[1]);
		ft_putnbr(ft_strlcat(s1, av[2], ft_atoi(av[3])));
		ft_putchar('\n');
		ft_putendl(s1);
		ft_putnbr(strlcat(s2, av[2], ft_atoi(av[3])));
		ft_putchar('\n');
		ft_putendl(s2);
	}
	return (0);
}
