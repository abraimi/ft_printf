/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abraimi <abraimi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 07:47:35 by abraimi           #+#    #+#             */
/*   Updated: 2024/11/20 06:52:23 by abraimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putnbr(int nbr, size_t *count)
{
	if (nbr == -2147483648)
		ft_putstr("-2147483648", count);
	if (nbr < 0)
	{
		ft_putchar('-', count);
		nbr *= -1;
	}
	if (nbr >= 0 && nbr <= 9)
		ft_putchar(nbr + 48, count);
	else
	{
		ft_putnbr(nbr / 10,count);
		ft_putnbr(nbr % 10, count);
	}
}
