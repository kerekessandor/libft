/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skerekes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/08 13:47:12 by skerekes          #+#    #+#             */
/*   Updated: 2015/11/11 20:33:33 by skerekes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	to_found;
	char	*src;
	size_t	i;

	to_found = (char)c;
	src = (char*)s;
	i = 0;
	while (i < n)
	{
		if (src[i] == to_found)
			return (&src[i]);
		i++;
	}
	return (NULL);
}
