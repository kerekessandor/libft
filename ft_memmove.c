/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skerekes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/08 13:20:12 by skerekes          #+#    #+#             */
/*   Updated: 2015/11/08 13:46:29 by skerekes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*s;
	char	*d;
	size_t	i;

	s = (char*)dst;
	d = (char*)src;
	i = 0;
	while(i < len && (s[i] || d[i]))
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
