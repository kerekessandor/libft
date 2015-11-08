/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstiter.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/23 18:46:44 by jfazakas          #+#    #+#             */
/*   Updated: 2015/10/23 18:47:04 by jfazakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putcontent(t_list *elem)
{
	ft_putendl(elem->content);
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
	ft_lstiter(list, &ft_putcontent);
	return (0);
}
