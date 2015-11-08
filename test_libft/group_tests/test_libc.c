#include "libft.h"
#include <ctype.h>
#include <stdio.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>

void	test_atoi(void);
void	test_strcmp_strncmp(void);
void	test_strstr_strnstr(void);
void	test_strchr_strrchr(void);
void	test_strcat_strncat_strlcat(void);
void	test_strcpy_strncpy(void);
void	test_strlen_strdup(void);
void	test_memset_bzero(void);
void	test_memcmp(void);
void	test_memcpy_memccpy(void);
void	test_memchr(void);

void	test_group_is_to(int (*f)(int), int (*libc)(int), char *name)
{
		int		index;

		index = 0;
		while (index < 256)
		{
				if ((*f)(index) != (*libc)(index))
				{
						printf("%s failed while trying %d: ", name, index);
						printf("%d %d\n", (*f)(index), (*libc)(index));
						return ;
				}
				index++;
		}
		printf("%s is correct\n", name);
}

int		main(void)
{
		test_memset_bzero();
		test_memcpy_memccpy();
		test_memchr();
		test_memcmp();
		test_strlen_strdup();
		test_strcpy_strncpy();
		test_strcat_strncat_strlcat();
		test_strchr_strrchr();
		test_strstr_strnstr();
		test_strcmp_strncmp();
		test_atoi();
		test_group_is_to(&ft_isalpha, &isalpha, "ft_isalpha");
		test_group_is_to(&ft_isdigit, &isdigit, "ft_isdigit");
		test_group_is_to(&ft_isalnum, &isalnum, "ft_isalnum");
		test_group_is_to(&ft_isascii, &isascii, "ft_isascii");
		test_group_is_to(&ft_isprint, &isprint, "ft_isprint");
		test_group_is_to(&ft_toupper, &toupper, "ft_toupper");
		test_group_is_to(&ft_tolower, &tolower, "ft_tolower");
		return (0);
}
