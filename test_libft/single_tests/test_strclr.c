/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strclr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/22 10:04:18 by jfazakas          #+#    #+#             */
/*   Updated: 2015/10/22 10:18:37 by jfazakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_det(char *s, int len)
{
	int		i;

	i = 0;
	while (i < len)
	{
		ft_putnbr(s[i]);
		ft_putchar('\t');
		i++;
	}
	ft_putchar('\n');
}

int		main(int ac, char **av)
{
	char	*ptr1;
	int		len;

	if (ac == 2)
	{
		ptr1 = ft_strdup(av[1]);
		len = ft_strlen(av[1]);		
		ft_det(ptr1, len + 1);
		ft_strclr(ptr1);
		ft_det(ptr1, len + 1);
	}
	return (0);
}
