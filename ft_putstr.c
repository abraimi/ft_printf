/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abraimi <abraimi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 07:46:48 by abraimi           #+#    #+#             */
/*   Updated: 2024/11/22 11:08:20 by abraimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putstr(char *str, size_t *count)
{
	if (!str)
	{
		ft_putstr("(null)", count);
		return ;
	}
	while (*str)
		ft_putchar(*str++, count);
}
