/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_putchar_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/22 15:22:27 by jfazakas          #+#    #+#             */
/*   Updated: 2015/10/22 15:40:54 by jfazakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "sys/stat.h"
#include "sys/types.h"
#include "fcntl.h"

int		main(int ac, char **av)
{
	int		fd;

	fd = open("text.txt", O_WRONLY | O_CREAT | O_APPEND, S_IRUSR | S_IWUSR);
	if (fd == -1)
		ft_putendl("Error");
	if (ac == 2)
		ft_putchar_fd(av[1][0], fd);
	if (close(fd) == -1)
		ft_putendl("Error");
	return (0);
}
