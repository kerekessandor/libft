/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstdel.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/23 18:20:12 by jfazakas          #+#    #+#             */
/*   Updated: 2015/11/03 09:58:57 by jfazakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_del_content(void *content, size_t length)
{
	length++;
	free(content);
}

void	ft_print_content(t_list *begin)
{
	while (begin != NULL)
	{
		ft_putendl(begin->content);
		begin = begin->next;
	}
}

int		main(void)
{
	t_list	*unu;
	t_list	*doi;
	t_list	*trei;

	unu = ft_lstnew("unu", 4);
	doi = ft_lstnew("doi", 4);
	trei = ft_lstnew("trei", 5);
	unu->next = doi;
	doi->next = trei;
	ft_print_content(unu);
	ft_lstdel(&unu, &ft_del_content);
	if (unu == NULL)
		ft_putendl("unu - NULL");
	if (doi == NULL)
		ft_putendl("doi - NULL");
	else
		ft_putendl(doi->content);
	if (trei == NULL)
		ft_putendl("trei - NULL");
	else
		ft_putendl(trei->content);
	return (0);
}
