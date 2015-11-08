/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_putstr_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/22 15:55:19 by jfazakas          #+#    #+#             */
/*   Updated: 2015/10/22 15:55:58 by jfazakas         ###   ########.fr       */
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
		ft_putstr_fd(av[1], fd);
	if (close(fd) == -1)
		ft_putendl("Error");
	return (0);
}
