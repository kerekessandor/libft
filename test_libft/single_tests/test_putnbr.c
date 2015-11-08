/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_putnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/20 22:39:11 by jfazakas          #+#    #+#             */
/*   Updated: 2015/10/20 22:44:10 by jfazakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(void)
{
	ft_putnbr(-2147483648);
	ft_putchar('\n');
	ft_putnbr(2147483647);
	ft_putchar('\n');
	ft_putnbr(-125);
	ft_putchar('\n');
	ft_putnbr(125);
	ft_putchar('\n');
	ft_putnbr(-10);
	ft_putchar('\n');
	ft_putnbr(10);
	ft_putchar('\n');
	ft_putnbr(-4);
	ft_putchar('\n');
	ft_putnbr(4);
	ft_putchar('\n');
	ft_putnbr(0);
	ft_putchar('\n');
	return (0);
}
