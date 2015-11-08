/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstmap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/23 18:47:32 by jfazakas          #+#    #+#             */
/*   Updated: 2015/10/26 18:48:58 by jfazakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_upper(char *s)
{
	char	*dup;
	int		i;

	dup = strdup(s);
	i = 0;
	while (dup[i] != '\0')
	{
		if (dup[i] >= 'a' || dup[i] <= 'z')
			dup[i] -= 32;
		i++;
	}
	return (dup);
}

void	ft_putcontent(t_list *elem)
{
	ft_putendl(elem->content);
}

t_list	*ft_lstedit(t_list *elem)
{
	return (ft_lstnew(ft_upper(elem->content), elem->content_size));
}

int		main(int ac, char **av)
{
	t_list	*list;
	t_list	*edit;
	int		i;

	list = NULL;
	edit = NULL;
	i = ac - 1;
	while (i > 0)
	{
		ft_lstadd(&list, ft_lstnew(av[i], ft_strlen(av[i]) + 1));
		i--;
	}
	ft_lstiter(list, &ft_putcontent);
	edit = ft_lstmap(list, *ft_lstedit);
	ft_lstiter(edit, &ft_putcontent);
	return (0);
}
