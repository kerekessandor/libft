/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skerekes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/02 15:17:00 by skerekes          #+#    #+#             */
/*   Updated: 2015/11/02 18:53:05 by skerekes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int		main(void)
{
	printf("my ft_strncmp: %d", ft_strncmp("s", "s", 15));
	printf("\n");
	printf("original strncmp: %d", strncmp("s", "s", 15));
	return (0);
}
