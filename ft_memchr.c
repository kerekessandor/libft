/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skerekes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/08 13:47:12 by skerekes          #+#    #+#             */
/*   Updated: 2015/11/08 14:17:30 by skerekes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	toFound;
	char	*src;
	size_t	i;

	toFound = (char)c;
	src = (char*)s;
	i = 0;
	while (i < n && src[i])
	{
		if (src[i] == toFound)
			return (&src[i]);
		i++;
	}
	return (NULL);
}
