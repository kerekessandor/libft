#include "libft.h"
#include <stdio.h>

void	test_strstr_vs(char *s1, char *s2, int *success)
{
		if (ft_strstr(s1, s2) != strstr(s1, s2))
		{
				*success = 0;
				printf("ft_strstr wrong at \"%s\", \"%s\"\n", s1, s2);
		}
}
/*
void	test_strnstr_vs(char *s1, char *s2, int *success)
{
		int		i;

		i = 0;
		while (i < 128)
		{
				if (ft_strnstr(s1, s2, i) != strnstr(s1, s2, i))
				{
						*success = 0;
						printf("ft_strnstr wrong at \"%s\", \"%s\", %d\n", s1, s2, i);
						return ;
				}
				else
						printf("ft_strnstr right at \"%s\", \"%s\", %d\n", s1, s2, i);
				i++;
		}
}
*/
void	test_strstr_strnstr(void)
{
		int		success;

		success = 1;
		if (success == 1)
				test_strstr_vs("abcedefg", "ef", &success);
		if (success == 1)
				test_strstr_vs("abc", "", &success);
		if (success == 1)
				test_strstr_vs("abc", "abc", &success);
		if (success == 1)
				test_strstr_vs("abc", "abcd", &success);
		if (success == 1)
				test_strstr_vs("abc", "bc", &success);
		if (success == 1)
				test_strstr_vs("", "bc", &success);
		if (success == 1)
				test_strstr_vs("", "", &success);
		if (success == 1)
				printf("ft_strstr is correct\n");
/*
		success = 1;
		if (success == 1)
				test_strnstr_vs("abcedefg", "ef", &success);
		if (success == 1)
				test_strnstr_vs("abc", "", &success);
		if (success == 1)
				test_strnstr_vs("abc", "abc", &success);
		if (success == 1)
				test_strnstr_vs("abc", "abcd", &success);
		if (success == 1)
				test_strnstr_vs("abc", "bc", &success);
		if (success == 1)
				test_strnstr_vs("", "bc", &success);
		if (success == 1)
				test_strnstr_vs("", "", &success);
		if (success == 1)
				printf("ft_strstr is correct\n");
*/
}
