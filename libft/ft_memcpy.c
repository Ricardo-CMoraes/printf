/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rida-cos <rida-cos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 13:10:51 by rida-cos          #+#    #+#             */
/*   Updated: 2025/07/26 16:01:44 by rida-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*destination;
	unsigned char	*str;
	size_t			i;

	destination = (unsigned char *)dest;
	str = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		destination[i] = (unsigned char)str[i];
		i++;
	}
	return (dest);
}
