# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_strncpy                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: skerekes <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/08 14:27:24 by skerekes          #+#    #+#              #
#    Updated: 2015/11/08 14:39:00 by skerekes         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t	i;
	size_t	src_len;

	src_len = ft_strlen(src);
	i = 0;
	while (i < n && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	if (i < src_len)
	{
		while (src[i])
		{
			dst[i] = src[i];
			i++;
		}
	}
	return (dst);
}
