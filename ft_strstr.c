/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skerekes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/02 17:34:52 by skerekes          #+#    #+#             */
/*   Updated: 2015/11/08 15:47:26 by skerekes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	size_t	i;
	size_t	j;
	char	*str;
	size_t	start;

	i = 0;
	str = (char*)s1;
	if (*s2 == '\0' || *s1 == *s2)
		return (str);
	while (s1[i])
	{
		j = 0;
		start = i;
		while (s1[i] && (s1[i] == s2[j]))
		{
			j++;
			i++;
		}
		if (s2[j] == '\0')
		{
			return (&str[start]);
		}
		i++;
	}
	return (NULL);
}
