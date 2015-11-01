#ifndef LIBFT_H
# define LIBFT_H

# include<unistd.h>
# include<stdlib.h> 

char	*ft_strdup(const char *s);
char	*ft_strcpy(char *dest, const char *src);
char	*ft_strncpy(char *dest, const char *src, size_t n);
char	*ft_strcat(char *dest, const *src);
void	ft_putchar(char c);
void	ft_putstr(char *s);
int		ft_strlen(const char *s);

#endif
