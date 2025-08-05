/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rida-cos <rida-cos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 23:06:09 by rdcm              #+#    #+#             */
/*   Updated: 2025/08/04 21:29:35 by rida-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	put_int(unsigned int n, int fd)
{
	char	c;

	if (n < 0)
	{
		write (fd, "-", 1);
		n = (-1) * n;
	}
	if (n >= 10)
	{
		put_int(n / 10, fd);
		n = n % 10;
	}
	if (n < 10)
	{
		c = n + '0';
		write(fd, &c, 1);
	}
}

unsigned int	ft_putnbr_unsigned(unsigned int n, int fd)
{
	put_int(n, fd);
	return (n_digits(n, 10));
}
