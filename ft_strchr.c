/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skerekes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/02 16:32:08 by skerekes          #+#    #+#             */
/*   Updated: 2015/11/11 20:37:27 by skerekes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	to_found;

	to_found = (char)c;
	while (*s != '\0' && *s != to_found)
	{
		s++;
	}
	if (*s == to_found)
		return ((char*)s);
	return (NULL);
}
