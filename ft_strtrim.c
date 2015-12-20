/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skerekes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/16 17:27:17 by skerekes          #+#    #+#             */
/*   Updated: 2015/12/20 12:41:44 by alstanci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int		last_letter(char const *s)
{
	unsigned int	size;
	unsigned int	i;

	size = ft_strlen(s);
	i = 0;
	while (!(ft_isalpha(s[size])) && s[i])
	{
		size--;
		i++;
	}
	if (size != ft_strlen(s))
		return (size);
	else
		return (0);
}

char				*ft_strtrim(char const *s)
{
	char			*src;
	unsigned int	i;
	unsigned int	j;
	unsigned int	was_word;

	src = (char*)malloc(sizeof(*src) * ft_strlen(s));
	if (src == NULL)
		return (NULL);
	i = 0;
	j = 0;
	was_word = 0;
	if (last_letter(s) == 0)
		return (src);
	while (s[i] && i <= last_letter(s))
	{
		if (ft_isalpha(s[i]))
			was_word = 1;
		while (((s[i] >= 9 && s[i] <= 13) || s[i] == 32) && was_word == 0)
			i++;
		src[j] = s[i];
		i++;
		j++;
	}
	src[j] = '\0';
	return (src);
}
