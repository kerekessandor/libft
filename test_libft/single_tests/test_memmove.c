/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memmove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/22 09:22:41 by jfazakas          #+#    #+#             */
/*   Updated: 2015/10/26 18:08:51 by jfazakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(int ac, char **av)
{
	void	*ptr1;
	void	*ptr2;

	if (ac == 2)
	{
		ptr1 = ft_memalloc(ft_strlen(av[1] + 1));
		ptr2 = ft_memalloc(ft_strlen(av[1] + 1));
		ptr1 = memmove(ptr1, av[1], ft_strlen(av[1]));
		ft_putendl(ptr1);
		ptr2 = ft_memmove(ptr1, av[1], ft_strlen(av[1]));
		ft_putendl(ptr2);
		ft_putendl(memmove(ptr1 + 2, ptr1, ft_strlen(av[1])));
		ft_putendl(ft_memmove(ptr1 + 2, ptr1, ft_strlen(av[1])));
		ft_putendl(ft_memcpy(ptr1 + 2, ptr1, ft_strlen(av[1])));
		ft_putendl(memcpy(ptr1 + 2, ptr1, ft_strlen(av[1])));
	}
	return (0);
}
