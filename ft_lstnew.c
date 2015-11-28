/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skerekes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/22 11:35:15 by skerekes          #+#    #+#             */
/*   Updated: 2015/11/22 13:06:19 by skerekes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list		*new;

	new = (t_list*)malloc(sizeof(*new) * content_size);
	if (new == NULL)
		return (NULL);
	if (content)
	{
		new->content = (void*)content;
		new->content_size = content_size;
		new->next = NULL;
	}
	else
	{
		new->content = NULL;
		new->content_size = 0;
		new->next = NULL;
	}
	return (new);
}
