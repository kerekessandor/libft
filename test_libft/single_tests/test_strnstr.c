/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strnstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/22 18:28:55 by jfazakas          #+#    #+#             */
/*   Updated: 2015/10/22 18:29:32 by jfazakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(int ac, char **av)
{
	if (ac == 4)
	{
		if (strnstr(av[1], av[2], ft_atoi(av[3])) == NULL)
			ft_putendl("NULL");
		else
			ft_putendl(strnstr(av[1], av[2], ft_atoi(av[3])));
		if (ft_strnstr(av[1], av[2], ft_atoi(av[3])) == NULL)
			ft_putendl("NULL");
		else
			ft_putendl(ft_strnstr(av[1], av[2], ft_atoi(av[3])));
	}
	return (0);
}
