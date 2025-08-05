/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rida-cos <rida-cos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 23:17:39 by rdcm              #+#    #+#             */
/*   Updated: 2025/08/04 21:17:51 by rida-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include "libft/libft.h"
# include <stdarg.h>
# include <stdio.h>

int					ft_printf(const char *text, ...);
int					ft_putstr(char *s, int fd);
int					ft_putnbr(int n, int fd);
int					ft_putptr(void *addr);
unsigned long long	n_digits(unsigned long long n, size_t base);
int					ft_puthex(unsigned long long nb, char type);
unsigned int		ft_putnbr_unsigned(unsigned int n, int fd);

#endif