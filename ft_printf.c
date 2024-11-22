/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abraimi <abraimi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 04:57:56 by abraimi           #+#    #+#             */
/*   Updated: 2024/11/22 15:11:33 by abraimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static void	ft_cases(char c, va_list args, size_t *count)
{
	if (c == 'c')
		ft_putchar(va_arg(args, int), count);
	else if (c == 's')
		ft_putstr(va_arg(args, char *), count);
	else if (c == 'i' || c == 'd')
		ft_putnbr(va_arg(args, int), count);
	else if (c == 'x')
		ft_printhex("0123456789abcdef", 16, va_arg(args, unsigned int), count);
	else if (c == 'X')
		ft_printhex("0123456789ABCDEF", 16, va_arg(args, unsigned int), count);
	else if (c == 'p')
		ft_printptr(va_arg(args, unsigned long), count);
	else if (c == 'u')
		ft_putnbr_u(va_arg(args, unsigned int), count);
	else if (c == '%')
		ft_putchar('%', count);
}

int	ft_printf(const char *s, ...)
{
	va_list	args;
	size_t	count;

	if (write(1, 0, 0) == -1)
		return (-1);
	count = 0;
	va_start(args, s);
	while (*s)
	{
		if (*s == '%')
			ft_cases(*(++s), args, &count);
		else
			ft_putchar(*(s), &count);
		if (!*s)
			break ;
		s++;
	}
	va_end(args);
	return (count);
}
