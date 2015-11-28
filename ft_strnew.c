/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skerekes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/16 15:57:52 by skerekes          #+#    #+#             */
/*   Updated: 2015/11/16 16:05:08 by skerekes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*src;

	src = ft_memalloc(size + 1);
	if (src == NULL)
		return (NULL);
	ft_bzero(src, size + 1);
	return (src);
}
