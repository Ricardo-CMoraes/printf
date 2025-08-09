/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rida-cos <rida-cos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 00:07:32 by rdcm              #+#    #+#             */
/*   Updated: 2025/08/09 15:15:25 by rida-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

static void	ft_putnbr_hex(unsigned int nb, char type)
{
	char	*base_upper;
	char	*base_lower;

	base_upper = "0123456789ABCDEF";
	base_lower = "0123456789abcdef";
	if (nb < 0)
	{
		write (1, "-", 1);
		nb = -nb;
	}
	if (nb >= 16)
	{
		ft_putnbr_hex(nb / 16, type);
		nb = nb % 16;
	}
	if (nb < 16)
	{
		if (type == 'x')
			ft_putchar(base_lower[nb]);
		else
			ft_putchar(base_upper[nb]);
	}
}

int	ft_puthex(unsigned int nb, char type)
{
	ft_putnbr_hex(nb, type);
	return (n_digits(nb, 16));
}
