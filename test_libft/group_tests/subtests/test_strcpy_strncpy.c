#include "libft.h"
#include <stdio.h>

void	test_strcpy_vs(char *s1, char *s2, char *dst, char *src, int *success)
{
		char	*p1;
		char	*p2;
		char	*r1;
		char	*r2;

		p1 = strdup(s1);
		p2 = strdup(s2);
		strcpy(p1, dst);
		strcpy(p2, dst);
		r1 = strcpy(p1, src);
		r2 = ft_strcpy(p2, src);
		if (memcmp(r1, r2, 20) != 0)
		{
				*success = 0;
				printf("ft_strcpy is wrong at \"%s\", \"%s\"\n", dst, src);
				return ;
		}
}

void	test_strncpy_vs(char *s1, char *s2, char *dst, char *src, int *success)
{
		char	*p1;
		char	*p2;
		char	*r1;
		char	*r2;
		int		n;

		n = 0;
		while (n <= 20)
		{
				p1 = strdup(s1);
				p2 = strdup(s2);
				strcpy(p1, dst);
				strcpy(p2, dst);
				r1 = strncpy(p1, src, n);
				r2 = ft_strncpy(p2, src, n);
				if (memcmp(r1, r2, 20) != 0)
				{
						*success = 0;
						printf("ft_strncpy is wrong at \"%s\", \"%s\", %d\n", dst, src, n);
						return ;
				}
				n++;
		}
}

void	test_strcpy_strncpy(void)
{
		int		success;
		char	*s1;
		char	*s2;

		s1 = (char*)malloc(20);
		bzero(s1, 20);
		memset(s1, 42, 19);
		s2 = (char*)malloc(20);
		bzero(s2, 20);
		memset(s2, 42, 19);
		success = 1;
		if (success == 1)
				test_strcpy_vs(s1, s2, "abc", "xyz", &success);
		if (success == 1)
				test_strcpy_vs(s1, s2, "abcdef", "x", &success);
		if (success == 1)
				test_strcpy_vs(s1, s2, "a", "uvwxyz", &success);
		if (success == 1)
				test_strcpy_vs(s1, s2, "", "wxyz", &success);
		if (success == 1)
				test_strcpy_vs(s1, s2, "abcdefg", "", &success);
		if (success == 1)
				test_strcpy_vs(s1, s2, "", "", &success);
		if (success == 1)
				printf("ft_strcpy is correct\n");
		success = 1;
		if (success == 1)
				test_strncpy_vs(s1, s2, "abc", "xyz", &success);
		if (success == 1)
				test_strncpy_vs(s1, s2, "abcdef", "x", &success);
		if (success == 1)
				test_strncpy_vs(s1, s2, "a", "uvwxyz", &success);
		if (success == 1)
				test_strncpy_vs(s1, s2, "", "wxyz", &success);
		if (success == 1)
				test_strncpy_vs(s1, s2, "abcdefg", "", &success);
		if (success == 1)
				test_strncpy_vs(s1, s2, "", "", &success);
		if (success == 1)
				printf("ft_strncpy is correct\n");
}
