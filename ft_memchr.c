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
	size_t i;

	i = 0;
	while (s && i < n)
	{
		if (*(unsigned char*)(s + i) == (unsigned char)c)
			return ((unsigned char*)(s + i));
		else
			i++;
	}
	return (0);
}
