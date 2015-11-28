/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skerekes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/16 16:41:23 by skerekes          #+#    #+#             */
/*   Updated: 2015/11/23 17:00:31 by skerekes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char			*src;
	unsigned int	size;
	unsigned int	i;

	size = ft_strlen(s);
	src = (char*)malloc(sizeof(*src) * size);
	i = 0;
	if (src == NULL)
		return (NULL);
	while (s[i])
	{
		src[i] = f(s[i]);
		i++;
	}
	src[i] = '\0';
	return (src);
}
