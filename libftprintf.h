/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abraimi <abraimi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 07:41:50 by abraimi           #+#    #+#             */
/*   Updated: 2024/11/22 11:06:04 by abraimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <unistd.h>
# include <stdarg.h>

int ft_printf(const char *s, ...);

void	ft_putchar(char c, size_t *count);
void	ft_putnbr(int nbr, size_t *count);
void	ft_putstr(char *str, size_t *count);
void	ft_printptr(unsigned long ptr, size_t *count);
void	ft_printhex(const char *base, size_t nbr, size_t *count);
void	ft_putnbr_u(unsigned int nbr, size_t *count);

#endif