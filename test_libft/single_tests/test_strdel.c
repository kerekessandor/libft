/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strdel.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/22 18:33:37 by jfazakas          #+#    #+#             */
/*   Updated: 2015/10/22 18:37:55 by jfazakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print_memory(char *ptr, int size)
{
	int		i;

	i = 0;
	while (i < size)
	{
		ft_putnbr(*(unsigned char*)(ptr + i));
		ft_putchar('\t');
		i++;
	}
	ft_putchar('\n');
}

int		main(int ac, char **av)
{
	char	*ptr;
	char	*copy;
	int		len;

	if (ac == 2)
	{
		len = ft_strlen(av[1]);
		ptr = ft_memalloc(len);
		if (ptr == NULL)
			ft_putendl("Error");
		ft_memset(ptr, 72, len);
		ft_print_memory(ptr, len);
		ft_memcpy(ptr, av[1], len);
		ft_print_memory(ptr, len);
		copy = ptr;
		ft_strdel(&ptr);
		ft_print_memory(copy, len);
		ft_print_memory(ptr, len);
	}
	return (0);
}
