/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/21 10:47:32 by jfazakas          #+#    #+#             */
/*   Updated: 2015/10/21 11:04:12 by jfazakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(int ac, char **av)
{
	if (ac == 3)
	{
		if (strstr(av[1], av[2]) == NULL)
			ft_putendl("NULL");
		else
			(ft_putendl(strstr(av[1], av[2])));
		if (ft_strstr(av[1], av[2]) == NULL)
			ft_putendl("NULL");
		else
			(ft_putendl(ft_strstr(av[1], av[2])));
	}
	return (0);
}
