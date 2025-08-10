/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdcm <rdcm@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 19:54:25 by rdcm              #+#    #+#             */
/*   Updated: 2025/08/09 21:41:34 by rdcm             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

static void	ft_putnbr_hex(unsigned long long nbr)
{
	unsigned long long	base_n;
	char				*base;
	unsigned long long	nb;

	base_n = 16;
	base = "0123456789abcdef";
	nb = nbr;
	if (base_n <= 1)
		return ;
	if (nb >= base_n)
	{
		ft_putnbr_hex(nb / base_n);
		nb = nb % base_n;
	}
	if (nb < base_n)
	{
		ft_putchar(base[nb]);
	}
}

int	ft_putptr(void *addr)
{
	if (addr == 0)
		return (write(1, "(nil)", 5));
	write(1, "0x", 2);
	ft_putnbr_hex((unsigned long long)addr);
	return (n_digits((unsigned long long)addr, 16) + 2);
}
