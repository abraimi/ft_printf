/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abraimi <abraimi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 07:40:39 by abraimi           #+#    #+#             */
/*   Updated: 2024/11/22 11:15:08 by abraimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static size_t ft_strlen(const char *str)
{
	size_t	idx;

	if (!str)
		return (0);
	idx = 0;
	while (str[idx])
		idx++;
	return (idx);
}


void	ft_printhex(const char *base, size_t nbr, size_t *count)
{
	size_t	radix;

	radix = ft_strlen(base);
	if (radix < 2 ||radix > 16)
		return ;
	if (nbr == 0)
	{
		return ;
	}
	ft_printhex(base, nbr/ radix, count);
	ft_putchar(base[nbr % radix], count);
}