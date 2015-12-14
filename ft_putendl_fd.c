/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skerekes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/16 20:16:06 by skerekes          #+#    #+#             */
/*   Updated: 2015/11/23 16:58:12 by skerekes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	char *ptr;

	ptr = (char*)s;
	ft_putstr_fd(ptr, fd);
	ft_putchar_fd('\n', fd);
}
