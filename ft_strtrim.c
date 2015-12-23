/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skerekes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/16 17:27:17 by skerekes          #+#    #+#             */
/*   Updated: 2015/12/21 19:23:04 by skerekes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s)
{
	char			*retur;
	unsigned int	start;
	unsigned int	end;
	unsigned int	aux;

	if (s == 0)
		return (NULL);
	end = ft_strlen(s) - 1;
	start = 0;
	aux = 0;
	if (!(retur = (char*)malloc(sizeof(char) * end + 1)))
		return (NULL);
	while (s[start] == ' ' || s[start] == '\t' || s[start] == '\n')
		start++;
	if (s[start] == '\0')
		return (ft_strdup(""));
	while (s[end] == ' ' || s[end] == '\t' || s[end] == '\n')
		end--;
	while (start <= end)
	{
		retur[aux++] = s[start++];
	}
	retur[aux] = '\0';
	return (retur);
}
