#include "libft.h"
#include <stdio.h>

void	ft_detail(char *s, int n)
{
	int		i;

	i = 0;
	while (i < n)
	{
		ft_putnbr(s[i]);
		ft_putchar('\t');
		i++;
	}
	ft_putchar('\n');
}

void	test_strcat_vs(char *s1, char *s2, char *dst, char *src, int *success)
{
	char	*p1;
	char	*p2;
	int		index;

	strcpy(s1, dst);
	strcpy(s2, dst);
	p1 = strcat(s1, src);
	p2 = ft_strcat(s2, src);
	index = 0;
	while (index < 20)
	{
		if (p1[index] != p2[index])
		{
			*success = 0;
			printf("ft_strcat is wrong at \"%s\", \"%s\"\n", dst, src);
			return ;
		}
		index++;
	}
}

void	test_strncat_vs(char *s1, char *s2, char *dst, char *src, int *succes)
{
	char	*p1;
	char	*p2;
	int		n;

	n = 0;
	while (n <= 20)
	{
		memset(s1, 7, 20);
		memset(s2, 7, 20);
		strcpy(s2, dst);
		strcpy(s1, dst);
		p1 = strncat(s1, src, n);
		p2 = ft_strncat(s2, src, n);
		if (memcmp(p1, p2, 20) != 0)
		{
			*succes = 0;
			printf("ft_strncat is wrong at \"%s\", \"%s\", %d\n", dst, src, n);
			return ;
		}
		n++;
	}
}

void	test_strlcat_vs(char *s1, char *s2, char *dst, char *src, int *success)
{
	int		n1;
	int		n2;
	int		l;

	l = 0;
	while (l <= 20)
	{
		memset(s1, 48, 20);
		memset(s2, 48, 20);
		strcpy(s1, dst);
		strcpy(s2, dst);
		n1 = strlcat(s1, src, l);
		n2 = strlcat(s2, src, l);
		if (memcmp(s1, s2, 20) != 0 || n1 != n2)
		{
			*success = 0;
			printf("ft_strlcat is wrong at \"%s\", \"%s\", %d\n", dst, src, l);
			ft_detail(s1, 20);
			ft_detail(s2, 20);

			return ;
		}
		l++;
	}
}

void	test_strcat_strncat_strlcat(void)
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
		test_strcat_vs(s1, s2, "abc", "xyz", &success);
	if (success == 1)
		test_strcat_vs(s1, s2, "abcdef", "tuvwxyz", &success);
	if (success == 1)
		test_strcat_vs(s1, s2, "", "xyz", &success);
	if (success == 1)
		test_strcat_vs(s1, s2, "abc", "", &success);
	if (success == 1)
		printf("ft_strcat is correct\n");
	success = 1;
	bzero(s2, 20);
	bzero(s1, 20);
	if (success == 1)
		test_strncat_vs(s1, s2, "abc", "xyz", &success);
	if (success == 1)
		test_strncat_vs(s1, s2, "abcdef", "tuvwxyz", &success);
	if (success == 1)
		test_strncat_vs(s1, s2, "", "xyz", &success);
	if (success == 1)
		test_strncat_vs(s1, s2, "abc", "", &success);
	if (success == 1)
		printf("ft_strncat is correct\n");
	success = 1;
	if (success == 1)
		test_strlcat_vs(s1, s2, "abc", "xyz", &success);
	if (success == 1)
		test_strlcat_vs(s1, s2, "abcdef", "tuvwxyz", &success);
	if (success == 1)
		test_strlcat_vs(s1, s2, "", "xyz", &success);
	if (success == 1)
		test_strlcat_vs(s1, s2, "abc", "", &success);
	if (success == 1)
		printf("ft_strlcat is correct\n");
}
