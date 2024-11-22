/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abraimi <abraimi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 04:57:56 by abraimi           #+#    #+#             */
/*   Updated: 2024/11/22 12:29:29 by abraimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"


static void	ft_cases(const char *s, va_list args, size_t *count)
{
	while (*s)
	{
		if (*s++ == '%')
		{
			if (*s == 'c')
				ft_putchar(va_arg(args, int), count);
			else if (*s == 's')
				ft_putstr(va_arg(args, char *), count);
			else if (*s == 'i' || *s == 'd')
				ft_putnbr(va_arg(args, int), count);
			else if (*s == 'x')
				ft_printhex("0123456789abcdef", 16, va_arg(args, unsigned int), count);
			else if (*s == 'X')
				ft_printhex("0123456789ABCDEF", 16, va_arg(args, unsigned int), count);
			else if (*s == 'p')
				ft_printptr(va_arg(args, unsigned long), count);
			else if (*s == 'u')
				ft_putnbr_u(va_arg(args, unsigned int), count);
			else if (*s == '%')
				ft_putchar('%', count);
		}
		else
			ft_putchar(*(--s), count);
		s++;
	}
}
int ft_printf(const char *s, ...)
{
	va_list	args;
	size_t	count;

	if (write(1, 0, 0) == -1)
		return (-1);
	count = 0;
	va_start(args, s);
	ft_cases(s, args, &count);
	va_end(args);
	return (count);
}
