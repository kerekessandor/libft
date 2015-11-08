#include "libft.h"
#include <stdio.h>

void	test_memcmp_vs(char *s1, char *s2, int max_n, int *success)
{
		int		n;

		n = 0;
		while (n <= max_n)
		{
				if (memcmp(s1, s2, n) != ft_memcmp(s1, s2, n))
				{
						printf("ft_memcmp wrong at \"%s\", \"%s\", %d\n", s1, s2, n);
						*success = 0;
						return ;
				}
				n++;
		}
}

void	test_memcmp(void)
{
		int		success;

		success = 1;
		if (success == 1)
		test_memcmp_vs("abc", "abc", 4, &success);
		if (success == 1)
		test_memcmp_vs("abcdefg", "abccefg", 8, &success);
		if (success == 1)
		test_memcmp_vs("abcdefg", "bccefgd", 8, &success);
		if (success == 1)
		test_memcmp_vs("abcdefg", "", 8, &success);
		if (success == 1)
		test_memcmp_vs("", "bccefgd", 8, &success);
		if (success == 1)
				printf("ft_memcmp is correct\n");
}
