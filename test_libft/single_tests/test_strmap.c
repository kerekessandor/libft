/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strmap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/22 16:40:42 by jfazakas          #+#    #+#             */
/*   Updated: 2015/10/22 16:58:58 by jfazakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_rot_one(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' || c <= 'Z'))
		c++;
	if (c == 'z' + 1 || c == 'Z' + 1)
		c -= 26;
	return (c);
}

int		main(int ac, char **av)
{
	if (ac == 2)
		ft_putendl(ft_strmap(av[1], &ft_rot_one));
	return (0);
}
