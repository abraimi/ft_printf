/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abraimi <abraimi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 07:40:39 by abraimi           #+#    #+#             */
/*   Updated: 2024/11/22 15:12:48 by abraimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_printhex(const char *base, size_t radix, size_t nbr, size_t *count)
{
	if (radix < 2 || radix > 16)
		return ;
	if (nbr >= radix)
		ft_printhex(base, radix, nbr / radix, count);
	ft_putchar(base[nbr % radix], count);
}
