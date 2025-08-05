/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rida-cos <rida-cos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 23:02:58 by rdcm              #+#    #+#             */
/*   Updated: 2025/08/04 21:29:53 by rida-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s, int fd)
{
	int		i;
	char	c;
	int		len;

	len = 0;
	if (!s)
		return (0);
	i = 0;
	while (s[i] != '\0')
	{
		c = s[i];
		len += write(fd, &c, 1);
		i++;
	}
	return (len);
}
