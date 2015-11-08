/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_sup1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/29 13:33:09 by jfazakas          #+#    #+#             */
/*   Updated: 2015/11/03 09:24:08 by jfazakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	print_split(char **split)
{
	int		index;

	ft_putstr("->");
	index = 0;
	while (split[index] != 0)
	{
		ft_putchar('\"');
		ft_putstr(split[index]);
		ft_putstr("\" ");
		index++;
	}
	ft_putchar('\n');
}

int		main(void)
{
	printf("\n-->FT_STRSUB<--\n");
	printf("(\"abcdefghij\", 3, 4)\n");
	printf("->\"%s\"\n", ft_strsub("abcdefghij", 3, 4));
	printf("(\"abcdefghij\", 1, 7)\n");
	printf("->\"%s\"\n", ft_strsub("abcdefghij", 1, 7));

	printf("\n-->FT_STRJOIN<--\n");
	printf("(\"abcd\", \"xyz\")\n");
	printf("->\"%s\"\n", ft_strjoin("abcd", "xyz"));
	printf("(\"abcd\", \"\")\n");
	printf("->\"%s\"\n", ft_strjoin("abcd", ""));
	printf("(\"\", \"xyz\")\n");
	printf("->\"%s\"\n", ft_strjoin("", "xyz"));

	printf("\n-->FT_STRTRIM<--\n");
	printf("(\"abcdef\")\n");
	printf("->\"%s\"\n", ft_strtrim("abcdef"));
	printf("(\"  ab  cdef  \")\n");
	printf("->\"%s\"\n", ft_strtrim("  ab  cdef  "));
	printf("(\" \\t\\n ab  cdef\\t\\n  \")\n");
	printf("->\"%s\"\n", ft_strtrim(" \t\n ab  cdef\t\n  "));
	printf("(\"   \")\n");
	printf("->\"%s\"\n", ft_strtrim("   "));

	printf("\n-->FT_STRSPLIT<--\n");
	printf("(\"*salut*les***etudiants*\", 42)\n");
	print_split(ft_strsplit("*salut*les***etudiants*", 42));
	printf("(\"*salut*les***etudiants*\", 97)\n");

	printf("\n-->FT_ITOA<--\n");
	printf("42\n");
	printf("->\"%s\"\n", ft_itoa(42));
	printf("0\n");
	printf("->\"%s\"\n", ft_itoa(0));
	printf("-17\n");
	printf("->\"%s\"\n", ft_itoa(-17));
	printf("-1723\n");
	printf("->\"%s\"\n", ft_itoa(-1723));
	printf("2147483647\n");
	printf("->\"%s\"\n", ft_itoa(2147483647));
	printf("-2147483648\n");
	printf("->\"%s\"\n", ft_itoa(-2147483648));
	return (0);
}
