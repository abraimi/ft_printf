/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abraimi <abraimi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 04:57:56 by abraimi           #+#    #+#             */
/*   Updated: 2024/11/20 07:30:30 by abraimi          ###   ########.fr       */
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
	size_t	count;

	va_start(args, s);
	va_copy(cpy, args);
	count = 0;
	while (*s)
	{
		if (*s == '%')
		{
			s++;
			if (*s == 'c')
				ft_putchar(va_arg(args, int), &count);
			else if (*s == 's')
				ft_putstr(va_arg(args, char *), &count);
			else if (*s == 'i' || *s == 'd')
				ft_putnbr(va_arg(args, int), &count);
			else if (*s == 'x')
				ft_printhex("0123456789abcdef", va_arg(args, unsigned int), &count);
			else if (*s == 'X')
				ft_printhex("0123456789ABCDEF", va_arg(args, unsigned int), &count);
			else if (*s == 'p')
				ft_printptr(va_arg(args, unsigned int), &count);
			else if (*s == '%')
				ft_putchar('%', &count);
		}
		else
			ft_putchar(*s, &count);
		s++;
	}
	va_end(args);
	return (count);
}
