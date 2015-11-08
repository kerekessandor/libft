/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strmap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/22 16:40:42 by jfazakas          #+#    #+#             */
/*   Updated: 2015/10/22 17:17:24 by jfazakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_mix(unsigned int i, char c)
{
	if (i % 2 == 0)
	{
		if (c >= 'a' && c <= 'z')
			c -= 32;
	}
	else
	{
		if (c >= 'A' && c <= 'Z')
			c += 32;
	}
	return (c);
}

int		main(int ac, char **av)
{
	if (ac == 2)
		ft_putendl(ft_strmapi(av[1], &ft_mix));
	return (0);
}
