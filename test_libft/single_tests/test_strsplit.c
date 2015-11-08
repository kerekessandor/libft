/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strsplit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/22 14:18:27 by jfazakas          #+#    #+#             */
/*   Updated: 2015/10/22 14:37:41 by jfazakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(int ac, char **av)
{
	char	**tab;
	int		i;

	if (ac == 3)
	{
		i = 0;
		tab = ft_strsplit(av[1], ft_atoi(av[2]));
		while (tab[i] != 0)
		{
			ft_putendl(tab[i]);
			i++;
		}
	}
	return (0);
}
