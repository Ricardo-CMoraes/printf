/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdcm <rdcm@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 16:16:57 by rdcm              #+#    #+#             */
/*   Updated: 2025/08/04 00:33:22 by rdcm             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	convert(char type, va_list arg)
{
	if (type == 'c')
	{
		ft_putchar_fd(va_arg(arg, int), 1);
		return (1);
	}
	else if (type == 's')
		return (ft_putstr(va_arg(arg, char *), 1));
	else if (type == 'p')
		return (ft_putptr(va_arg(arg, void *)));
	else if (type == 'd')
		return (ft_putnbr(va_arg(arg, int), 1));
	else if (type == 'i')
	{
		return 0; //incompleto
	}
	else if (type == 'u')
	{
		return 0; //incompleto
	}
	else if (type == 'x' || type == 'X' )
		return (ft_puthex(va_arg(arg, unsigned long long), type));
	else if (type == '%')
		return (write(1, "%", 1));
}

int	ft_printf(const char *text, ...)
{
	int		i;
	int		len;
	va_list	arg;

	va_start (arg, text);
	i = 0;
	len = 0;
	while (text[i] != '\0')
	{
		if (text[i] == '%')
		{
			i++;
			len = len + convert(text[i], arg);
		}
		else
			len = len + write(1, &(text[i]), 1);
		i++;
	}
	va_end(arg);
	return (len);
}

// int	main(void)
// {
// 	char *s = "Ricardo";
// 	int nb_ft_printf;
// 	int nb_printf;

// 	printf("\nTeste com Caracter: %%c\n");
// 	nb_ft_printf = ft_printf("	Imprimindo Caracter: %c\n", 'R');
// 	nb_printf = printf("	Imprimindo Caracter: %c\n", 'R');
// 	printf("	num_ft_printf:	%d\n", nb_ft_printf);
// 	printf("	num_printf:	%d\n", nb_printf);

// 	printf("\nTeste com Caracter: %%s\n");
// 	nb_ft_printf = ft_printf("	Imprimindo Caracter: %s\n", "Ricardo Moraes");
// 	nb_printf = printf("	Imprimindo Caracter: %s\n", "Ricardo Moraes");
// 	printf("	num_ft_printf:	%d\n", nb_ft_printf);
// 	printf("	num_printf:	%d\n", nb_printf);

// 	printf("\nTeste com Ponteiro: %%p\n");
// 	nb_ft_printf = ft_printf("	Endereço do Ponteiro: %p\n", s);
// 	nb_printf = printf("	Endereço do Ponteiro: %p\n", s);
// 	printf("	num_ft_printf:	%d\n", nb_ft_printf);
// 	printf("	num_printf:	%d\n", nb_printf);

// 	printf("\nTeste com Inteiro: %%d\n");
// 	nb_ft_printf = ft_printf("	Numero inteiro: %d\n", 26);
// 	nb_printf = printf("	Numero inteiro: %d\n", 26);
// 	printf("	num_ft_printf:	%d\n", nb_ft_printf);
// 	printf("	num_printf:	%d\n", nb_printf);

// 	printf("\nTeste com hexadecimal: %%x\n");
// 	nb_ft_printf = ft_printf("	Numero inteiro: %x\n", 255);
// 	nb_printf = printf("	Numero inteiro: %x\n", 255);
// 	printf("	num_ft_printf:	%d\n", nb_ft_printf);
// 	printf("	num_printf:	%d\n", nb_printf);

// 	printf("\nTeste com HEXADECIMAL: %%X\n");
// 	nb_ft_printf = ft_printf("	Numero inteiro: %X\n", 255);
// 	nb_printf = printf("	Numero inteiro: %X\n", 255);
// 	printf("	num_ft_printf:	%d\n", nb_ft_printf);
// 	printf("	num_printf:	%d\n", nb_printf);

// 	printf("\nTeste com %%:\n");
// 	nb_ft_printf = ft_printf("	Numero inteiro: 100%%\n");
// 	nb_printf = printf("	Numero inteiro: 100%%\n");
// 	printf("	num_ft_printf:	%d\n", nb_ft_printf);
// 	printf("	num_printf:	%d\n", nb_printf);
// }
