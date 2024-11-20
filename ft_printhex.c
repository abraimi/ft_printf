/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abraimi <abraimi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 07:40:39 by abraimi           #+#    #+#             */
/*   Updated: 2024/11/20 07:09:04 by abraimi          ###   ########.fr       */
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

static size_t check_base(const char *base)
{
	size_t	idx;
	size_t	sub;
	size_t	len;

	if (!base)
		return (0);
	idx = 0;
	len = ft_strlen(base);
	while (base[idx])
	{
		sub = len;
		while (sub > idx)
		{
			if (base[idx] == base[sub] || base[idx] == '-' || base[idx] == '+')
				return (0);
			sub--;
		}
		idx++;
	}
	return (len);
}

void	ft_printhex(const char *base, unsigned int nbr, size_t *count)
{
	size_t	radix;

	if (!base)
		return ;
	radix = check_base(base);
	if (!radix)
		return ;
	while (nbr)
	{
		ft_putchar(base[nbr%radix], count);
		nbr /= radix;
	}
}