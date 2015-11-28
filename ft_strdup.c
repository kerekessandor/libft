/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skerekes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/11 20:37:37 by skerekes          #+#    #+#             */
/*   Updated: 2015/11/16 19:18:34 by skerekes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*dest;

	i = 0;
	if (s == NULL)
	{
		return (0);
	}
	dest = (char*)malloc(sizeof(*dest) * ft_strlen(s));
	while (s[i])
	{
		dest[i] = s[i];
		i++;
	}
	return (dest);
}
