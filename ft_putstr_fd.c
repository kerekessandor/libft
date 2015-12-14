/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skerekes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/16 20:13:56 by skerekes          #+#    #+#             */
/*   Updated: 2015/11/23 16:58:51 by skerekes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char const *s, int fd)
{
	char *ptr;

	ptr = (char*)s;
	while (*ptr != '\0')
	{
		ft_putchar_fd(*ptr, fd);
		ptr++;
	}
}
