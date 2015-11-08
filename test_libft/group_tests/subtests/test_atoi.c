#include "libft.h"
#include <stdio.h>

void	test_atoi_vs(char *s, int *success)
{
		if (ft_atoi(s) != atoi(s))
		{
				*success = 0;
				printf("ft_atoi failed at \"%s\"\n", s);
		}
}

void	test_atoi(void)
{
		int		success;

		success = 1;
		if (success == 1)
		test_atoi_vs("10", &success);
		if (success == 1)
		test_atoi_vs("0", &success);
		if (success == 1)
		test_atoi_vs("-10", &success);
		if (success == 1)
		test_atoi_vs("-19", &success);
		if (success == 1)
		test_atoi_vs("-2147483648", &success);
		if (success == 1)
		test_atoi_vs("2147483647", &success);
		if (success == 1)
		test_atoi_vs("15652", &success);
		if (success == 1)
		test_atoi_vs("-5", &success);
		if (success == 1)
		test_atoi_vs("--5", &success);
		if (success == 1)
		test_atoi_vs("++5", &success);
		if (success == 1)
		test_atoi_vs("-+5", &success);
		if (success == 1)
		test_atoi_vs(" 14gsf", &success);
		if (success == 1)
		test_atoi_vs(" \t\n\v\r\f42", &success);
		if (success == 1)
		test_atoi_vs(" \t\n\v\r\f42", &success);
		if (success == 1)
		test_atoi_vs(" \t\n\v\r\f42 2", &success);
		if (success == 1)
		test_atoi_vs(" \t\n\v\r\f42-3", &success);
		if (success == 1)
				printf("ft_atoi is correct\n");
}
