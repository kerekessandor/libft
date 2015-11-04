/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skerekes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/02 15:17:00 by skerekes          #+#    #+#             */
/*   Updated: 2015/11/04 15:28:12 by skerekes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int		main(void)
{
	const char src[50] = "http://www.tutorialspoint.com";
	char dest[50];

	ft_memcpy(dest, src, 5);
	printf("After ft_memcpy dest = %s\n", dest);
	memcpy(dest, src, 5);
	printf("After memcpy dest = %s\n", dest);

	return (0);
}
