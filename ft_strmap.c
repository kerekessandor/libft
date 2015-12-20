/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skerekes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/16 16:41:23 by skerekes          #+#    #+#             */
/*   Updated: 2015/12/20 12:25:01 by alstanci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char *map;
	char *ptr;

	if (s == NULL || f == NULL)
		return (NULL);
	if (!(map = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1))))
		map = NULL;
	else
	{
		ptr = map;
		while (*s)
		{
			*ptr = f(*s);
			ptr++;
			s++;
		}
		*ptr = '\0';
	}
	return (map);
}
