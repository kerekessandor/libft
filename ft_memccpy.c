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
	char	*s;
	char	*d;
	int		i;

	s = (char*)src;
	d = (char*)dst;
	i = 0;
	while (n > 0 && s[i] != c)
	{
		d[i] = s[i];
		i++;
		n--;
	}
	if (n == 0)
		return (NULL);
	else
		return (&d[i + 1]);
}
