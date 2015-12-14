/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skerekes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/08 13:20:12 by skerekes          #+#    #+#             */
/*   Updated: 2015/11/11 20:35:20 by skerekes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*cpy;
	size_t			i;

	i = 0;
	if (!(cpy = (unsigned char*)malloc(sizeof(*cpy) * (len + 1))))
		return (NULL);
	while (i < len)
	{
		*(cpy + i) = *(unsigned char*)(src + i);
		i++;
	}
	i = 0;
	while (i < len)
	{
		*(unsigned char*)(dst + i) = *(cpy + i);
		i++;
	}
	free(cpy);
	return (dst);
}
