#include "libft.h"
#include <stdio.h>

void	test_strlen_vs(char *s, int *success)
{
		if (strlen(s) != ft_strlen(s))
		{
				printf("ft_strlen wrong at \"%s\"\n", s);
				*success = 0;
		}
}

void	test_strdup_vs(char *s, int *success)
{
		if (memcmp(strdup(s), ft_strdup(s), strlen(s) + 1) != 0)
		{
				printf("ft_strdup wrong at \"%s\"\n", s);
				*success = 0;
		}
}

void	test_strlen_strdup(void)
{
		int		success;

		success = 1;
		if (success == 1)
				test_strlen_vs("abc", &success);
		if (success == 1)
				test_strlen_vs("a", &success);
		if (success == 1)
				test_strlen_vs("", &success);
		if (success == 1)
				test_strlen_vs("abcdefg", &success);
		if (success == 1)
				printf("ft_strlen is correct\n");
		success = 1;
		if (success == 1)
				test_strdup_vs("abc", &success);
		if (success == 1)
				test_strdup_vs("a", &success);
		if (success == 1)
				test_strdup_vs("", &success);
		if (success == 1)
				test_strdup_vs("abcdefg", &success);
		if (success == 1)
				printf("ft_strdup is correct\n");
}
