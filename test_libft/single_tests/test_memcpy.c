/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/22 08:20:11 by jfazakas          #+#    #+#             */
/*   Updated: 2015/10/26 15:48:00 by jfazakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(int ac, char **av)
{
	void	*mem;
	int		dst[] = {1, 2, 3, 4};
	int		src[] = {5, 6};

	ft_memcpy(dst, src, 8);

	for (int i = 0; i < 4; ++ i)
		ft_putnbr(dst[i]);
	
	if (ac == 2)
	{
		mem = ft_strnew(ft_strlen(av[1]) + 1);
		ft_memcpy(mem, av[1], ft_strlen(av[1]) + 1);
		ft_putendl(mem);
	}
	return (0);
}
