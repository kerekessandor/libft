/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memccpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/22 08:46:36 by jfazakas          #+#    #+#             */
/*   Updated: 2015/10/26 18:03:50 by jfazakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(int ac, char **av)
{
	void	*ptr1;
	void	*ret1;
	void	*ptr2;
	void	*ret2;

	if (ac == 3)
	{
		ptr1 = ft_memalloc(ft_strlen(av[1]) + 1);
		ptr2 = ft_memalloc(ft_strlen(av[1]) + 1);
		ret1 = memccpy(ptr1, av[1], ft_atoi(av[2]), ft_strlen(av[1]));
		if (ret1 == NULL)
			ft_putendl("NULL");
		else
		{
			ft_putendl(ret1);
			ft_putendl(ret1 - 1);
		}
		ft_putendl(ptr1);
		ret2 = ft_memccpy(ptr2, av[1], ft_atoi(av[2]), ft_strlen(av[1]));
		if (ret2 == NULL)
			ft_putendl("NULL");
		else
		{
			ft_putendl(ret2);
			ft_putendl(ret2 - 1);
		}
		ft_putendl(ptr2);
	}
	return (0);
}
