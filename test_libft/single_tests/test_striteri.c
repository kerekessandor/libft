/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_striteri.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/22 10:54:38 by jfazakas          #+#    #+#             */
/*   Updated: 2015/10/22 11:02:16 by jfazakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_if(unsigned int index, char *s)
{
	int		i;

	if (index % 2 == 0)
	{
		i = 0;
		while (s[i] != '\0')
		{
			ft_putchar(s[i]);
			i++;
		}
		ft_putchar('\n');
	}
}

int		main(int ac, char **av)
{
	if (ac == 2)
		ft_striteri(av[1], &ft_putendl_if);
	return (0);
}
