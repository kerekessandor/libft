/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skerekes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/04 15:45:36 by skerekes          #+#    #+#             */
/*   Updated: 2015/11/11 20:32:59 by skerekes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t i;

	i = 0;
	while(i < n)
	{
		if (*(unsigned char*)(src + i) == (unsigned char)c)
			return (dst + i + 1);
		else
			i++;
	}
	return (0);
}
