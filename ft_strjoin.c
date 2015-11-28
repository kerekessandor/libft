/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skerekes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/16 17:17:28 by skerekes          #+#    #+#             */
/*   Updated: 2015/11/22 13:57:52 by skerekes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*src;
	unsigned int	i;
	unsigned int	j;

	src = (char*)malloc(sizeof(src) * ((ft_strlen(s1) + ft_strlen(s2)) + 1));
	if (src == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		src[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		src[i] = s2[j];
		i++;
		j++;
	}
	src[i] = '\0';
	return (src);
}
