/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skerekes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/02 17:18:53 by skerekes          #+#    #+#             */
/*   Updated: 2015/11/02 17:34:27 by skerekes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	toFound;
	int		i;

	i = ft_strlen(s);
	toFound = (char)c;
	while (i != 0 && s[i] != toFound)
	{
		i--;
	}
	if (s[i] == toFound)
	{
		return ((char*)&s[i]);
	}
	return (NULL);
}
