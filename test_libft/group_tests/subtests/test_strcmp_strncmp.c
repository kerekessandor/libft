#include "libft.h"
#include <stdio.h>

void	test_strcmp_vs(char *s1, char *s2, int *succes)
{
		if (ft_strcmp(s1, s2) != strcmp(s1, s2))
		{
				printf("strcmp is wrong at \"%s\", \"%s\"\n", s1, s2);
				*succes = 0;
		}
}

void	test_strncmp_vs(char *s1, char *s2, int *succes)
{
		size_t	i;

		i = 0;
		while (i < strlen(s1) + 3)
		{
				if (ft_strncmp(s1, s2, i) != strncmp(s1, s2, i))
				{
						printf("strncmp is wrong at \"%s\", \"%s\"\n", s1, s2);
						*succes = 0;
						return ;
				}
				i++;
		}
}

void	test_strcmp_strncmp(void)
{
		int		succes;

		succes = 1;
		if (succes == 1)
				test_strcmp_vs("abc", "abc", &succes);
		if (succes == 1)
				test_strcmp_vs("abc", "abcd", &succes);
		if (succes == 1)
				test_strcmp_vs("abcde", "abcd", &succes);
		if (succes == 1)
				test_strcmp_vs("", "abcd", &succes);
		if (succes == 1)
				test_strcmp_vs("abcde", "", &succes);
		if (succes == 1)
				printf("ft_strcmp is correct\n");

		succes = 1;
		if (succes == 1)
				test_strncmp_vs("abc", "abc", &succes);
		if (succes == 1)
				test_strncmp_vs("abc", "abcd", &succes);
		if (succes == 1)
				test_strncmp_vs("abcde", "abcd", &succes);
		if (succes == 1)
				test_strncmp_vs("", "abcd", &succes);
		if (succes == 1)
				test_strncmp_vs("abcde", "", &succes);
		if (succes == 1)
				printf("ft_strncmp is correct\n");
}
