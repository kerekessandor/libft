/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skerekes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/22 12:50:33 by skerekes          #+#    #+#             */
/*   Updated: 2015/11/22 12:53:47 by skerekes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*tmp;

	tmp = f(lst);
	new = tmp;
	if (new == NULL)
		return (NULL);
	while (lst->next)
	{
		lst = lst->next;
		tmp->next = f(lst);
		if (tmp->next == NULL)
			return (NULL);
		tmp = tmp->next;
	}
	return (new);
}
