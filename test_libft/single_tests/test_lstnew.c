/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstnew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/23 18:18:10 by jfazakas          #+#    #+#             */
/*   Updated: 2015/10/23 18:18:41 by jfazakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(int ac, char **av)
{
	t_list	*list_str;
	t_list	*list_num;
	t_list	*list_null;
	int		num;

	if (ac == 3)
	{
		list_str = ft_lstnew(av[1], strlen(av[1]) + 1);
		if (list_str != NULL)
		{
			ft_putendl(list_str->content);
			ft_putnbr(list_str->content_size);
			ft_putchar('\n');
		}
		num = ft_atoi(av[2]);
		list_num = ft_lstnew(&num, sizeof(int));
		if (list_num != NULL)
		{
			ft_putnbr(*(int*)(list_num->content));
			ft_putchar('\n');
			ft_putnbr(list_num->content_size);
			ft_putchar('\n');
		}
		list_null = ft_lstnew(NULL, 0);
		if (list_null != NULL)
		{
			if (list_null->content == NULL)
				ft_putendl("NULL");
			ft_putnbr(list_null->content_size);
			ft_putchar('\n');
		}
	}
	return (0);
}
