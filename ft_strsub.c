/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skerekes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/16 17:11:11 by skerekes          #+#    #+#             */
/*   Updated: 2015/11/22 15:23:08 by skerekes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*src;
	unsigned int	i;

	src = (char*)malloc(sizeof(*src) * len + 1);
	if (src == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		src[i] = s[start];
		start++;
		i++;
	}
	src[i] = '\0';
	return (src);
}
