/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rida-cos <rida-cos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 13:29:45 by rida-cos          #+#    #+#             */
/*   Updated: 2025/08/02 14:50:38 by rida-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*destination;
	const unsigned char	*str;

	if (!dest && !src && n > 0)
		return (0);
	destination = (unsigned char *)dest;
	str = (const unsigned char *)src;
	if (destination <= str)
	{
		while (n--)
			*destination++ = *str++;
	}
	else if (destination > str)
	{
		while (n--)
			destination[n] = str[n];
	}
	return (dest);
}
