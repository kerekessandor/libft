#include "libft.h"
#include <stdio.h>

void	test_memcpy_vs(void *m1, void *m2, char *s, int *success)
{
		memcpy(m1, s, strlen(s));
		ft_memcpy(m2, s, strlen(s));
		if (memcmp(memcpy(m1, s, strlen(s)), ft_memcpy(m2, s, strlen(s)), 20) != 0)
		{
				printf("ft_memcpy is wrong at \"%s\"\n", s);
				*success = 0;
		}
}

void	test_memccpy_vs(void *m1, void *m2, char *s, int c, int *success)
{
		void	*p1;
		void	*p2;

		memccpy(m1, s, c, strlen(s));
		memccpy(m2, s, c, strlen(s));
		if (memcmp(m1, m2, 20) != 0)
		{
				printf("ft_memccpy is wrong at \"%s\", %d\n", s, c);
				*success = 0;
				return ;
		}
		p1 = memccpy(m1, s, c, strlen(s));
		p2 = memccpy(m1, s, c, strlen(s));
		if (p1 != p2)
		{
				printf("ft_memccpy is wrong(2) at \"%s\", %d\n", s, c);
				*success = 0;
		}
}

void	test_memcpy_memccpy(void)
{
		void	*m1;
		void	*m2;
		int		success;

		m1 = malloc(20);
		m2 = malloc(20);
		memset(m1, 42, 20);
		memset(m2, 42, 20);
		success = 1;
		if (success == 1)
				test_memcpy_vs(m1, m2, "abc", &success);
		if (success == 1)
				test_memcpy_vs(m1, m2, "", &success);
		if (success == 1)
				test_memcpy_vs(m1, m2, "000000", &success);
		if (success == 1)
				test_memcpy_vs(m1, m2, "vlkandjnal", &success);
		bzero(m1, 20);
		bzero(m2, 20);
		if (success == 1)
				test_memcpy_vs(m1, m2, "xyzab", &success);
		if (success == 1)
				test_memcpy_vs(m1, m2, "o", &success);
		if (success == 1)
				printf("ft_memcpy is correct\n");
		success = 1;
		memset(m1, 42, 20);
		memset(m2, 42, 20);
		if (success == 1)
				test_memccpy_vs(m1, m2, "abcdef", 97, &success);
		if (success == 1)
				test_memccpy_vs(m1, m2, "xyzxyz", 0, &success);
		if (success == 1)
				test_memccpy_vs(m1, m2, "0000000000", 48, &success);
		if (success == 1)
				test_memccpy_vs(m1, m2, "abcdef", 48, &success);
		if (success == 1)
				test_memccpy_vs(m1, m2, "", 48, &success);
		if (success == 1)
				test_memccpy_vs(m1, m2, "abcdefghij", 104, &success);
		if (success == 1)
				printf("ft_memccpy is correct\n");
}
