/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skerekes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/16 17:36:53 by skerekes          #+#    #+#             */
/*   Updated: 2015/12/20 12:38:52 by alstanci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		words_count(char const *s, char c)
{
	int	i;
	int	in_word;
	int	count;

	i = 0;
	in_word = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c && in_word == 1)
			in_word = 0;
		if (s[i] != c && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		i++;
	}
	return (count);
}

int		letter_count(char const *s, char c, int i)
{
	int		count;

	count = 0;
	while (s[i] != c && s[i])
	{
		count++;
		i++;
	}
	return (count);
}

char	**ft_strsplit(char const *s, char c)
{
	int		count;
	char	**src;
	int		row;
	int		i;

	if (s == NULL)
		return (NULL);
	count = words_count(s, c);
	src = (char**)malloc(sizeof(char*) * (count + 1));
	if (src == NULL)
		return (NULL);
	i = 0;
	row = 0;
	while (count > 0)
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		src[row] = ft_strsub(s, i, letter_count(s, c, i));
		row++;
		i = i + letter_count(s, c, i);
		count--;
	}
	src[row] = 0;
	return (src);
}
