/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstadd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/23 18:19:03 by jfazakas          #+#    #+#             */
/*   Updated: 2015/11/03 10:01:22 by jfazakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print_list(t_list *list)
{
	while (list)
	{
		ft_putendl(list->content);
		list = list->next;
	}
}

int		main(int ac, char **av)
{
	t_list	*list;
	int		i;

	list = NULL;
	i = 1;
	while (i < ac)
	{
		ft_lstadd(&list, ft_lstnew(av[i], ft_strlen(av[i]) + 1));
		i++;
	}
	ft_print_list(list);
	return (0);
}
