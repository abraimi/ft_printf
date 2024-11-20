/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abraimi <abraimi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 04:57:56 by abraimi           #+#    #+#             */
/*   Updated: 2024/11/20 05:49:06 by abraimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

// static int	count_args(va_list cpy)
// {
// 	size_t	idx;

// 	va_arg(cpy);
// 	idx = 0;
// 	while () {

// 	}
// }

int ft_printf(const char *s, ...)
{
	va_list	args;
	va_list	cpy;

	va_start(args, s);
	va_copy(cpy, args);
	while (*s)
	{
		if (*s == '%')
		{
			s++;
			if (*s == 'c')
				ft_putchar(va_arg(args, int));
			if (*s == 's')
				ft_putstr(va_arg(args, char *));
			if (*s == 'i' || *s == 'd')
				ft_putnbr(va_arg(args, int));
			if (*s == 'x')
				ft_printhex("0123456789abcdef", va_arg(args, int));
			if (*s == 'X')
				ft_printhex("0123456789ABCDEF", va_arg(args, int));
			if (*s == '%')
				ft_putchar('%');
		}
		else
			ft_putchar(*s);
		s++;
	}
	return (42);
}
