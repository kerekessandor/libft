/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skerekes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/02 15:17:00 by skerekes          #+#    #+#             */
/*   Updated: 2015/11/08 15:47:13 by skerekes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int		main(void)
{
	char	dst[200] = "bla kla bla";
	char	src[200] = "cccc ccccc cccc";
	printf("%s", ft_strstr(dst, src));
	printf("\n");
	printf("%s", strstr(dst, src));
	return (0);
}
