/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skerekes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/02 17:18:53 by skerekes          #+#    #+#             */
/*   Updated: 2015/11/11 20:38:58 by skerekes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	to_found;
	int		i;

	i = ft_strlen(s);
	to_found = (char)c;
	while (i != 0 && s[i] != to_found)
	{
		i--;
	}
	if (s[i] == to_found)
	{
		return ((char*)&s[i]);
	}
	return (NULL);
}
