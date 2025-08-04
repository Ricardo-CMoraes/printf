/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rida-cos <rida-cos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 14:07:54 by rida-cos          #+#    #+#             */
/*   Updated: 2025/08/04 18:26:27 by rida-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	s_len;
	size_t	d_len;
	size_t	i;

	s_len = 0;
	d_len = 0;
	while (src[s_len] != '\0')
		s_len++;
	while (dst[d_len] != '\0')
		d_len++;
	if (size <= d_len)
		return (size + s_len);
	i = 0;
	while ((src[i] != '\0') && (d_len + i < size -1))
	{
		dst[d_len + i] = src[i];
		i++;
	}
	dst[d_len + i] = '\0';
	return (s_len + d_len);
}
