#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*dest;

	i = 0;
	if (s == NULL)
		{
			return (0);
		}
	dest = (char*)malloc(sizeof(*dest) * ft_strlen(s));
	while (s[i])
	{
		dest[i] = s[i];
		i++;
	}
	return (dest);
}
