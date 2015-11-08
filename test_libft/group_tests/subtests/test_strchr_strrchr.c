#include "libft.h"
#include <stdio.h>

void	test_strchr_vs(char *s, int n, int *success)
{
		if (strchr(s, n) != ft_strchr(s, n))
		{
				printf("ft_strchr is wrong at \"%s\", %d\n", s, n);
				*success = 0;
		}
}

void	test_strrchr_vs(char *s, int n, int *success)
{
		if (strrchr(s, n) != ft_strrchr(s, n))
		{
				printf("ft_strrchr is wrong at \"%s\", %d\n", s, n);
				*success = 0;
		}
}

void	test_strchr_strrchr(void)
{
		int		success;

		success = 1;
		if (success == 1)
				test_strchr_vs("abcd", 'a', &success);
		if (success == 1)
				test_strchr_vs("abcdabc", 'a', &success);
		if (success == 1)
				test_strchr_vs("abcd", 'd', &success);
		if (success == 1)
				test_strchr_vs("", 'a', &success);
		if (success == 1)
				test_strchr_vs("abcd", 0, &success);
		if (success == 1)
				test_strchr_vs("abcdabc", 42, &success);
		if (success == 1)
				printf("ft_strchr is correct\n");
	
		success = 1;
		if (success == 1)
				test_strrchr_vs("abcd", 'a', &success);
		if (success == 1)
				test_strrchr_vs("abcdabc", 'a', &success);
		if (success == 1)
				test_strrchr_vs("abcd", 'd', &success);
		if (success == 1)
				test_strrchr_vs("", 'a', &success);
		if (success == 1)
				test_strrchr_vs("abcd", 0, &success);
		if (success == 1)
				test_strrchr_vs("abcdabc", 42, &success);
		if (success == 1)
				printf("ft_strrchr is correct\n");
}
