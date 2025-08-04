/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rida-cos <rida-cos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 18:38:21 by rida-cos          #+#    #+#             */
/*   Updated: 2025/08/02 14:22:00 by rida-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	fill_buffer(char *buffer, int *index, long n)
{
	char	a;

	if (n >= 10)
	{
		fill_buffer(buffer, index, n / 10);
		n = n % 10;
	}
	if (n < 10)
	{
		a = n + '0';
		buffer[*index] = a;
		(*index)++;
	}
}

static void	*fill_number(char *buffer, int i)
{
	char	*number;

	number = malloc(sizeof(char) * (i + 1));
	if (!number)
		return (0);
	i = 0;
	while (buffer[i] != '\0')
	{
		number[i] = buffer[i];
		i++;
	}
	number[i] = '\0';
	return (number);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*buffer;
	char	*number;
	long	nb;

	nb = n;
	buffer = malloc(sizeof(char) * 13);
	if (!buffer)
		return (0);
	i = 0;
	if (nb < 0)
	{
		buffer[i] = '-';
		nb = (-1) * nb;
		i++;
	}
	fill_buffer(buffer, &i, nb);
	buffer[i] = '\0';
	number = fill_number(buffer, i);
	free(buffer);
	return (number);
}
