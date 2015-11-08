/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strcat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/21 16:59:36 by jfazakas          #+#    #+#             */
/*   Updated: 2015/10/21 17:26:10 by jfazakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(int ac, char **av)
{
	char	*s1;
	char	*s2;

	s1 = (char*)malloc(10);
	s2 = (char*)malloc(10);
	if (ac == 3)
	{
		ft_strcpy(s1, av[1]);
		ft_strcpy(s2, av[1]);
		ft_putendl(ft_strcat(s1, av[2]));
		ft_putendl(strcat(s2, av[2]));
	}
	return (0);
}
