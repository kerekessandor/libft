#include "libft.h"
#include <stdio.h>

void	test_memset_vs(void *m1, void *m2, int c, int n, int *success)
{
		memset(m1, c, n);
		ft_memset(m2, c, n);
		if (memcmp(m1, m2, 20) != 0)
		{
				printf("ft_memset is wrong\n");
				*success = 0;
		}
}

void	test_bzero_vs(void *m1, void *m2, int n, int *success)
{
		bzero(m1, n);
		ft_bzero(m2, n);
		if (memcmp(m1, m2, 20) != 0)
		{
				printf("ft_bzero is wrong\n");
				*success = 0;
		}
}

void	test_memset_bzero(void)
{
		char	*s1;
		char	*s2;
		int		success;

		s1 = (char*)malloc(20);
		s2 = (char*)malloc(20);
		memset(s1, 48, 20);
		memset(s2, 48, 20);
		success = 1;
		if (success == 1)
				test_memset_vs(s1, s2, 42, 7, &success);
		if (success == 1)
				test_memset_vs(s1, s2, 95, 20, &success);
		if (success == 1)
				test_memset_vs(s1, s2, 55, 0, &success);
		if (success == 1)
				test_memset_vs(s1, s2, 0, 3, &success);
		if (success == 1)
				test_memset_vs(s1, s2, 48, 15, &success);
		if (success == 1)
				printf("ft_memset is correct\n");
		memset(s1, 42, 20);
		memset(s2, 42, 20);
		success = 1;
		if (success == 1)
		test_bzero_vs(s1, s2, 4, &success);
		if (success == 1)
		test_bzero_vs(s1, s2, 16, &success);
		if (success == 1)
				printf("ft_bzero is correct\n");
}
