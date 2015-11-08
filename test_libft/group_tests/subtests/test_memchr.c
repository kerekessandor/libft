#include "libft.h"
#include <stdio.h>

void	test_memchr_vs(void *mem, char *s, int c, int *success)
{
		bzero(mem, 20);
		memcpy(mem, s, strlen(s) + 1);
		if (memchr(mem, c, strlen(s) + 1) != memchr(mem, c, strlen(s) + 1))
		{
				printf("ft_memchr is wrong at \"%s\"\n", s);
				*success = 0;
		}
}

void	test_memchr(void)
{
		void	*mem;
		int		success;

		mem = malloc(20);
		success = 1;
		test_memchr_vs(mem, "abcdef", 98, &success);
		test_memchr_vs(mem, "xyz", 98, &success);
		test_memchr_vs(mem, "abcdef", 0, &success);
		test_memchr_vs(mem, "abcdefghij", 48, &success);
		test_memchr_vs(mem, "", 97, &success);
		if (success == 1)
				printf("ft_memchr is correct\n");
}
