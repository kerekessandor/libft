/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/22 09:34:23 by jfazakas          #+#    #+#             */
/*   Updated: 2015/10/26 18:13:55 by jfazakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(int ac, char **av)
{
	if (ac == 3)
	{
		if (ft_memchr(av[1], ft_atoi(av[2]), ft_strlen(av[1]) + 1) == NULL)
			ft_putendl("NULL");
		else
			ft_putendl(ft_memchr(av[1], ft_atoi(av[2]), ft_strlen(av[1]) + 1));
		if (memchr(av[1], ft_atoi(av[2]), ft_strlen(av[1]) + 1) == NULL)
			ft_putendl("NULL");
		else
			ft_putendl(memchr(av[1], ft_atoi(av[2]), ft_strlen(av[1]) + 1));
	}
	return (0);
}
