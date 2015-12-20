/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skerekes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/16 16:53:07 by skerekes          #+#    #+#             */
/*   Updated: 2015/12/20 12:42:18 by alstanci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*src;
	unsigned int	size;
	unsigned int	i;

	if (s == NULL || f == NULL)
		return (NULL);
	size = ft_strlen(s);
	src = (char*)malloc(sizeof(*src) * size);
	i = 0;
	if (src == NULL)
		return (NULL);
	while (s[i])
	{
		src[i] = f(i, s[i]);
		i++;
	}
	src[i] = '\0';
	return (src);
}
