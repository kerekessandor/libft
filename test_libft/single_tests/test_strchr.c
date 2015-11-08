/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/21 13:02:15 by jfazakas          #+#    #+#             */
/*   Updated: 2015/10/21 13:12:49 by jfazakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(int ac, char **av)
{
	if (ac == 3)
	{
		if (strchr(av[1], ft_atoi(av[2])) == NULL)
			ft_putendl("NULL");
		else
			ft_putendl(strchr(av[1], ft_atoi(av[2])));
		if (ft_strchr(av[1], ft_atoi(av[2])) == NULL)
			ft_putendl("NULL");
		else
			ft_putendl(ft_strchr(av[1], ft_atoi(av[2])));
	}
	return (0);
}
