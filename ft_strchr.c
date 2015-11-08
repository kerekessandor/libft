/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skerekes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/02 16:32:08 by skerekes          #+#    #+#             */
/*   Updated: 2015/11/08 14:41:04 by skerekes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	toFound;

	toFound = (char)c;
	while (*s != '\0' && *s != toFound)
	{
		s++;
	}
	if (*s == toFound)
		return ((char*)s);
	return NULL;
}
